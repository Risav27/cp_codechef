// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int len;
//         cin >> len;
//         string str;
//         cin >> str;
//         int ttl = 0;
//         int sum = 0;
//         int find0 = 0;
//         int find1 = 0;
//         for (int i = 0; i < len - 1; i++)
//         {
//             if (str[i] == str[i + 1] && str[i] == '0')
//             {
//                 if (i != 0 && find0 ==)
//                 {
//                     if (str[i - 1] == '1')
//                     {
//                         ttl++;
//                     }
//                 }
//                 find0 += 2;
//                 i++;
//             }
//             else if (str[i] == str[i + 1] && str[i] == '1')
//             {
//                 if (i != 0)
//                 {
//                     if (str[i - 1] == '1')
//                     {
//                         ttl++;
//                     }
//                 }
//                 find1 += 2;
//                 i++;
//             }
//             else
//             {
//                 if (find0 != 0 || find1 != 0)
//                 {
//                     sum += find0 + find1;
//                     ttl++;
//                     find0 = 0;
//                     find1 = 0;
//                 }
//             }
//         }
//         if (str[len - 1] == str[len - 2])
//         {
//             sum += find0 + find1;
//             ttl++;
//         }
//         cout << sum - ttl << endl;
//     }

//     return 0;
// }