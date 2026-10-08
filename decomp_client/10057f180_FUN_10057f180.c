
void FUN_10057f180(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  if ((int)param_2 == 0xc) {
    if ((param_3 == 7) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if ((int)param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10057d0a0();
      return;
    case 1:
      FUN_10057e020();
      return;
    case 2:
      FUN_10057d590();
      return;
    case 3:
      FUN_10057e370();
      return;
    case 4:
      FUN_10057e800();
      return;
    case 5:
      FUN_10057cf30();
      return;
    case 6:
      FUN_10057d400(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_10057df70(param_1,param_2,*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 8:
      FUN_10057e9b0(param_1,*(undefined8 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
  }
  return;
}

