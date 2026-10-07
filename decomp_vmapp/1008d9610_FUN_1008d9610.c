
undefined8 FUN_1008d9610(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 < 0) {
    uVar3 = 0x67;
    uVar4 = 0x1ba;
  }
  else {
    iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    if (param_2 < iVar1) {
      piVar2 = (int *)FUN_100885620(*(undefined8 *)(param_1 + 8),param_2);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      if (1 < *piVar2 - 1U) {
        return 0;
      }
      return *(undefined8 *)(piVar2 + 6);
    }
    uVar3 = 0x66;
    uVar4 = 0x1be;
  }
  FUN_100887ce0(0x28,0x6b,uVar3,"ui_lib.c",uVar4);
  return 0;
}

