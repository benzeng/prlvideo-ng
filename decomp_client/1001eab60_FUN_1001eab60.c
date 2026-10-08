
undefined8 FUN_1001eab60(long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  Connection local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8 [2];
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  undefined *local_60 [2];
  QArrayData *local_50;
  _func_void_Node_ptr *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_68,uVar7);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001eabd6;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1001eabd6:
  cVar2 = COsInstallationInfo::load();
  if (cVar2 == '\0') {
    uVar7 = 0x80000009;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t load OS installation info.");
  }
  else {
    COsInstallationInfo::linuxInfo();
    QString::operator=((QString *)(param_1 + 0x30),&local_80);
    QString::operator=((QString *)(param_1 + 0x38),&local_78);
    QString::operator=((QString *)(param_1 + 0x40),&local_70);
    FUN_1001eb920(&local_80);
    COsInstallationInfo::cdInfo();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_10018d860(&local_b8,uVar7);
    QDir::fromNativeSeparators(&local_b0);
    QString::fromUtf8_helper((char *)&local_40,0x1dda693);
    puVar4 = (undefined8 *)QString::append(&local_b0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001eaccb;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1001eaccb:
    local_a8[0] = (QArrayData *)*puVar4;
    if (1 < *(int *)local_a8[0] + 1U) {
      LOCK();
      *(int *)local_a8[0] = *(int *)local_a8[0] + 1;
      local_31 = *(int *)local_a8[0] != 0;
      UNLOCK();
    }
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ead1c;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_1001ead1c:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ead52;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1001ead52:
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_10018f890(uVar7);
    uVar5 = FUN_100152280();
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_100188480(&local_c0,uVar7);
    lVar6 = FUN_1001547d0(uVar5,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001eadf5;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1001eadf5:
    if (lVar6 == 0) {
      uVar7 = 0x80000009;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is invalid.");
    }
    else {
      local_c8 = local_98;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      lVar6 = FUN_1001758f0(lVar6,uVar3,(QString *)(param_1 + 0x30),(QString *)(param_1 + 0x40),
                            (QString *)(param_1 + 0x38),&local_c8,local_a8);
      uVar7 = 0x80000009;
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x60) = 1;
        uVar7 = 0;
        QObject::connect(local_d0,lVar6,"2jobCompleted(PRL_RESULT)",param_1,
                         "1onCreateUnattendedIsoFinished(PRL_RESULT)",0);
        QMetaObject::Connection::~Connection(local_d0);
      }
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001eaf11;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
    }
LAB_1001eaf11:
    if (*(int *)local_a8[0] != -1) {
      if (*(int *)local_a8[0] != 0) {
        LOCK();
        *(int *)local_a8[0] = *(int *)local_a8[0] + -1;
        local_31 = *(int *)local_a8[0] != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001eaf47;
      }
      QArrayData::deallocate(local_a8[0],2,8);
    }
LAB_1001eaf47:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001eaf7d;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1001eaf7d:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001eafb3;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_1001eafb3:
  local_60[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001eaff1;
    }
    QHashData::free_helper(local_48);
  }
LAB_1001eaff1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001eb021;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001eb021:
  QObject::~QObject((QObject *)local_60);
  return uVar7;
}

