#include <iostream>
#include <string>

using namespace std;

class BigMemoryPool {

private:
    char* pool_ = nullptr;
public:
    static const int PoolSize = 4096;
    BigMemoryPool(): pool_(new char[PoolSize]){}
    
    BigMemoryPool(const BigMemoryPool& other) : pool_(new char[PoolSize]){
        cout << "Copy pool size " << other.PoolSize << endl;
        memccpy(pool_, other.pool_, PoolSize, 1);
    }

    BigMemoryPool(BigMemoryPool &&other)
    {
        cout << "Move pool size " << other.PoolSize << endl;
        pool_ = other.pool_;
        other.pool_ = nullptr;
    }

    virtual ~BigMemoryPool(){
        if (pool_ != nullptr) {
            delete[] pool_;
        }
    }
};

BigMemoryPool getPool(){
    BigMemoryPool memoryPool;
    return memoryPool;
}

int main(int argc, char** argv){
    auto pool = getPool();

    auto pool1 = pool;

    auto pool2 = move(pool);
}