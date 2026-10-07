
int FUN_10050f6c0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  int iVar4;
  
  sVar2 = _strlen(param_1);
  lVar3 = _CFURLCreateFromFileSystemRepresentation(0,param_1,sVar2,0);
  if (lVar3 == 0) {
    iVar4 = 3;
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("PLISTFILE","PropertyListFile",1,"CFURLCreateFromFSRef() err, path=\"%s\"",
                    param_1);
    }
  }
  else {
    iVar1 = FUN_10050f480(lVar3,param_2,param_3);
    iVar4 = 0;
    if ((iVar1 != 0) && (iVar4 = iVar1, 0 < DAT_1011b55f8)) {
      FUN_1008e3970("PLISTFILE","PropertyListFile",1,"PropertyList::WriteToCFURL() err %i",iVar1);
    }
    _CFRelease(lVar3);
  }
  return iVar4;
}

