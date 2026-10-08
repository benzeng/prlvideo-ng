
undefined8 * FUN_10077f090(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_2 == 3) {
    pcVar3 = "UrgentPromo";
    iVar2 = 0xb;
  }
  else if (param_2 == 4) {
    pcVar3 = "NotificationPromo";
    iVar2 = 0x11;
  }
  else if (param_2 == 100) {
    pcVar3 = "WelcomeScreenPromo";
    iVar2 = 0x12;
  }
  else {
    pcVar3 = "ProductPromo";
    iVar2 = 0xc;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

