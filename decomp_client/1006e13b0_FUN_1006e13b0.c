
undefined8
FUN_1006e13b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (3 < DAT_10230ffd0) {
    FUN_1006946e0(&local_48,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[MENU_MNG]","prl_client_app",4,"Creating menu %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e145b;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1006e145b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e1492;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_1006e1492:
  uVar1 = FUN_1006915d0();
  lVar2 = FUN_100691620(uVar1,param_2,param_4);
  if (lVar2 != 0) {
    uVar1 = FUN_1006e1670(param_1,lVar2,param_3,param_4,param_5);
    return uVar1;
  }
  FUN_1006946e0(&local_58,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[MENU_MNG]","prl_client_app",0,"Can\'t get menu action %s",
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e1537;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1006e1537:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return 0;
}

