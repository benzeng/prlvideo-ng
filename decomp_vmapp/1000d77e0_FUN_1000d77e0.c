
undefined8 FUN_1000d77e0(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x81) && (param_3 < 0x81)) {
    QMutex::lock();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  return uVar1;
}

