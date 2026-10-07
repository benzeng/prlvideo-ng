
undefined8 FUN_100888620(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_100887e00();
  lVar4 = (long)*(int *)(lVar2 + 0x250);
  uVar3 = 0;
  if (((*(int *)(lVar2 + 0x254) != *(int *)(lVar2 + 0x250)) &&
      (uVar3 = *(undefined8 *)(lVar2 + 0x50 + lVar4 * 8), param_1 != (long *)0x0)) &&
     (param_2 != (undefined4 *)0x0)) {
    lVar1 = *(long *)(lVar2 + 400 + lVar4 * 8);
    if (lVar1 == 0) {
      *param_1 = (long)"NA";
      *param_2 = 0;
    }
    else {
      *param_1 = lVar1;
      *param_2 = *(undefined4 *)(lVar2 + 0x210 + lVar4 * 4);
    }
  }
  return uVar3;
}

