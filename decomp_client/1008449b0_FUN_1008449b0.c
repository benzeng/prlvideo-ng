
void FUN_1008449b0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

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
  else if ((param_2 == 0) && (param_3 == 0)) {
    FUN_100603990(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    return;
  }
  return;
}

