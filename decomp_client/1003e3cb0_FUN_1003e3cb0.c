
undefined8 FUN_1003e3cb0(long param_1)

{
  QObject *pQVar1;
  int *piVar2;
  undefined8 uVar3;
  int *local_38;
  QObject *local_30;
  undefined1 local_21;
  
  pQVar1 = (QObject *)FUN_1003e3f10();
  if (pQVar1 == (QObject *)0x0) {
    uVar3 = 0;
  }
  else {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
    local_38 = piVar2;
    local_30 = pQVar1;
    FUN_1003e6160(param_1 + 0x28,&local_38);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar2);
      }
    }
    (**(code **)(*(long *)pQVar1 + 0x20))(pQVar1);
    uVar3 = 1;
  }
  return uVar3;
}

