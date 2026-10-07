
int * FUN_10089b490(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  
  piVar2 = param_2;
  if ((param_2 == (int *)0x0) && (piVar2 = (int *)FUN_1008afdf0(2), piVar2 == (int *)0x0)) {
    FUN_100887ce0(0xd,0x8b,0x3a,"a_int.c",0x1a5);
    piVar4 = (int *)0x0;
LAB_10089b58b:
    piVar2 = (int *)0x0;
    if (piVar4 != param_2) {
      FUN_1008afd70(piVar4);
      piVar2 = (int *)0x0;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 8) == 0)) {
      piVar2[1] = 2;
    }
    else {
      piVar2[1] = 0x102;
    }
    iVar1 = FUN_10084b410(param_1);
    iVar5 = 4;
    if (iVar1 != 0) {
      iVar5 = ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) + 5;
    }
    lVar3 = *(long *)(piVar2 + 2);
    if (*piVar2 < iVar5) {
      lVar3 = FUN_10081df30(lVar3,iVar5,"a_int.c",0x1af);
      if (lVar3 == 0) {
        FUN_100887ce0(0xd,0x8b,0x41,"a_int.c",0x1b1);
        piVar4 = piVar2;
        goto LAB_10089b58b;
      }
      *(long *)(piVar2 + 2) = lVar3;
    }
    iVar1 = FUN_10084bdf0(param_1,lVar3);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      **(undefined1 **)(piVar2 + 2) = 0;
      *piVar2 = 1;
    }
  }
  return piVar2;
}

