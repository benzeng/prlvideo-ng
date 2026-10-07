
char FUN_1000dd9e0(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 5) == -1) {
    bVar1 = *(char *)(param_1 + 6) == -1;
  }
  else {
    bVar1 = false;
  }
  if (*(char *)(param_1 + 8) == -1) {
    bVar2 = *(char *)(param_1 + 9) == -1;
  }
  else {
    bVar2 = false;
  }
  if (*(char *)(param_1 + 0xb) == -1) {
    bVar3 = *(char *)(param_1 + 0xc) == -1;
  }
  else {
    bVar3 = false;
  }
  if (*(char *)(param_1 + 0xe) == -1) {
    bVar4 = *(char *)(param_1 + 0xf) == -1;
  }
  else {
    bVar4 = false;
  }
  return (bVar4 ^ 1U) + (bVar3 ^ 1U) + (bVar2 ^ 1U) + (bVar1 ^ 1U);
}

