
void FUN_1002c9460(long *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  FUN_1002daf80(param_1[0x29d],param_2 - 2);
  if (param_3 == 0) {
    uVar2 = 0;
    do {
      if ((uVar3 - 2 != uVar2) && (param_1[uVar2 + 0xe] != 0)) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1f);
    pvVar1 = (void *)param_1[uVar3 + 0xc];
    if (pvVar1 != (void *)0x0) {
      FUN_1002d6060(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[uVar3 + 0xc] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,1,0);
    pvVar1 = (void *)param_1[0xd];
    if (pvVar1 != (void *)0x0) {
      FUN_1002d6060(pvVar1);
      operator_delete(pvVar1);
    }
    param_1[0xd] = 0;
    param_1[0x29d] = 0;
    *(undefined4 *)(param_1 + 0xb) = 1;
  }
  return;
}

