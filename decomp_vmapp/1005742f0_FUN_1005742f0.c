
long FUN_1005742f0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_10070bb60(param_2,param_1[0x22c]);
  if (lVar2 != 0) {
    QMutex::lock();
    (**(code **)(*param_1 + 0x318))(param_1);
    if ((long *)param_1[0x243] != (long *)0x0) {
      iVar1 = (**(code **)(*(long *)param_1[0x243] + 0x20))();
      if (iVar1 != 0) {
        FUN_1008e3970("","vdisk",0,"CDisk::CreateAioWorker: Aio has pended dios");
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",
                      0x11a6,"CreateAioWorker");
      }
      if ((long *)param_1[0x243] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x243] + 0x10))();
      }
    }
    param_1[0x243] = lVar2;
    (**(code **)(*param_1 + 800))(param_1);
    QMutex::unlock();
  }
  return lVar2;
}

