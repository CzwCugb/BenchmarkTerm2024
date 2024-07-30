typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x != 3) {
    y = 14;
  }
  while(x < 9) {
    x -= 1;
    y += 1;
    y -= 2;
  }
  
  
  
}
