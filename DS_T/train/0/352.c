typedef enum {false, true} bool;
extern int __VERIFIER_nondet_int(void);

int main() {
  int x = __VERIFIER_nondet_int();
  int y = __VERIFIER_nondet_int();
  
  if(x > y) {
    x += 3;
  }
  for(int i=0;i<10;i++) {
    y = 12;
  }
  while(y >= x) {
    y = 20;
    y = 16;
    x -= 1;
  }
  
  
  
}