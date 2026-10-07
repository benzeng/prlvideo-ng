
void FUN_100287530(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  ulong uVar6;
  undefined2 uVar7;
  
  plVar2 = (long *)param_1[0x7418];
  while (plVar2 != param_1 + 0x7418) {
    plVar1 = plVar2 + -0x13;
    if ((*(int *)((long)plVar2 + 0x3c) == 0) && ((int)plVar2[8] == 0)) {
      lVar3 = *plVar2;
      plVar4 = (long *)plVar2[1];
      *(long **)(lVar3 + 8) = plVar4;
      *plVar4 = lVar3;
      *plVar2 = (long)plVar2;
      plVar2[1] = (long)plVar2;
      *(undefined4 *)((long)plVar2 + 0x3c) = 1;
      (**(code **)(*param_1 + 0xa0))(param_1,plVar1,1);
      (**(code **)(*param_1 + 0xd0))(param_1);
    }
    else if (*(int *)(plVar2[9] + 0xc0) == 0 && (int)plVar2[8] == 0) {
      FUN_1002886c0(param_1,plVar1);
    }
    else {
      uVar7 = 0;
      if ((int)plVar2[8] != 0) {
        uVar7 = 0x48;
      }
      uVar6 = (ulong)*(uint *)(param_1 + 0x12);
      *(short *)(&DAT_1011c3cc0 + uVar6 * 0x12) = (short)plVar2[7];
      lVar3 = plVar2[5];
      *(long *)(&DAT_1011c3cb8 + uVar6 * 0x12) = plVar2[6];
      *(long *)(&DAT_1011c3cb0 + uVar6 * 0x12) = lVar3;
      cVar5 = FUN_100288ab0(param_1,plVar1);
      if (cVar5 == '\0') {
        uVar7 = 4;
      }
      FUN_100288820(param_1,uVar7,2,0,plVar1);
    }
    plVar2 = (long *)param_1[0x7418];
  }
  return;
}

