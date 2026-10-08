
void FUN_1003a6e20(long param_1,QString *param_2)

{
  bool *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  QObject *pQVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  bool *pbVar13;
  long local_a0;
  QVariant local_98;
  QString local_88;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  lVar12 = 0;
  if (lVar5 == 0) {
LAB_1003a6eb6:
    lVar11 = 0;
  }
  else {
    do {
      while (lVar11 = lVar5, cVar2 = operator<((QString *)(lVar11 + 0x18),param_2), cVar2 != '\0') {
        lVar5 = *(long *)(lVar11 + 0x10);
        if (*(long *)(lVar11 + 0x10) == 0) {
          lVar11 = lVar12;
          if (lVar12 == 0) goto LAB_1003a6eb6;
          goto LAB_1003a6ea6;
        }
      }
      lVar5 = *(long *)(lVar11 + 8);
      lVar12 = lVar11;
    } while (*(long *)(lVar11 + 8) != 0);
LAB_1003a6ea6:
    cVar2 = operator<(param_2,(QString *)(lVar11 + 0x18));
    if (cVar2 != '\0') goto LAB_1003a6eb6;
  }
  puVar8 = &local_58;
  if (lVar11 != 0) {
    puVar8 = (undefined8 *)(lVar11 + 0x20);
  }
  piVar10 = (int *)*puVar8;
  if (piVar10 != (int *)0x0) {
    pbVar1 = (bool *)puVar8[1];
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
    pbVar13 = (bool *)0x0;
    if (piVar10[1] != 0) {
      pbVar13 = pbVar1;
    }
    LOCK();
    *piVar10 = *piVar10 + -1;
    local_31 = *piVar10 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar10);
    }
    if ((pbVar13 != (bool *)0x0) &&
       (cVar2 = CSdkRequest::isCompleted(pbVar13,(int *)0x0), cVar2 == '\0')) {
      CSdkRequest::cancel();
    }
  }
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_70.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1df17c5);
  QString::append(&local_70);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a6f8d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003a6f8d:
  FUN_1003e1800(&local_68,uVar6,&local_70,0);
  uVar3 = QVariant::toUInt((bool *)&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a6fe6;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1003a6fe6:
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_88.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_31 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df17d1);
  QString::append(&local_88);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a705c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a705c:
  FUN_1003e1800(&local_80,uVar6,&local_88,0);
  uVar4 = QVariant::toInt((bool *)&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a70b8;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1003a70b8:
  uVar3 = SdkUtils::getHddOffsetMask(uVar3,uVar4);
  uVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  pQVar7 = (QObject *)FUN_100197190(uVar6,uVar3,0x1000);
  if ((pQVar7 == (QObject *)0x0) ||
     (cVar2 = CSdkRequest::isCompleted((bool *)pQVar7,(int *)0x0), cVar2 != '\0')) {
    puVar8 = (undefined8 *)FUN_1003ae2f0(param_1 + 0x38,param_2);
    piVar10 = (int *)*puVar8;
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if ((!(bool)local_31) && ((void *)*puVar8 != (void *)0x0)) {
        operator_delete((void *)*puVar8);
      }
      puVar8[1] = 0;
      *puVar8 = 0;
    }
  }
  else {
    pQVar7[0x60] = (QObject)0x1;
    QVariant::QVariant(&local_98,param_2);
    QObject::setProperty((char *)pQVar7,(QVariant *)"hddStoragePath");
    QVariant::~QVariant(&local_98);
    puVar8 = (undefined8 *)FUN_1003ae2f0(param_1 + 0x38,param_2);
    piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    piVar10 = (int *)*puVar8;
    if (piVar10 != piVar9) {
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + 1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        piVar10 = (int *)*puVar8;
      }
      if (piVar10 != (int *)0x0) {
        LOCK();
        *piVar10 = *piVar10 + -1;
        local_31 = *piVar10 != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((void *)*puVar8 != (void *)0x0)) {
          operator_delete((void *)*puVar8);
        }
      }
      *puVar8 = piVar9;
      puVar8[1] = pQVar7;
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    QObject::connect(&local_a0,pQVar7,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onGetFreedHddSizeReceived(PRL_RESULT)",0);
    if (local_a0 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_a0);
  }
  return;
}

