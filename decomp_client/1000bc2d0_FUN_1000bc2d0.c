
undefined1 FUN_1000bc2d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  QArrayData *local_30;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x10);
  if (lVar2 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",0,"Error: failed to get Vm with vmUuid=\"%s\"",
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
  else {
    uVar1 = CVmTools::getVmSharing();
    FUN_100197ee0(lVar2,uVar1);
    uVar3 = 1;
  }
  return uVar3;
}

