
undefined8 * FUN_1006a76e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    FUN_1007d6870(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    param_1[1] = *(undefined8 *)(lVar1 + 0x30);
    *param_1 = uVar2;
  }
  return param_1;
}

