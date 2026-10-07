
void FUN_10041d320(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar1 = *param_3;
  lVar2 = *(long *)(lVar1 + 0x10);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
  uVar4 = 0;
  lVar5 = 0x14;
  if (*(int *)(param_1 + 0x18 + (ulong)uVar3 * 4) == 3) {
    do {
      _memcpy((void *)(param_2 + 0xa0 + (long)*(int *)((long)&PTR_s_rax_10111ad50 + lVar5)),
              (void *)((ulong)uVar4 + lVar2 + lVar1),(long)*(int *)(lVar5 + 0x10111ad4c));
      uVar4 = uVar4 + *(int *)(lVar5 + 0x10111ad4c);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0x1734);
  }
  else {
    do {
      _memcpy((void *)(param_2 + 0xa0 + (long)*(int *)((long)&PTR_s_eax_101119db0 + lVar5)),
              (void *)((ulong)uVar4 + lVar2 + lVar1),(long)*(int *)(lVar5 + 0x101119dac));
      uVar4 = uVar4 + *(int *)(lVar5 + 0x101119dac);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0xfb4);
  }
  return;
}

