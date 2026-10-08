
undefined8
FUN_100a69e60(long param_1,uint param_2,undefined4 *param_3,long *param_4,undefined4 *param_5)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (param_2 < uVar2) {
    uVar6 = 1;
    if (1 < uVar2) {
      uVar6 = (ulong)uVar2;
    }
    lVar7 = *(long *)(param_1 + 0x80 + (ulong)param_2 * 8);
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (long *)*param_4;
    *param_4 = lVar7;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    lVar7 = uVar6 + param_2;
    *param_3 = *(undefined4 *)(param_1 + 0x80 + lVar7 * 8);
    uVar3 = *(undefined4 *)(param_1 + 0x84 + lVar7 * 8);
    *param_5 = uVar3;
    uVar5 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

