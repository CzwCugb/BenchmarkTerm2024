typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 18;
  x -= 1;
  x = 17;
  if(x < y) {
    y -= 2;
    y += 2;
  }
  y -= 3;
  y += 1;
  
  
  
}