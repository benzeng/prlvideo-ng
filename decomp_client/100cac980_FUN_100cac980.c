
void FUN_100cac980(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = FUN_100c60800(DAT_102318468);
  while (0 < iVar1) {
    plVar2 = (long *)FUN_100c60730(DAT_102318468);
    lVar3 = *plVar2;
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      (**(code **)(lVar3 + 0x18))(plVar2);
      lVar3 = *plVar2;
    }
    *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + -1;
    FUN_100bf3910(plVar2[1]);
    FUN_100bf3910(plVar2[2]);
    FUN_100bf3910(plVar2);
    iVar1 = FUN_100c60800(DAT_102318468);
  }
  FUN_100c5ffd0();
  DAT_102318468 = 0;
  return;
}

