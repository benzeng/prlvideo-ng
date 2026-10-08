
bool FUN_100cb17a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar2 = FUN_100caecd0(param_1,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0x21,0x86,0x41,"pk7_smime.c",0x75);
  }
  else {
    FUN_100c87040(param_2,lVar2,param_3);
    FUN_100c58d60(lVar2,0xb,0,0);
    iVar1 = FUN_100cafed0(param_1,lVar2);
    bVar3 = iVar1 != 0;
    if (!bVar3) {
      FUN_100c62ee0(0x21,0x86,0x91,"pk7_smime.c",0x7e);
    }
    FUN_100c59480(lVar2);
  }
  return bVar3;
}

