typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x -= 1;
  x = 20;
  if(x != y) {
    x = 19;
  }
  for(int i=0;i<6;i++) {
    y -= 1;
    y += 3;
  }
  
  
  
}
