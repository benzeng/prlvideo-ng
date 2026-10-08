
undefined8 FUN_1000bb930(long param_1,bool param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QStringList *pQVar5;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
  if (lVar4 != 0) {
    FUN_10018c2b0(lVar4);
    lVar4 = CVmConfiguration::getVmSettings();
    if ((lVar4 != 0) && (lVar4 = CVmSettings::getVmTools(), lVar4 != 0)) {
      CVmTools::getVmSharedApplications();
      cVar1 = CVmSharedApplications::isMacToWin();
      if (cVar1 != '\0') {
        return 0;
      }
      if (param_3 == -1) {
        return 2;
      }
      if (param_3 == 0) {
        iVar2 = CMessageManager::instance();
        pQVar5 = (QStringList *)FUN_1000b6b00(*(undefined8 *)(param_1 + 0xb0));
        local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
        local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
        CMessageManager::showMessageBox
                  (iVar2,(QWidget *)0x3bce,pQVar5,(QStringList *)&local_40.field0,
                   (CSlotInfo *)&local_48,param_2);
        FUN_100039a80(&local_48);
        FUN_100039a80(&local_40);
        return 0xfffffffd;
      }
      uVar3 = FUN_1000bbb60(param_1);
      return uVar3;
    }
  }
  QString::toUtf8();
  FUN_100df99c0("SGAA","prl_client_app",0,
                "Error: failed to get Vm Tools configuration for Vm with vmUuid=\"%s\"",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0xfffffffe;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return 0xfffffffe;
}

