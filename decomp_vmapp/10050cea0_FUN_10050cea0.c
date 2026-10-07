
undefined8 FUN_10050cea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10050cdb0();
  if (iVar1 == 0) {
    _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),param_2,param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "LinkElementNode can not be modified, err=%i");
    }
  }
  return uVar2;
}

