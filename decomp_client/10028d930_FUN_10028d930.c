
void FUN_10028d930(long *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long local_b0;
  long local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  cVar1 = FUN_10028d450(param_1[3]);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010028d978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x3bfa);
    return;
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onDialogClosed(CLicenseManager::DialogType, const QString&, int)",0x41);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028d9eb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10028d9eb:
  if (DAT_102310958 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100612710(pvVar2);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar2;
  }
  pvVar2 = DAT_102310958;
  uVar3 = FUN_10061b510(param_1[3]);
  FUN_10015a2b0(&local_88,uVar3);
  lVar7 = 0;
  if ((param_1[5] != 0) && (lVar7 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar7 = param_1[6];
  }
  cVar1 = FUN_10060b2b0(pvVar2,6,&local_88,local_68,lVar7);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028da91;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10028da91:
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_10028dcdc;
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_100612710(pvVar2);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar2;
  }
  pvVar2 = DAT_102310958;
  uVar3 = FUN_10061b510(param_1[3]);
  FUN_10015a2b0(&local_90,uVar3);
  pQVar4 = (QObject *)FUN_100612840(pvVar2,&local_90);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = (int *)param_1[10];
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      piVar6 = (int *)param_1[10];
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_29 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_29) && ((void *)param_1[10] != (void *)0x0)) {
        operator_delete((void *)param_1[10]);
      }
    }
    param_1[10] = (long)piVar5;
    param_1[0xb] = (long)pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10028db96;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10028db96:
  if (((param_1[10] != 0) && (*(int *)(param_1[10] + 4) != 0)) && (param_1[0xb] != 0)) {
    *(undefined1 *)(param_1 + 7) = 0;
    QObject::sender();
    lVar7 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a9e0);
    if (((-1 < param_2) && (lVar7 != 0)) && (cVar1 = FUN_1002e2ac0(lVar7), cVar1 != '\0')) {
      CAbstractTask::setOption(lVar7,2,0);
      pcVar8 = (char *)0x0;
      if ((param_1[10] != 0) && (pcVar8 = (char *)0x0, *(int *)(param_1[10] + 4) != 0)) {
        pcVar8 = (char *)param_1[0xb];
      }
      local_a8 = lVar7;
      QVariant::QVariant(&local_a0,0x27,&local_a8,1);
      QObject::setProperty(pcVar8,(QVariant *)"PromoTask");
      QVariant::~QVariant(&local_a0);
      lVar9 = 0;
      if ((param_1[10] != 0) && (lVar9 = 0, *(int *)(param_1[10] + 4) != 0)) {
        lVar9 = param_1[0xb];
      }
      QObject::connect(&local_b0,lVar9,"2destroyed()",lVar7,"1deleteLater()",0);
      if (local_b0 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b0);
    }
  }
LAB_10028dcdc:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

