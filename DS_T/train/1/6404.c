typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  y += 2;
  x -= 2;
  if(x != y) {
    x = 10;
    y = 1;
    x += 2;
  }
  
  
  
}
