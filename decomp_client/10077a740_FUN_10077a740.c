
long FUN_10077a740(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  iVar7 = 0;
  lVar6 = 0;
  if (lVar4 != 0) {
    iVar1 = FUN_10015d3a0(lVar4);
    if (iVar1 < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      do {
        lVar5 = FUN_10015d330(lVar4,iVar7);
        iVar2 = FUN_10018a9d0(lVar5);
        if ((iVar2 == 0x30000004) || (iVar2 = FUN_10018a9d0(lVar5), iVar2 == 0x30000005)) {
          iVar2 = FUN_10018f860(lVar5);
          if (iVar2 == 8) {
            return lVar5;
          }
          if (lVar6 == 0) {
            lVar6 = lVar5;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  return lVar6;
}

