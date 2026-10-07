
void FUN_100258580(void)

{
  undefined1 uVar1;
  sigset_t in_EAX;
  void *pvVar2;
  undefined8 uVar3;
  sigset_t local_28;
  sigset_t local_24;
  
  uVar3 = DAT_1011c3698;
  local_28 = in_EAX;
  CDispCommonPreferences::getDebug();
  uVar1 = CDspDebug::isVerboseLogEnabled();
  FUN_1000b1640(uVar3,uVar1);
  _local_28 = CONCAT44(0xffffffff,local_28);
  _sigprocmask(1,&local_24,&local_28);
  QMutex::lock();
  if (DAT_1011c37b8 == (void *)0x0) {
    pvVar2 = operator_new(0x80);
    FUN_1002589e0(pvVar2);
    DAT_1011c37b8 = pvVar2;
    uVar3 = FUN_1008e3890(FUN_1002586a0);
    *(undefined8 *)((long)DAT_1011c37b8 + 0x78) = uVar3;
    FUN_100257c20(DAT_1011c37b8);
  }
  QMutex::unlock();
  _sigprocmask(3,&local_28,(sigset_t *)0x0);
  return;
}

