
void FUN_100611df0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  QArrayData *local_b0;
  QDateTime local_a8;
  QString local_a0;
  QArrayData *local_98;
  QDateTime local_90;
  QDateTime local_88;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::sender();
  QObject::property((char *)&local_40);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  if (*(int *)(local_30 + 4) == 0) goto LAB_1006121ce;
  uVar3 = FUN_100152280();
  lVar4 = FUN_100152bc0(uVar3,&local_30);
  if ((lVar4 == 0) || (iVar2 = FUN_10015a6e0(lVar4), iVar2 != 0)) goto LAB_1006121ce;
  uVar3 = FUN_10016f500(lVar4);
  cVar1 = FUN_10061b500(uVar3,0x20);
  if (cVar1 != '\0') goto LAB_1006121ce;
  uVar3 = FUN_10016f500(lVar4);
  FUN_10061abe0(&local_50,uVar3,0);
  iVar2 = QVariant::toInt((bool *)&local_50);
  if (iVar2 == -0x7ffeefff) {
    cVar1 = '\0';
  }
  else {
    uVar3 = FUN_10016f500(lVar4);
    FUN_10061abe0(&local_60,uVar3,0);
    iVar2 = QVariant::toInt((bool *)&local_60);
    if (iVar2 == -0x7ffeef8c) {
      cVar1 = '\0';
    }
    else {
      uVar3 = FUN_10016f500(lVar4);
      FUN_10061abe0(&local_70,uVar3,0);
      iVar2 = QVariant::toInt((bool *)&local_70);
      if (iVar2 == -0x7ffeef89) {
        cVar1 = '\0';
      }
      else {
        uVar3 = FUN_10016f500(lVar4);
        FUN_10061abe0(&local_80,uVar3,0);
        iVar2 = QVariant::toInt((bool *)&local_80);
        if (iVar2 == -0x7ffeef9b) {
          cVar1 = '\0';
        }
        else {
          FUN_100612440(&local_88,&local_30);
          QDateTime::currentDateTime();
          cVar1 = QDateTime::operator<(&local_90,&local_88);
          QDateTime::~QDateTime(&local_90);
          QDateTime::~QDateTime(&local_88);
        }
        QVariant::~QVariant(&local_80);
      }
      QVariant::~QVariant(&local_70);
    }
    QVariant::~QVariant(&local_60);
  }
  QVariant::~QVariant(&local_50);
  if (cVar1 == '\0') {
    if (DAT_102310958 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_100612690(pvVar5);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar5;
    }
    pvVar5 = DAT_102310958;
    local_e8 = (int *)0x0;
    uStack_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    local_b8 = 1;
    FUN_10060a8b0(*(undefined8 *)((long)DAT_102310958 + 0x10),5,&local_30,&local_e8);
    FUN_100608960(*(undefined8 *)((long)pvVar5 + 0x10),&local_30,0);
    QVariant::~QVariant((QVariant *)&local_c8);
    if (local_e8 != (int *)0x0) {
      LOCK();
      *local_e8 = *local_e8 + -1;
      local_21 = *local_e8 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_e8 != (int *)0x0)) {
        operator_delete(local_e8);
      }
    }
    goto LAB_1006121ce;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100612440(&local_a8,&local_30);
    local_b0 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_a0);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"Trial message skipped, next showtime %s",
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100612074;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100612074:
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_21 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006120aa;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_1006120aa:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006120e0;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006120e0:
    QDateTime::~QDateTime(&local_a8);
  }
  FUN_100609af0(param_1,&local_30,1);
LAB_1006121ce:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

