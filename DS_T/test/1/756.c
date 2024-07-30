typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y = 5;
  y = 18;
  y = 5;
  if(13 < x) {
    y = 20;
  }
  if(y > x) {
    y -= 3;
  }
  
  
  
}
