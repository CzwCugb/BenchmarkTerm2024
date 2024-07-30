typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  x = 3;
  y += 3;
  if(17 >= x) {
    x = 16;
    x += 2;
    y += 1;
    y -= 3;
  }
  
  
  
}
