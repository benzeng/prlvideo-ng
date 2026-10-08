
void FUN_1007bf8a0(long param_1,char param_2)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  QObject *pQVar4;
  void *pvVar5;
  QArrayData *local_80;
  int *local_78;
  QObject *local_70;
  int *local_68;
  QObject *local_60;
  QArrayData *local_58;
  int *local_50;
  QObject *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar2 = operator_new(0x18);
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b5750(pQVar2,2,param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007bf913;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007bf913:
  QAction::setCheckable(SUB81(pQVar2,0));
  lVar1 = param_1 + 0x38;
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_50 = piVar3;
  local_48 = pQVar2;
  FUN_1007c57e0(lVar1,&local_50);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  pQVar4 = operator_new(0x18);
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007b5750(pQVar4,3,param_1,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007bf9c5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007bf9c5:
  QAction::setCheckable(SUB81(pQVar4,0));
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  local_68 = piVar3;
  local_60 = pQVar4;
  FUN_1007c57e0(lVar1,&local_68);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  pvVar5 = operator_new(0x10);
  FUN_1007b5f00(pvVar5,param_1);
  FUN_1007b5f30(pvVar5,pQVar2);
  FUN_1007b5f30(pvVar5,pQVar4);
  QActionGroup::setExclusive(SUB81(pvVar5,0));
  if (param_2 != '\0') {
    pQVar2 = operator_new(0x18);
    local_80 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1007b5750(pQVar2,0,param_1,&local_80);
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    local_78 = piVar3;
    local_70 = pQVar2;
    FUN_1007c57e0(lVar1,&local_78);
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar3);
      }
    }
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
  return;
}

