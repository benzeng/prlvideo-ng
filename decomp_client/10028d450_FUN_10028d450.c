
undefined1 FUN_10028d450(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  void *pvVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  undefined1 uVar7;
  QDateTime local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QDateTime local_98;
  QDateTime local_90;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  undefined **local_40 [3];
  undefined1 local_21;
  
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_40,0x53);
  local_40[0] = &PTR_FUN_10226c710;
  cVar1 = CTaskManager::isTaskRunning(pCVar3);
  if (cVar1 == '\0') {
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_40);
  }
  else {
    if (DAT_102310958 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100612710(pvVar4);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar4;
    }
    cVar1 = FUN_100612940(DAT_102310958);
    CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_40);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar5 = FUN_10061b510(param_1);
  FUN_10015a2b0(&local_48,uVar5);
  FUN_10061abe0(&local_58,param_1,0);
  iVar2 = QVariant::toInt((bool *)&local_58);
  if (iVar2 == -0x7ffeefff) {
    cVar1 = '\0';
  }
  else {
    FUN_10061abe0(&local_68,param_1,0);
    iVar2 = QVariant::toInt((bool *)&local_68);
    if (iVar2 == -0x7ffeef8c) {
      cVar1 = '\0';
    }
    else {
      FUN_10061abe0(&local_78,param_1,0);
      iVar2 = QVariant::toInt((bool *)&local_78);
      if (iVar2 == -0x7ffeef89) {
        cVar1 = '\0';
      }
      else {
        FUN_10061abe0(&local_88,param_1,0);
        iVar2 = QVariant::toInt((bool *)&local_88);
        if (iVar2 == -0x7ffeef9b) {
          cVar1 = '\0';
        }
        else {
          FUN_100612440(&local_90,&local_48);
          QDateTime::currentDateTime();
          cVar1 = QDateTime::operator<(&local_98,&local_90);
          QDateTime::~QDateTime(&local_98);
          QDateTime::~QDateTime(&local_90);
        }
        QVariant::~QVariant(&local_88);
      }
      QVariant::~QVariant(&local_78);
    }
    QVariant::~QVariant(&local_68);
  }
  QVariant::~QVariant(&local_58);
  if (cVar1 == '\0') {
    uVar7 = 0;
    goto LAB_10028d757;
  }
  uVar7 = 1;
  if (DAT_10230ffd0 < 2) goto LAB_10028d757;
  FUN_100612440(&local_b0,&local_48);
  pQVar6 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_a8);
  QString::toUtf8();
  FUN_100df99c0("[LICENSE]","prl_client_app",2,"Trial IPN skipped, next showtime %s",
                local_a0 + *(long *)(local_a0 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028d6d3;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10028d6d3:
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028d709;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10028d709:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_21 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028d73f;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_10028d73f:
  QDateTime::~QDateTime(&local_b0);
LAB_10028d757:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar7;
}

