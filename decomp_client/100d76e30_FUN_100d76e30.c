
int FUN_100d76e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = _CFURLCreateFromFSRef(0,param_1);
  if (lVar2 == 0) {
    iVar3 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("PLISTFILE","PropertyListFile",1,"CFURLCreateFromFSRef() err");
    }
  }
  else {
    iVar1 = FUN_100d76bd0(lVar2,param_2,param_3,param_4);
    iVar3 = 0;
    if ((iVar1 != 0) && (iVar3 = iVar1, 0 < DAT_10230ffd0)) {
      FUN_100df99c0("PLISTFILE","PropertyListFile",1,"PropertyList::ReadFromCFURL() err %i",iVar1);
    }
    _CFRelease(lVar2);
  }
  return iVar3;
}

