
undefined8 * FUN_100d8e790(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  switch(param_2) {
  case 0:
    pcVar3 = "Parallels Management Console";
    iVar2 = 0x1c;
    break;
  case 1:
  case 5:
    pcVar3 = "Parallels Desktop";
    iVar2 = 0x11;
    break;
  case 2:
    pcVar3 = "Parallels Workstation";
    iVar2 = 0x15;
    break;
  case 3:
    pcVar3 = "Parallels Desktop Express";
    iVar2 = 0x19;
    break;
  default:
    pcVar3 = "Unknown product";
    iVar2 = 0xf;
    break;
  case 6:
    pcVar3 = "Parallels Access";
    iVar2 = 0x10;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

