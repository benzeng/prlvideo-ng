
undefined1 FUN_1002e5900(long param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = param_3 * param_2 * 2;
  *(uint *)(param_1 + 0xc) = uVar3;
  pvVar2 = operator_new__((ulong)uVar3,(nothrow_t *)PTR_nothrow_100ba21c8);
  *(void **)(param_1 + 0x10) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (uVar3 != 0) {
      uVar3 = 4;
      while( true ) {
        uVar1 = (undefined1)((((uVar3 - 4 >> 1) % param_2) * 0xff) / param_2);
        *(undefined1 *)((long)pvVar2 + (ulong)(uVar3 - 4)) = uVar1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)(uVar3 - 3)) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)(uVar3 - 2)) = uVar1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)(uVar3 - 1)) = 0;
        if (*(uint *)(param_1 + 0xc) <= uVar3) break;
        pvVar2 = *(void **)(param_1 + 0x10);
        uVar3 = uVar3 + 4;
      }
    }
  }
  return uVar4;
}

