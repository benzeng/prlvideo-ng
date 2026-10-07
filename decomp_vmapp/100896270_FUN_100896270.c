
long * FUN_100896270(long *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_1 == 0) {
    return (long *)0x0;
  }
  if (*(long *)(*param_1 + 0x10) == 0) {
    return (long *)0x0;
  }
  if ((param_1[1] == 0) || (iVar4 = FUN_10087a520(), iVar4 != 0)) {
    plVar5 = (long *)FUN_10081ddd0(0x50,"pmeth_lib.c",0x138);
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar2 = *(undefined4 *)((long)param_1 + 4);
    lVar6 = param_1[1];
    uVar3 = *(undefined4 *)((long)param_1 + 0xc);
    *(int *)plVar5 = (int)*param_1;
    *(undefined4 *)((long)plVar5 + 4) = uVar2;
    *(int *)(plVar5 + 1) = (int)lVar6;
    *(undefined4 *)((long)plVar5 + 0xc) = uVar3;
    lVar6 = 0;
    if (param_1[2] != 0) {
      FUN_10081d580(param_1[2] + 8,1,10,"pmeth_lib.c",0x142);
      lVar6 = param_1[2];
    }
    plVar5[2] = lVar6;
    lVar6 = 0;
    if (param_1[3] != 0) {
      FUN_10081d580(param_1[3] + 8,1,10,"pmeth_lib.c",0x147);
      lVar6 = param_1[3];
    }
    plVar5[3] = lVar6;
    plVar5[6] = 0;
    plVar5[5] = 0;
    *(int *)(plVar5 + 4) = (int)param_1[4];
    iVar4 = (**(code **)(*param_1 + 0x10))(plVar5,param_1);
    if (0 < iVar4) {
      return plVar5;
    }
    if ((*plVar5 != 0) && (pcVar1 = *(code **)(*plVar5 + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)(plVar5);
    }
    if (plVar5[2] != 0) {
      FUN_1008924e0();
    }
    if (plVar5[3] != 0) {
      FUN_1008924e0();
    }
    if (plVar5[1] != 0) {
      FUN_10087a5e0();
    }
    FUN_10081e1a0(plVar5);
  }
  else {
    FUN_100887ce0(6,0x9c,0x26,"pmeth_lib.c",0x134);
  }
  return (long *)0x0;
}

