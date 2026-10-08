
undefined8 * FUN_100dbfa40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  switch(param_3) {
  case 1:
    pcVar3 = "running";
    goto LAB_100dbfa84;
  case 2:
    pcVar3 = "stopped";
LAB_100dbfa84:
    iVar2 = 7;
    break;
  case 3:
    pcVar3 = "sleeping";
    iVar2 = 8;
    break;
  case 4:
    pcVar3 = "stuck";
    iVar2 = 5;
    break;
  case 5:
    pcVar3 = "halted";
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

