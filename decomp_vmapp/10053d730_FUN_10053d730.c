
void FUN_10053d730(long param_1)

{
  byte bVar1;
  pid_t pVar2;
  long lVar3;
  QArrayData *pQVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  pid_t pVar8;
  int *piVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  char *pcVar11;
  long unaff_RBX;
  int iVar12;
  bool bVar13;
  int local_7c;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QTypedArrayData<unsigned_short> *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x28) = 1;
  UNLOCK();
  iVar12 = (int)param_1 + 0x38;
  cVar6 = '\x01';
LAB_10053d76d:
  if (*(int *)(param_1 + 0x28) == 0) {
    cVar5 = QSemaphore::tryAcquire(iVar12);
    if (cVar5 == '\0') {
      bVar13 = false;
    }
    else {
      LOCK();
      unaff_RBX = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = 0;
      UNLOCK();
      bVar13 = unaff_RBX != 0;
    }
  }
  else {
    do {
      QSemaphore::acquire(iVar12);
      LOCK();
      unaff_RBX = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = 0;
      UNLOCK();
      if (unaff_RBX != 0) {
        bVar13 = true;
        break;
      }
      bVar13 = false;
      unaff_RBX = 0;
    } while (*(int *)(param_1 + 0x28) != 0);
  }
  if (!bVar13) goto LAB_10053d859;
  if (cVar6 != '\0') {
    cVar6 = FUN_10053d390(param_1,unaff_RBX,param_1 + 0x60);
    if (cVar6 == '\0') {
      LOCK();
      iVar7 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = 0;
      UNLOCK();
      if (iVar7 != 0) {
        QSemaphore::release(iVar12);
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x75);
      if (bVar1 != 0) {
        *(byte *)(param_1 + 0x74) = bVar1;
        *(byte *)(param_1 + 0x75) = bVar1 ^ 1;
      }
    }
    goto LAB_10053d76d;
  }
  FUN_1004c07d0(*(undefined8 *)(param_1 + 0x18),unaff_RBX,0xf000001c);
  cVar6 = '\0';
LAB_10053d859:
  if (*(int *)(param_1 + 0x68) != -1) {
    iVar12 = _shutdown(*(int *)(param_1 + 0x68),2);
    if ((iVar12 == 0) || (piVar9 = ___error(), *piVar9 != 9)) {
      _close(*(int *)(param_1 + 0x68));
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x74) = 0;
  if (cVar6 != '\0') {
    if (DAT_1011b55f8 < 2) {
      return;
    }
    pcVar11 = "worker is finishing";
LAB_10053db19:
    FUN_1008e3970("","InvSharingHost",2,pcVar11);
    return;
  }
  cVar6 = QMutex::tryLock((int)param_1 + 0x40);
  if (cVar6 == '\0') {
    if (DAT_1011b55f8 < 2) {
      return;
    }
    pcVar11 = "worker: the share has been unmounted by the vm";
    goto LAB_10053db19;
  }
  pVar2 = *(pid_t *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_50 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x48);
  pQVar10 = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
    pQVar10 = ((QString *)(param_1 + 0x48))->field0_0x0;
  }
  if (pQVar10 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x48),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053d95b;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10053d95b:
  if (*(undefined **)(param_1 + 0x58) != PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x58),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053d9b2;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10053d9b2:
  iVar12 = _kill(pVar2,0x1e);
  if (iVar12 == -1) {
    piVar9 = ___error();
    if ((*piVar9 != 0) && (0 < DAT_1011b55f8)) {
      pcVar11 = _strerror(*piVar9);
      FUN_1008e3970("","InvSharingHost",1,"cleanup: failed to kill vfstool(%d): %s",pVar2,pcVar11);
    }
  }
  QString::toUtf8();
  iVar7 = _unmount((char *)(local_58 + *(long *)(local_58 + 0x10)),0x80000);
  iVar12 = 0;
  if (iVar7 == -1) {
    piVar9 = ___error();
    iVar12 = *piVar9;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053da68;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10053da68:
  if (iVar12 == 0x16) {
    if (1 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("","InvSharingHost",2,"cleanup: nothing to unmount at %s",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10053dbc1;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
  else if ((iVar12 != 0) && (0 < DAT_1011b55f8)) {
    QString::toUtf8();
    pQVar4 = local_68;
    lVar3 = *(long *)(local_68 + 0x10);
    pcVar11 = _strerror(iVar12);
    FUN_1008e3970("","InvSharingHost",1,"cleanup: failed to unmount \"%s\": %s",pQVar4 + lVar3,
                  pcVar11);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053dbc1;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_10053dbc1:
  QString::toUtf8();
  iVar7 = _rmdir((char *)(local_70 + *(long *)(local_70 + 0x10)));
  iVar12 = 0;
  if (iVar7 == -1) {
    piVar9 = ___error();
    iVar12 = *piVar9;
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053dc1b;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10053dc1b:
  if ((iVar12 != 0) && (0 < DAT_1011b55f8)) {
    QString::toUtf8();
    pQVar4 = local_78;
    lVar3 = *(long *)(local_78 + 0x10);
    pcVar11 = _strerror(iVar12);
    FUN_1008e3970("","InvSharingHost",1,"cleanup: failed to remove mountpoint \"%s\": %s",
                  pQVar4 + lVar3,pcVar11);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053dcaf;
      }
      QArrayData::deallocate(local_78,1,8);
    }
  }
LAB_10053dcaf:
  FUN_10053df50(*(undefined8 *)(param_1 + 0x10),param_1);
  QMutex::unlock();
  if (((pVar2 != 0) && (pVar8 = _waitpid(pVar2,&local_7c,0), pVar8 == pVar2)) && (1 < DAT_1011b55f8)
     ) {
    FUN_1008e3970("","InvSharingHost",2,"cleanup: the process %d has finished",pVar2);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50,2,8);
  }
  return;
}

