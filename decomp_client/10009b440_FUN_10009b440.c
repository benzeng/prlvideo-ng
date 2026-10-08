
void FUN_10009b440(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x20);
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("FSCRMONC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        local_30 = CONCAT31(local_30._1_3_,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x31) = 1;
    FUN_10018c2b0(lVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmCoherence();
    cVar1 = CVmCoherence::isSwitchToFullscreenOnDemand();
    if (cVar1 != '\0') {
      QTimer::start();
      return;
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
    if (*(int *)(param_1 + 0x28) == 3) {
      local_30 = 3;
      local_28 = 0;
      local_2c = 0;
      local_24 = 0xffff;
      local_20 = 0;
      local_1c = 0;
      FUN_10009b5f0(param_1,1,&local_30);
    }
  }
  return;
}

