
undefined8 FUN_1004643e0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int local_20;
  int local_1c;
  
  lVar2 = FUN_100464160();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetValue(lVar2,&cf_MaxCapacity);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      cVar1 = _CFNumberGetValue(lVar3,9,&local_20);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        lVar2 = _CFDictionaryGetValue(lVar2,&cf_CurrentCapacity);
        if (lVar2 == 0) {
          uVar4 = 0;
        }
        else {
          cVar1 = _CFNumberGetValue(lVar2,9,&local_1c);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            *param_3 = (float)local_1c / (float)local_20;
            uVar4 = 1;
          }
        }
      }
    }
  }
  return uVar4;
}

