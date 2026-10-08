
int FUN_10083b240(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_10083b740();
  if (-1 < iVar1) {
    if (param_2 == 0xc) {
      if (iVar1 < 5) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      if (param_2 != 0) {
        return iVar1;
      }
      switch(iVar1) {
      case 0:
        FUN_1004da970(param_1,*(undefined4 *)param_4[1]);
        break;
      case 1:
        FUN_1004dcf60(param_1);
        break;
      case 2:
        FUN_1004dc7e0(param_1,param_4[1]);
        break;
      case 3:
        FUN_1004da460(param_1);
        break;
      case 4:
        FUN_1004db730(param_1);
      }
    }
    iVar1 = iVar1 + -5;
  }
  return iVar1;
}

