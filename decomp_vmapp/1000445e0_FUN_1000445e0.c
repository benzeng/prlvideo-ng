
void FUN_1000445e0(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_2 == 3) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",2,"BeforeSuspend: Shared Guest Applications");
    }
    FUN_1000412f0(param_1 + 0x78);
    QMutex::lock();
    lVar1 = *(long *)(param_1 + 0x160);
    _free(*(void **)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    QMutex::unlock();
    if (lVar1 != 0) {
      FUN_1004c07d0(param_1 + 0x10,lVar1,0xf0000020);
      return;
    }
  }
  else if (param_2 == 4) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",2,"AfterResume: Shared Guest Applications");
    }
    local_28 = 0;
    local_30 = 0;
    local_2c = 0;
    local_38 = 0x200000001;
    FUN_100045b10(param_1,&local_38);
  }
  return;
}

