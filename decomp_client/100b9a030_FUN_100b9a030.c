
void * FUN_100b9a030(long param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    pvVar1 = _malloc(0x11);
    if (pvVar1 != (void *)0x0) {
      FUN_100b9a0a0(param_1,param_2,pvVar1,0x11);
      return pvVar1;
    }
    uVar2 = 0xfffffffe;
  }
  FUN_100b9d470(uVar2,0);
  return (void *)0x0;
}

