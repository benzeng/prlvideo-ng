
void FUN_1000b21e0(long param_1,char param_2)

{
  char *pcVar1;
  
  if (2 < DAT_1011b55f8) {
    pcVar1 = "dis";
    if (param_2 != '\0') {
      pcVar1 = "en";
    }
    FUN_1008e3970("","vm",3,"Adaptive Hypervisor: %sabled",pcVar1);
  }
  QMutex::lock();
  *(char *)(param_1 + 0x109ed) = param_2;
  if (param_2 == '\0') {
    FUN_1000b20f0(param_1,0);
  }
  QMutex::unlock();
  return;
}

