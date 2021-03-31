class Masini 
{
    int rezervor;
    int putere;

public:
    Masini();
    Masini(int,int);
    int getPutere() const;
    int getRezervor() const;
    bool operator<(const Masini&);
    bool operator==(const Masini&);
};