
undefined8 FUN_0040e610(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = realloc((void *)*param_1,(ulong)param_2);
  if ((pvVar1 != (void *)0x0) || (uVar2 = 0, param_2 == 0)) {
    *param_1 = pvVar1;
    *(uint *)(param_1 + 1) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}

