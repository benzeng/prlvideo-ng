
void FUN_10025ecb0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    uVar2 = 0xffffffff;
    if ((*(int *)(lVar1 + 4) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
      lVar1 = FUN_1005c11d0();
      uVar2 = *(undefined4 *)(lVar1 + 0x50);
      lVar1 = *(long *)(param_1 + 0x48);
      if (lVar1 == 0) goto LAB_10025ed05;
    }
    if ((*(int *)(lVar1 + 4) != 0) && (*(long **)(param_1 + 0x50) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    }
  }
LAB_10025ed05:
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long **)(param_1 + 0x60) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  }
  FUN_10025c7d0(param_1,uVar2,2);
  return;
}

