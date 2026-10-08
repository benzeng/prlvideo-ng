
void FUN_10009b6f0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_28;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = FUN_10018c280(lVar2);
    FUN_10031c020(uVar1,param_2);
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("FSCRMONC","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

