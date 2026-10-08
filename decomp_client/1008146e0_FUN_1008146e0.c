
void FUN_1008146e0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 0) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002386f0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_1002386d0();
      return;
    case 2:
      FUN_100238800(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002388b0(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 4:
      FUN_100238e40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100238f10(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_1002386b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002385d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_100238630(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

