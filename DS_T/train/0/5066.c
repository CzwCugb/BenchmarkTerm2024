typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y -= 1;
  y += 1;
  while(y < 3) {
    for(int i=0;i<6;i++) {
      if(y <= 16) {
        y += 3;
    }
  }
  }
  
  
  
}
