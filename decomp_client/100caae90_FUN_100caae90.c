
void FUN_100caae90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    return;
  }
  lVar1 = param_1[2];
  iVar3 = FUN_100c60800(lVar1);
  if (0 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      lVar2 = FUN_100c60820(lVar1,iVar3 + -2);
      FUN_100bf3910(*(undefined8 *)(lVar2 + 0x10));
      FUN_100bf3910(*(undefined8 *)(lVar2 + 8));
      FUN_100bf3910(lVar2);
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  if (lVar1 != 0) {
    FUN_100c5ffd0(lVar1);
  }
  FUN_100bf3910(*param_1);
  FUN_100bf3910(param_1);
  return;
}

