
undefined8 * FUN_100d89020(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == 0xb) {
    pcVar3 = "prl-tools-os2.fdd";
    iVar2 = 0x11;
  }
  else {
    pcVar3 = "";
    iVar2 = 0;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

