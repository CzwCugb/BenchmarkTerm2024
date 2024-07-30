typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  y -= 3;
  if(x != y) {
    y = 14;
  }
  x = 11;
  while(20 >= x) {
    x -= 2;
    x -= 1;
  }
  
  
  
}
