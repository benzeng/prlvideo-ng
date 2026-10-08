
undefined8 FUN_1002c9260(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  WebUtils::maskedEMail(&local_58);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",0,"Sign in with email: %s.",
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c92e5;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1002c92e5:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c9315;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002c9315:
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1de471a);
    QString::operator=(&local_60,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c93ed;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002c93ed:
    local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x50);
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1dd7195);
    QString::append(&local_78);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c9457;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1002c9457:
    local_70.field0_0x0 = local_78.field0_0x0;
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_70);
    QString::operator=(&local_68,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c94ba;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1002c94ba:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c957c;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
  else if (iVar1 == 1) {
    QString::fromUtf8_helper((char *)&local_38,0x1de4741);
    QString::operator=(&local_60,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c9389;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1002c9389:
    QString::operator=(&local_68,(QString *)(param_1 + 0x58));
  }
  else if (iVar1 == 2) {
    QString::fromUtf8_helper((char *)&local_30,0x1de4768);
    QString::operator=(&local_60,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c954f;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1002c954f:
    QString::operator=(&local_68,(QString *)(param_1 + 0x58));
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Unknown auth type: %d.");
  }
LAB_1002c957c:
  uVar2 = FUN_1002c6aa0(param_1);
  uVar2 = FUN_100175d50(uVar2,&local_60,&local_68,0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c95c9;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002c95c9:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return uVar2;
}

