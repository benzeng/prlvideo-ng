
void FUN_100787ef0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  
  *param_1 = 0;
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  iVar1 = _IORegistryEntryCreateCFProperties(param_2,&local_20,uVar2,param_3);
  if ((iVar1 == 0) && (local_20 != 0)) {
    uVar2 = _CFDictionaryCreateCopy(uVar2);
    *param_1 = uVar2;
    _CFRelease(local_20);
  }
  return;
}

