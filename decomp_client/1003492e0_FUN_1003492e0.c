
void FUN_1003492e0(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_100347f60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1003485c0(param_1,param_2,*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_100348850(param_1);
      return;
    case 3:
      FUN_100348b00(param_1);
      return;
    case 4:
      FUN_100348c60(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100348f80(param_1);
      return;
    case 6:
      goto switchD_100349325_caseD_6;
    default:
      return;
    }
  }
  if (param_3 == 1) {
    if (*(int *)param_4[1] == 0) {
      *(undefined4 *)*param_4 = 2;
      return;
    }
    if (*(int *)param_4[1] == 1) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
      return;
    }
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
switchD_100349325_caseD_6:
  cVar1 = FUN_100348d40(param_1);
  if (cVar1 == '\0') {
    return;
  }
  uVar2 = FUN_100d798a0(param_1 + 0x30);
  FUN_100348e30(param_1,uVar2);
  return;
}

