
void FUN_1001ade60(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 local_1c;
  
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      local_1c = *(undefined4 *)param_4[2];
      FUN_1001ae0a0(param_1 + 0x38,param_4[1],&local_1c);
      return;
    case 1:
      FUN_1001acda0(param_1);
      return;
    case 2:
      FUN_1001ad490(param_1,param_4[1],*(undefined1 *)param_4[2]);
      return;
    case 3:
      FUN_1001ac700(param_1,param_2,*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 4:
      goto switchD_1001adead_caseD_4;
    case 5:
      FUN_1001ad6d0(param_1);
      return;
    default:
      return;
    }
  }
  if (param_3 == 3) {
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
switchD_1001adead_caseD_4:
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x50) + 0x28) + 9) & 0x80) == 0) {
    return;
  }
  cVar1 = FUN_1001a97c0(param_1);
  if (cVar1 != '\0') {
    return;
  }
  QWidget::close();
  return;
}

