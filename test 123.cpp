#include<iostream>

using namespace std;


class User 
{
public:
string  name;
int age;
char gender;

User(string name_, int age_, char gender_)
{
    name = name_;
    age = age_;
    gender = gender_;
}

string getName()
{
    return name;
}

int getAge()
{
    return age;
}

char getGender()
{

    char gender;

    if(gender == 'f')
    {
        gender = Female;
        cout <<"Gender: "<<gender<<endl; 
    }

    else(gender == 'm')
    {
        gender = Male;
        cout<<"Gender: "<<gender<<endl;
    }


    return gender;

};

class InstaUser : public User
{

    string id;

    public:

    int followerCount;
    int followingCount;
    bool isVerified;

    InstaUser(string name_, int age_, char gender_,string id_, int followerCount_,int followingCount_, bool isVerified_) : User(name, age,gender)
    {
        id = id_;
        followerCount = followerCount_;
        followingCount = followingCount_;
        isVerified = isVerified_;
    }

    private:    
    string generateProfileLink()
    {
        cout <<"idLink instagram: "<<id<<endl;
    }
    public:
    string getId()
    {
        return id;
    }

    int doFollow()
    {
       
        // for(int i = 0; i<followingCount ,i++)
        // {
        //     return followingCount;
        // }

        followingCount++;
    }

    int doUnFollow()
    {
        // for (int i; i> followingCount ; i--)
        // {
        //     return followingCount;
        // }
        followingCount--;
    }

    int getFollower()
    {
        // for(int i; i < followerCount; i++ )
        // {
        //     return followerCount;
        // }

        followerCount++;
    }

    int removeFollower()
    {
        // for(int i; i > followerCount; i--)
        // {
            
        // }
        followerCount--;
    }
}

}

int main()
{
    instaUser user("abc", 34,'f',"abc_123",13,7,true);

    cout<<"Name: "<<user.getName()<<endl;
    cout<<"Age: "<<user.getAge()<<endl;
    cout<<"Gender: "<<user.getGender()<<endl;
    cout<<"userid: "<<user.getId()<<endl;
    cout<<": "<<user.getName()<<endl;

    return 0;

}



#include<iostream>

using namespace std;


class User 
{
public:
string  name;
int age;
char gender;

User(string name_, int age_, char gender_)
{
    name = name_;
    age = age_;
    gender = gender_;
}

string getName()
{
    return name;
}

int getAge()
{
    return age;
}

char getGender()
{

    char gender;

    if(gender == 'f')
    {
        gender = Female;
        cout <<"Gender: "<<gender<<endl; 
        return gender;
    }

    else(gender == 'm')
    {
        gender = Male;
        cout<<"Gender: "<<gender<<endl;
        return gender;
    }




};

class InstaUser : public User
{

    string id;

    public:

    int followerCount;
    int followingCount;
    bool isVerified;

    InstaUser(string name_, int age_, char gender_,string id_, int followerCount_,int followingCount_, bool isVerified_) : User(name, age,gender)
    {
        id = id_;
        followerCount = followerCount_;
        followingCount = followingCount_;
        isVerified = isVerified_;
    }

    private:    
    string generateProfileLink()
    {
        cout <<"idLink instagram: "<<id<<endl;
    }
    public:
    string getId()
    {
        return id;
    }

    int doFollow()
    {
       
        // for(int i = 0; i<followingCount ,i++)
        // {
        //     return followingCount;
        // }

        followingCount++;
    }

    int doUnFollow()
    {
        // for (int i; i> followingCount ; i--)
        // {
        //     return followingCount;
        // }
        followingCount--;
    }

    int getFollower()
    {
        // for(int i; i < followerCount; i++ )
        // {
        //     return followerCount;
        // }

        followerCount++;
    }

    int removeFollower()
    {
        // for(int i; i > followerCount; i--)
        // {
            
        // }
        followerCount--;
    }
};



int main()
{
    instaUser user("abc", 34,'f',"abc_123",13,7,true);

    // cout<<"Name: "<<user.getName()<<endl;
    // cout<<"Age: "<<user.getAge()<<endl;
    // cout<<"Gender: "<<user.getGender()<<endl;
    // cout<<"userid: "<<user.getId()<<endl;
    // cout<<": "<<user.getName()<<endl;
 user.doFollow();
    return 0;

}