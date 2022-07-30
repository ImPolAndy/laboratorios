#include <iostream>

using namespace std;


class GuiFactory
{
    Button* CrearButton();
    CheckBox* CrearCheckBox();
};

class WinFactory : public GuiFactory
{
    public:
        WinButton*  crearButton() { return new WinButton();}
        WinCheckBox* crearCheckbox() {return new WinCheckBox();}
        virtual ~WinFactory(){};
        virtual void Draw() = 0;
};

class MacFactory : public GuiFactory
{
    public:
        MacButton* crearMacButton() { return new MacButton();}
        MacCheckBox* crearMacChecbox() {return new MacCheckBox();}
        virtual void Draw() = 0;
        void draw(const WinFactory& colaborador);
};

class LinuxFactory : public GuiFactory
{
    public:
        LinuxButton* crearLinuxButton() { return new LinuxButton();}
        LinuxCheckBox* crearLinuxCheckbox() { return new LinuxCheckBox();}
        virtual void Draw() = 0;

};

class Button
{
    public:
        virtual void Draw();
};

class CheckBox
{
    public:
        virtual void Draw();
};

class WinButton : public Button
{
    public:
        void Draw() {cout<<"WindowsButton\n";}
};

class WinCheckBox : public CheckBox
{
    public:
        void Draw() {cout<<"WindowsCheckBox\n";}
};

class MacButton : public Button
{
    public:
        void Draw() {cout<<"MacButton\n";}
};

class MacCheckBox : public CheckBox
{
    public:
        void Draw() {cout<<"MacCheckBox\n";}
};

class LinuxButton : public Button
{
    public:
    void Draw() { cout<<"LinuxButton\n";}
};

class LinuxCheckBox : CheckBox
{
    void Draw() {cout<<"LinuxCheckBox\n";}
};


class Application
{
    private:
        GuiFactory* factory;
        Button* button;
    
    public:
        Application(GuiFactory* f)
        {
            this->factory = f;
        }

        void crearUI(){
            this->button = factory.crearButton();
        }

        void Draw(){
            button.Draw();
        }
};

class AplicationConfigurador
{
    void main(){
        config = readApplciationConfigFile();
    }

    if(config.OS == "Windows")
    {
        factory = new WinFactory();
    } 
    else if (config.OS == "Mac")
    {
        factory = new MacFactory();
    }
    else
        throw new exception("Error: Sistema Operativo Desconocido.");
    
    Application app = new Application(factory);
};

int main()
{
    cout<<"Cliente: Windows ";
    Button* f1 = new Button();
    Application(*f1);
    delete f1;
    cout<<"\n";

    cout<<"Cliente: Mac ";
    Button *f2 = new Button();
    Application(*f2);
    delete f2;
    return 0;
}