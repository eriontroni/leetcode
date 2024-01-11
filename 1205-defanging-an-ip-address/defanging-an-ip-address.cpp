class Solution {
public:
    string defangIPaddr(string address) {
        size_t pika = address.find(".");
    while (pika != string::npos) {
        address.replace(pika, 1, "[.]");
        pika = address.find(".", pika + 3);
    }
    return address;
    }
};