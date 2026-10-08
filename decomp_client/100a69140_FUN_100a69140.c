
undefined8
FUN_100a69140(long param_1,uint param_2,undefined4 param_3,long *param_4,undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (param_2 < uVar2) {
    uVar6 = 1;
    if (1 < uVar2) {
      uVar6 = (ulong)uVar2;
    }
    uVar7 = (ulong)param_2;
    lVar3 = *param_4;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(long **)(param_1 + 0x80 + uVar7 * 8);
    *(long *)(param_1 + 0x80 + uVar7 * 8) = lVar3;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x80 + (uVar6 + uVar7) * 8) = param_3;
    *(undefined4 *)(param_1 + 0x84 + (uVar6 + uVar7) * 8) = param_5;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

