
void FUN_1004a1ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _HLock(*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  uVar1 = **(undefined8 **)(param_1 + 8);
  uVar2 = _GetHandleSize();
  lVar3 = _CFDataCreateWithBytesNoCopy
                    (uVar4,uVar1,uVar2,*(undefined8 *)PTR__kCFAllocatorNull_100ba23b8);
  uVar4 = _CGImageSourceCreateWithData(lVar3,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (lVar3 != 0) {
    _CFRelease(lVar3);
    return;
  }
  return;
}

