
void FUN_1008cf910(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    return;
  }
  lVar1 = param_1[2];
  iVar3 = FUN_100885600(lVar1);
  if (0 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      lVar2 = FUN_100885620(lVar1,iVar3 + -2);
      FUN_10081e1a0(*(undefined8 *)(lVar2 + 0x10));
      FUN_10081e1a0(*(undefined8 *)(lVar2 + 8));
      FUN_10081e1a0(lVar2);
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  if (lVar1 != 0) {
    FUN_100884dd0(lVar1);
  }
  FUN_10081e1a0(*param_1);
  FUN_10081e1a0(param_1);
  return;
}

