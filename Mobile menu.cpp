#include <iostream>
using namespace std;

int main() {
  int Apps = 7;
  //press 1 for GALLERY
  //press 2 for BEHANCE
  //press 3 for CALENDAR
  //press 4 for CAMSCANNER
  //press 5 for CLOCK
  //press 6 for CAPCUT
  //press 7 for CHROME
  switch (Apps) {
  case 1:
    cout << "Gallery Options \n\n";
    cout << "Photos \n";
    cout << "Albums \n";
    cout << "Tools \n";
    break;
  case 2:
    cout << "Behance \n\n";
    cout << "Sign up \n";
    cout << "Home \n";
    cout << "Search \n";
    cout << "Chats \n";
    cout << "Hire creatives \n";
    cout << "Projects \n";
    break;
  case 3:
    cout << "Calendar \n\n";
    cout << "Menu \n";
    cout << "Months \n";
    cout << "Search \n";
    cout << "Events \n";
    break;
  case 4:
    cout << "CamScanner \n\n";
    cout << "Search \n";
    cout << "Smart scan \n";
    cout << "PDF tools \n";
    cout << "Import images \n";
    cout << "Import files \n";
    cout << "ID cards \n";
    cout << "Extract text \n";
    cout << "Camera \n";
    break;
  case 5:
    cout << "Clock \n\n";
    cout << "Alarm \n";
    cout << "Settings \n";
    cout << "Recent Alarms \n";
    cout << "Timer \n";
    cout << "Stop watch \n";
    break;
  case 6:
    cout << "Capcut Video editing app \n\n";
    cout << "New project \n";
    cout << "Photo editor \n";
    cout << "Text to image \n";
    cout << "Auto cut \n";
    cout << "Product photos \n";
    cout << "Templates \n";
    break;
  case 7:
    cout << "Chrome \n\n";
    cout << "Account \n";
    cout << "Search \n";
    cout << "Tabs \n";
    cout << "Recent apps \n";
    cout << "Microphone \n";
    cout << "Google lense \n";
    break;
  }
  return 0;
}

