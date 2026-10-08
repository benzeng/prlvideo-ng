
undefined1 FUN_1000c6cc0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",3,"openHostFileInGuest(), cmdLine=\"%s\"",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_1000c6d42;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_1000c6d42:
  if ((char)param_1[9] == '\0') {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_1000dfea0(param_1);
    if (iVar1 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      if (*(char *)(lVar2 + 0xc) == '\0') {
        uVar3 = 0;
      }
      else {
        FUN_1000d8bc0(param_1,&DAT_100e14070,param_2);
        uVar3 = 1;
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: shared app link \"%s\" failed to start Vm",
                    local_30 + *(long *)(local_30 + 0x10));
      if (*(int *)local_30 == -1) {
        uVar3 = 0;
      }
      else {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return 0;
          }
        }
        QArrayData::deallocate(local_30,1,8);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

