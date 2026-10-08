
undefined4 FUN_100acda60(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x70))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = *(undefined4 *)(param_1[0xf] + 0x910);
  }
  return uVar2;
}

