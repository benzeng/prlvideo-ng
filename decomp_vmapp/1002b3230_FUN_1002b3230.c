
void FUN_1002b3230(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  *(long *)(param_1[0xf] + 0xf0) = *(long *)(param_1[0xf] + 0xf0) + 1;
  cVar3 = (**(code **)(*param_1 + 0x10))();
  if (cVar3 == '\0') {
    if (2 < DAT_1011b55f8) {
      if (*(char *)((long)param_2 + 0x1c) == '\0') {
        pcVar6 = "abs";
      }
      else {
        pcVar6 = "rel";
      }
      FUN_1008e3970("","LocalDevices",3,
                    "[%s] Drop real_move, device not ready (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18]
                    ,(int)*param_2,*(int *)((long)param_2 + 4),(int)param_2[1],
                    *(int *)((long)param_2 + 0xc),(int)param_2[3],pcVar6);
    }
    *(long *)(param_1[0x11] + 0xf0) = *(long *)(param_1[0x11] + 0xf0) + 1;
    return;
  }
  cVar3 = *(char *)((long)param_2 + 0x1c);
  if (cVar3 == *(char *)((long)param_1 + 0x44)) {
    iVar1 = (int)*param_2;
    if (cVar3 == '\0') {
      if ((((iVar1 == (int)param_1[5]) &&
           (iVar4 = *(int *)((long)param_2 + 4), iVar4 == *(int *)((long)param_1 + 0x2c))) &&
          (iVar5 = (int)param_2[3], iVar5 == (int)param_1[8])) &&
         (((int)param_2[1] == 0 && (*(int *)((long)param_2 + 0xc) == 0)))) goto LAB_1002b33d8;
    }
    else if ((((iVar1 == *(int *)((long)param_2 + 4)) &&
              ((iVar1 == (int)param_2[1] && ((int)param_2[1] == 0)))) &&
             (*(int *)((long)param_2 + 0xc) == 0)) &&
            (iVar5 = (int)param_2[3], iVar4 = iVar1, iVar5 == (int)param_1[8])) {
LAB_1002b33d8:
      if (2 < DAT_1011b55f8) {
        pcVar6 = "abs";
        if (cVar3 != '\0') {
          pcVar6 = "rel";
        }
        FUN_1008e3970("","LocalDevices",3,
                      "[%s] Drop real_move, bogus event (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18],
                      iVar1,iVar4,0,0,iVar5,pcVar6);
      }
      *(long *)(param_1[0x10] + 0xf0) = *(long *)(param_1[0x10] + 0xf0) + 1;
      return;
    }
  }
  cVar3 = FUN_1000a2c40(DAT_1011c3698);
  if (cVar3 == '\0') {
    FUN_1002b2e80(param_1,param_2);
  }
  else {
    FUN_1002b30c0();
  }
  FUN_1002effe0(param_1[0x19]);
  FUN_1002b2a50(param_1,*(int *)((long)param_2 + 0xc),0);
  param_1[0xc] = param_2[7];
  param_1[0xb] = param_2[6];
  param_1[10] = param_2[5];
  param_1[9] = param_2[4];
  param_1[8] = param_2[3];
  param_1[7] = param_2[2];
  lVar2 = *param_2;
  param_1[6] = param_2[1];
  param_1[5] = lVar2;
  return;
}

