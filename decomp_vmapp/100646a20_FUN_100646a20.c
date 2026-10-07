
undefined8 * FUN_100646a20(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_10070f920();
  if (iVar1 == 0x40) {
    pcVar3 = "64";
  }
  else {
    pcVar3 = "32";
  }
  uVar2 = QString::fromAscii_helper(pcVar3,2);
  *param_1 = uVar2;
  return param_1;
}

