#include <iostream>
using namespace std;

class Students
{
    friend class Teacher;
    int age;
    string name;
    string surname;
    double score;

public:

    Students() {}
    static int populations;
    static void new_person()
    {
        populations++;
    }
    void set_age(int a)
    {
        if (a > 0 && a < 200)
        {
            age = a;
        }
    }

    int get_score()
    {
        return score;
    }

    void birthday()
    {
        age++;
        cout << "Happy birtday, " << name << "!/n";
    }

    void be_ill()
    {
        cout << "Get well soon!" << endl;
    }

    void tired()
    {
        cout << "Rest a little!" << endl;
    }
};

class Teacher
{
public:

    Teacher() {};
    void plus_score(int i, Students& s)
    {
        s.score += i;
    };
};
int main() {
    Students s;
    Teacher t;
    t.plus_score(5, s);
    cout << "Score=" << s.get_score();
}
