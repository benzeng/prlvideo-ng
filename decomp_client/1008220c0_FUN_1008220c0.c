
void FUN_1008220c0(undefined8 param_1,int param_2,int param_3,long *param_4)

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
      FUN_1002bc130(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_1002bcec0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_1002bbf80();
      return;
    case 3:
      iVar1 = FUN_1002bb640();
      break;
    case 4:
      iVar1 = FUN_1002bbb80();
      break;
    case 5:
      iVar1 = FUN_1002bd230();
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

