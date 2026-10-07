
void FUN_1005d6810(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_2;
  for (lVar2 = *(long *)(param_1 + 8); (param_2 != param_3 && (lVar5 = param_2, lVar2 != param_1));
      lVar2 = *(long *)(lVar2 + 8)) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    lVar5 = *(long *)(param_2 + 0x28);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(long **)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar5;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    if (lVar2 != param_2) {
      FUN_1005d6c90(lVar2 + 0x30,*(undefined8 *)(param_2 + 0x38),param_2 + 0x30,0);
    }
    param_2 = *(long *)(param_2 + 8);
    lVar5 = param_3;
  }
  if (lVar2 != param_1) {
    FUN_1005d6b80(param_1,lVar2,param_1);
    return;
  }
  FUN_1005d6900(param_1,param_1,lVar5,param_3,0);
  return;
}

