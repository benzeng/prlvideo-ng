
void FUN_1004047e0(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (**(code **)(*(long *)*param_1 + 0x2e0))();
  lVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 10);
  lVar4 = FUN_100404650(param_1,lVar3 * lVar2,(ulong)uVar1);
  if (lVar4 != 0) {
    while (*(ulong *)(lVar4 + 0x20) < (ulong)uVar1 + lVar3 * lVar2) {
      lVar5 = FUN_1007d9a20(lVar4 + 0x30);
      if (lVar5 == 0) {
        FUN_100404740(param_1,lVar4);
        return;
      }
      FUN_100404740(param_1,lVar4);
      lVar4 = lVar5 + -0x30;
    }
  }
  return;
}

