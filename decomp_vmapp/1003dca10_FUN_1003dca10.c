
void FUN_1003dca10(int *param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + (ulong)(param_2 * 0x40 + 0x114) * 4);
  if (*param_1 != iVar1) {
    *param_1 = iVar1;
    if (*(int *)(param_3 + (ulong)(param_2 * 0x40 + 0x112) * 4) == 0) {
      *param_1 = 0;
    }
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  }
  return;
}

