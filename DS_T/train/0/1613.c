typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x != y) {
    x = 13;
    y -= 1;
    y += 1;
    y = 17;
    x += 3;
  }
  x += 2;
  y -= 2;
  
  
  
}
