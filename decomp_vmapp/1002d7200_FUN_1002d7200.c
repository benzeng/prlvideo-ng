
void FUN_1002d7200(long param_1,long *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)*param_2;
  while (plVar3 != param_2) {
    if (*(int *)((long)plVar3 + 0x464) == 0) {
      if ((1 < DAT_1011c568c) && ((int)plVar3[0x8a] == 0x69)) {
        FUN_1002da980(2,plVar3);
      }
      uVar2 = *(uint *)(plVar3 + 0x8e);
      *(undefined4 *)((long)plVar3 + 0x464) = 1;
      LOCK();
      piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      LOCK();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      UNLOCK();
      if ((uVar2 & 4) != 0) {
        FUN_1002c9070(plVar3);
      }
    }
    lVar4 = *plVar3;
    plVar5 = (long *)plVar3[1];
    *(long **)(lVar4 + 8) = plVar5;
    *plVar5 = lVar4;
    *plVar3 = 0x112233;
    plVar3[1] = (long)&DAT_00445566;
    *(int *)(param_2 + 2) = (int)param_2[2] + -1;
    FUN_1002c8930(plVar3);
    plVar3 = (long *)*param_2;
  }
  lVar4 = *param_3;
  plVar3 = (long *)param_3[1];
  *(long **)(lVar4 + 8) = plVar3;
  *plVar3 = lVar4;
  *param_3 = (long)param_3;
  param_3[1] = (long)param_3;
  return;
}

