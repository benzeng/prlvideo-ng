
undefined8 FUN_100d73140(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100d73050();
  if (iVar1 == 0) {
    _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),param_2,param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "LinkElementNode can not be modified, err=%i");
    }
  }
  return uVar2;
}

