
void FUN_100344740(long param_1,ulong param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x10;
  lVar1 = *(long *)(param_1 + 0x2688 + lVar2);
  if (lVar1 != param_3) {
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
    }
    *(long *)(param_1 + 0x2688 + lVar2) = param_3;
    if (param_3 != 0) {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2690 + lVar2) = param_4;
  return;
}

