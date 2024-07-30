typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(y < 11) {
    y += 1;
    y += 2;
  }
  while(x < y) {
    y -= 1;
  }
  y = 5;
  x -= 1;
  
  
  
}
