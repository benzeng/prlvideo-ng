
void FUN_100559290(long param_1)

{
  void *pvVar1;
  uint uVar2;
  
  pvVar1 = _valloc((ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4));
  if (pvVar1 != (void *)0x0) {
    uVar2 = *(int *)(param_1 + 0xa8) + 1;
    *(uint *)(param_1 + 0xa8) = uVar2;
    if (*(uint *)(param_1 + 0xac) < uVar2) {
      *(uint *)(param_1 + 0xac) = uVar2;
    }
  }
  return;
}

