
void FUN_1002b25f0(long param_1)

{
  char *pcVar1;
  
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      pcVar1 = "no";
    }
    else {
      pcVar1 = "yes";
    }
    FUN_1008e3970("","LocalDevices",3,"[%s] Lock move (locked: %s)",*(undefined8 *)(param_1 + 0xc0),
                  pcVar1);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  QMutex::unlock();
  return;
}

