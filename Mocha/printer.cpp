#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int round;
    int place = 0, num = 0, a = 0, max = 0, temp = 0, x = 0;
    queue<int> in;
    queue<int> out;
    int *arr, *arr2;
    int data, t = 0;
    cin >> round;
    while (round > 0)
    {
        cin >> num;
        arr = (int *)malloc(sizeof(int) * num);
        arr2 = (int *)malloc(sizeof(int) * num);
        cin >> place;
        for (int i = 0; i < num; i++)
        {
            cin >> data;
            arr[i] = data;
            arr2[i] = i;
            in.push(data);
        }
        for (int i = 0; i < num; i++)
        {
            if (arr[i] >= max)
            {
                max = arr[i];
            }
            for (int i = 0; i < num; i++)
            {
                if (in.front() != max)
                {
                    a = in.front();
                    in.pop();
                    in.push(a);
                    temp = arr2[0];
                    arr2[x] = arr2[x + 1];
                    arr2[num - 1] = temp;
                    t++;
                }
                else
                {
                    a = in.front();
                    in.pop();
                    out.push(arr2[i]);
                    temp = arr2[0];
                    arr2[x] = arr2[x + 1];
                    arr2[num - 1] = temp;
                    t++;
                }
                if (out.back() == place)
                {
                    break;
                }
            }
            cout << t << endl;
            round--;
        }
    }
    return 0;
}