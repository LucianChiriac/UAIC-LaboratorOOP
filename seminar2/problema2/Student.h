class Student
{
    char *name;
    float mathematics;
    float english;
    float history;
public:
    Student();
    char* get_name();
    void set_name(char* name);
    float& get_mathematics();
    void set_mathematics(float x);
    float& get_english();
    void set_english(float x);
    float& get_history();
    void set_history(float x);
    float Average();
};