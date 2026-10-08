
int * FUN_100c78120(long param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_2;
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_100c8b370(10);
    if (piVar2 != (int *)0x0) goto LAB_100c7814e;
    FUN_100c62ee0(0xd,0x8a,0x3a,"a_enum.c",0x92);
    piVar5 = (int *)0x0;
LAB_100c78200:
    piVar2 = (int *)0x0;
    if (piVar5 != param_2) {
      FUN_100c8b2f0();
      piVar2 = (int *)0x0;
    }
  }
  else {
LAB_100c7814e:
    iVar1 = 10;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = 0x10a;
    }
    piVar2[1] = iVar1;
    iVar1 = FUN_100c26610(param_1);
    iVar4 = 4;
    if (iVar1 != 0) {
      iVar4 = ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) + 5;
    }
    lVar3 = *(long *)(piVar2 + 2);
    if (*piVar2 < iVar4) {
      lVar3 = FUN_100bf36a0(lVar3,iVar4,"a_enum.c",0x9c);
      if (lVar3 == 0) {
        FUN_100c62ee0(0xd,0x8a,0x41,"a_enum.c",0x9e);
        piVar5 = piVar2;
        goto LAB_100c78200;
      }
      *(long *)(piVar2 + 2) = lVar3;
    }
    iVar1 = FUN_100c26ff0(param_1,lVar3);
    *piVar2 = iVar1;
  }
  return piVar2;
}

