
undefined8 * FUN_10009d940(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*(int *)(DAT_1011c3698 + 0x5c0) - 0x80cU < 5) {
    pcVar2 = "TAG2";
  }
  else {
    pcVar2 = "TAG1";
  }
  uVar1 = QString::fromAscii_helper(pcVar2,4);
  *param_1 = uVar1;
  return param_1;
}

