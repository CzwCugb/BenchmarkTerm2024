typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x += 3;
  y -= 3;
  x = 18;
  y += 3;
  x -= 2;
  if(x < y) {
    x += 2;
  }
  
  
  
}
