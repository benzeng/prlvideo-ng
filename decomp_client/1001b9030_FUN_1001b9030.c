
void FUN_1001b9030(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100d7e9e0();
  FUN_100d891f0(&local_40,uVar4);
  bVar2 = QFile::exists(&local_40);
  bVar3 = QFile::exists((QString *)(param_1 + 0x20));
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"reconfig iso - %d, tools iso - %d",bVar2,bVar3);
  }
  if ((bVar2 & bVar3) == 1) {
    iVar5 = FUN_100d4d4a0(param_1 + 0x10,param_1 + 0x18,&local_40,(QString *)(param_1 + 0x20));
    if (iVar5 < 0) {
      QString::toUtf8();
      lVar1 = *(long *)(local_48 + 0x10);
      _PrlDbg_PrlResultToString(iVar5,&local_38);
      FUN_100df99c0("","prl_client_app",0,"Linux reconfig: exec \'%s\' failed with error %s (%x)",
                    local_48 + lVar1,local_38,iVar5);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_29 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001b91b8;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Linux reconfig: exec \'%s\' succeeded",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001b91b8;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
  }
LAB_1001b91b8:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

