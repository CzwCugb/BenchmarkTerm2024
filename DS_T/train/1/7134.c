typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 13;
  for(int i=0;i<17;i++) {
    x = 8;
  }
  if(13 != y) {
    x = 1;
    x += 2;
  }
  
  
  
}