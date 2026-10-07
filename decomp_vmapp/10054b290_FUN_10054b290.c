
undefined1 FUN_10054b290(long param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  uVar3 = 0;
  FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::change_main_size(%llu)",param_2);
  if (param_2 < *(ulong *)(param_1 + 0xb0)) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    if (uVar4 < param_2) {
      uVar1 = (param_2 >> 0xc) + 0x1f >> 3;
      pvVar2 = _realloc(*(void **)(param_1 + 0x40),uVar1 & 0xfffffffc);
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar4 = (uVar4 >> 0xc) + 0x1f >> 5;
        ___bzero((void *)((long)pvVar2 + (uVar4 & 0x3fffffff) * 4),
                 ((uint)uVar1 & 0xfffffffc) + (int)uVar4 * -4);
        *(void **)(param_1 + 0x40) = pvVar2;
        *(ulong *)(param_1 + 0x10) = param_2;
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

