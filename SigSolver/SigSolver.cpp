// SigSolver.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <vector>
#include "Test.h"
#include "Population.h"

using namespace std;

void solve(vector<double>& sig, int order, int n_iter, int n_organism, int n_points, double pip_size, int max_n_pip, int top_p = 0.1, double mutation_prob = 0.1);

int main()
{
    std::cout << "Hello World!\n";
    Test::calc_signature();
}

void solve(vector<double>& sig, int order, int n_iter, int n_organism, int n_points, double pip_size, int max_n_pip, int top_p, double mutation_prob)
{
    auto population = Population(n_organism, n_points, pip_size, max_n_pip);
    for (int i = 0; i < n_iter; ++i) {
        double loss = population.evolve(sig, top_p, order);
    }
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
