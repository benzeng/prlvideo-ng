
void FUN_1003e2430(long param_1)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *local_90;
  QObject *local_88;
  int *local_80;
  QObject *local_78;
  int *local_70;
  QObject *local_68;
  int *local_60;
  QObject *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  QObject *local_38;
  undefined1 local_29;
  
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,0x1d,0);
  lVar1 = param_1 + 0x28;
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_40 = piVar3;
  local_38 = pQVar2;
  FUN_1003e66e0(lVar1,&local_40);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,1,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_50 = piVar3;
  local_48 = pQVar2;
  FUN_1003e66e0(lVar1,&local_50);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,7,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_60 = piVar3;
  local_58 = pQVar2;
  FUN_1003e66e0(lVar1,&local_60);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,5,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_70 = piVar3;
  local_68 = pQVar2;
  FUN_1003e66e0(lVar1,&local_70);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,0x18,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_80 = piVar3;
  local_78 = pQVar2;
  FUN_1003e66e0(lVar1,&local_80);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  pQVar2 = operator_new(0x18);
  FUN_1003a4d40(pQVar2,0x1b,0);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_90 = piVar3;
  local_88 = pQVar2;
  FUN_1003e66e0(lVar1,&local_90);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_29 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar3);
    }
  }
  FUN_1003e2990(param_1);
  FUN_1003e2ef0(param_1);
  FUN_1003e31a0(param_1);
  return;
}

