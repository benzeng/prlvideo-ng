
void FUN_1008622a0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  if (param_2 == 0xc) {
    if ((param_3 == 0xd) && (*(int *)param_4[1] == 1)) {
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
      FUN_1007add60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_1007ae4d0();
      return;
    case 2:
      FUN_1007ae6f0();
      return;
    case 3:
      FUN_1007adee0();
      return;
    case 4:
      FUN_1007aeb00();
      return;
    case 5:
      FUN_1007aec30();
      return;
    case 6:
      FUN_1007af340();
      return;
    case 7:
      FUN_1007abfb0();
      return;
    case 8:
      FUN_1007b0710();
      return;
    case 9:
      FUN_1007afca0(param_1,param_4[1],param_4[2]);
      return;
    case 10:
      FUN_1007afc30(param_1,param_4[1]);
      return;
    case 0xb:
      FUN_1007afc40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xc:
      FUN_1007afa00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xd:
      FUN_1007aea50(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 0xe:
      FUN_1007b0870();
      return;
    }
  }
  return;
}

