
undefined8 FUN_100b209e0(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = _valloc(0x1000);
  *(void **)(param_1 + 8) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    ___bzero(pvVar2,0x1000);
    *(undefined4 *)(param_1 + 0x10) = 0x1000;
    uVar1 = 0x1000 / (ulong)*(uint *)(param_1 + 0x14);
    *(int *)(param_1 + 0x18) = (int)uVar1;
    uVar3 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar3;
}

