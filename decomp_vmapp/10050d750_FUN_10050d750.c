
undefined8 FUN_10050d750(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  iVar1 = _FSNewAliasFromPath(0,param_2,0,&local_30,0);
  if (iVar1 != 0) {
    if (DAT_1011b55f8 < 1) {
      return 3;
    }
    FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,"FSNewAliasFromPath() err %i, path=\"%s\"",
                  iVar1,param_2);
    return 3;
  }
  iVar1 = FUN_10050d880(param_1,local_30);
  uVar3 = 3;
  if (iVar1 == 0) {
    iVar1 = FUN_10050d120(param_1,&cf___AliasPath__,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
      goto LAB_10050d861;
    }
    if ((iVar1 == 3) || (uVar3 = 1, DAT_1011b55f8 < 1)) goto LAB_10050d861;
    pcVar2 = "LinkElementNode::setCFString() err %i";
  }
  else {
    if ((iVar1 == 3) || (uVar3 = 1, DAT_1011b55f8 < 1)) goto LAB_10050d861;
    pcVar2 = "LinkAliasNode::setAliasHandle() err %i";
  }
  uVar3 = 1;
  FUN_1008e3970("SHAPPLNKFILE","SharedAppLinkFile",1,pcVar2,iVar1);
LAB_10050d861:
  _DisposeHandle(local_30);
  return uVar3;
}

