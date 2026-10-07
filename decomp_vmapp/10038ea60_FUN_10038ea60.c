
void FUN_10038ea60(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint *puVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)(param_1 + 2);
  puVar3 = param_1 + 4;
  if (pvVar2 == (void *)0x0) {
    puVar3 = param_1 + 8;
  }
  uVar1 = *puVar3;
  param_1[4] = uVar1 * 2;
  pvVar4 = operator_new__((ulong)(uVar1 * 2));
  if (pvVar2 == (void *)0x0) {
    _memmove(pvVar4,*(void **)(param_1 + 6),(ulong)*param_1);
  }
  else {
    _memmove(pvVar4,pvVar2,(ulong)*param_1);
    operator_delete__(pvVar2);
  }
  *(void **)(param_1 + 2) = pvVar4;
  return;
}

