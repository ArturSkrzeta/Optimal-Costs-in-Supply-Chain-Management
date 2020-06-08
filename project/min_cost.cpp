#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define M 5
#define N 5

string routes[M][N] =
    {
        {"A1", "A2", "A3", "A4", "A5"},
        {"B1", "B2", "B3", "B4", "B5"},
        {"C1", "C2", "C3", "C4", "C5"},
        {"D1", "D2", "D3", "D4", "D5"},
        {"E1", "E2", "E3", "E4", "E5"}
    };

void printPath(int i, int j, std::pair<int,int> path[M][N], int cost[M][N])
{
    if (!i && !j) { //if i and j not 0
        cout << routes[i][j] << endl;
        routes[i][j] = "##";
        return;
    }
    printPath(path[i][j].first, path[i][j].second, path, cost);
    cout << routes[i][j] << endl;
    routes[i][j] = "##";
}

void printRoutes(){
    int m,n;
    cout << "Routes Matrix:" << endl;
    for(m=0; m<M; m++, cout << endl){
        for(n=0; n<N; n++){
            cout << routes[m][n] << "\t";
        }
    }
    return;
}

int findMinCost(int cost[M][N])
{
    int T[M][N];
    std::pair<int,int> path[M][N];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
                T[i][j] = cost[i][j];

                if (i == 0 && j > 0) {
                    T[0][j] += T[0][j - 1];
                    path[0][j] = std::make_pair(0, j - 1);
                }

                else if (j == 0 && i > 0) {
                    T[i][0] += T[i - 1][0];
                    path[i][0] = std::make_pair(i - 1, 0);
                }

                else if (i > 0 && j > 0) {
                    if (T[i - 1][j] < T[i][j - 1]) {
                        T[i][j] += T[i - 1][j];
                        path[i][j] = std::make_pair(i - 1, j);
                    } else {
                        T[i][j] += T[i][j - 1];
                        path[i][j] = std::make_pair(i, j - 1);
                    }
                }
        }
    }
    cout << "Optimal Path for Min Cost:" << endl;
    printPath(M - 1, N - 1, path, cost);
    cout << "" << endl;
    return T[M - 1][N - 1];
}

int main()
{
    int cost[M][N] =
    {
        {65, 70, 144, 117, 56},
        {140, 105, 123, 89, 90},
        {52, 77, 144, 68, 125},
        {51, 130, 94, 59, 130},
        {150, 139, 54, 98, 146}
    };

    int minCost = findMinCost(cost);
    printRoutes();
    cout << "" << endl;
    cout << "The minimum cost: " << minCost << endl;
    cout << "" << endl;
    return 0;
}
