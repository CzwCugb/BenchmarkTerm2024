typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  x += 3;
  y += 2;
  for(int i=0;i<10;i++) {
    y += 1;
  }
  y -= 1;
  
  
  
}
