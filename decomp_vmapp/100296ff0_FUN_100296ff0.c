
int FUN_100296ff0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_980 [24];
  undefined4 local_968;
  int local_950;
  undefined8 local_948;
  int local_880;
  long local_878;
  undefined8 local_870;
  undefined4 *local_868;
  undefined4 local_860 [2];
  undefined8 local_858;
  QMutex local_40;
  QMutex local_38;
  char local_30;
  
  local_878 = DAT_1011c3688;
  local_870 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
  local_868 = local_860;
  local_860[0] = 0;
  local_858 = 0;
  QWaitCondition::QWaitCondition((QWaitCondition *)&local_40);
  QMutex::QMutex(&local_38,0);
  local_968 = 4;
  local_950 = 1;
  local_30 = '\0';
  local_948 = param_2;
  FUN_100258290(param_1 + 0x48,local_980,*(undefined8 *)(param_1 + 0x40));
  iVar1 = local_950;
  if (local_950 == 0) {
    QMutex::lock();
    if (local_30 == '\0') {
      QWaitCondition::wait(&local_40,(ulong)&local_38);
      if (local_30 == '\0') {
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","r.hdd.done",
                      "../Ahci/sata_hdd.cpp",0x367,"genericRequest_sync");
      }
    }
    QMutex::unlock();
    iVar1 = local_880;
  }
  QMutex::~QMutex(&local_38);
  QWaitCondition::~QWaitCondition((QWaitCondition *)&local_40);
  FUN_10008d470(&local_878);
  return iVar1;
}

