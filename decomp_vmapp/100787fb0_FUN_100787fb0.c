
void FUN_100787fb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  lVar1 = _CFDictionaryGetValue(*param_2,param_3);
  if (lVar1 != 0) {
    lVar2 = _CFDictionaryGetTypeID();
    lVar3 = _CFGetTypeID(lVar1);
    if (lVar2 == lVar3) {
      uVar4 = _CFDictionaryCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,lVar1);
      *param_1 = uVar4;
    }
  }
  return;
}

