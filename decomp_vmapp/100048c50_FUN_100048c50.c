
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100048c50(undefined4 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  
  QMutex::lock();
  lVar1 = DAT_1011c3600;
  if (DAT_1011c3600 == 0) {
    QMutex::unlock();
    bVar2 = false;
  }
  else {
    _DAT_1011c3608 = _DAT_1011c3608 + 1;
    QMutex::unlock();
    FUN_100048cf0(lVar1,param_1,param_2);
    bVar2 = *(int *)(*param_2 + 4) != 0;
    FUN_10004e480(&DAT_1011c35f0);
  }
  return bVar2;
}

