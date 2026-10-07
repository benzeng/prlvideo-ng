
void FUN_1004adb40(long param_1)

{
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x153) = 1;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"State %d startInProgress %d stopInProgress %d",
                  *(undefined4 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x8c),
                  *(undefined1 *)(param_1 + 0x8d));
  }
  QMutex::unlock();
  return;
}

