
undefined8 * FUN_100d94440(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = FUN_100d7e9e0();
  if (iVar1 == 6) {
    pcVar3 = "prl_mobdisp";
    iVar1 = 0xb;
  }
  else {
    pcVar3 = "prl_disp_service";
    iVar1 = 0x10;
  }
  uVar2 = QString::fromAscii_helper(pcVar3,iVar1);
  *param_1 = uVar2;
  return param_1;
}

