
undefined8 FUN_10050db80(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  if (((param_2 != 1) && (lVar2 = 1, param_2 != 3)) && (lVar2 = 2, param_2 != 2)) {
    return 2;
  }
  iVar1 = FUN_10050cdb0(param_1);
  if (iVar1 == 0) {
    _CFDictionarySetValue
              (*(undefined8 *)(param_1 + 8),&cf_ShowCommand,(&PTR_cf_Normal_100bc44a0)[lVar2 * 2]);
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "LinkElementNode can not be modified, err=%i");
    }
  }
  return uVar3;
}

