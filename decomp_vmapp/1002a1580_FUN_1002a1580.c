
void FUN_1002a1580(void)

{
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("AudioVM","LocalDevices",3,"Sound finalize..");
  }
  QMutex::unlock();
  return;
}

