dist[{x1, y1}] = 0;
    q.push({x1, y1});

    int dx[] = {-1, -1, -1, 1, 1, 1, 0, 0};
    int dy[] = {-1, 0, 1, -1, 0, 1, 1, -1};

    while(!q.empty())
    {
        pp u = q.front(); q.pop();

        for(i = 0; i < 8; i++)
        {
            x = u.first + dx[i];
            y = u.second + dy[i];

            if(allow[{x, y}] && !vis[{x, y}])
            {
                if(!dist[{x, y}] ||  dist[{x, y}] > dist[{u.first, u.second}] + 1)
                    dist[{x, y}] = dist[{u.first, u.second}] + 1, q.push({x, y});
            }
        }

        vis[{u.first, u.second}] = true;
    }
