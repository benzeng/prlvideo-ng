
long FUN_1003ba9d0(long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  
  if ((int)param_1[0x14] != 0) goto LAB_1003baacb;
  if (param_1[1] == 0) {
    if ((*(byte *)(*param_1 + 0x39) & 1) == 0) {
      FUN_1003ba4c0(param_1,(int)param_1[3],(int)param_1[2]);
    }
    else {
      FUN_1003ba860(param_1,(int)param_1[3]);
    }
    goto LAB_1003baacb;
  }
  plVar1 = param_1 + 0x14;
  uVar3 = *(uint *)((long)param_1 + 0x14);
  iVar2 = 0;
  if (uVar3 != *(uint *)(param_1 + 3)) {
    iVar2 = FUN_1003b9bc0(param_1,plVar1,(int)param_1[2]);
    uVar3 = *(uint *)((long)param_1 + 0x14);
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 < 0xf) {
    pcVar5 = "i";
    switch(uVar3) {
    case 1:
      pcVar5 = "u";
      break;
    case 2:
      break;
    default:
switchD_1003baa3f_caseD_3:
      pcVar5 = "?";
      break;
    case 4:
      pcVar5 = "b";
      break;
    case 8:
      pcVar5 = "";
    }
  }
  else {
    if (uVar3 != 0xf) goto switchD_1003baa3f_caseD_3;
    pcVar5 = "a";
  }
  FUN_10038e8e0(plVar1,pcVar5);
  FUN_10038e8e0(plVar1,param_1[1]);
  FUN_1003b9900(plVar1,*param_1,(char)param_1[2]);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_10038e8e0(plVar1,")");
  }
LAB_1003baacb:
  lVar4 = param_1[0x15];
  if (lVar4 == 0) {
    lVar4 = param_1[0x17];
  }
  return lVar4;
}

