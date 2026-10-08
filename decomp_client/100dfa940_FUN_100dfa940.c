
int FUN_100dfa940(char *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  
  local_38 = 0;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
  sVar3 = _strlen(param_1);
  lVar4 = _CFURLCreateFromFileSystemRepresentation(uVar1,param_1,sVar3,0);
  iVar2 = -1;
  if (lVar4 != 0) {
    lVar5 = _CFURLCopyAbsoluteURL(lVar4);
    _CFRelease(lVar4);
    if (lVar5 != 0) {
      iVar2 = _SecStaticCodeCreateWithPath(lVar5,0,&local_38);
      _CFRelease(lVar5);
      if (iVar2 == 0) {
        iVar2 = FUN_100dfaae0(local_38,param_2,param_3,param_4);
        _CFRelease(local_38);
      }
    }
  }
  return iVar2;
}

