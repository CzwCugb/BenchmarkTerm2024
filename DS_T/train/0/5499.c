typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(13 != x) {
    x += 3;
    y -= 3;
  }
  for(int i=0;i<6;i++) {
    x -= 3;
    x += 1;
  }
  
  
  
}
