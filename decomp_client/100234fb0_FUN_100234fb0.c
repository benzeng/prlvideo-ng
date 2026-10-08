
void FUN_100234fb0(QObject *param_1,int param_2)

{
  bool bVar1;
  QObject *pQVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  Data_conflict *pDVar6;
  char *pcVar7;
  QArrayData *local_170;
  CTaskGenericId local_168 [24];
  QArrayData *local_150;
  int *local_148 [4];
  QVariant local_128 [2];
  Data_conflict local_110;
  uint local_108;
  QArrayData *local_100;
  QString local_f8 [22];
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  pcVar7 = "unknown";
  if (*(long *)(param_1 + 0x18) == 0) {
    bVar1 = false;
  }
  else if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    bVar1 = false;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    bVar1 = false;
  }
  else {
    FUN_1003193e0(&local_48);
    QString::toLocal8Bit();
    pcVar7 = (char *)(local_40 + *(long *)(local_40 + 0x10));
    bVar1 = true;
  }
  FUN_100df99c0("","prl_client_app",0,"Failed to start Coherence in VM [%s]. Reason=%d",pcVar7,
                param_2);
  if (bVar1) {
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10023506b;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10023506b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10023509b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10023509b:
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) goto LAB_100235415;
  pQVar2 = (QObject *)FUN_100319c00();
  QObject::disconnect(pQVar2,"2coherenceAboutToStart()",param_1,"1onCoherenceAboutToStart()");
  QObject::disconnect(pQVar2,"2coherenceStarted()",param_1,"1onCoherenceStarted()");
  QObject::disconnect(pQVar2,"2coherenceStartFailed( unsigned int )",param_1,
                      "1onCoherenceStartFailed( unsigned int )");
  if (((param_2 - 2U < 0xb) && (param_2 != 3)) && (param_2 != 10)) {
    uVar5 = 0;
    MessageParams::MessageParams
              ((MessageParams *)local_f8,*(int *)(&DAT_100e16f80 + (long)(int)(param_2 - 2U) * 4),
               (QWidget *)0x0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_1003193e0(&local_100,uVar5);
    MessageParams::setIssuerId(local_f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_21 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002351bc;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1002351bc:
    local_108 = 0x80000000;
    local_110.field7 = 0;
    bVar1 = true;
    if (DAT_102271aec == 0) {
      DAT_102271aec = FUN_100239970("MessageParams",0xffffffffffffffff,1);
      uVar4 = local_108 & 0x40000000;
      if (uVar4 == 0) {
        uVar4 = 0;
        goto LAB_100235229;
      }
      if (*(int *)(local_110.field7 + 8) == 1) {
        bVar1 = false;
        goto LAB_100235229;
      }
LAB_100235239:
      QVariant::QVariant(&local_38,DAT_102271aec,local_f8,0);
      QVariant::operator=((QVariant *)&local_110,&local_38);
      QVariant::~QVariant(&local_38);
    }
    else {
      uVar4 = 0;
LAB_100235229:
      if ((DAT_102271aec != (local_108 & 0x3fffffff)) &&
         (7 < (local_108 & 0x3fffffff | DAT_102271aec))) goto LAB_100235239;
      local_108 = uVar4 | DAT_102271aec & 0x3fffffff;
      if (bVar1) {
        pDVar6 = &local_110;
      }
      else {
        pDVar6 = *(Data_conflict **)local_110.field15;
      }
      FUN_1001f39d0(pDVar6);
      FUN_100239ae0(pDVar6,local_f8);
    }
    local_150 = (QArrayData *)
                QString::fromAscii_helper("1onNeedToProcessErrorMessage(const QVariant&)",0x2d);
    FUN_100a1c600(local_148,param_1,&local_150,&local_110);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_21 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10023530d;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_10023530d:
    uVar3 = CTaskManager::instance();
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_1003193e0(&local_170,uVar5);
    FUN_100033dd0(local_168,&local_170);
    CTaskManager::addTaskWatcher(uVar3,local_148,local_168,4);
    CTaskGenericId::~CTaskGenericId(local_168);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_21 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002353a8;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_1002353a8:
    QVariant::~QVariant(local_128);
    if (local_148[0] != (int *)0x0) {
      LOCK();
      *local_148[0] = *local_148[0] + -1;
      local_21 = *local_148[0] != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_148[0] != (int *)0x0)) {
        operator_delete(local_148[0]);
      }
    }
    QVariant::~QVariant((QVariant *)&local_110);
    FUN_1001f39d0(local_f8);
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10031c020(uVar5,0);
LAB_100235415:
  (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
  return;
}

