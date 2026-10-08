
undefined4 FUN_100d738c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_39;
  undefined8 local_38;
  
  uVar2 = FUN_100d737e0(param_1,&local_38);
  uVar3 = uVar2;
  switch(uVar2) {
  case 0:
    sVar1 = _FSResolveAliasWithMountFlags(0,local_38,param_2,&local_39,param_3);
    uVar3 = 0xc;
    if ((sVar1 != -0x2b) && (sVar1 != -0x23)) {
      if (sVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,"FSResolveAliasWithMountFlags() err %i"
                       );
        }
      }
    }
    _DisposeHandle(local_38);
    break;
  default:
    uVar3 = 1;
    if (0 < DAT_10230ffd0) {
      uVar3 = 1;
      FUN_100df99c0("SHAPPLNKFILE","SharedAppLinkFile",1,"LinkAliasNode::getAliasHandle() err %i",
                    uVar2);
    }
    break;
  case 3:
  case 6:
  case 9:
    break;
  }
  return uVar3;
}

