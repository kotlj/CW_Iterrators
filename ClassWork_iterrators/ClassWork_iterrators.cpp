
#include <iostream>
#include <vector>
#include <string>
//void inline show(std::vector<int> obj)
//{
//	for (auto it : obj)
//	{
//		std::cout << it << '\n';
//	}
//}

struct Article
{
	int id;
	std::string title;
	std::string description;
	bool isShow;
};

void showAllArtc(std::vector<Article> &obj)
{
	for (auto it : obj)
	{
		std::cout << "Id: " << it.id << " Title: " << it.title << " Description: " << it.description << '\n';
	}
}
void showArtcOnlyTrue(std::vector <Article> &obj)
{
	for (auto it : obj)
	{
		if (it.isShow)
		{
			std::cout << "Id: " << it.id << " Title: " << it.title << " Description: " << it.description << '\n';
		}
	}
}

int main()
{
	/*std::vector<int> vec = { 10, 20, 30, 40, 50 };
	show(vec);

	auto it = vec.begin();
	vec.erase(it);
	it = vec.end();
	vec.erase(--it);
	show(vec);

	it = vec.begin();
	for (;it != vec.end(); it = vec.begin())
	{
		vec.erase(it);
	}
	std::cout << "empty: " << vec.empty() << '\n';*/
	Article test1; test1.id = 1; test1.title = "First"; test1.description = "first_try"; test1.isShow = true;
	Article test2; test2.id = 2; test2.title = "Second"; test2.description = "second_try"; test2.isShow = true;
	Article test3; test3.id = 3; test3.title = "Third"; test3.description = "dontShow"; test3.isShow = false;
	Article test4; test4.id = 4; test4.title = "Fourth"; test4.description = "fourth_try"; test4.isShow = true;
	std::vector<Article> vec; vec.push_back(test1); vec.push_back(test2); vec.push_back(test3); vec.push_back(test4);
	showAllArtc(vec);
	std::cout << "\n\n";
	showArtcOnlyTrue(vec);
}