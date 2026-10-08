
undefined8 FUN_1002d5640(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  Data_conflict local_1b8;
  undefined4 local_1b0;
  QArrayData *local_1a8;
  int *local_1a0 [4];
  QVariant local_180 [2];
  Data_conflict local_168;
  undefined4 local_160;
  QArrayData *local_158;
  int *local_150 [4];
  QVariant local_130 [2];
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  int *local_100 [4];
  QVariant local_e0 [2];
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  int *local_b0 [4];
  QVariant local_90 [2];
  Data_conflict local_78;
  undefined4 local_70;
  QArrayData *local_68;
  int *local_60 [4];
  QVariant local_40 [2];
  undefined1 local_21;
  
  uVar4 = 0x3bfa;
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    local_68 = (QArrayData *)
               QString::fromAscii_helper
                         ("1onDisconnectAllValidationAnswered(PRL_RESULT, Messaging::ButtonID)",0x43
                         );
    local_70 = 0x80000000;
    local_78.field7 = 0;
    FUN_100a1c600(local_60,param_1,&local_68,&local_78);
    QVariant::~QVariant((QVariant *)&local_78);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002d56e7;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1002d56e7:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_1002d6110(uVar4,local_60);
    if (cVar3 == '\0') {
LAB_1002d5801:
      cVar3 = '\x02';
    }
    else {
      local_b8 = (QArrayData *)
                 QString::fromAscii_helper
                           ("1onQuestionAnswered(PRL_RESULT, Messaging::ButtonID)",0x34);
      local_c0 = 0x80000000;
      local_c8.field7 = 0;
      FUN_100a1c600(local_b0,param_1,&local_b8,&local_c8);
      QVariant::~QVariant((QVariant *)&local_c8);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_21 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002d579b;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1002d579b:
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      cVar2 = FUN_1002d6640(uVar4,local_b0);
      QVariant::~QVariant(local_90);
      if (local_b0[0] != (int *)0x0) {
        LOCK();
        *local_b0[0] = *local_b0[0] + -1;
        local_21 = *local_b0[0] != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_b0[0] != (int *)0x0)) {
          operator_delete(local_b0[0]);
        }
      }
      cVar3 = '\x01';
      if (cVar2 == '\0') goto LAB_1002d5801;
    }
    QVariant::~QVariant(local_40);
    if (local_60[0] != (int *)0x0) {
      LOCK();
      *local_60[0] = *local_60[0] + -1;
      iVar1 = *local_60[0];
      UNLOCK();
      local_150[0] = local_60[0];
joined_r0x0001002d5b7e:
      local_21 = iVar1 != 0;
      if ((!(bool)local_21) && (local_150[0] != (int *)0x0)) {
        operator_delete(local_150[0]);
      }
    }
    break;
  default:
    goto switchD_1002d5674_caseD_1;
  case 3:
    local_108 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onQuestionAnswered(PRL_RESULT, Messaging::ButtonID)",0x34);
    local_110 = 0x80000000;
    local_118.field7 = 0;
    FUN_100a1c600(local_100,param_1,&local_108,&local_118);
    QVariant::~QVariant((QVariant *)&local_118);
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_21 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002d58c4;
      }
      QArrayData::deallocate(local_108,2,8);
    }
LAB_1002d58c4:
    if (*(char *)(param_1 + 0x2c) == '\0') {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      cVar3 = FUN_1002d6640(uVar4,local_100);
      if (cVar3 != '\0') goto LAB_1002d58f6;
      QVariant::~QVariant(local_e0);
      if (local_100[0] != (int *)0x0) {
        LOCK();
        *local_100[0] = *local_100[0] + -1;
        local_21 = *local_100[0] != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_100[0] != (int *)0x0)) {
          operator_delete(local_100[0]);
        }
      }
      goto LAB_1002d5bd2;
    }
LAB_1002d58f6:
    QVariant::~QVariant(local_e0);
    if (local_100[0] != (int *)0x0) {
      LOCK();
      *local_100[0] = *local_100[0] + -1;
      local_21 = *local_100[0] != 0;
      UNLOCK();
      if ((!(bool)local_21) && (local_100[0] != (int *)0x0)) {
        operator_delete(local_100[0]);
        return 0;
      }
    }
    goto LAB_1002d5bda;
  case 4:
    cVar3 = *(char *)(param_1 + 0x2c);
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_10018c2b0(uVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar2 = CVmHostSharing::isShareUserHomeDir();
    if (cVar3 != cVar2) {
      return 0;
    }
    return 0x80000009;
  case 6:
    local_158 = (QArrayData *)
                QString::fromAscii_helper
                          ("1onChangeHostSharingValidationAnswered(PRL_RESULT, Messaging::ButtonID)"
                           ,0x47);
    local_160 = 0x80000000;
    local_168.field7 = 0;
    FUN_100a1c600(local_150,param_1,&local_158,&local_168);
    QVariant::~QVariant((QVariant *)&local_168);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_21 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002d5a2d;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1002d5a2d:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar3 = FUN_1002d6110(uVar4,local_150);
    if (cVar3 == '\0') {
LAB_1002d5b54:
      cVar3 = '\x02';
    }
    else {
      local_1a8 = (QArrayData *)
                  QString::fromAscii_helper
                            ("1onQuestionAnswered(PRL_RESULT, Messaging::ButtonID)",0x34);
      local_1b0 = 0x80000000;
      local_1b8.field7 = 0;
      FUN_100a1c600(local_1a0,param_1,&local_1a8,&local_1b8);
      QVariant::~QVariant((QVariant *)&local_1b8);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_21 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1002d5ae4;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_1002d5ae4:
      cVar3 = '\x01';
      if (*(char *)(param_1 + 0x2c) == '\0') {
        uVar4 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        cVar3 = FUN_1002d6640(uVar4,local_1a0);
      }
      QVariant::~QVariant(local_180);
      if (local_1a0[0] != (int *)0x0) {
        LOCK();
        *local_1a0[0] = *local_1a0[0] + -1;
        local_21 = *local_1a0[0] != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_1a0[0] != (int *)0x0)) {
          operator_delete(local_1a0[0]);
        }
      }
      if (cVar3 == '\0') goto LAB_1002d5b54;
    }
    QVariant::~QVariant(local_130);
    if (local_150[0] != (int *)0x0) {
      LOCK();
      *local_150[0] = *local_150[0] + -1;
      iVar1 = *local_150[0];
      UNLOCK();
      goto joined_r0x0001002d5b7e;
    }
  }
  uVar4 = 0;
  if (cVar3 != '\x01') {
LAB_1002d5bd2:
    CAbstractTask::setWaitForSubTaskCompletion();
LAB_1002d5bda:
    uVar4 = 0;
  }
switchD_1002d5674_caseD_1:
  return uVar4;
}

