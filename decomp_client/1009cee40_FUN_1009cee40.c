
bool FUN_1009cee40(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

