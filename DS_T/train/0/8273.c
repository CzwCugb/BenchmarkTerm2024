typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  while(x <= 2) {
    x += 2;
    y += 2;
    x = 11;
  }
  x = 10;
  while(11 >= x) {
    y -= 2;
  }
  
  
  
}