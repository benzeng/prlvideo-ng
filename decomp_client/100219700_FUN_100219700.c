
void FUN_100219700(long *param_1,undefined4 param_2)

{
  char cVar1;
  long lVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  if ((((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) ||
     (cVar1 = COsInstallationInfo::isUnattanded(), cVar1 != '\0')) goto LAB_1002197a0;
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  FUN_100188480(&local_30,lVar2);
  lVar2 = FUN_10025b4b0(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10021979b;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10021979b:
  if (lVar2 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,
                    "VM has downloaded and started, installation is not unattended, finish installation task"
                   );
    }
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    return;
  }
LAB_1002197a0:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

