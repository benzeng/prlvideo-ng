
void FUN_1007bec40(long param_1)

{
  QObject *pQVar1;
  QObject *pQVar2;
  int *piVar3;
  int *local_68;
  QObject *local_60;
  QArrayData *local_58;
  int *local_50;
  QObject *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar1 = operator_new(0x18);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc3fe1);
  FUN_1007b5750(pQVar1,0xc,param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007becc4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007becc4:
  pQVar2 = operator_new(0x18);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b5750(pQVar2,0,param_1,&local_58);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_50 = piVar3;
  local_48 = pQVar2;
  FUN_1007c57e0(param_1 + 0x38,&local_50);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007bed61;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007bed61:
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
  local_68 = piVar3;
  local_60 = pQVar1;
  FUN_1007c57e0(param_1 + 0x38,&local_68);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  return;
}

