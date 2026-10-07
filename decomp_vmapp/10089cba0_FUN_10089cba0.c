
int * FUN_10089cba0(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_1008afdf0(10);
    if (piVar2 != (int *)0x0) goto LAB_10089cbce;
    FUN_100887ce0(0xd,0x8a,0x3a,"a_enum.c",0x92);
    piVar5 = (int *)0x0;
LAB_10089cc80:
    piVar2 = (int *)0x0;
    if (piVar5 != param_2) {
      FUN_1008afd70();
      piVar2 = (int *)0x0;
    }
  }
  else {
LAB_10089cbce:
    iVar1 = 10;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = 0x10a;
    }
    piVar2[1] = iVar1;
    iVar1 = FUN_10084b410(param_1);
    iVar4 = 4;
    if (iVar1 != 0) {
      iVar4 = ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) + 5;
    }
    lVar3 = *(long *)(piVar2 + 2);
    if (*piVar2 < iVar4) {
      lVar3 = FUN_10081df30(lVar3,iVar4,"a_enum.c",0x9c);
      if (lVar3 == 0) {
        FUN_100887ce0(0xd,0x8a,0x41,"a_enum.c",0x9e);
        piVar5 = piVar2;
        goto LAB_10089cc80;
      }
      *(long *)(piVar2 + 2) = lVar3;
    }
    iVar1 = FUN_10084bdf0(param_1,lVar3);
    *piVar2 = iVar1;
  }
  return piVar2;
}

