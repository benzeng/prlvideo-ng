
undefined8 FUN_100d73e20(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  if (((param_2 != 1) && (lVar2 = 1, param_2 != 3)) && (lVar2 = 2, param_2 != 2)) {
    return 2;
  }
  iVar1 = FUN_100d73050(param_1);
  if (iVar1 == 0) {
    _CFDictionarySetValue
              (*(undefined8 *)(param_1 + 8),&cf_ShowCommand,(&PTR_cf_Normal_10225ba90)[lVar2 * 2]);
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "LinkElementNode can not be modified, err=%i");
    }
  }
  return uVar3;
}

