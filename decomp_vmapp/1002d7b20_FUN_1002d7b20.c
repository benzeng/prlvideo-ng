
void FUN_1002d7b20(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] RESET, pending %d",(long)param_1 + 0xcf,(int)param_1[1]);
  }
  if ((long *)param_1[9] != param_1 + 9) {
    lVar2 = param_1[0xc];
    plVar3 = (long *)param_1[0xd];
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    param_1[0xc] = (long)(param_1 + 0xc);
    param_1[0xd] = (long)(param_1 + 0xc);
    while (plVar3 = (long *)param_1[9], plVar3 != param_1 + 9) {
      lVar2 = *plVar3;
      plVar6 = (long *)plVar3[1];
      *(long **)(lVar2 + 8) = plVar6;
      *plVar6 = lVar2;
      *plVar3 = 0x112233;
      plVar3[1] = (long)&DAT_00445566;
      *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
      FUN_1002c8930();
    }
  }
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  plVar3 = param_1 + 3;
  plVar6 = (long *)param_1[3];
  if (plVar6 != plVar3) {
    plVar1 = param_1 + 6;
    do {
      lVar2 = *plVar6;
      plVar4 = (long *)plVar6[1];
      *(long **)(lVar2 + 8) = plVar4;
      *plVar4 = lVar2;
      *plVar6 = 0x112233;
      plVar6[1] = (long)&DAT_00445566;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      if ((long *)param_1[3] == plVar3) {
        lVar2 = param_1[0x10];
        plVar4 = (long *)param_1[0x11];
        *(long **)(lVar2 + 8) = plVar4;
        *plVar4 = lVar2;
        param_1[0x10] = (long)(param_1 + 0x10);
        param_1[0x11] = (long)(param_1 + 0x10);
      }
      *(uint *)(plVar6 + 0x8e) = *(uint *)(plVar6 + 0x8e) | 8;
      if (*(int *)((long)plVar6 + 0x464) == 0) {
        if ((long *)*plVar1 == plVar1) {
          lVar2 = *(long *)(param_1[0x18] + 0x28);
          plVar4 = *(long **)(lVar2 + 0x20);
          *(long **)(lVar2 + 0x20) = param_1 + 0xe;
          param_1[0xe] = lVar2 + 0x18;
          param_1[0xf] = (long)plVar4;
          *plVar4 = (long)(param_1 + 0xe);
        }
        puVar5 = (undefined8 *)param_1[7];
        param_1[7] = (long)plVar6;
        *plVar6 = (long)plVar1;
        plVar6[1] = (long)puVar5;
        *puVar5 = plVar6;
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      }
      else {
        FUN_1002c8930();
      }
      plVar6 = (long *)*plVar3;
    } while (plVar6 != plVar3);
  }
  param_1[0x17] = 0;
  return;
}

