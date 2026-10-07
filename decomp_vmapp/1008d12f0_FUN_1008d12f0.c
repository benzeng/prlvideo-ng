
void FUN_1008d12f0(int param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_1008d1400();
  iVar3 = FUN_100885600(DAT_1011c2a20);
  if (0 < iVar3) {
    if (param_1 == 0) {
      do {
        plVar2 = (long *)FUN_100885620(DAT_1011c2a20,iVar3 + -1);
        if (((int)plVar2[4] < 1) && (*plVar2 != 0)) {
          FUN_100885070(DAT_1011c2a20,iVar3 + -1);
          if (*plVar2 != 0) {
            FUN_100878de0();
          }
          FUN_10081e1a0(plVar2[1]);
          FUN_10081e1a0(plVar2);
        }
        iVar4 = iVar3 + -1;
        bVar1 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
    else {
      do {
        plVar2 = (long *)FUN_100885620(DAT_1011c2a20,iVar3 + -1);
        FUN_100885070(DAT_1011c2a20,iVar3 + -1);
        if (*plVar2 != 0) {
          FUN_100878de0();
        }
        FUN_10081e1a0(plVar2[1]);
        FUN_10081e1a0(plVar2);
        iVar4 = iVar3 + -1;
        bVar1 = 0 < iVar3;
        iVar3 = iVar4;
      } while (iVar4 != 0 && bVar1);
    }
  }
  iVar3 = FUN_100885600();
  if (iVar3 == 0) {
    FUN_100884dd0(DAT_1011c2a20);
    DAT_1011c2a20 = 0;
  }
  return;
}

