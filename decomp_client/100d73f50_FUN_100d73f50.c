
undefined8 FUN_100d73f50(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_2 == 1) {
    iVar1 = FUN_100d73050(param_1);
    if (iVar1 == 0) {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 8),&cf_CommandActionKind,&cf_CommandLine);
      uVar2 = 0;
    }
    else {
      uVar2 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                      "LinkElementNode can not be modified, err=%i");
      }
    }
  }
  return uVar2;
}

