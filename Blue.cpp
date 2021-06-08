#include<iostream>
#include<string>
#include<vector>
#include<chrono>

#define LoaderTitle BlueSoftware
#define LoaderSize 12
#define LoaderHeight 10
#define LoaderWidth 5

typedef unsigned int DWORD;
typedef unsigned char BYTE;
typedef unsigned int uint2;
typedef unsigned int uint3;

#define EnemyPlayer 0x11FC33
#define LocalPlayer 0xCL33
#define Player 0x11

#define WeaponIds 0xD45
#define GetWeaponId 0xC1S

class Vec3 {
    public:
        Vec3(const Vec3& Vec);
        inline void Vec(const Vec3& isVec);
        ~Vec3();
        inline float AnglesX(const Vec3& ViewAnglesX);
        inline float AnglesY(const Vec3& ViewAnglesY);
        inline void isVecEnabled(const Vec3& VecEnabled);
    private:
        std::vector<std::string> AngleStrings;
        int Angles;
        float m_angles;
        float m_result;
        int m_nResult;
};

class PlayerVisual_m {
    public:
        inline float rga(float r, float g, float a);
};

void DrawEnemyPlayer_s(DWORD dwAddress)
{
    BYTE PlayerId_Size(DWORD FontSize, BYTE Font, const char* zsFont);
    int Total_fonts[5];
    std::vector<Vec3> Fonts = {};
    
    enum buttonCode_t {
        VK_INSERT,
        VK_END,
        VK_DELETE,
    };
    buttonCode_t Button;

    bool DrawEnemyPlayer(EnemyPlayer);
    while(DrawEnemyPlayer && buttonCode_t::VK_END) {
        DrawEnemyPlayer_s(dwAddress);
        break;
    }
}

void Enemy(int head, int chest, Vec3 hitscan) {
    bool isPlayerLookingAtTarget(EnemyPlayer);
    std::vector<Vec3> isKb5003137 = {};
    for (int i = 0; i < isKb5003137.size(); i++) {
        isKb5003137.push_back(isKb5003137[i]);
        for (int j = 1; j > isKb5003137.size(); j++) {
            j--;
        };
        i++;
    }

    bool EnemyGlow(EnemyPlayer);
    bool AimbotHixBox(int Head);
    bool isSlientAimEnabled = true;
    bool FindSpeecValue = true;
    float Speed_value = 14.0f;
    while(Speed_value == 14.0f) {
        bool isWeaponSpeedExploitable(WeaponIds);
        float normal_gameSpeed = 0.5f;
        break;
    }
}


bool isAimbotEnabled() {
    bool AimbotEnabled = true;
    bool isGlowEnabled = true;
    if (AimbotEnabled != true) {
        return false;
    } else if (isGlowEnabled != true) {
        return false;
    }

    DWORD dwAddress;
    while(AimbotEnabled && isGlowEnabled) {
        DrawEnemyPlayer_s(dwAddress);
        Vec3 getAngles(bool AimbotHixBox);
        if (AimbotEnabled) {
            void LockTarget(void slientAim());
            
        }
        break;
    }
    return true;
}

void DrawSpecList(){

    const int WidthSize = 5;
    const int HeightSize = 10;
    std::string specTitle = "Spec List";
    
    static const int wdSize = WidthSize * 1;
    static const int hdSize = HeightSize;

    DWORD SpecList(DWORD TotalPlayers(int Total_Watchers, int Watchers));
    DWORD dwAddress;

    if(EnemyPlayer) {
        DWORD GetEnemyPlayer(BYTE PlayerId, int players_s);
        while(EnemyPlayer) {
            DrawEnemyPlayer_s(dwAddress);
            break;
        }
    }

    bool isSpecListEnabled = true;
    if (isSpecListEnabled != true) {
        isSpecListEnabled = false;
    } else {
        DrawSpecList();
    }
}

void GetSpec(int total, int amount) {
    std::string SpecList;
    for (int i = 0; i < SpecList.size(); i++) {
        SpecList.push_back(SpecList[i]);
        if (SpecList[i])
            DrawSpecList();
        i++;
    }
}

void isVac(bool isOverwatch, bool isVac) {
    while(isOverwatch == true) {
        // new update
        int isVacWatching;
        Vec3 GetVac(bool isOverwatch, bool isVac);
        for (int i = 0; i < isVacWatching; i++) {


        };
        break;
    }
}

void Aimbot(Vec3 ViewAngles, Vec3 PlayerAngles) {
    Vec3 view_angles(float x, float y);
    int i = 0;
    int headBone = 1;
    int BodyBone = 2;
    for (int i = 0; i < headBone; i++) {
        if (headBone == 1) {
            Vec3 GetHeadHitbox(float Head);
            BodyBone = 2;
        } else if (headBone != 1) {
            Vec3 GetHitScan(float head, float body, float chest);
            std::vector<Vec3> HitBox = {};
            std::vector<std::string> HitBoxs = {"Head", "Body", "Chest"};
        }
        i++;
    };

    
}

void DrawVisual(int Esp) {

}

