
void FUN_100556df0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined4 *)(lVar2 + 4 + (long)param_2 * 0x10) = 0xffffffff;
  *(undefined4 *)(lVar2 + (long)param_2 * 0x10) = *(undefined4 *)(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x88);
  if ((long)iVar1 < 0) {
    lVar2 = 0;
    if (iVar1 == -1) {
      lVar2 = param_1 + 0x88;
    }
  }
  else {
    lVar2 = lVar2 + (long)iVar1 * 0x10;
  }
  *(int *)(lVar2 + 4) = param_2;
  *(int *)(param_1 + 0x88) = param_2;
  return;
}

