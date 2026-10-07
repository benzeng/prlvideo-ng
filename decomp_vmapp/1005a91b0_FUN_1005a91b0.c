
int FUN_1005a91b0(long *param_1)

{
  int iVar1;
  long *plVar2;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((int)param_1[8] == 3) {
    *(undefined4 *)(param_1 + 8) = 4;
    plVar2 = (long *)param_1[3];
    while( true ) {
      if (plVar2 == param_1 + 3) {
        *(undefined4 *)(param_1 + 8) = 7;
        return 0;
      }
      *(undefined4 *)(plVar2 + -1) = 4;
      iVar1 = (**(code **)(*param_1 + 0x68))(param_1,plVar2[-2]);
      if (iVar1 < 0) break;
      *(undefined4 *)(plVar2 + -1) = 6;
      iVar1 = (**(code **)(*param_1 + 0x70))(param_1,plVar2[-2]);
      if (iVar1 < 0) {
        (**(code **)(*param_1 + 0xa0))(&local_60,param_1,plVar2[-2]);
        QString::toLocal8Bit();
        FUN_1008e3970("","vdisk",0,"Error renaming entry %s with code 0x%x",
                      local_58 + *(long *)(local_58 + 0x10),iVar1);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_29 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1005a92c1;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_1005a92c1:
        if (*(int *)local_60 == -1) {
          return iVar1;
        }
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return iVar1;
          }
          local_29 = 0;
        }
        goto LAB_1005a944b;
      }
      *(undefined4 *)(plVar2 + -1) = 7;
      plVar2 = (long *)*plVar2;
    }
    (**(code **)(*param_1 + 0xa0))(&local_50,param_1,plVar2[-2]);
    QString::toLocal8Bit();
    FUN_1008e3970("","vdisk",0,"Error backup entry %s with code 0x%x",
                  local_48 + *(long *)(local_48 + 0x10),iVar1);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005a942a;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1005a942a:
    if (*(int *)local_50 == -1) {
      return iVar1;
    }
    local_60 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return iVar1;
      }
      local_29 = 0;
    }
    goto LAB_1005a944b;
  }
  FUN_1005a9cd0(&local_40);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Invalid class state at commit call %s",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005a9361;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005a9361:
  iVar1 = -0x7ffffaea;
  if (*(int *)local_40 == -1) {
    return -0x7ffffaea;
  }
  local_60 = local_40;
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return -0x7ffffaea;
    }
    local_29 = 0;
  }
LAB_1005a944b:
  QArrayData::deallocate(local_60,2,8);
  return iVar1;
}

