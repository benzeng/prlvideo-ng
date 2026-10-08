
void FUN_10084d280(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar1 = FUN_100694390(param_1,*(undefined4 *)param_4[1]);
    break;
  case 1:
    uVar1 = FUN_1006943b0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
    break;
  case 2:
    uVar1 = *(undefined8 *)param_4[1];
    uVar3 = *(undefined8 *)param_4[2];
    uVar2 = *(undefined4 *)param_4[3];
    goto LAB_10084d2eb;
  case 3:
    uVar1 = *(undefined8 *)param_4[1];
    uVar3 = *(undefined8 *)param_4[2];
    uVar2 = 0;
LAB_10084d2eb:
    uVar1 = FUN_1006943f0(param_1,uVar1,uVar3,uVar2);
    break;
  case 4:
    FUN_100694580(param_1,*(undefined8 *)param_4[1]);
    return;
  default:
    goto switchD_10084d2a2_default;
  }
  if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
    *(undefined8 *)*param_4 = uVar1;
  }
switchD_10084d2a2_default:
  return;
}

