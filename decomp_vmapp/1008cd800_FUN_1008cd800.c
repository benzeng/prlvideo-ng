
undefined8 FUN_1008cd800(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  local_28 = param_2;
  iVar1 = FUN_100885160(*(undefined8 *)(param_1 + 8),local_30);
  uVar2 = 0;
  if (iVar1 != -1) {
    uVar2 = FUN_100885620(*(undefined8 *)(param_1 + 8),iVar1);
  }
  return uVar2;
}

