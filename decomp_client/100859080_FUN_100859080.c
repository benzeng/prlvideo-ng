
void FUN_100859080(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 3) && (*(int *)param_4[1] == 1)) {
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
      FUN_1007553d0();
      return;
    case 1:
      FUN_100755eb0();
      return;
    case 2:
      FUN_100755ed0();
      return;
    case 3:
      FUN_100756350(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  return;
}

