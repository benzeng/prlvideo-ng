
void FUN_100828ec0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if (((param_3 != 1) && (param_3 != 2)) || (*(int *)param_4[1] != 1)) {
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
      FUN_1002f4c70(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002f5fa0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_1002f5ff0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 3:
      FUN_1002f6010(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      iVar1 = FUN_1002f41e0();
      break;
    case 5:
      iVar1 = FUN_1002f4340();
      break;
    case 6:
      iVar1 = FUN_1002f43a0();
      break;
    case 7:
      iVar1 = FUN_1002f4ba0();
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

