
void FUN_10041d3f0(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  if (*(int *)(param_1 + 0x18 + (ulong)uVar1 * 4) == 3) {
    _memcpy((void *)(param_2 + 0xa0),(void *)(param_1 + 0x288),0x37c);
    ppuVar2 = &PTR_s_rax_10111ad50;
  }
  else {
    _memcpy((void *)(param_2 + 0xa0),(void *)(param_1 + 0xa0),0x1e8);
    ppuVar2 = &PTR_s_eax_101119db0;
  }
  _memcpy((void *)(param_2 + 0xa0 +
                  (long)*(int *)((param_3 & 0xffffffff) * 0x50 + 0x14 + (long)ppuVar2)),
          (void *)(*param_4 + *(long *)(*param_4 + 0x10)),
          (long)*(int *)(ppuVar2 + (param_3 & 0xffffffff) * 10 + 2));
  return;
}

