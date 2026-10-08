
void FUN_10081a020(long *param_1,int param_2,int param_3,long *param_4)

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
    if (param_3 == 2) {
      iVar1 = FUN_10026a170();
    }
    else {
      if (param_3 == 1) {
        FUN_10026a200(param_1,*(undefined4 *)param_4[1]);
        return;
      }
      if (param_3 != 0) {
        return;
      }
      iVar1 = (**(code **)(*param_1 + 0x100))
                        (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  *piVar2 = iVar1;
  return;
}

