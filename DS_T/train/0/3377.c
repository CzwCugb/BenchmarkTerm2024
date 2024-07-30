typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  y += 3;
  y -= 2;
  while(16 > y) {
    x += 3;
  }
  if(x < y) {
    y = 14;
  }
  y += 1;
  
  
  
}
