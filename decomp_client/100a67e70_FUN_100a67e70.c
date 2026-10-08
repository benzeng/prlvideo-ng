
undefined8 FUN_100a67e70(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _realloc((void *)*param_1,(ulong)param_2);
  if ((param_2 == 0) || (uVar2 = 0, pvVar1 != (void *)0x0)) {
    *param_1 = pvVar1;
    *(uint *)(param_1 + 1) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}

