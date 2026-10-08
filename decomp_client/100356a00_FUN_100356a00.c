
undefined1 FUN_100356a00(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = FUN_100152280();
  iVar3 = FUN_100154d30(uVar1);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      uVar1 = FUN_100152280();
      lVar2 = FUN_100154790(uVar1,iVar3);
      if (lVar2 != 0) {
        iVar4 = FUN_10015d3a0(lVar2);
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            lVar5 = FUN_10015d330(lVar2,iVar6);
            if (lVar5 != 0) {
              uVar1 = FUN_10018c280(lVar5);
              iVar4 = FUN_100319ae0(uVar1);
              if (iVar4 != 0) {
                return 0;
              }
            }
            iVar6 = iVar6 + 1;
            iVar4 = FUN_10015d3a0(lVar2);
          } while (iVar6 < iVar4);
        }
      }
      iVar3 = iVar3 + 1;
      uVar1 = FUN_100152280();
      iVar4 = FUN_100154d30(uVar1);
    } while (iVar3 < iVar4);
  }
  return 1;
}

