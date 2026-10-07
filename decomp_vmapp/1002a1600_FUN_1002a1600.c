
void FUN_1002a1600(long param_1,int param_2)

{
  char *pcVar1;
  
  QMutex::lock();
  if (2 < DAT_1011b55f8) {
    if (param_2 == 0xc) {
      pcVar1 = "S";
    }
    else {
      pcVar1 = "?";
      if (param_2 == 0xd) {
        pcVar1 = "M";
      }
    }
    FUN_1008e3970("AudioVM","LocalDevices",3,"Sound host hardware changed (%s)",pcVar1);
  }
  FUN_10025c560(param_1 + 0x10);
  QMutex::unlock();
  return;
}

