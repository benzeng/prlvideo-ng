
undefined8 FUN_100550f00(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = *(void **)(param_1 + 0x20);
  if (pvVar2 == (void *)0x0) {
    uVar3 = (ulong)*(byte *)(param_1 + 0x10);
    pvVar2 = operator_new__(uVar3 * 8 + 8,(nothrow_t *)PTR_nothrow_100ba21c8);
    *(void **)(param_1 + 0x20) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 0x10);
  }
  ___bzero(pvVar2,uVar3 * 8 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(uint *)((long)puVar1 + 4) = *(uint *)(param_1 + 8) / *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x28) = (uint)*(byte *)(param_1 + 0x10);
  *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)(param_1 + 0x10) * 8) = puVar1;
  return 1;
}

