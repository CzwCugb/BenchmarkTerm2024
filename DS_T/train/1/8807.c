typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 8;
  x += 2;
  x = 8;
  x += 2;
  while(x < y) {
    x += 1;
  }
  
  
  
}