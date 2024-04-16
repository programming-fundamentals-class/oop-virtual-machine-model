#include <iostream>
#include <vector>
#include <string>

class Instruction
{
public:
    virtual int execute() =0;
};

class InstructionAdd : public Instruction
{
public:
    int execute()
    {
      return 0;
    }
};

class InstructionHlt : public Instruction
{
public:
    int execute()
    {
        return -1;
    }
};


class Program
{
    std::vector<Instruction*> m_prog;
public:
    void addInstruction(Instruction *ins)
    {
        m_prog.push_back(ins);
    }

    void exec()
    {
        // TBD
    }

    void step()
    {
        //exec
    }
};

class Memory
{
    size_t m_size;
    static int m_memory[100];

public:
    Memory(size_t size) : m_size(size)
    {
        std::cout << "created memory : " << m_size << " cells";
    }
    virtual ~Memory() {}

    int getValue(size_t addr) const
    {
        if(addr < 100 && addr < m_size)
            return m_memory[addr];
        return -1; // TBD
    }

    void setValue(size_t addr, int value)
    {
        if(addr < 100 && addr < m_size)
            m_memory[addr] = value;
    }
};

class Machine
{
    Program m_prog;
    Memory  m_memory;

public:
    Machine() : m_memory(10)
    {
        // TBD
    }

    void load(const std::string & name)
    {
        // tbd
    }

    void run ()
    {
        // tbd
    }

    void dump() const
    {
        // tbd
    }
};


int main() {

    Machine m;

    return 0;
}
