 #include <iostream>

    int main()
    {
        int height(0);
        int weight(0);     
        std::cout << "input height" << "\n";
        std::cin >> height;
        std::cout << "input weight" << "\n";
        std::cin >> weight;
        std::cout << "Age = " << height << "\n";
        std::cout << "Weight = " << weight << "\n";
        int ideal {height - weight};
        std::cout << "Ideal weight = " << ideal;
    }   