
void FUN_100ade440(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int local_c;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 != *(int *)(lVar2 + 0xc)) {
    piVar3 = (int *)(lVar2 + 0x10 + (long)iVar1 * 8);
    lVar2 = (long)*(int *)(lVar2 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if (*piVar3 == param_2) {
        return;
      }
      piVar3 = piVar3 + 2;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  local_c = param_2;
  FUN_1000bf010(param_1 + 0x10,&local_c);
  return;
}

