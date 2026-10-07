
void FUN_10033ed30(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar4 = (ulong)(uint)param_2[1];
  pvVar2 = operator_new__(uVar4 * 4);
  *(void **)(param_1 + 2) = pvVar2;
  if (uVar4 != 0) {
    lVar1 = *(long *)(param_2 + 2);
    uVar3 = 0;
    do {
      *(undefined4 *)((long)pvVar2 + uVar3 * 4) = *(undefined4 *)(lVar1 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

