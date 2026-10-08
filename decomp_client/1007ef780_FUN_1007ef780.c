
void FUN_1007ef780(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      goto switchD_1007ef7cf_caseD_0;
    case 1:
      FUN_1007eb010(param_1);
      return;
    case 2:
      FUN_1007ecf20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1007ebaf0(param_1);
      return;
    case 4:
      FUN_1007ec740(param_1);
      return;
    case 5:
      FUN_1007ebd90(param_1);
      return;
    case 6:
      FUN_1007ec4b0(param_1,0);
      return;
    case 7:
      FUN_1007edc10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_1007ee100(param_1,param_4[1]);
      return;
    case 9:
      FUN_1007eec00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 10:
      if (*(int *)param_4[2] != 1) {
        return;
      }
      FUN_1007eeea0(*(undefined8 *)(param_1 + 0x10));
      return;
    default:
      return;
    }
  }
  if (param_3 == 2) {
    puVar4 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar4 = 0xffffffff;
      return;
    }
LAB_1007ef81e:
    *puVar4 = 2;
  }
  else {
    if (param_3 == 10) {
      if (*(int *)param_4[1] == 0) {
        puVar4 = (undefined4 *)*param_4;
        goto LAB_1007ef81e;
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
  }
  return;
switchD_1007ef7cf_caseD_0:
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  cVar1 = FUN_1001238f0(lVar3);
  if (*(char *)(param_1 + 0x3a) == cVar1) {
    return;
  }
  *(char *)(param_1 + 0x3a) = cVar1;
  FUN_100867eb0(*(undefined8 *)(param_1 + 0x10));
  return;
}

