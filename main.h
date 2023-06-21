typedef struct particles particle;


struct particles
{
    int id;
    int x;
    int y;
    double temp;

    int direction;

    int nextid;
    int nextx;
    int nexty;
    double nexttemp;


};