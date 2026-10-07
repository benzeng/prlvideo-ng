
undefined8 FUN_1004c6b80(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = operator_new(0x20);
  FUN_1004f4530(plVar4,param_1 + 0x80,param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  cVar3 = FUN_100041750(uVar5,plVar4);
  if (cVar3 == '\0') {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    LOCK();
    *(long *)(DAT_1011cc850 + 0xf0) = *(long *)(DAT_1011cc850 + 0xf0) + 1;
    UNLOCK();
    uVar5 = 0xf000001d;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",1,"couldn\'t schedule the request");
    }
  }
  else {
    LOCK();
    *(long *)(DAT_1011cc850 + 0xf0) = *(long *)(DAT_1011cc850 + 0xf0) + 1;
    UNLOCK();
    uVar5 = 0xffffffff;
  }
  LOCK();
  plVar1 = plVar4 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return uVar5;
}

