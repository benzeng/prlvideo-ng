
void FUN_100370bd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int *local_48;
  QObject *pQStack_40;
  undefined1 local_29;
  
  uVar2 = FUN_10018c280(param_2);
  lVar3 = FUN_1003192a0(uVar2,param_3);
  if (lVar3 == 0) {
    pQStack_40 = (QObject *)0x0;
  }
  else {
    pQStack_40 = (QObject *)FUN_100323e30(lVar3,0);
    if (pQStack_40 != (QObject *)0x0) {
      local_48 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQStack_40);
      piVar4 = (int *)0x0;
      if (local_48 != (int *)0x0) {
        LOCK();
        *local_48 = *local_48 + 1;
        local_29 = *local_48 != 0;
        UNLOCK();
        piVar4 = local_48;
      }
      goto LAB_100370c52;
    }
  }
  local_48 = (int *)0x0;
  piVar4 = (int *)0x0;
LAB_100370c52:
  piVar1 = local_48;
  FUN_100370810(param_1,&local_48);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (piVar1 != (int *)0x0)) {
      operator_delete(piVar1);
    }
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_29 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar4);
    }
  }
  return;
}

