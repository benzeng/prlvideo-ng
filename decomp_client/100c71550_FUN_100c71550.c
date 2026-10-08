
long * FUN_100c71550(long param_1,long param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int *local_108;
  int local_100 [52];
  
  if (param_3 == -1) {
    if (param_1 == 0) {
      return (long *)0x0;
    }
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      return (long *)0x0;
    }
    param_3 = **(int **)(param_1 + 0x10);
LAB_100c7159c:
    if (*(long *)(param_1 + 0x18) != 0) {
      param_2 = *(long *)(param_1 + 0x18);
    }
    bVar3 = true;
  }
  else {
    if (param_1 != 0) goto LAB_100c7159c;
    bVar3 = false;
  }
  if (param_2 == 0) {
    param_2 = FUN_100c57900(param_3);
    if (param_2 == 0) {
      local_108 = local_100;
      local_100[0] = param_3;
      if ((DAT_102311900 == 0) || (iVar4 = FUN_100c60360(DAT_102311900,local_100), iVar4 < 0)) {
        plVar6 = (long *)FUN_100bf7eb0(&local_108,&PTR_DAT_102309410,6,8,FUN_100c71dc0);
        lVar5 = 0;
        if (plVar6 != (long *)0x0) {
          lVar5 = *plVar6;
        }
      }
      else {
        lVar5 = FUN_100c60820(DAT_102311900,iVar4);
      }
      bVar2 = false;
      param_2 = 0;
      goto LAB_100c7168a;
    }
  }
  else {
    iVar4 = FUN_100c55720(param_2);
    if (iVar4 == 0) {
      FUN_100c62ee0(6,0x9d,0x26,"pmeth_lib.c",0x8e);
      return (long *)0x0;
    }
  }
  lVar5 = FUN_100c57920(param_2,param_3);
  bVar2 = true;
LAB_100c7168a:
  if (lVar5 == 0) {
    FUN_100c62ee0(6,0x9d,0x9c,"pmeth_lib.c",0xa0);
  }
  else {
    plVar6 = (long *)FUN_100bf3540(0x50,"pmeth_lib.c",0xa4);
    if (plVar6 == (long *)0x0) {
      if (bVar2) {
        FUN_100c557e0(param_2);
      }
      FUN_100c62ee0(6,0x9d,0x41,"pmeth_lib.c",0xaa);
    }
    else {
      plVar6[1] = param_2;
      *plVar6 = lVar5;
      *(undefined4 *)(plVar6 + 4) = 0;
      plVar6[2] = param_1;
      plVar6[3] = 0;
      plVar6[7] = 0;
      if (bVar3) {
        FUN_100bf2cf0(param_1 + 8,1,10,"pmeth_lib.c",0xb4);
      }
      plVar6[5] = 0;
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        return plVar6;
      }
      iVar4 = (**(code **)(lVar5 + 8))(plVar6);
      if (0 < iVar4) {
        return plVar6;
      }
      if ((*plVar6 != 0) && (pcVar1 = *(code **)(*plVar6 + 0x18), pcVar1 != (code *)0x0)) {
        (*pcVar1)(plVar6);
      }
      if (plVar6[2] != 0) {
        FUN_100c6d8c0();
      }
      if (plVar6[3] != 0) {
        FUN_100c6d8c0();
      }
      if (plVar6[1] != 0) {
        FUN_100c557e0();
      }
      FUN_100bf3910(plVar6);
    }
  }
  return (long *)0x0;
}

