
undefined8 FUN_00411010(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *__s;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    __s = malloc(0x50);
    puVar1 = memset(__s,0,0x50);
    *puVar1 = param_2;
    puVar1[1] = PTR_EZXML_NIL_0061bd80;
    puVar1[2] = &DAT_0041913e;
    uVar2 = FUN_00410600(puVar1,param_1,param_3);
    return uVar2;
  }
  return 0;
}

