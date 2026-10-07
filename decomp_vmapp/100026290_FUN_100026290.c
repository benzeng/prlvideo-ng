
undefined8 FUN_100026290(long param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  local_20 = lVar2;
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *param_4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(long **)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar4;
    local_28 = param_2;
    local_24 = param_3;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    uVar6 = FUN_1004c2f50(lVar3,3,&local_28,8,1,0);
  }
  if (lVar2 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

