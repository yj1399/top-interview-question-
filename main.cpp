#include <iostream>
using namespace std ;
bool isStringEqual( string s1 , string s2 ){
  int n = s1.length();
  int m = s2.length();
  string clockwise = "";
  string anticlockwise = "";
  if( s2.substr( 0 , m - 2 ).length() > 0 ){
    clockwise = s2.substr( m-2 , 2 ) + s2.substr( 0 , m-2);
  } 
  else clockwise = s2 ;
  if( s2.substr( 0 , m - 2 ).length() > 0 ){
    anticlockwise =  s2.substr( 2 , m ) + s2.substr(0 , 2);
  } 
  else anticlockwise = s2 ;
  if( clockwise == s1 || anticlockwise == s1 ) return true ;
  else return false  ;
}
int main() {
  int t ;
  cin >> t ;
  while( t-- ){
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    bool ok = isStringEqual(s1 , s2) ;
    cout <<( ok==true ? "YES" : "NO" );
  }
  
  return 0 ;
}