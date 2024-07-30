typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 9;
  if(x == 3) {
    y = 10;
    x += 2;
    x -= 1;
    x += 3;
  }
  
  
  
}
