
bool FUN_1006aaba0(void)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  uVar1 = FUN_1001d50a0();
  uVar1 = FUN_1001d50d0(uVar1);
  lVar3 = FUN_1001e1c90(uVar1);
  bVar4 = true;
  if (lVar3 != 0) {
    iVar2 = FUN_10007ec40(lVar3);
    bVar4 = iVar2 == 0;
  }
  return bVar4;
}

