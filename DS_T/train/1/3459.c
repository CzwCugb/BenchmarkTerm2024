typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 2;
  y += 2;
  y += 2;
  x += 2;
  for(int i=0;i<4;i++) {
    y -= 1;
  }
  
  
  
}