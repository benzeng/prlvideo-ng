
byte FUN_1000a6280(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  QArrayData *local_20;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1);
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAD","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 == -1) {
      bVar4 = 0;
    }
    else {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_20,1,8);
      bVar4 = 0;
    }
  }
  else {
    uVar1 = FUN_10018f5b0(lVar3);
    if (uVar1 < 4) {
      bVar4 = 0xdU >> ((byte)uVar1 & 0xf) & 1;
    }
    else {
      bVar4 = 0;
    }
  }
  return bVar4;
}

