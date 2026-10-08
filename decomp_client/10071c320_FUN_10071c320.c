
void FUN_10071c320(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  FUN_10071e5f0();
  FUN_10071e790(param_1);
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    plVar2 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_100721aa0(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 != *(int *)(lVar3 + 0xc)) {
    plVar2 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
    lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_100721b30(param_1 + 0x38);
  return;
}

