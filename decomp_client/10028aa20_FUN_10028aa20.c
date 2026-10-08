
undefined8 FUN_10028aa20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_30;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_100152a20(uVar1,param_1 + 0x28);
  uVar1 = 0x80000009;
  if (lVar2 != 0) {
    QString::toUtf8();
    uVar1 = 0;
    _PrlSrv_CheckParallelsServerAliveEx
              (local_30 + *(long *)(local_30 + 0x10),0,1000,FUN_10028ab10,
               *(undefined8 *)(param_1 + 0x38),0);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return uVar1;
}

