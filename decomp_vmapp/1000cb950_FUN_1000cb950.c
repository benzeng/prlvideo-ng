
void FUN_1000cb950(long param_1)

{
  uint uVar1;
  void *pvVar2;
  
  if (*(void **)(param_1 + 0x350) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x350));
  }
  uVar1 = *(uint *)(param_1 + 0x338);
  pvVar2 = operator_new__((ulong)uVar1,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x350) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    _memcpy(pvVar2,*(void **)(*(long *)(param_1 + 0x2b0) + 0x1928),(ulong)uVar1);
    return;
  }
  FUN_1008e3970("","vm",0,"Failed to allocate bitmap");
  return;
}

