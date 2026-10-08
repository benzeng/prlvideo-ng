
void FUN_100289ea0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::property((char *)&local_48);
  QVariant::toString();
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100289f1e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100289f1e:
  QVariant::~QVariant(&local_48);
  if (iVar1 == 0) {
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar4 = 0;
    if (iVar1 == 3) {
      lVar4 = FUN_100177d20(uVar3,param_2);
    }
    else if (iVar1 == 2) {
      CPasswordDialog::newPassword();
      lVar4 = FUN_100177920(uVar3,param_2,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10028a0a8;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    else if (iVar1 == 1) {
      lVar4 = FUN_100177760(uVar3,param_2);
    }
LAB_10028a0a8:
    *(undefined1 *)(lVar4 + 0x60) = 1;
    QObject::connect(&local_68,lVar4,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onPasswordCheckComplete(PRL_RESULT)",0);
    if (local_68 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    return;
  }
  uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getLockDown();
  CVmLockDown::getHash();
  FUN_1009e01f0(&local_50,param_2,&local_58);
  uVar2 = FUN_100dda580(&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100289fc3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100289fc3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100289ff3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100289ff3:
  FUN_10081c6b0(param_1,uVar2);
  return;
}

