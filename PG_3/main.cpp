#include <iostream>
#include <string>
#include <chrono>


int main() {
    
    std::string a(1000000, 'a');
    std::string b;
    std::string c;

    std::cout << "1,000,000 の文字を移動とコピーで比較しました" << std::endl;

#pragma region stringCopy

    //　タイマーの始まり
    auto timerStart = std::chrono::high_resolution_clock::now();
    
    //string を copy　する
    b = a;
    
    // タイマーの終わり
    auto timerEnd = std::chrono::high_resolution_clock::now();

    // マイクロ秒で計算
    auto timerDuration = std::chrono::duration_cast<std::chrono::microseconds>(timerEnd - timerStart);
    //　出力
    std::cout << "コピー : " << timerDuration.count() << " マイクロ秒\n";

#pragma endregion

#pragma region stringMove

    //　タイマーの始まり
    timerStart = std::chrono::high_resolution_clock::now();
    
    //string を move する
    c = std::move(a);
    
    // タイマーの終わり
    timerEnd = std::chrono::high_resolution_clock::now();

    // マイクロ秒で計算
    timerDuration = std::chrono::duration_cast<std::chrono::microseconds>(timerEnd - timerStart);
    //　出力
    std::cout << "移動 : " << timerDuration.count() << " マイクロ秒\n";


#pragma endregion

    return 0;
}
