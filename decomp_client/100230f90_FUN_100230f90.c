
undefined8 FUN_100230f90(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  uVar2 = FUN_100319cb0(lVar3);
  FUN_100334ca0(uVar2,1);
  if (*(char *)((long)param_1 + 0x34) == '\0') {
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    lVar3 = FUN_100319960(lVar3);
    if (lVar3 != 0) {
      (**(code **)(*param_1 + 0x128))(param_1);
    }
  }
  if (((int)param_1[5] != 3) && ((*(byte *)(param_1 + 6) & 1) != 0)) {
    if ((int)param_1[5] == 0) {
      lVar3 = 0;
      if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar3 = param_1[4];
      }
      uVar2 = FUN_100319c50(lVar3);
      FUN_100330c70(uVar2,0,1);
    }
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    uVar2 = FUN_100319c50(lVar3);
    cVar1 = FUN_100330a50(uVar2);
    if (cVar1 == '\0') {
      lVar3 = 0;
      if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar3 = param_1[4];
      }
      uVar2 = FUN_100319c50(lVar3);
      cVar1 = FUN_100330b70(uVar2);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    lVar3 = 0;
    if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar3 = param_1[4];
    }
    uVar2 = FUN_100319c50(lVar3);
    FUN_100330e80(uVar2,0);
  }
  return 0;
}

