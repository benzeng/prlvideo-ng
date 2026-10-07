
int FUN_10050f280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = _CFURLCreateFromFSRef(0,param_1);
  if (lVar2 == 0) {
    iVar3 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PLISTFILE","PropertyListFile",1,"CFURLCreateFromFSRef() err");
    }
  }
  else {
    iVar1 = FUN_10050f020(lVar2,param_2,param_3,param_4);
    iVar3 = 0;
    if ((iVar1 != 0) && (iVar3 = iVar1, 0 < DAT_1011b55f8)) {
      FUN_1008e3970("PLISTFILE","PropertyListFile",1,"PropertyList::ReadFromCFURL() err %i",iVar1);
    }
    _CFRelease(lVar2);
  }
  return iVar3;
}

