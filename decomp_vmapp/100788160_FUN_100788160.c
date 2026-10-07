
undefined8 FUN_100788160(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long local_18;
  
  local_18 = 0;
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,param_2,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (local_18 == 0) {
    uVar2 = 0;
  }
  else {
    *param_3 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}

