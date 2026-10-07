
void FUN_1000f8a70(long param_1)

{
  QMutex::lock();
  if (*(int *)(param_1 + 0x5c) == 3) {
    FUN_1008e3970("","vm",0,
                  "WARNING! Some vcpu contexts (collected mask: %x) were not collected. Dbgdump may be corrupted"
                  ,*(undefined4 *)(param_1 + 100));
    FUN_1000f8af0(param_1);
  }
  QMutex::unlock();
  return;
}

