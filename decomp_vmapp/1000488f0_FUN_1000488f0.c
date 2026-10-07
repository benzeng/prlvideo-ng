
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1000488f0(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  
  QMutex::lock();
  lVar1 = DAT_1011c3600;
  bVar2 = DAT_1011c3600 == 0;
  if (bVar2) {
    QMutex::unlock();
  }
  else {
    _DAT_1011c3608 = _DAT_1011c3608 + 1;
    QMutex::unlock();
    FUN_100048980(lVar1,param_1,param_2);
    FUN_10004e480(&DAT_1011c35f0);
  }
  return !bVar2;
}

