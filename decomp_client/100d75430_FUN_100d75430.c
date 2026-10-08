
bool FUN_100d75430(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  char local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  undefined **local_20 [2];
  
  FUN_100d763f0(local_20);
  local_20[0] = &PTR_FUN_10230fb48;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  iVar1 = FUN_100d76760(param_1,&local_38);
  if (iVar1 == 0) {
    lVar2 = local_28;
    if ((local_38 & 1) == 0) {
      lVar2 = (long)&local_38 + 1;
    }
    iVar1 = FUN_100d76530(local_20,lVar2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_100d76820(local_20,&local_39);
      if (iVar1 == 0) {
        bVar3 = local_39 != '\0';
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
    }
  }
  else {
    bVar3 = false;
  }
  std::string::~string((string *)&local_38);
  FUN_100d76430(local_20);
  return bVar3;
}

