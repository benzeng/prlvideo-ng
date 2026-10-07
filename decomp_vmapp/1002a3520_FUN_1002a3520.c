
undefined8 FUN_1002a3520(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x110)) / 1000;
  uVar1 = *(ulong *)(param_1 + 0x38);
  pvVar2 = _malloc(uVar4 * uVar1 + 0x18);
  *(void **)(param_1 + 0xe8) = pvVar2;
  uVar3 = 0x80000002;
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xe0) = pvVar2;
    FUN_1007d7110(pvVar2,uVar4,uVar1 & 0xffffffff);
    uVar3 = 0;
  }
  return uVar3;
}

