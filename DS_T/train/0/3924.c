typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 19;
  while(x != y) {
    y = 9;
    if(x <= 16) {
      y += 2;
  }
    y -= 3;
  }
  
  
  
}