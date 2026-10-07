
undefined ** FUN_100529cc0(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR____cxa_pure_virtual_10111d5f0;
  *param_1 = &PTR____cxa_pure_virtual_10111d5f0;
  *(undefined4 *)(param_1 + 1) = param_4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    param_1[2] = 0;
  }
  else {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    ppuVar5 = (undefined **)(ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    plVar4 = (long *)param_1[2];
    param_1[2] = lVar3;
    if (plVar4 != (long *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar4 + 1);
      uVar2 = *puVar1;
      ppuVar5 = (undefined **)(ulong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        ppuVar5 = (undefined **)(**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  return ppuVar5;
}