void Draw(int x, int y) {
    const int Height = 10;
    const int Width = 5;
    bool isLoader = false;

    bool isAimbotEnabled = true;
    bool isVisualEnabled = true;

    bool isMenuVisiable = false;

    const int ComboBoz = Height + Width;
    const int NewComboBox = Width + Height;

    int Esp;

    while(isAimbotEnabled && isVisualEnabled) {
        DrawVisual(Esp);
        break;
    }


}

void InitMenu()
{
    std::string MenuTitle = "Blue Software";
    for (int i = 0; i < MenuTitle.length(); i++) {
        MenuTitle.push_back(MenuTitle[i]);
        std::cout << MenuTitle[i] << std::endl;
        if (MenuTitle[i]) {
            std::cout << MenuTitle << std::endl;
        }
        i++;
    };

    bool isMenuOpen = false;
    enum buttonCode_t {
        VK_INSERT,
        VK_END,
        VK_DELETE,
    }; 
    buttonCode_t ButtonCode;   
    int x;
    int y;
    while(isMenuOpen == true && buttonCode_t::VK_INSERT) {
        std::cout << MenuTitle << std::endl;
        Draw(x, y);
        break;
    }
}

void InitDraw()
{
    int x;
    int y;
    Draw(x, y);
}


void GetFunction(int Result, float g_Result, DWORD dwAddress, BYTE LoadChar, int h_Address, DWORD m_nAddress) {
    Result = 10;
    g_Result = 10.0f;
    DWORD ProcID;
}

DWORD GetProcessId(DWORD ProcID, DWORD dwAddress) {
    BYTE GetProcessID_s(DWORD dwAddress, DWORD newAddressMemory, int result, size_t newResult);
    int result;
    if (result != 1) {
        fprintf(stderr, "Failed try again\n");
    } else {
        result = 1 * 2;
    }
    std::vector<std::string> AddressStrings = {};
    std::string AddressString;
    for (int i = 0; i < AddressStrings.size(); i++) {
        for (int j = 0; j < AddressString.length(); j++) {
            AddressStrings[i].push_back(AddressString[j]);
            int newResult = 10;
            int Result = newResult * 20;
            std::cout << AddressStrings[i] << std::endl;
            if (Result != newResult * 20) {
                fprintf(stderr, "failed to get string ints\n");
            } else {
                std::cout << AddressStrings[i][j] << std::endl;
            }
        };
        AddressStrings.push_back(AddressStrings[i]);
        i++;
    };
    return 0;
}

void Login(std::string User, std::string Pwd) {
    int TotalCharacters = 10;
    int GetTotalCharacters = TotalCharacters;

    std::string WelcomeMessage = "Welcome  ";

    if (TotalCharacters != 10) {
        fprintf(stderr, "please enter 10 characters\n");
    } else {
        std::string WelcomeMessage = "Welcome To Blue Cheat";
        std::cout << WelcomeMessage << std::endl;
    }

    std::string Title = "Blue Software";
    for (int i = 0; i < Title.length(); i++) {
        std::cout << Title << std::endl;
            for (int j = 0; j < Title.size(); j++) {
                Title.push_back(Title[i]);
                std::cout << Title[i] << std::endl;
                j++;
            }
        i++;
    }
    char toLogin;
    printf("To You Wish to login\n");
    printf("Enter Y/n to Login: ");
    std::cin >> toLogin;
    switch(toLogin) {
        case 'y': 
            printf("Enter Username: ");
            std::cin >> User;
            printf("Enter Password: ");
            std::cin >> Pwd;
            std::cout << WelcomeMessage << User << std::endl;

            if (User == "" && Pwd == "") {
                fprintf(stderr, "Please Enter A Username and password: ");
                printf("Enter User: ");
                std::cin >> User;
                printf("Enter Password: ");
                std::cin >> Pwd;
            } else {
                std::cout << WelcomeMessage << User << std::endl;
            }
        break;
        case 'n': 
            fprintf(stderr, "Enter Y To Login\n");
            exit(EXIT_FAILURE);
        default: 
           exit(EXIT_FAILURE);
    }
}

enum GetPlayerOffsets_t : uintptr_t {
    gLocalPlayer,
    gGetGlobalPlayer,
    gGetLocalPlayer,
    gLocalWeapon,
};
GetPlayerOffsets_t uPlayer;

enum gLocalPlayer_t : uint64_t {
    g_weaponPlayer,
    g_PlayerWeapon,
    g_EntPlayer,
    g_EntityPlayer,
    gWeaponEntPlayer,
};
gLocalPlayer_t g_Player;

struct uPlayer {
    
};


void WhileLoggedIn(std::string User, std::string Pwd) {
    bool UserLoggedIn = true;
    while (UserLoggedIn) {
            std::vector<char> Incorrect = {};
            for (int i = 0; i < Incorrect.size(); i++) {
                Incorrect.push_back(Incorrect[i]);
                if (Incorrect[i]) {
                    printf("Incorrect UserName\n");
                } else {
                    Incorrect.push_back(Incorrect[i]);
                }
                i++;
                std::cout << std::endl;
            }
            char Des;
            switch(Des) {

            }
            printf("Blue Cheat Developed By Blue\n");
            printf("To Use Enter Loader then run game\n");



        break;
    }
}

int main()
{
    std::string User, Pwd;
    Login(User, Pwd);
}