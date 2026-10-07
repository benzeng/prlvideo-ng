
void FUN_10030ba80(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_1002adb30(*param_1,param_1[2]);
  if ((param_1[2] == 0) || (param_1[4] == 0)) {
    param_1[4] = 0;
  }
  else {
    lVar5 = FUN_1002adb30(*param_1);
    FUN_1002fab50(*param_1,param_1 + 0x14cd,1);
    param_1[4] = 0;
    if (lVar5 != param_1[2]) {
      FUN_1002adb30(*param_1,lVar5);
    }
  }
  if (*(int *)(param_1 + 5) != 0) {
    (*(code *)param_1[9])(1,param_1 + 5);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    (*(code *)param_1[9])(1,(undefined4 *)((long)param_1 + 0x2c));
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  piVar2 = (int *)param_1[6];
  iVar1 = piVar2[6];
  piVar2[6] = iVar1 + -1;
  if (iVar1 < 1) {
    if (*piVar2 != 0) {
      (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88);
      *piVar2 = 0;
    }
    if (piVar2[1] != 0) {
      (*(code *)DAT_1011c4a88[0x250])(*DAT_1011c4a88);
      piVar2[1] = 0;
    }
    if (piVar2[2] != 0) {
      (*(code *)DAT_1011c4a88[0x284])(*DAT_1011c4a88,1,piVar2 + 2);
      piVar2[2] = 0;
    }
    if (piVar2[3] != 0) {
      (*(code *)DAT_1011c4a88[0x284])(*DAT_1011c4a88,1,piVar2 + 3);
      piVar2[3] = 0;
    }
    pvVar3 = (void *)param_1[6];
    if (pvVar3 != (void *)0x0) {
      FUN_100329280(pvVar3);
      operator_delete(pvVar3);
    }
  }
  if ((lVar4 == param_1[2]) || (lVar4 == param_1[3])) {
    lVar4 = 0;
  }
  FUN_1002adb30(*param_1,lVar4);
  FUN_1002fa330(*param_1,param_1[2]);
  if (param_1[3] != 0) {
    FUN_1002fa330(*param_1);
  }
  *(undefined8 *)(DAT_1011c80f8 + (ulong)(uint)(*(int *)(param_1 + 0x14d5) - DAT_1011c80f0) * 8) = 0
  ;
  FUN_1003011b0(param_1 + 7);
  return;
}

