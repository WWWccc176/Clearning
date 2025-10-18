#include <iostream>
#include <string>
#include <random>    
#include <chrono>       
#include <thread>

int main() { 
    
    const std::string target = "Hello World! I'm Pyjast++.";

    // 1) 构造“干净”的可选字符集（ASCII 32 到 126），再额外加个空格以防漏掉
    std::string charset;
    for (char c = 32; c <= 126; ++c) {
        charset.push_back(c);
    }
    charset.push_back(' ');  // （其实 ASCII 32 已经是空格，这里是为了和 Python 版中的 string.printable+" " 对齐）

    // 2) 随机数引擎和分布（每次从 charset 中等概率选取一个字符）
    std::mt19937                 rng(std::random_device{}());
    std::uniform_int_distribution<> dist(0, int(charset.size() - 1));

    // 3) 初始化 current：随机打乱一个和 target 等长的字符串
    std::string current;
    current.reserve(target.size());
    for (size_t i = 0; i < target.size(); ++i) {
        current.push_back(charset[dist(rng)]);
    }

    // 4) 打印初始状态，并等待 1 秒
    std::cout << "--- 开始模拟同步破解效果 ---\n";
    std::cout << current << '\n';
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // 5) 主循环：只要 current != target，就逐字符“滚动”
    while (current != target) {
        for (size_t i = 0; i < target.size(); ++i) {
            if (current[i] != target[i]) {
                // 如果未锁定，就随便换个字符
                current[i] = charset[dist(rng)];
            }
            // 如果已经等于 target[i]，就“锁定”它，保持不变
        }

        // 6) 在同一行重写输出并刷新
        std::cout << '\r' << current;
        std::cout.flush();

        // 7) 延迟约 17 毫秒控制动画速度
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }

    // 8) 完成后换行并打印结束提示
    std::cout << '\n' << current << '\n';
    std::cout << "--- 破解完成 ---\n";

    return 0;
}