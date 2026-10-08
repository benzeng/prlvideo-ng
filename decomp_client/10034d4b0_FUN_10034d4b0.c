
void FUN_10034d4b0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    uVar2 = QDateTime::toTime_t();
    _CFRunLoopTimerSetNextFireDate
              ((double)uVar2 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_1021e18c8,lVar1);
    return;
  }
  return;
}

