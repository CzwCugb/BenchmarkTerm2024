typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 2;
  x -= 2;
  x += 1;
  x -= 1;
  x = 18;
  if(y <= 13) {
    y = 7;
    y += 1;
  }
  
  
  
}