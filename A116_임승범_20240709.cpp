// A116. Day of the Week - Leetcode
// from the base day(sunday) to 1971-01-01

class Solution {
public:
    int daysInMonth[2][12] = {
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, // 윤년
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}  // 평년
    };
    string weekNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    bool isLeapYear (int year) {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    int daysSince1971(int year, int month, int day) {
        int totalDays = 0;
        for (int currentYear = 1971; currentYear < year; currentYear++) {
            totalDays += isLeapYear(currentYear) ? 366 : 365;
        }
        
        int leapYearFlag = isLeapYear(year) ? 0 : 1;
        for (int currentMonth = 0; currentMonth < month - 1; currentMonth++) {
            totalDays += daysInMonth[leapYearFlag][currentMonth];
        }
        totalDays += day - 1;

        return totalDays;
    }

    string dayOfTheWeek(int day, int month, int year) {
        int baseDays = daysSince1971(2024, 7, 7);  // 기준일: 2024년 7월 7일 (일요일)
        int targetDays = daysSince1971(year, month, day);
        int daysDifference = (((targetDays - baseDays) % 7) + 7) % 7;

        return weekNames[daysDifference];
    }
};