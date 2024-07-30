typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  for(int i=0;i<4;i++) {
    y += 2;
    if(x > y) {
      y = 17;
      for(int i=0;i<5;i++) {
        y -= 3;
    }
  }
  }
  
  
  
}
