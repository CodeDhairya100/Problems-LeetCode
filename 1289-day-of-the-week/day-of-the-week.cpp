class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {

        string dayofWeek[7]={"Friday","Saturday","Sunday",
                             "Monday","Tuesday","Wednesday","Thursday"};

        int totalDays = 0;

        // years
        for(int x=1971; x<year; x++){
            if(x%400==0 || (x%4==0 && x%100!=0))
                totalDays+=366;
            else
                totalDays+=365;
        }

        int mon[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

        // months
        for(int m=1; m<month; m++){
            totalDays+=mon[m];
            if(m==2){
                if(year%400==0 || (year%4==0 && year%100!=0))
                    totalDays++;
            }
        }

        totalDays+=day-1;

        return dayofWeek[totalDays%7];
    }
};
