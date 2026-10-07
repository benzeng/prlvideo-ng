
undefined8 FUN_1008c21e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1008cee60(param_1,param_3);
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_100885600(lVar3);
    if (0 < iVar1) {
      iVar1 = 0;
      if (param_4 == 0) {
        do {
          lVar4 = FUN_100885620(lVar3,iVar1);
          lVar4 = FUN_1008c1930(param_1,param_2,*(undefined8 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_1008aae80(lVar4);
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(lVar3);
        } while (iVar1 < iVar2);
      }
      else {
        do {
          lVar4 = FUN_100885620(lVar3,iVar1);
          lVar4 = FUN_1008c1930(param_1,param_2,*(undefined8 *)(lVar4 + 8),
                                *(undefined8 *)(lVar4 + 0x10));
          if (lVar4 == 0) {
            return 0;
          }
          FUN_1008bc260(param_4,lVar4,0xffffffff);
          FUN_1008aae80(lVar4);
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(lVar3);
        } while (iVar1 < iVar2);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}

