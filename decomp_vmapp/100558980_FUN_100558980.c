
void FUN_100558980(long param_1)

{
  QMutex::lock();
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_1008e3970("","TransMem",0,
                  "%u temporary blocks (%llu bytes) used for deferred swapping of %u blocks",
                  (ulong)*(uint *)(param_1 + 0xac),
                  (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4) * (ulong)*(uint *)(param_1 + 0xac)
                  ,*(undefined4 *)(param_1 + 0xa4));
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_1008e3970("","TransMem",0,"%u blocks were not put");
    }
  }
  QMutex::unlock();
  return;
}

