<ul>
   <li>First matrix presents the names of Routes</li>
   <li>Supplies starts from A1 and arrives to F5</li>
   <li>There are 25 routes to get to the destination</li>
   <li>Which route will be taken, we can decide upon the cost of going through.</li>
   <li>For oue needs we can assume that</li>
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
   <li>Second matrix shows the costs to get through the single route.</li>
   <li>Going through the route A1 costs 65</li>
   <li>Going through the route A2 costs 70 which is cheaper than going through B1</li>
   <li>This kind of costs comparison is performed from root route (A1) till the final one(E5)</li>
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
