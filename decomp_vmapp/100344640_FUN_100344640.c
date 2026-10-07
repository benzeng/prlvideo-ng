
void FUN_100344640(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)(param_2 * 0x80 + param_3);
  lVar1 = *(long *)(param_1 + 0xe08 + uVar2 * 8);
  if (lVar1 != param_4) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
    }
    *(long *)(param_1 + 0xe08 + uVar2 * 8) = param_4;
    if (param_4 != 0) {
      *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
    }
  }
  return;
}

