
long FUN_1006cd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  lVar2 = *(long *)PTR__kSCEntNetInterface_100ba2518;
  uVar1 = _SCNetworkServiceGetServiceID(param_2);
  if (lVar2 == 0) {
    lVar2 = _CFStringCreateWithFormat
                      (0,0,&cf_______,*(undefined8 *)PTR__kSCPrefNetworkServices_100ba2520,uVar1);
  }
  else {
    lVar2 = _CFStringCreateWithFormat
                      (0,0,&cf__________,*(undefined8 *)PTR__kSCPrefNetworkServices_100ba2520,uVar1,
                       lVar2);
  }
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = _SCPreferencesPathGetValue(param_1,lVar2);
  if (lVar3 == 0) {
    _CFRelease(lVar2);
    return 0;
  }
  local_28 = 0;
  _CFDictionaryGetValueIfPresent(lVar3,param_3,&local_28);
  lVar3 = local_28;
  if (local_28 != 0) {
    lVar4 = _CFStringGetTypeID();
    lVar3 = _CFGetTypeID(lVar3);
    if (lVar3 == lVar4) goto LAB_1006cd354;
  }
  local_28 = 0;
LAB_1006cd354:
  _CFRelease(lVar2);
  return local_28;
}

