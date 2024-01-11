    #include<iostream>
    #include<string>
    #include<vector>
    using namespace std;
    enum leetcode_funksionet{
        XnumIdenticalPairs = 1,
        XarrayStringsAreEqual,
        XtwoSum,
        XdefangIPaddr,
        XreplaceDigits,
        XfindWordsContaining,
        XfinalValueAfterOperations,
        XmySqrt,
        XisPalindrome,
        XconvertTemperature,
        XdiagonalSum,
        XcountNegatives,
        XrowAndMaximumOnes,
        Xtranspose,
        Xithjeshte,
        XdiagonalPrime,
        XmyPow,
        XnumberOfMatches,
        XsquareIsWhite,
        XflipAndInvertImage
    };
    int numIdenticalPairs(vector<int>& nums) {
        int nrc = 0;
        int n = nums.size();

        for (int i = 0; i < n-1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    nrc++;
                }
            }
        }
        return nrc;
        } 
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            int gj1 = word1.size();
            string fjala1;
            int gj2 = word2.size();
            string fjala2;
            bool rez = false;
            for(int i = 0; i < gj1;i++){
                fjala1 += word1[i];
            }
            for(int i = 0; i < gj2;i++){
                fjala2 += word2[i];
            }
            if(fjala1 == fjala2){
                rez = true;
            }
            return rez;
        }    
    vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            for (int i = 0; i < n-1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] + nums[j] == target) {
                        return { i , j };
                    }
                }    
            }
            return{};
        }
    string defangIPaddr(string address) {
            size_t pika = address.find(".");
        while (pika != string::npos) {
            address.replace(pika, 1, "[.]");
            pika = address.find(".", pika + 3);
        }
        return address;
        }
    string replaceDigits(string s) {
            int n = s.size();
            for(int i = 1; i < n; i+=2){
                s[i] += s[i-1] - '0'; //   e kthen nga numer njeshiferor(digit) ne tipin 
                                      //   int nga ASCII(American Standard Code for information interchange)
            }
            return s;
        }
    vector<int> findWordsContaining(vector<string>& words, char x) {
            vector<int> rez;
            int n = words.size();
            for(int i = 0; i < n; i++ ){
                int m = words[i].size();
                for(int j = 0; j < m; j++){
                    if(words[i][j] == x){
                        rez.push_back(i);
                        break;
                    }
                }

            }
            return rez;
        }
    int finalValueAfterOperations(vector<string>& operations) {
            int rez = 0;
            int n = operations.size();
            for(int i = 0; i < n; i++){
                int m = operations[i].size();
                for(int j = 0; j < m ; j++){
                    if(operations[i][j]=='+'){
                        rez++;
                        break;
                    }else if(operations[i][j]== '-') {
                        rez--;
                        break;
                    }
                }    
            }
            return rez;
        }
    int mySqrt(int x) {
            long pow = 0;
            long i = 0;
            while(pow <= x){
                i+=1;
                pow = i*i;
            } 
            i--;
            return i;
        }    
    bool isPalindrome(int x) {
            if (x < 0 || (x % 10 == 0 && x != 0)) {
                return false;
            }
            string s = to_string(x);
            int n = s.size();
            for (int i = 0; i < n / 2; i++) {
                if (s[i] != s[n - 1 - i]) {
                    return false;
                }
            }
            return true;
        }
    vector<double> convertTemperature(double celsius) {
            return {celsius + 273.15,(celsius* 1.80)+ 32.00};
        }
    int diagonalSum(vector<vector<int>>& mat) {
            /*
            00 01 02
            10 11 12
            20 21 22
            */
            int sum = 0;
            int n = mat.size();
            int m = mat[0].size();
            for(int i = 0; i < n; i++ ){
                for(int j = 0 ; j < m ; j++){
                    if((i == j) || (i+j == m - 1)){
                        sum += mat[i][j];
                    }
                }
            }
            return sum;
        }
    int countNegatives(vector<vector<int>>& grid) {
            int n = grid.size();
            int m = grid[0].size();
            int shn = 0;
            for(int i = 0; i < n ; i++ ){
                for(int j = 0; j < m ; j++){
                    if(grid[i][j] < 0){
                        shn++;
                    }
                }
            }
            return shn;
        }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
            int sh1 = 0;
            int n = mat.size();
            int m = mat[0].size();
            int max = 0;
            int indeksi = 0;
            for(int i = 0; i < n; i++){
                sh1 = 0;
                for(int j = 0; j < m ; j++){
                    if(mat[i][j]== 1){
                        sh1++;
                    }
                }
                if(sh1 > max){
                max = sh1;
                indeksi = i;
                }
                }
            return { indeksi , max };
        }
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
            const int n = matrix.size();
            const int m = matrix[0].size();

            vector<vector<int>> matricaere(m, vector<int>(n, 0));

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    matricaere[j][i] = matrix[i][j];
                }
            }

            return matricaere;
        }
    bool ithjeshte(int numri) {
            if (numri <= 1) return false;
            if (numri == 2) return true;
            if (numri % 2 == 0) return false;
            for (int i = 3; i * i <= numri; i += 2) {
                if (numri % i == 0){
                    return false;
                }
            }
            return true;
        }

        int diagonalPrime(vector<vector<int>>& nums) {
            const int n = nums.size();
            const int m = nums[0].size();
            long long max = 0;
            for(long int i = 0; i < n ; i++){
                for(long int j = 0; j < m ; j++){
                    if((i == j) || (i + j  == n - 1 )){
                        bool ithjesht = ithjeshte((nums[i][j]));
                        if(ithjesht){
                            if(max < nums[i][j]){
                                max = nums[i][j];
                            }
                        }
                    }
                }
            }
            return max;
        }
        double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        long double result = 1.0;
        if (n > 0) {
            for (int i = 1; i <= n; ++i) {
                result *= x;
            }
        } else {
            for (int i = 0; i < -n; ++i) {
                result /= x;
            }
        }
        return result;
    }
    int numberOfMatches(int n) {
        return n-1;  
    }
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g') && coordinates[1]%2!=0){
            return false;
        }else if((coordinates[0]=='b'||coordinates[0]=='d'||coordinates[0]=='f'||coordinates[0]=='h') && coordinates[1]%2==0){
            return false;
        }else{
            return true;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int temp;
        int n = image.size();
        int m = image[0].size();
         for(int i = 0; i < n ; i++){
            for( int j = 0; j < m ; j++){
                if(image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }
        }
        for(int i = 0; i < n ; i++){   
            int fillimi = 0;
            int mbarimi = m - 1;
            while (fillimi < mbarimi) {
                int temp = image[i][fillimi];
                image[i][fillimi] = image[i][mbarimi];
                image[i][mbarimi] = temp;
                fillimi++;
                mbarimi--;
            }
        }    
        return image;
    }

    int main(){
        int zgjedhja;
        fillimi:
        cout << "Cilin funksion doni te perdorni?\n";
        cout << "(1)numIdenticalPairs,\n(2)arrayStringsAreEqual,\n(3)twoSum,\n(4)defangIPaddr,\n";
        cout << "(5)replaceDigits,\n(6)findWordsContaining,\n(7)finalValueAfterOperations,\n(8)mySqrt,\n";
        cout << "(9)isPalindrome,\n(10)convertTemperature,\n(11)diagonalSum\n(12)countNegatives,\n";
        cout << "(13)rowAndMaximumOnes,\n(14)transpose,\n(15)ithjeshte,\n(16)diagonalPrime\n(17)myPow\n";
        cout << "(18)numberOfMatches\n(19)squareIsWhite\n(20)flipAndInvertImage\n";
        cin >> zgjedhja;
        //leetcode_funksionet zgjedhja1 = static_cast<leetcode_funksionet>(zgjedhja);
        switch (zgjedhja){
                case XnumIdenticalPairs: {
                    int n;
                    cout << "Shenoni numrin e elementeve ne varg: ";
                    cin >> n;
                    vector<int> numri(n);
                    for(int i = 0; i < n ; i++){
                        cout << "Shenoni elementin " << i+1 << " : ";
                        cin >> numri[i];
                    }
                    cout << "Numrat qe shenuat jane : ";
                    for(int i = 0; i < n ; i++){
                        cout << numri[i] << " ";
                    }
                cout << endl;
                int a = numIdenticalPairs(numri);
                cout << "ekzistojne " << a << " cifte te renditura";
                break;
            }
            case XarrayStringsAreEqual: {
                int n1;
                cout << "Shenoni numrin e nenfjaleve ne fjalen e pare: ";
                cin >> n1;
                int n2;
                cout << "Shenoni numrin e nenvjaleve ne fjalen e dyte: ";
                cin >> n2;

                vector<string> fjala11(n1);
                cout << "Shenoni nenfjalet e fjales se pare: " << endl;
                for(int i = 0 ; i < n1 ; i++){
                    cout << "Shenoni nenfjalen "  << i+1 << " : ";
                    cin >> fjala11[i];
                }
                cout << endl;
                vector<string> fjala22(n2);
                cout << "Shenoni nenfjalet e fjales se dyte: " << endl;
                for(int i = 0 ; i < n2 ; i++){
                    cout << "Shenoni nenfjalen "  << i+1 << " : ";
                    cin >> fjala22[i];
                }
                bool po = arrayStringsAreEqual(fjala11,fjala22);
                if(po){
                    cout << "vargjet jane ekuivalente";
                }else{
                    cout << "vargjet nuk jane ekuivalente";
                }

                break;
            }
            case XtwoSum:{
                int n;
                cout << "Shenoni numrin e elmenteve ne varg: ";
                cin >> n;
                vector<int> numrat(n);
                for(int i = 0; i < n; i++){
                    cout << "Shenoni elementin " << i+1 << " : ";
                    cin >> numrat[i];
                }
                cout << "Numrat qe shenuat jane: ";
                for(int i = 0; i < n; i++){
                    if(i != n-1){
                        cout << numrat[i] << ", ";
                    }else{
                    cout <<numrat[i];
                }
            }
                int targeti;
                cout << endl << "Shenoni targetin e mledhjes se dy numrave: ";
                cin >> targeti;
                vector<int> a = twoSum(numrat,targeti);
                cout << "Indekset e numrave jane: ";
                for(int i = 0; i < 2; i++){
                    if(i != 1){
                        cout << a[i] + 1 << " dhe ";
                    }
                    else{
                        cout << a[i] + 1;
                    }
                }
                break;    
            }
            case XdefangIPaddr:{
                string adresa;
                cout << "Shenoni ip adresen: ";
                cin >> adresa;
                cout << "adresa e defanguar eshte: " << defangIPaddr(adresa);
                break;
            }
            case XreplaceDigits:{
                string inputi;
                cout << "Sheno fjalen qe doni te konvertoni(p.s a1c1e1): " << endl;
                cout << "**Numri pas shkronjes zevendesohet me shkronje per aq sa eshte nga shkronja paraprake**" << endl;
                cin >> inputi;
                cout << "Pas rivendosjes fjalia eshte: " << replaceDigits(inputi);
                break;
            }
            case XfindWordsContaining:{
                int n;
                cout << "Shenoni numrin e fjaleve qe doni kontrolluar: ";
                cin >> n;
                vector<string> fjala(n);
                for(int i = 0; i < n; i++){
                    cout << "Shenoni fjalen " << i+1 << " : ";
                    cin >> fjala[i];
                }
                cout << "Fjalet qe shenuat jane: ";
                for(int i = 0; i < n; i++){
                    if(i != n-1){
                    cout << "\"" << fjala[i] << "\", ";
                    }else{
                    cout << "\"" << fjala[i] << "\"";
                }
                }
                char shkronja;
                cout << endl <<  "Shenoni shkronjen me te cilen doni te kontrolloni fjalet: ";
                cin >> shkronja;

                vector<int> a = findWordsContaining(fjala,shkronja);
                cout << "Indekset e fjaleve me shkronjen " << shkronja << " jane: ";
                for(int i = 0; i < a.size();i++){
                    cout << a[i] + 1 << " ";

                }
                break;
            } 
            case XfinalValueAfterOperations:{  
                int n;
                cout << "Sheno numrin e operacioneve me operatore(p.s 1-- , 1++ , --1, ++1): ";
                cin >> n;
                vector<string> operatoret(n);
                for(int i = 0 ; i < n ; i++){
                    cout << "Sheno operatorin " << i + 1 << " : ";
                    cin >> operatoret[i];
                }
                cout << "Operatoret qe shenuat jane: ";
                for(int i = 0 ; i < n ; i++){
                    if(i != n-1){
                        cout << operatoret[i] << ", ";
                    }else{
                        cout << operatoret[i];
                    }
                }
                cout << "Shuma pas zbatimit te operatoreve eshte: "<< finalValueAfterOperations(operatoret);
                break;
            }
            case XmySqrt: {
                int a;
                cout << "Sheno numrin te cilin do ta rrenjezojme: ";
                cin >> a;
                cout << "Rrenja e perafert katrore e numrit " << a << " eshte " << mySqrt(a);
                break;
            }
            case XisPalindrome:{
                int palindromi;
                cout << "Sheno nje numer dhe vertetojme se a eshte palindriom: ";
                cin >> palindromi;
                cout << "Numri " << palindromi;
                if(isPalindrome(palindromi)){
                    cout << " eshte palindrom";
                }else{
                    cout << " nuk eshte palindrom";
                }
                break;
            }
            case XconvertTemperature:{
                double temperaturaC;
                cout << "Shenoni temperaturen ne Celcius: ";
                cin >> temperaturaC;
                vector<double> a = convertTemperature(temperaturaC);
                cout << "Temperatura ne Celcius eshte: " << temperaturaC << endl;
                cout << "Temperatura ne Kelvin eshte : " << a[0] << endl;
                cout << "Temperatura ne Farenheit eshte: " << a[1] << endl;
                break;
            } 
            case XdiagonalSum: {
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                vector<vector<int>> matrica(n, vector<int>(n));
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  " ;
                        cin >> matrica[i][j];
                        
                    }
                }
                cout << "Matrica qe shenuat eshte: " << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << matrica[i][j] << " ";
                    }
                    cout << endl;
                }
                int shumaD = diagonalSum(matrica);
                cout << "Shuma e numrave ne diagonale te matrices eshte: " << shumaD;
                break;
            }
            case XcountNegatives:{
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                vector<vector<int>> matrica(n, vector<int>(n));
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  " ;
                        cin >> matrica[i][j];
                        
                    }
                }
                cout << "Matrica qe shenuat eshte: " << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << matrica[i][j] << " ";
                    }
                    cout << endl;
                }
                int shumaN = countNegatives(matrica);
                cout << "Egzistojne " << shumaN << " numra negativ ne matrice.";
                break;
            }
            case XrowAndMaximumOnes:{
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                cout << "Sheno numrat 1 ose 0 ne matrice: " << endl;
                vector<vector<int>> matrica(n,vector<int>(n));
                 for(int i = 0; i < n; i++){
                        for(int j = 0; j < n; j++){
                            fillimicase:
                            cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  " ;
                            cin >> k;
                            if(k != 0 && k !=1){
                                cout << "GABIM!!!\nShenoni 0 ose 1." << endl;
                                goto fillimicase;
                            }
                            matrica[i][j] = k;
                        }
                    }
                    cout << "Matrica qe shenuat eshte: " << endl;
                    for(int i = 0; i < n; i++){
                        for(int j = 0; j < n; j++){
                            cout << matrica[i][j] << " ";
                        }
                        cout << endl;
                    }

                vector<int> a = rowAndMaximumOnes(matrica);
                cout << "Me se shumti numra me vlere 1 ka rreshti " << a[0] + 1 << " me " << a[1] << " numra te tille.";
                break;
            }
            case Xtranspose: {
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                vector<vector<int>> matricax(n, vector<int>(n));
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  " ;
                        cin >> matricax[i][j];
                        
                    }
                }
                cout << "Matrica qe shenuat eshte: " << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << matricax[i][j] << " ";
                    }
                    cout << endl;
                }


                vector<vector<int>> transponim  = transpose(matricax);
                cout << "Matrica e transponuar e matrices paraprake eshte: " <<endl;
                for(int i = 0; i < matricax.size();i++){
                    for(int j = 0; j < matricax[0].size();j++){
                        cout << transponim[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case Xithjeshte:{
                int n;
                cout <<"Sheno nje numer dhe vertetojme se a eshte i thjeshte: ";
                cin >> n;
                if(ithjeshte(n)){
                    cout << "Numri " << n << " eshte i thjeshte";
                }else{
                    cout << "Numri " << n << " nuk eshte i thjeshte";
                }
                break;
            }
                    
            case XdiagonalPrime:{
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                vector<vector<int>> matrica(n, vector<int>(n));
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  " ;
                        cin >> matrica[i][j];
                        
                    }
                }
                cout << "Matrica qe shenuat eshte: " << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << matrica[i][j] << " ";
                    }
                    cout << endl;
                }
                if(diagonalPrime(matrica) == 0 ){
                    cout << "Nuk ka numer te thjeshte ne diagonale te matrices";
                }
                else{
                cout << "Numri me i madh i thjeshte nga diagonalet e matrices eshte: " << diagonalPrime(matrica) <<endl;
                }
                break;
            }
            case XmyPow : {
                int baza;
                int eksponenti;
                cout << "Sheno numrin: ";
                cin >> baza;
                cout << "Sheno eksponentin e numrit: ";
                cin >> eksponenti;
                cout << "Numri " << baza << " ne fuqine " << eksponenti << " eshte " << myPow(baza,eksponenti);
                break;
            }
            case XnumberOfMatches :{
                int n;
                cout << "Sheno numrin e ekipeve: ";
                cin >> n;
                cout << "Numri i ndeshjeve te luajtura nga " << n << " ekipe eshte " << numberOfMatches(n);
                break;
            }  
            case XsquareIsWhite :{
                string kordinatat;
                cout << "Shenoni kordianatat ne tabelen e shahut (p.s a8): ";
                cin >> kordinatat;
                cout << "Ngjyra e katrorit " << kordinatat << " eshte e ";
                if(squareIsWhite(kordinatat)){
                    cout << "Bardhe";
                }else {
                    cout << "Zeze";
                }
                break;
            }
            case XflipAndInvertImage:{
                int n;
                int k;
                cout << "Sheno numrin e rendit te matrices katrore: ";
                cin >> n;
                cout << "Sheno numrat 1 ose 0 ne matrice dhe do te bejme invertimin dhe kthimin mbrapsht : " << endl;
                vector<vector<int>> matrica(n,vector<int>(n));
                for(int i = 0; i < n; i++){
                        for(int j = 0; j < n; j++){
                            fillimicase20:
                            cout <<"Shenoni elementin me indeks " << i+1 << " " << j+1 << " te matrices:  ";
                            cin >> k;
                            if(k != 0 && k !=1){
                                cout << "GABIM!!!\nShenoni 0 ose 1." << endl;
                                goto fillimicase20;
                            }
                            matrica[i][j] = k;
                        }
                }
                cout << "Matrica qe ju shenuat eshte: " << endl;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << matrica[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "Matrica juaj e invertuar dhe e kthyer mbrapsht eshte: " << endl;
                vector<vector<int>> q(n,vector<int>(n));
                q = flipAndInvertImage(matrica);
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < n; j++){
                        cout << q[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            default:
                cout << "Ju nuk keni shenuar indeksin e funksionit si duhet.\n";
                goto fillimi;
        }
        return 0;
    }
