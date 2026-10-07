
undefined8 * FUN_10076f230(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  switch(param_3) {
  case 1:
    pcVar3 = "idle";
    iVar2 = 4;
    break;
  case 2:
    pcVar3 = "runnable";
    iVar2 = 8;
    break;
  case 3:
    pcVar3 = "sleep";
    iVar2 = 5;
    break;
  case 4:
    pcVar3 = "stopped";
    iVar2 = 7;
    break;
  case 5:
    pcVar3 = "zombie";
    iVar2 = 6;
    break;
  default:
    QString::number((int)param_1,param_3);
    return param_1;
  }
  uVar1 = QString::fromAscii_helper(pcVar3,iVar2);
  *param_1 = uVar1;
  return param_1;
}

