
void FUN_100424c30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  QString QVar7;
  Connection local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar1 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar2 = FUN_1001548f0(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424ca4;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100424ca4:
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    return;
  }
  QLineEdit::text();
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0,
     *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
    QVar7.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x70);
  }
  local_48 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  CVmHardDisk::setPassword(QVar7);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100424d51;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100424d51:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
  }
  pQVar3 = (QObject *)FUN_100197bf0(lVar2,uVar1,&local_40);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = *(int **)(param_1 + 200);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 200);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 200) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 200));
      }
    }
    *(int **)(param_1 + 200) = piVar4;
    *(QObject **)(param_1 + 0xd0) = pQVar3;
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
  lVar2 = *(long *)(param_1 + 0xd0);
  *(undefined1 *)(lVar2 + 0x60) = 1;
  lVar6 = 0;
  if ((*(long *)(param_1 + 200) != 0) && (lVar6 = 0, *(int *)(*(long *)(param_1 + 200) + 4) != 0)) {
    lVar6 = lVar2;
  }
  QObject::connect(local_50,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                   "1onPasswordChecked(PRL_RESULT)",0);
  QMetaObject::Connection::~Connection(local_50);
  QLabel::clear();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

