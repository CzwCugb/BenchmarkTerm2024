typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  x += 2;
  while(y != 3) {
    x -= 1;
  }
  x += 3;
  if(y != x) {
    y -= 3;
  }
  
  
  
}