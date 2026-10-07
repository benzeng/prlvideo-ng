
undefined8 FUN_1003f1380(long param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffff1;
  if (param_2 != (void *)0x0) {
    _memcpy(param_2,(void *)(param_1 + 0x18e0),0x6fe);
    uVar1 = 0;
  }
  return uVar1;
}

