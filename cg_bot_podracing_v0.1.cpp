//https://www.codingame.com/ide/puzzle/coders-strike-back

#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<pair<int, int>, int> cp;
    map<pair<int, int>, int>::iterator itr;
    map<int, int> distance;
    vector<int> maxD;

    int boost = 1;
    bool first_done = false;
    int max = 0;
    int cpNumber = 1;
    int thrust = 0;

    while (1)
    {
        int x;
        int y;
        int nextCheckpointX;
        int nextCheckpointY;
        int nextCheckpointDist;
        int nextCheckpointAngle;
        int opponentX, opponentY;
        int startX = 0, startY = 0;

        cin >> x >> y >> nextCheckpointX >> nextCheckpointY >> nextCheckpointDist >> nextCheckpointAngle;
        cin.ignore();
        cin >> opponentX >> opponentY;
        cin.ignore();

        if (cp.find({nextCheckpointX, nextCheckpointY}) == cp.end())
        {
            cp[{nextCheckpointX, nextCheckpointY}] = cpNumber;
            cpNumber++;
        }

        if (cp.find({x, y}) != cp.end())
        {

            if (distance.find(cp[{x, y}]) == distance.end())
            {
                distance[cp[{x, y}]] = nextCheckpointDist;
                maxD.push_back(nextCheckpointDist);
            }
            else
            {
                first_done = true;
                sort(maxD.begin(), maxD.end());
                max = maxD.size() - 1;
            }
        }

        if (nextCheckpointAngle > 90 || nextCheckpointAngle < -90)
        {
            thrust = 0;
        }
        else
        {
            thrust = 100;
        }

        if (boost == 1 && first_done == true && thrust == 100 && nextCheckpointDist == maxD[max])
        {
            boost = 0;

            cout << nextCheckpointX << " " << nextCheckpointY << " BOOST" << endl;
        }
        else
        {

            cout << nextCheckpointX << " " << nextCheckpointY << " " << to_string(thrust) << endl;
        }
    }
}