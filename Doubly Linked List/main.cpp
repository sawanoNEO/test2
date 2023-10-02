#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
	const char* FileName = "Scores.txt";//スコアデータのファイル名
	std::ifstream ScoreData(FileName);  //スコアデータを格納するクラス
	list<string> ScoreList;             //ScoreDataの中にあるデータを格納する双方向リスト
	string line;                        //ScoreDataとScoreListの橋渡しのための変数
	int i = 0;                          //ウィンドウからはみ出ると出力された結果が表示されなくなる現象への対策用の変数

	//テキストファイルが見つからなければエラー表示
	if (!ScoreData)
	{
		cout << "ファイルが見つかりません" << endl;
	}
	//テキストファイルが開けれなければエラー表示
	if (!ScoreData.is_open())
	{
		cout << "ファイルを開けません" << endl;
	}
	
	//テキストファイルの文字列を抽出してリストに格納する
	while (getline(ScoreData, line))
	{
		ScoreList.push_back(line);
	}

	//リストの先頭から順に出力する
	for (auto itr = ScoreList.begin(); itr != ScoreList.end(); ++itr)
	{
		std::cout << *itr << "\n";
		i++;
		if (i % 20 == 0)//表示されなくなる現象の対策
		{
			cout << "Enterで次へ" << endl;
			cin.get();
		}
	}
	//Enterキーで終了
	cout << "Enterを押して終了します";

	cin.get();
}