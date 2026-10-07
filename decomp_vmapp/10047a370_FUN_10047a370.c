
void FUN_10047a370(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 < iVar1) {
    FUN_10047a2c0(param_1,lVar3 + 0x10 + (long)iVar2 * 8);
    if (iVar1 + -1 != iVar2) {
      lVar3 = 1;
      do {
        FUN_10047a2c0(param_1,*param_2 + 0x10 + (*(int *)(*param_2 + 8) + lVar3) * 8);
        lVar3 = lVar3 + 1;
      } while (iVar1 - iVar2 != (int)lVar3);
    }
  }
  return;
}

