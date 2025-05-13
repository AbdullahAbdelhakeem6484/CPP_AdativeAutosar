class Data {
    public:
        bool flag=1;
        int value=0;
        Data(bool flag);
        void PrintInt();
    };

    Data::Data(bool flag) {
        this->flag=flag;
    }

    int main() {
        Data d;
        return 0;
    }
