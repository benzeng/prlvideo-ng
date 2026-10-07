
void FUN_1008d1400(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = FUN_100885600(DAT_1011c2a28);
  while (0 < iVar1) {
    plVar2 = (long *)FUN_100885530(DAT_1011c2a28);
    lVar3 = *plVar2;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))(plVar2);
      lVar3 = *plVar2;
    }
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
    FUN_10081e1a0(plVar2[1]);
    FUN_10081e1a0(plVar2[2]);
    FUN_10081e1a0(plVar2);
    iVar1 = FUN_100885600(DAT_1011c2a28);
  }
  FUN_100884dd0();
  DAT_1011c2a28 = 0;
  return;
}

