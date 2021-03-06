<h2>Optimal Costs of Goods Transportation Program</h2>
<h3>Intro</h3>
<ul>
   <li>First matrix presents the names of routes</li>
   <li>Supplier starts from the beginning of A1 and arrives to the destination at the end of F5 route</li>
   <li>There are 25 available routes to get to the destination</li>
   <li>Which route we take, we can decide upon the cost of going through it.</li>
   <li>For our needs, we assume that the costs consist of distance, road quality, paid segments, possible queues on country borders etc. </li>
</ul>

            1         2        3        4       5
    --------------------------------------------------
    A   |   A1   |   A2   |   A3   |   A4   |   A5
    --------------------------------------------------
    B   |   B1   |   B2   |   B3   |   B4   |   B5
    --------------------------------------------------
    C   |   C1   |   C2   |   C3   |   C4   |   C5
    --------------------------------------------------
    D   |   D1   |   D2   |   D3   |   D4   |   E5
    --------------------------------------------------
    E   |   E1   |   E2   |   E3   |   E4   |   F5
 
<ul>
   <li>Second matrix shows the costs of getting through the single route.</li>
   <li>Going through the route A1 costs 65</li>
   <li>Going through the route A2 costs 70 which is cheaper than going through B1</li>
   <li>This kind of costs comparison is performed at the end of each route starting from root route (A1) till the final one(E5)</li>
   <li>The main purpose is to get from the start of A1 route to the end of F5 root at the lowest costs.</li>
</ul>

            1          2         3         4        5
    -------------------------------------------------------
    A   |    65   |    70   |   144   |   117   |    56
    -------------------------------------------------------
    B   |   140   |   105   |   123   |    89   |    90
    -------------------------------------------------------
    C   |    52   |    77   |   144   |    68   |   125
    -------------------------------------------------------
    D   |    51   |   130   |    94   |    59   |   130
    -------------------------------------------------------
    E   |   150   |   139   |    54   |    98   |   146

<h3>Illustration</h3>

<ul>
   <li>Green set of routes costs in totals: 65 + 70 + 105 + 123 + 89 + 68 + 59 + 98 + 146 = <b>823</b></li>
   <li>Red set of routes costs in totals: 65 + 140 + 52 + 51 + 130 + 94 + 54 + 98 + 146 = <b>830</b></li>
   <li>Program compares costs of each possible sets and chooses the cheapest one (green)</li>
</ul>

<img src="images/routes.JPG">

<h3>Program Demo</h3>

<ul>
   <li>In console we receive the optimal path printed (green set from above example) that supplier has to go through to achieve min costs of goods transportation</li>
   <li>We receive the Routes Matrix where ## stands for the route taken (green set)</li>
   <li>We have also information on the total costs of transportation</li>
</ul>

<img src="images/console.JPG">
