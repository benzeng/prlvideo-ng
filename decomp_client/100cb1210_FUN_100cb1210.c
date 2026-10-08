
long FUN_100cb1210(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_100cad740();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x21,0x74,0x41,"pk7_smime.c",0x4c);
  }
  else {
    iVar1 = FUN_100cadf20(lVar3,0x16);
    if ((iVar1 != 0) && (iVar1 = FUN_100cade60(lVar3,0x15), iVar1 != 0)) {
      if ((param_2 == 0) || (lVar4 = FUN_100cb1370(lVar3,param_1,param_2,0,param_5), lVar4 != 0)) {
        if (((param_5 & 2) == 0) && (iVar1 = FUN_100c60800(param_3), 0 < iVar1)) {
          iVar1 = 0;
          do {
            uVar5 = FUN_100c60820(param_3,iVar1);
            iVar2 = FUN_100cae310(lVar3,uVar5);
            if (iVar2 == 0) goto LAB_100cb1344;
            iVar1 = iVar1 + 1;
            iVar2 = FUN_100c60800(param_3);
          } while (iVar1 < iVar2);
        }
        if ((param_5 & 0x40) != 0) {
          FUN_100cadd30(lVar3,1,1,0);
        }
        if ((param_5 & 0x5000) != 0) {
          return lVar3;
        }
        iVar1 = FUN_100cb17a0(lVar3,param_4,param_5);
        if (iVar1 != 0) {
          return lVar3;
        }
      }
      else {
        FUN_100c62ee0(0x21,0x74,0x99,"pk7_smime.c",0x57);
      }
    }
LAB_100cb1344:
    FUN_100cad760(lVar3);
  }
  return 0;
}

