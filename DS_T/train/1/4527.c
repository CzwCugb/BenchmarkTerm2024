typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 1;
  while(19 < x) {
    y = 10;
    x = 3;
  }
  if(y >= x) {
    y -= 2;
    x = 20;
  }
  y += 2;
  
  
  
}
