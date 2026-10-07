
int FUN_100897580(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar3 = *(code **)(*param_1 + 0x38), pcVar3 == (code *)0x0)) {
    FUN_100887ce0(6,0x92,0x96,"pmeth_gn.c",0x8d);
    iVar1 = -2;
  }
  else if ((int)param_1[4] == 4) {
    iVar1 = -1;
    if (param_2 != (long *)0x0) {
      if (*param_2 == 0) {
        lVar2 = FUN_100891f40();
        *param_2 = lVar2;
        pcVar3 = *(code **)(*param_1 + 0x38);
      }
      iVar1 = (*pcVar3)(param_1);
      if (iVar1 < 1) {
        FUN_1008924e0(*param_2);
        *param_2 = 0;
      }
    }
  }
  else {
    FUN_100887ce0(6,0x92,0x97,"pmeth_gn.c",0x91);
    iVar1 = -1;
  }
  return iVar1;
}

