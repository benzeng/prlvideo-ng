
void FUN_100816d80(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 0) || (*(int *)param_4[1] != 1)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (DAT_10226db58 == 0) {
      DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
    }
    piVar2 = (int *)*param_4;
    iVar1 = DAT_10226db58;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_10024df30(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      iVar1 = FUN_10024cf90();
      break;
    case 2:
      iVar1 = FUN_10024d800();
      break;
    case 3:
      iVar1 = FUN_10024df60();
      break;
    case 4:
      iVar1 = FUN_10024e040();
      break;
    default:
      return;
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  *piVar2 = iVar1;
  return;
}

