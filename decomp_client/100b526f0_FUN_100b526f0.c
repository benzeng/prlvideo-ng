
long FUN_100b526f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  lVar2 = *(long *)PTR__kSCEntNetInterface_1021e1a30;
  uVar1 = _SCNetworkServiceGetServiceID(param_2);
  if (lVar2 == 0) {
    lVar2 = _CFStringCreateWithFormat
                      (0,0,&cf_______,*(undefined8 *)PTR__kSCPrefNetworkServices_1021e1a38,uVar1);
  }
  else {
    lVar2 = _CFStringCreateWithFormat
                      (0,0,&cf__________,*(undefined8 *)PTR__kSCPrefNetworkServices_1021e1a38,uVar1,
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
    if (lVar3 == lVar4) goto LAB_100b527a4;
  }
  local_28 = 0;
LAB_100b527a4:
  _CFRelease(lVar2);
  return local_28;
}

