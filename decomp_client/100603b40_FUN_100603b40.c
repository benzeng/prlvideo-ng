
void * FUN_100603b40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = FUN_100603c00(param_2);
  if ((cVar1 == '\0') && (cVar1 = FUN_100603d50(param_2), cVar1 == '\0')) {
    return (void *)0x0;
  }
  pvVar2 = operator_new(0x18);
  FUN_100601b80(pvVar2,param_1,param_2,param_3,param_4);
  FUN_100601be0(pvVar2);
  return pvVar2;
}

