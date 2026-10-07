
void * FUN_1000c28c0(undefined8 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc(0x4a0);
  if (pvVar1 != (void *)0x0) {
    ___bzero(pvVar1,0x4a0);
    *(undefined4 *)((long)pvVar1 + 8) = param_2;
  }
  return pvVar1;
}

