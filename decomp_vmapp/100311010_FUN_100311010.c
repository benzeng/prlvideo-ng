
undefined1 FUN_100311010(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  
  uVar8 = 1;
  if (param_2 != param_1) {
    lVar4 = FUN_1002fa250(*param_1,*(undefined1 *)(param_1 + 1),param_2[2],
                          *(undefined2 *)((long)param_1 + 0xa6ac));
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar5 = FUN_1002adb30(*param_1,param_1[2]);
      if (*(int *)(param_1 + 5) != 0) {
        (*(code *)param_1[9])(1,param_1 + 5);
        *(undefined4 *)(param_1 + 5) = 0;
      }
      if (*(int *)((long)param_1 + 0x2c) != 0) {
        (*(code *)param_1[9])(1,(long)param_1 + 0x2c);
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
      FUN_1002adb30(*param_1,uVar5);
      lVar6 = param_2[6];
      param_1[6] = lVar6;
      param_1[0xd] = lVar6;
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
      puVar7 = (undefined8 *)param_1[2];
      uVar8 = 1;
      if (DAT_1011c4a88 == puVar7) {
        FUN_1002adb30(*param_1,lVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
      FUN_100310f10(param_1,puVar7,lVar4,0xfffff);
      lVar6 = param_1[2];
      if ((lVar6 == 0) || (param_1[4] == 0)) {
        param_1[4] = 0;
      }
      else {
        lVar6 = FUN_1002adb30(*param_1,lVar6);
        FUN_1002fab50(*param_1,param_1 + 0x14cd,1);
        param_1[4] = 0;
        if (lVar6 != param_1[2]) {
          FUN_1002adb30(*param_1,lVar6);
          lVar6 = param_1[2];
        }
      }
      FUN_1002fa330(*param_1,lVar6);
      if (param_1[3] != 0) {
        FUN_1002fa330(*param_1);
        param_1[3] = 0;
      }
      param_1[2] = lVar4;
      param_1[0x14d4] = 0;
      param_1[0x14d3] = 0;
      param_1[0x14d2] = 0;
      param_1[0x14d1] = 0;
      param_1[0x14d0] = 0;
      param_1[0x14cf] = 0;
      param_1[0x14ce] = 0;
      param_1[0x14cd] = 0;
      param_1[0x14cd] = lVar4;
      param_1[0x14ce] = param_1 + 7;
    }
  }
  return uVar8;
}

