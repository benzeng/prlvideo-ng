
void FUN_100cac870(int param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_100cac980();
  iVar3 = FUN_100c60800(DAT_102318460);
  if (0 < iVar3) {
    if (param_1 == 0) {
      do {
        plVar2 = (long *)FUN_100c60820(DAT_102318460,iVar3 + -1);
        if (((int)plVar2[4] < 1) && (*plVar2 != 0)) {
          FUN_100c60270(DAT_102318460,iVar3 + -1);
          if (*plVar2 != 0) {
            FUN_100c53fe0();
          }
          FUN_100bf3910(plVar2[1]);
          FUN_100bf3910(plVar2);
        }
        iVar4 = iVar3 + -1;
        bVar1 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
    else {
      do {
        plVar2 = (long *)FUN_100c60820(DAT_102318460,iVar3 + -1);
        FUN_100c60270(DAT_102318460,iVar3 + -1);
        if (*plVar2 != 0) {
          FUN_100c53fe0();
        }
        FUN_100bf3910(plVar2[1]);
        FUN_100bf3910(plVar2);
        iVar4 = iVar3 + -1;
        bVar1 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
  }
  iVar3 = FUN_100c60800();
  if (iVar3 == 0) {
    FUN_100c5ffd0(DAT_102318460);
    DAT_102318460 = 0;
  }
  return;
}

