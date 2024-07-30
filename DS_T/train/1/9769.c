typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(13 > x) {
    y += 3;
  }
  while(14 == x) {
    y += 3;
    while(y < x) {
      x -= 3;
  }
    y += 3;
  }
  
  
  
}
