# 📊 Empirical Analysis of Search Algorithms

> Practical laboratory activity for the course **Basic Data Structures (EDB1)** at IMD/UFRN  
> Professor: Eiji Adachi

---

## 📖 About

This project applies the **scientific method** to algorithm analysis by measuring and comparing the execution time of two classic search algorithms:

- **Sequential Search** — iterative and recursive versions
- **Binary Search** — iterative and recursive versions

The goal is to observe how each algorithm scales with increasing input sizes and validate theoretical complexity predictions through empirical data.

---

## 🧠 Algorithms

### Sequential Search — O(n)
Traverses the array element by element from start to end until the target is found or the array is exhausted. Simple but inefficient for large inputs.

### Binary Search — O(log n)
Requires a sorted array. At each step, it compares the target with the middle element and discards half of the remaining search space. Extremely efficient even for very large inputs.

---

## 📈 Results

### Sequential vs Binary Search
![Comparison: Sequential vs Binary](Comparacao_sequencial_binaria.png)

The graph clearly shows the linear growth of sequential search vs the near-constant time of binary search, even at 1,000,000 elements.

### Iterative vs Recursive Binary Search
![Comparison: Iterative vs Recursive Binary](Comparacao_binaria_binRecursiva.png)

Both versions share the same O(log n) complexity. However, the recursive version shows a slight overhead due to function call stack management.

---

## 🛠️ Technologies

| Tool | Purpose |
|------|---------|
| C++17 | Algorithm implementation and time measurement |
| `<chrono>` | High-resolution execution time measurement |
| Python 3 | Data processing and graph generation |
| `matplotlib` | Graph plotting |
| `pandas` | CSV data handling |
| `numpy` | Trend line calculation |

---

## ⚙️ How to Compile and Run

### Requirements
- `g++` with C++17 support
- Python 3 with `pip`

### 1. Compile

```bash
# Sequential Search
g++ main.cpp busca_sequencial.cpp -o busca_sequencial -Wall -pedantic -std=c++17

# Binary Search (iterative)
g++ main.cpp busca_binaria.cpp -o busca_binaria -Wall -pedantic -std=c++17

# Binary Search (recursive)
g++ main.cpp busca_binaria_recursiva.cpp -o busca_binaria_recursiva -Wall -pedantic -std=c++17
```

### 2. Generate Data

```bash
./busca_sequencial > sequencial.csv
./busca_binaria > binaria.csv
./busca_binaria_recursiva > binRecursiva.csv
```

> On Windows, use `busca_sequencial.exe` instead of `./busca_sequencial`

### 3. Set Up Python Environment

```bash
python -m venv meuambiente
source meuambiente/bin/activate  # Linux/macOS
meuambiente\Scripts\activate     # Windows

pip install pandas matplotlib numpy
```

### 4. Generate Graphs

```bash
python comparar_graficos.py sequencial.csv binaria.csv
python comparar_graficos.py binaria.csv binRecursiva.csv
```

---

## 📁 Project Structure

```
edb1/
├── main.cpp
├── busca.h
├── busca_sequencial.cpp
├── busca_binaria.cpp
├── busca_binaria_recursiva.cpp
├── comparar_graficos.py
├── sequencial.csv
├── binaria.csv
├── binRecursiva.csv
└── README.md
```

---

## 👤 Author

**João Vitor Guimarães**  
Bachelor of Information Technology Student — IMD/UFRN
Natal, RN — Brazil
