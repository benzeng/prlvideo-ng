
undefined4 FUN_1000a0e30(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *local_28;
  
  if (2 < DAT_1011b55f8) {
    lVar2 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
    }
    FUN_1008e3970("","vm",3,"Received stdin portion: \'%s\'",uVar4);
  }
  QMutex::lock();
  lVar2 = DAT_1011cc7e0;
  if (DAT_1011cc7e0 == 0) {
    QMutex::unlock();
    uVar3 = 0x80034001;
  }
  else {
    DAT_1011cc7e8 = DAT_1011cc7e8 + 1;
    QMutex::unlock();
    local_28 = (long *)*param_2;
    if (local_28 != (long *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    uVar3 = FUN_1004882d0(lVar2,&local_28);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_10003b2b0(&DAT_1011cc7d0);
  }
  return uVar3;
}

