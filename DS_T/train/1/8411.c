typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<10;i++) {
    x += 3;
  }
  y -= 2;
  x -= 3;
  y += 3;
  x -= 3;
  y -= 2;
  y += 1;
  
  
  
}
