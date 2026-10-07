
void FUN_100556da0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_1 + 0x60);
  *(undefined4 *)(lVar2 + (long)param_2 * 0x10) = 0xffffffff;
  *(undefined4 *)(lVar2 + 4 + (long)param_2 * 0x10) = *(undefined4 *)(param_1 + 0x8c);
  iVar1 = *(int *)(param_1 + 0x8c);
  if ((long)iVar1 < 0) {
    piVar3 = (int *)0x0;
    if (iVar1 == -1) {
      piVar3 = (int *)(param_1 + 0x88);
    }
  }
  else {
    piVar3 = (int *)(lVar2 + (long)iVar1 * 0x10);
  }
  *piVar3 = param_2;
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}

