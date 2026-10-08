
undefined8 *
FUN_100a6ae40(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long *param_4,int param_5,
             undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *local_38;
  
  FUN_100a68d20(&local_38,param_2,param_5 != 0,param_6,param_7);
  if (local_38 == (long *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  if ((((param_5 != 0) && (lVar3 = local_38[2], lVar3 != 0)) && (lVar4 = *param_4, lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x10) != 0)) {
    uVar2 = *(uint *)(lVar3 + 0x4c);
    if ((ulong)uVar2 == 0) {
      FUN_100df99c0("","IOCommunication",0,"Can\'t set buffer!");
      *param_1 = 0;
      goto LAB_100a6af15;
    }
    uVar6 = 1;
    if (1 < uVar2) {
      uVar6 = (ulong)uVar2;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = *(long **)(lVar3 + 0x80);
    *(long *)(lVar3 + 0x80) = lVar4;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    *(undefined4 *)(lVar3 + 0x80 + uVar6 * 8) = param_3;
    *(int *)(lVar3 + 0x84 + uVar6 * 8) = param_5;
  }
  *param_1 = local_38;
  LOCK();
  *(int *)(local_38 + 1) = (int)local_38[1] + 1;
  UNLOCK();
LAB_100a6af15:
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  return param_1;
}

