
undefined8 FUN_100d739f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  iVar1 = _FSNewAliasFromPath(0,param_2,0,&local_30,0);
  if (iVar1 != 0) {
    if (DAT_10230ffd0 < 1) {
      return 3;
    }
    FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,"FSNewAliasFromPath() err %i, path=\"%s\"",
                  iVar1,param_2);
    return 3;
  }
  iVar1 = FUN_100d73b20(param_1,local_30);
  uVar3 = 3;
  if (iVar1 == 0) {
    iVar1 = FUN_100d733c0(param_1,&cf___AliasPath__,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_100d73b01;
    }
    if ((iVar1 == 3) || (uVar3 = 1, DAT_10230ffd0 < 1)) goto LAB_100d73b01;
    pcVar2 = "LinkElementNode::setCFString() err %i";
  }
  else {
    if ((iVar1 == 3) || (uVar3 = 1, DAT_10230ffd0 < 1)) goto LAB_100d73b01;
    pcVar2 = "LinkAliasNode::setAliasHandle() err %i";
  }
  uVar3 = 1;
  FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,pcVar2,iVar1);
LAB_100d73b01:
  _DisposeHandle(local_30);
  return uVar3;
}

