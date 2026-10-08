
long FUN_100cb20d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_100cad740();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x21,0x73,0x41,"pk7_smime.c",0x1e5);
  }
  else {
    iVar1 = FUN_100cadf20(lVar3,0x17);
    if (iVar1 != 0) {
      iVar1 = FUN_100caeb20(lVar3,param_3);
      if (iVar1 == 0) {
        uVar4 = 0x79;
        uVar6 = 0x1ec;
LAB_100cb21d2:
        FUN_100c62ee0(0x21,0x73,uVar4,"pk7_smime.c",uVar6);
      }
      else {
        iVar1 = FUN_100c60800(param_1);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            uVar4 = FUN_100c60820(param_1,iVar1);
            lVar5 = FUN_100cae840(lVar3,uVar4);
            if (lVar5 == 0) {
              uVar4 = 0x78;
              uVar6 = 499;
              goto LAB_100cb21d2;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_100c60800(param_1);
          } while (iVar1 < iVar2);
        }
        if ((param_4 & 0x1000) != 0) {
          return lVar3;
        }
        iVar1 = FUN_100cb17a0(lVar3,param_2);
        if (iVar1 != 0) {
          return lVar3;
        }
      }
    }
    FUN_100c59480(0);
    FUN_100cad760(lVar3);
  }
  return 0;
}

