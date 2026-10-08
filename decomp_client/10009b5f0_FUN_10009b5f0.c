
void FUN_10009b5f0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_30;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = FUN_10018c280(lVar2);
    FUN_10031bf10(uVar1,param_2,param_3);
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("FSCRMONC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

