#include <iostream>
#include <vector>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

/*
int main() {
  int m = 0;
  // std::cin >> m; 
  std::cout << "Hello World!\n";
  std::string f_str = std::to_string(m);
  std::cout << f_str << '\n';
}
*/

int main(int argc, char**argv){
	typedef vector < string > splitted_vector_type;
	splitted_vector_type split_vec;
	string full_string;

	cin >> full_string;
	split(split_vec, full_string, is_any_of(";"));

	for (int i = 0; i < split_vec.size(); i++)
		cout << split_vec[i] << endl;

	system("PAUSE");
	return 0;
}
 
