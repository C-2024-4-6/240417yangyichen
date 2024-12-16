#include <iostream>
using namespace std;
class volume
{
private:
	int len;
	int width;
	int height;
	int v;
public:
	void SetVolume()
	{
		cout << "please input the length and width and height" << endl;
		cin >> len >> width >> height;
	}
	void ShowVolume()
	{
		v = len * width * height;
		cout << "the volume is:" << v << endl;
	}
};
int main()
{
	volume v1, v2, v3;
	v1.SetVolume();
	v2.SetVolume();
	v3.SetVolume();

	v1.ShowVolume();
	v2.ShowVolume();
	v3.ShowVolume();
	return 0;
}