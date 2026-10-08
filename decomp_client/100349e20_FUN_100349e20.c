
void FUN_100349e20(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  Connection local_b0 [8];
  QDateTime local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  Data_conflict local_70;
  QArrayData *local_68;
  QString local_60 [2];
  QDateTime local_50;
  code *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  plVar2 = (long *)0x0;
  if (*(char *)(param_1 + 0x30) == '\0') goto LAB_10034a162;
  FUN_10034ad30(&local_50,param_1);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_68,uVar5);
  FUN_10034d220(local_60,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100349ea9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100349ea9:
  local_70.field7 = QString::fromAscii_helper("MaintenanceNextRun",0x12);
  QVariant::QVariant(&local_80,&local_50);
  QSettings::setValue(local_60,(QVariant *)&local_70);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70.field15 != -1) {
    if (*(int *)local_70.field15 != 0) {
      LOCK();
      *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
      local_21 = *(int *)local_70.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100349f15;
    }
    QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
  }
LAB_100349f15:
  if (2 < DAT_10230ffd0) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100319410(&local_90,uVar5);
    QString::toUtf8();
    pQVar4 = local_88 + *(long *)(local_88 + 0x10);
    QDateTime::toString(&local_a0,&local_50,0);
    QString::toUtf8();
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",3,
                  "Scheduled maintenance time for \'%s\' is \'%s\'",pQVar4,
                  local_98 + *(long *)(local_98 + 0x10));
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100349fea;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100349fea:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_21 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10034a020;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10034a020:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10034a050;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10034a050:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10034a086;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10034a086:
  plVar2 = operator_new(0x20);
  QDateTime::QDateTime(&local_a8,&local_50);
  FUN_10034d330(plVar2,&local_a8);
  QDateTime::~QDateTime(&local_a8);
  local_38 = FUN_10034c9b0;
  local_30 = 0;
  local_48 = FUN_10034c9d0;
  local_40 = 0;
  puVar3 = operator_new(0x20);
  *puVar3 = 1;
  *(code **)(puVar3 + 2) = FUN_10034d570;
  *(code **)(puVar3 + 4) = FUN_10034c9d0;
  *(undefined8 *)(puVar3 + 6) = 0;
  QObject::connectImpl(local_b0,plVar2,&local_38,param_1,&local_48,puVar3,0,0,&DAT_1021efb70);
  QMetaObject::Connection::~Connection(local_b0);
  QSettings::~QSettings((QSettings *)local_60);
  QDateTime::~QDateTime(&local_50);
LAB_10034a162:
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != plVar2) && (*(long **)(param_1 + 0x28) = plVar2, plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}

