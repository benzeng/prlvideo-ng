
bool FUN_1006aac20(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = FUN_1001d50a0();
  uVar2 = FUN_1001d50d0(uVar2);
  lVar3 = FUN_1001e1c90(uVar2);
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    iVar1 = FUN_10007ec40(lVar3);
    bVar4 = iVar1 == 2;
  }
  return bVar4;
}

