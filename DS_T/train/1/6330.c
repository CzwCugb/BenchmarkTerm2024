typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 17;
  for(int i=0;i<11;i++) {
    y += 3;
  }
  x += 2;
  x += 2;
  y = 11;
  for(int i=0;i<5;i++) {
    x -= 3;
  }
  
  
  
}
