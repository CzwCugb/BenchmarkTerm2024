typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(7 < x) {
    x -= 3;
  }
  if(x > y) {
    y -= 2;
  }
  while(x < 8) {
    y += 1;
  }
  
  
  
}
