
void FUN_1007482a0(long param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_2 == 0xc) {
    if (param_3 == 2) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if ((int)param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100747470(param_1,param_2,*(undefined4 *)param_4[2]);
      return;
    case 1:
switchD_1007482e1_caseD_1:
      FUN_1007471d0(param_1);
      return;
    case 2:
      FUN_100747670(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      iVar1 = *(int *)(param_1 + 0x20);
      iVar2 = FUN_1002dabc0();
      if ((iVar1 != iVar2) ||
         (iVar1 = *(int *)(param_1 + 0x24), iVar2 = FUN_1002dab50(), iVar1 != iVar2))
      goto switchD_1007482e1_caseD_1;
    }
  }
  return;
}

