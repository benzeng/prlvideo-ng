
void FUN_100344120(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)(param_2 * 0x10 + param_3);
  lVar1 = *(long *)(param_1 + 0x58 + uVar2 * 8);
  if (lVar1 != param_4) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x38) = *(int *)(lVar1 + 0x38) + -1;
    }
    *(long *)(param_1 + 0x58 + uVar2 * 8) = param_4;
    if (param_4 != 0) {
      *(int *)(param_4 + 0x38) = *(int *)(param_4 + 0x38) + 1;
    }
  }
  return;
}

