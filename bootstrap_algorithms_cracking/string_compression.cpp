//string_compression.cpp

//aabccc -> a2b1c3

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string compressedbad(string uncompressed){
	char last = uncompressed[0];
	string compressed = "";
	int len = uncompressed.length();
	int count=1;
	for( int i=1;i < len ; i++){
		if(uncompressed[i]==last){
			count++;

			}
			else
			{
				compressed += last+std::to_string(count);
				last=uncompressed[i];
				count=1;
			}
	}
	compressed = compressed+last+std::to_string(count);
	if(compressed.length() < uncompressed.length())
		return compressed;
	else
		return uncompressed;

}

int main()
{

	string uncompressed;
	cin >> uncompressed;

	cout << compressedbad(uncompressed) << endl;

	return 0;
}
