
undefined8 * FUN_10049d2b0(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  lVar1 = _CFStringCreateWithCString(uVar2,param_2,0x8000100);
  uVar2 = _CFURLCreateWithFileSystemPath(uVar2,lVar1,0,0);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  return param_1;
}

