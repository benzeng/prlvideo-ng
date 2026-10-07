
undefined4 FUN_100705ad0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined4 uVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar1 = FUN_100702080();
  FUN_100701f80(&local_30,param_1);
  uVar4 = 0xffffffff;
  if (iVar1 == 2) {
    QString::toUtf8();
    lVar2 = _getgrnam(local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100705b51;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100705b51:
    if (lVar2 == 0) {
      piVar3 = ___error();
      iVar1 = *piVar3;
      QString::toUtf8();
      FUN_1008e3970("","CAuth",0,
                    "Failed to extract group info for group name \'%s\'. Error code: %d",
                    local_50 + *(long *)(local_50 + 0x10),iVar1);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100705c2c;
        }
        QArrayData::deallocate(local_50,1,8);
      }
      goto LAB_100705c2c;
    }
  }
  else {
    if (iVar1 != 1) goto LAB_100705c2c;
    QString::toUtf8();
    lVar2 = _getpwnam(local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100705c23;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100705c23:
    if (lVar2 == 0) {
      piVar3 = ___error();
      iVar1 = *piVar3;
      QString::toUtf8();
      FUN_1008e3970("","CAuth",0,"Failed to extract user info for user name \'%s\'. Error code: %d",
                    local_40 + *(long *)(local_40 + 0x10),iVar1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_21 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100705c2c;
        }
        QArrayData::deallocate(local_40,1,8);
      }
      goto LAB_100705c2c;
    }
  }
  uVar4 = *(undefined4 *)(lVar2 + 0x10);
LAB_100705c2c:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar4;
}

