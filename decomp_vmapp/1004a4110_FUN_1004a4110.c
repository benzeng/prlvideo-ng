
undefined8 FUN_1004a4110(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = 0xf0000003;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) == 0x20) {
      QMutex::lock();
      local_28 = *(undefined8 *)(param_1 + 0x80);
      local_30 = *(undefined8 *)(param_1 + 0x78);
      local_40 = *(undefined8 *)(param_1 + 0x68);
      local_38 = *(undefined8 *)(param_1 + 0x70);
      QMutex::unlock();
      uVar1 = 0;
      FUN_1002a5a50(param_2,0,&local_40,0x20);
      *(undefined4 *)(param_2 + 0x10) = 0x20;
    }
    else {
      FUN_1008e3970("SIAHOST","SIAServer",0,"invalid buffer 0 size = %d (need = %ld)",
                    *(int *)(param_2 + 8),0x20);
    }
  }
  return uVar1;
}

