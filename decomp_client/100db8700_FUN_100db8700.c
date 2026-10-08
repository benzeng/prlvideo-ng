
undefined8 FUN_100db8700(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _strcmp((char *)(param_1[1] + 8),(char *)*param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = *param_1;
    param_2[2] = param_1[1];
    param_2[1] = uVar2;
    uVar2 = 0x81;
  }
  return uVar2;
}

