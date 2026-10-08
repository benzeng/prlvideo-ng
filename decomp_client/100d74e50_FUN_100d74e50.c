
undefined8 FUN_100d74e50(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100d77270(param_2,*(undefined8 *)(param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 3;
    if ((iVar1 != 3) && (uVar2 = 1, 0 < DAT_10230ffd0)) {
      uVar2 = 1;
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,
                    "PropertyList::WriteToFilePath() err %i, path=\"%s\"",iVar1,param_2);
    }
  }
  return uVar2;
}

