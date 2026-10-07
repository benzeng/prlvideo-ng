
void FUN_1002f0120(long param_1)

{
  undefined4 uVar1;
  QDateTime local_28 [8];
  QDateTime local_20 [8];
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_20,local_28,1);
  uVar1 = QDateTime::toTime_t();
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  QDateTime::~QDateTime(local_20);
  QDateTime::~QDateTime(local_28);
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",1,"NET: osxSleepWakeup(), timestamp %u",
                  *(undefined4 *)(param_1 + 0x18));
  }
  FUN_1002f01e0(param_1);
  return;
}

