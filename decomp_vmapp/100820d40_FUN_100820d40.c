
ulong FUN_100820d40(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_1011c06d8 != 0) {
    iVar1 = FUN_100885600();
    if (*param_1 < iVar1) {
      puVar2 = (undefined8 *)FUN_100885620(DAT_1011c06d8);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      goto LAB_100820d7d;
    }
  }
  uVar3 = FUN_1008858e0(*(undefined8 *)(param_1 + 2));
LAB_100820d7d:
  return (long)*param_1 ^ uVar3;
}

