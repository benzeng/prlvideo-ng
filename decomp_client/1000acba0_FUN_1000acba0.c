
void FUN_1000acba0(long *param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",2,"Unregistering vmUuid=\"%s\", result=%i",
                  local_30 + *(long *)(local_30 + 0x10),param_2);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000acc2a;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1000acc2a:
  if (*(int *)(*param_3 + 4) == 0) {
    return;
  }
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000b7b90(param_3,0,0x3b32);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_3,&local_38);
  if (iVar1 == 0) {
    FUN_1000b7c90(param_3,&local_38);
  }
  iVar1 = FUN_1000af090();
  if (iVar1 == 0) {
    FUN_100d9bbb0(&local_40);
  }
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_3,&local_48);
  if (iVar1 == 0) {
    FUN_100d9bbb0(&local_48);
  }
  FUN_1000ab900(param_1 + 4,param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000accf9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000accf9:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000acd29;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000acd29:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

