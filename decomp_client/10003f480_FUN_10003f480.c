
void FUN_10003f480(QObject *param_1,undefined8 *param_2)

{
  QTimer *this;
  QObject *pQVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_a0;
  QArrayData *local_80;
  long local_78;
  QArrayData *local_70;
  QString local_68;
  int *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f9390;
  piVar12 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar12;
  if (1 < *piVar12 + 1U) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    local_31 = *piVar12 != 0;
    UNLOCK();
  }
  puVar4 = PTR_shared_null_1021e1288;
  auVar14._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar14._0_8_ = PTR_shared_null_1021e1288;
  auVar14._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar14;
  this = (QTimer *)(param_1 + 0x28);
  QTimer::QTimer(this,(QObject *)0x0);
  puVar5 = PTR_shared_null_1021e15e8;
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e15e8;
  QMutex::QMutex((QMutex *)(param_1 + 0x50),1);
  uStack_a0 = auVar14._8_8_;
  *(undefined **)(param_1 + 0x58) = puVar4;
  *(undefined8 *)(param_1 + 0x60) = uStack_a0;
  pQVar1 = param_1 + 0x68;
  auVar15._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar15._0_8_ = PTR_shared_null_1021e15e8;
  auVar15._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar15;
  uVar10 = FUN_100152280();
  uVar10 = FUN_1001548f0(uVar10,param_2);
  FUN_10018d830(&local_50,uVar10);
  QString::operator=((QString *)(param_1 + 0x18),&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003f5c7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10003f5c7:
  uVar8 = FUN_10018f860(uVar10);
  uVar9 = FUN_10018f890(uVar10);
  ResourceUtils::getOsIconPath(&local_58,uVar8,uVar9,10);
  QString::operator=((QString *)(param_1 + 0x20),&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003f62d;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10003f62d:
  QMutex::lock();
  plVar6 = DAT_1023108a8;
  if (DAT_1023108a8 != (long *)0x0) {
    DAT_1023108b0 = DAT_1023108b0 + 1;
  }
  QMutex::unlock();
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))(plVar6,param_2,param_1 + 0x58);
    FUN_1000b0670(plVar6,param_2,param_1 + 0x60);
    local_60 = (int *)puVar5;
    FUN_1000341d0(&local_60,param_1 + 0x58);
    FUN_1000341d0(&local_60,param_1 + 0x60);
    FUN_1000a65d0(&local_70);
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
    if (1 < *(int *)local_70 + 1U) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_48,0x1db66b6);
    QString::append(&local_68);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003f71d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10003f71d:
    FUN_1000341d0(&local_60,&local_68);
    if (*(int **)pQVar1 != local_60) {
      local_40 = local_60;
      if (*local_60 != -1) {
        if (*local_60 == 0) {
          QListData::detach((int)&local_40);
          iVar2 = local_40[2];
          if (iVar2 != local_40[3]) {
            piVar12 = local_60 + (long)local_60[2] * 2 + 4;
            piVar13 = local_40 + (long)iVar2 * 2 + 4;
            lVar11 = (long)local_40[3] * 8 + (long)iVar2 * -8;
            do {
              piVar3 = *(int **)piVar12;
              *(int **)piVar13 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar13 = piVar13 + 2;
              piVar12 = piVar12 + 2;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
        }
        else {
          LOCK();
          *local_60 = *local_60 + 1;
          local_31 = *local_60 != 0;
          UNLOCK();
        }
      }
      piVar12 = *(int **)pQVar1;
      *(int **)pQVar1 = local_40;
      local_40 = piVar12;
      FUN_100039a80(&local_40);
    }
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003f80d;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10003f80d:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003f83d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10003f83d:
    FUN_100039a80(&local_60);
  }
  param_1[0x44] = (QObject)((byte)param_1[0x44] | 1);
  QTimer::setInterval((int)this);
  QObject::connect(&local_78,this,"2timeout()",param_1,"1onDelayedRun()",0);
  bVar7 = 1;
  if (local_78 != 0) {
    bVar7 = QMetaObject::Connection::isConnected_helper();
    bVar7 = bVar7 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  if (bVar7 != 0) {
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",0,
                  "Error: failed to connect delayed run timer signals and slots for client with vmUuid=\"%s\""
                  ,local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10003f900;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_10003f900:
  if (plVar6 != (long *)0x0) {
    FUN_100055290(&DAT_102310898);
  }
  return;
}

