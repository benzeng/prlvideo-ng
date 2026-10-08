
undefined1 FUN_1000e02c0(long *param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"executeCmdLineInGuest(), cmdLine=\"%s\"",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1000e0345;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1000e0345:
  lVar3 = *param_2;
  iVar2 = QString::compare_helper
                    (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),
                     "\"::{3080F90D-D7AD-11D9-BD98-0000947B0257}\"",0xffffffff,1);
  if (iVar2 == 0) {
    uVar5 = FUN_100152280();
    lVar3 = FUN_1001548f0(uVar5,param_1 + 2);
    if (lVar3 != 0) {
      uVar5 = FUN_10018c280(lVar3);
      uVar5 = FUN_100319d40(uVar5);
      FUN_10035c110(uVar5,0x73,1);
      FUN_10035c110(uVar5,0x28,1);
      FUN_10035c110(uVar5,0x28,0);
      FUN_10035c110(uVar5,0x73,0);
      return 1;
    }
    return 0;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    pcVar4 = "Error: shared app link execute cmdLine is empty";
    uVar5 = 0;
  }
  else {
    if ((char)param_1[9] != '\0') {
      iVar2 = FUN_1000dfea0(param_1);
      if (iVar2 == 0) {
        lVar3 = (**(code **)(*param_1 + 0x68))(param_1);
        if (*(char *)(lVar3 + 0xc) != '\0') {
          uVar1 = FUN_1000b89f0(param_1,param_2);
          return uVar1;
        }
        return 0;
      }
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: shared app link \"%s\" failed to start Vm",
                    local_38 + *(long *)(local_38 + 0x10));
      if (*(int *)local_38 == -1) {
        return 0;
      }
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_38,1,8);
      return 0;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar4 = "Warning: Shared Guest Applications are disabled";
    uVar5 = 1;
  }
  FUN_100df99c0("SGAC","prl_client_app",uVar5,pcVar4);
  return 0;
}

