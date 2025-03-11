#include <stdio.h>

int main() {
    enum company {google, facebook, xerox, yahoo, ebay, microsoft};
    
    enum company company1 = xerox;
    enum company company2 = google;
    enum company company3 = ebay;
    
    printf("the value of xerox is: %d\n", company1);
    printf("the value of google is: %d\n", company2);
    printf("the value of ebay is: %d\n", company3);
    
    return 0;
}
