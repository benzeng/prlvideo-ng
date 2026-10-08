
undefined1 FUN_1000b8ea0(long *param_1,long param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_68;
  _func_void_Node_ptr *local_60;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 2);
  if (lVar4 == 0) {
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",1,"Failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return 0;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return 0;
  }
  uVar3 = FUN_10018c280(lVar4);
  uVar3 = FUN_100319c50(uVar3);
  cVar2 = FUN_100330a50(uVar3);
  if (cVar2 != '\0') {
    uVar3 = FUN_10018c280(lVar4);
    uVar3 = FUN_100319c50(uVar3);
    cVar2 = FUN_1003312f0(uVar3,*(undefined8 *)(param_2 + 0x30),param_3);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (param_3 == 3) {
    FUN_1000bd6c0(&local_48,param_2 + 0x58);
    FUN_1000b9290(param_1,&local_48);
    if (*(int *)local_48 == -1) {
      return 1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,8,8);
    return 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  FUN_1000b9340(&local_60,param_2);
  FUN_1000beed0(&local_58,&local_60);
  FUN_1000bd810(&local_50,&local_58);
  local_68 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000e91d0(uVar3,&local_50,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b9064;
    }
    QArrayData::deallocate(local_68,8,8);
  }
LAB_1000b9064:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b9094;
    }
    QArrayData::deallocate(local_50,4,8);
  }
LAB_1000b9094:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b90ba;
    }
    QListData::dispose(local_58);
  }
LAB_1000b90ba:
  if (*(int *)(local_60 + 0x10) != -1) {
    if (*(int *)(local_60 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_60 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 1;
      }
    }
    QHashData::free_helper(local_60);
  }
  return 1;
}

