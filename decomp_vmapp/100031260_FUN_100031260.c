
undefined8 FUN_100031260(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((0 < param_2) && (param_3 != 0)) {
    if ((*(uint *)(param_3 + 0x20) & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("DYNRESHOST","vm",1,"Startup information. Host has hidpi display: %d",
                      *(uint *)(param_3 + 0x20) >> 1 & 1);
      }
      QMutex::lock();
      *(ushort *)(param_1 + 0x298) = *(ushort *)(param_3 + 0x20) & 2;
      *(undefined2 *)(param_1 + 0x29a) = *(undefined2 *)(param_3 + 0x1c);
      QMutex::unlock();
      uVar1 = 1;
    }
  }
  return uVar1;
}

