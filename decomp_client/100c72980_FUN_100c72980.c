
int FUN_100c72980(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar3 = *(code **)(*param_1 + 0x28), pcVar3 == (code *)0x0)) {
    FUN_100c62ee0(6,0x94,0x96,"pmeth_gn.c",0x5a);
    iVar1 = -2;
  }
  else if ((int)param_1[4] == 2) {
    iVar1 = -1;
    if (param_2 != (long *)0x0) {
      if (*param_2 == 0) {
        lVar2 = FUN_100c6d320();
        *param_2 = lVar2;
        if (lVar2 == 0) {
          FUN_100c62ee0(6,0x94,0x41,"pmeth_gn.c",0x6a);
          return -1;
        }
        pcVar3 = *(code **)(*param_1 + 0x28);
      }
      iVar1 = (*pcVar3)(param_1);
      if (iVar1 < 1) {
        FUN_100c6d8c0(*param_2);
        *param_2 = 0;
      }
    }
  }
  else {
    FUN_100c62ee0(6,0x94,0x97,"pmeth_gn.c",0x5f);
    iVar1 = -1;
  }
  return iVar1;
}

