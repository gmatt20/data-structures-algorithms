#include <string>
using namespace std;
class StringReverse{
  private:
    char character;
    string userStr;
    int top = -1;
    char *charStack;
  public:
    StringReverse();
    void pushStr();
};