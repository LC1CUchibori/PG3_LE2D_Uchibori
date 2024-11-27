#include <iostream>
#include <list>

using namespace std;

int main() {
    // 山手線の駅名リスト（英語表記） - 1970年
    list<const char*> rosen1970 = {
        "Tabata", "Nippori", "Sugamo", "Komagome"
    };

    // 西日暮里駅を追加（1971年開業）
    auto itr1970 = rosen1970.begin();
    advance(itr1970, 2); // 2番目の位置に挿入
    rosen1970.insert(itr1970, "Nishi-Nippori");

    // 2019年のリスト（1970年をベースに作成）
    list<const char*> rosen2019 = rosen1970;

    // 高輪ゲートウェイ駅を追加（2020年開業）
    auto itr2019 = rosen2019.begin();
    advance(itr2019, 4); // 4番目の位置に挿入
    rosen2019.insert(itr2019, "Takanawa Gateway");

    // 2022年のリスト（2019年をベースに作成）
    list<const char*> rosen2022 = rosen2019;

    // 各年の駅名リストを表示
    cout << "Station list in 1970:" << endl;
    for (auto itr = rosen1970.begin(); itr != rosen1970.end(); ++itr) {
        cout << *itr << endl;
    }

    cout << "\nStation list in 2019:" << endl;
    for (auto itr = rosen2019.begin(); itr != rosen2019.end(); ++itr) {
        cout << *itr << endl;
    }

    cout << "\nStation list in 2022:" << endl;
    for (auto itr = rosen2022.begin(); itr != rosen2022.end(); ++itr) {
        cout << *itr << endl;
    }

    return 0;
}
