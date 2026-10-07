
undefined1 FUN_1006cb6d0(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined1 uVar15;
  
  if (*param_2 == '\0') {
    uVar1 = *(undefined8 *)PTR__kSCEntNetIPv4_100ba2508;
    lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
    if (lVar6 == 0) {
      cVar5 = _SCNetworkServiceAddProtocolType(param_1,uVar1);
      if (cVar5 == '\0') goto LAB_1006cba70;
      lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
      if (lVar6 == 0) goto LAB_1006cbcbe;
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    cVar5 = _SCNetworkProtocolGetEnabled(lVar6);
    if (cVar5 == '\0') {
      _SCNetworkProtocolSetEnabled(lVar6,1);
      uVar15 = 1;
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    lVar7 = _SCNetworkProtocolGetConfiguration(lVar6);
    if (lVar7 == 0) {
      lVar7 = _CFDictionaryCreateMutable
                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                         PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
    }
    else {
      lVar7 = _CFDictionaryCreateMutableCopy(0,0,lVar7);
    }
    if (lVar7 == 0) {
      FUN_1008e3970("","prl_net",0,"copyProtoConfigurationSafe failed");
    }
    cVar5 = FUN_1006cd380(lVar7,*(undefined8 *)PTR__kSCValNetIPv4ConfigMethodManual_100ba2590);
    uVar3 = *(undefined8 *)PTR__kSCPropNetIPv4Addresses_100ba2538;
    lVar8 = FUN_1006c98a0(lVar7,uVar3,0);
    lVar9 = _CFArrayGetTypeID();
    if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
      uVar11 = _CFArrayCreateMutable(0,0,0);
    }
    else {
      uVar11 = _CFArrayCreateMutableCopy(0,0,lVar8);
    }
    uVar4 = *(undefined8 *)PTR__kSCPropNetIPv4SubnetMasks_100ba2548;
    lVar8 = FUN_1006c98a0(lVar7,uVar4,0);
    lVar9 = _CFArrayGetTypeID();
    if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
      uVar12 = _CFArrayCreateMutable(0,0,0);
    }
    else {
      uVar12 = _CFArrayCreateMutableCopy(0,0,lVar8);
    }
    lVar8 = _CFArrayGetCount(uVar11);
    lVar9 = _CFArrayGetCount(uVar12);
    if (lVar8 != lVar9) {
      _CFArrayRemoveAllValues(uVar11);
      _CFArrayRemoveAllValues(uVar12);
    }
    lVar8 = FUN_1006cd410(uVar11,uVar1);
    if (lVar8 < 0) {
      lVar8 = _CFArrayGetCount(uVar11);
      if (0 < lVar8) {
        _CFArrayRemoveValueAtIndex(uVar11,0);
        _CFArrayRemoveValueAtIndex(uVar12,0);
      }
LAB_1006cbc49:
      _CFArrayInsertValueAtIndex(uVar11,0,uVar1);
      _CFArrayInsertValueAtIndex(uVar12,0,uVar2);
    }
    else {
      lVar9 = _CFArrayGetValueAtIndex(uVar12,lVar8);
      lVar10 = _CFStringGetTypeID();
      if (((lVar9 == 0) || (lVar13 = _CFGetTypeID(lVar9), lVar13 != lVar10)) ||
         (lVar9 = _CFStringCompare(lVar9,uVar2,0), lVar9 != 0)) {
        _CFArrayRemoveValueAtIndex(uVar11,lVar8);
        _CFArrayRemoveValueAtIndex(uVar12,lVar8);
        goto LAB_1006cbc49;
      }
      if (cVar5 == '\0') {
        _CFRelease(lVar7);
        _CFRelease(uVar11);
        _CFRelease(uVar12);
        goto LAB_1006cbcb4;
      }
    }
    FUN_1006cafa0(lVar7,uVar11,uVar3,0);
    FUN_1006cafa0(lVar7,uVar12,uVar4,0);
    _SCNetworkProtocolSetConfiguration(lVar6,lVar7);
    _CFRelease(lVar7);
    _CFRelease(uVar11);
    _CFRelease(uVar12);
    uVar15 = 1;
LAB_1006cbcb4:
    _CFRelease(lVar6);
    return uVar15;
  }
  uVar1 = *(undefined8 *)PTR__kSCEntNetIPv6_100ba2510;
  lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
  if (lVar6 == 0) {
    cVar5 = _SCNetworkServiceAddProtocolType(param_1,uVar1);
    if (cVar5 == '\0') {
LAB_1006cba70:
      pcVar14 = "Failed to add proto to SCNetworkService";
LAB_1006cbcd3:
      FUN_1008e3970("","prl_net",0,pcVar14);
      return 0;
    }
    lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
    if (lVar6 == 0) {
LAB_1006cbcbe:
      pcVar14 = "SCNetworkServiceCopyProtocol returned NULL";
      goto LAB_1006cbcd3;
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  cVar5 = _SCNetworkProtocolGetEnabled(lVar6);
  if (cVar5 == '\0') {
    _SCNetworkProtocolSetEnabled(lVar6,1);
    uVar15 = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = _SCNetworkProtocolGetConfiguration(lVar6);
  if (lVar7 == 0) {
    lVar7 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                       PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
  }
  else {
    lVar7 = _CFDictionaryCreateMutableCopy(0,0,lVar7);
  }
  if (lVar7 == 0) {
    FUN_1008e3970("","prl_net",0,"copyProtoConfigurationSafe failed");
  }
  cVar5 = FUN_1006cd380(lVar7,*(undefined8 *)PTR__kSCValNetIPv6ConfigMethodManual_100ba2598);
  uVar3 = *(undefined8 *)PTR__kSCPropNetIPv6Addresses_100ba2550;
  lVar8 = FUN_1006c98a0(lVar7,uVar3,0);
  lVar9 = _CFArrayGetTypeID();
  if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
    uVar11 = _CFArrayCreateMutable(0,0,0);
  }
  else {
    uVar11 = _CFArrayCreateMutableCopy(0,0,lVar8);
  }
  uVar4 = *(undefined8 *)PTR__kSCPropNetIPv6PrefixLength_100ba2558;
  lVar8 = FUN_1006c98a0(lVar7,uVar4,0);
  lVar9 = _CFArrayGetTypeID();
  if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
    uVar12 = _CFArrayCreateMutable(0,0,0);
  }
  else {
    uVar12 = _CFArrayCreateMutableCopy(0,0,lVar8);
  }
  lVar8 = _CFArrayGetCount(uVar11);
  lVar9 = _CFArrayGetCount(uVar12);
  if (lVar8 != lVar9) {
    _CFArrayRemoveAllValues(uVar11);
    _CFArrayRemoveAllValues(uVar12);
  }
  lVar8 = FUN_1006cd410(uVar11,uVar1);
  if (lVar8 < 0) {
    lVar8 = _CFArrayGetCount(uVar11);
    if (0 < lVar8) {
      _CFArrayRemoveValueAtIndex(uVar11,0);
      lVar8 = 0;
      goto LAB_1006cb967;
    }
  }
  else {
    lVar9 = _CFArrayGetValueAtIndex(uVar12,lVar8);
    lVar10 = _CFNumberGetTypeID();
    if (((lVar9 != 0) && (lVar13 = _CFGetTypeID(lVar9), lVar13 == lVar10)) &&
       (lVar9 = _CFNumberCompare(lVar9,uVar2,0), lVar9 == 0)) {
      if (cVar5 == '\0') {
        _CFRelease(lVar7);
        _CFRelease(uVar11);
        _CFRelease(uVar12);
        return uVar15;
      }
      goto LAB_1006cb988;
    }
    _CFArrayRemoveValueAtIndex(uVar11,lVar8);
LAB_1006cb967:
    _CFArrayRemoveValueAtIndex(uVar12,lVar8);
  }
  _CFArrayInsertValueAtIndex(uVar11,0,uVar1);
  _CFArrayInsertValueAtIndex(uVar12,0,uVar2);
LAB_1006cb988:
  FUN_1006cafa0(lVar7,uVar11,uVar3,0);
  FUN_1006cafa0(lVar7,uVar12,uVar4,0);
  cVar5 = _SCNetworkProtocolSetConfiguration(lVar6,lVar7);
  if (cVar5 == '\0') {
    FUN_1008e3970("","prl_net",0,"SCNetworkProtocolSetConfiguration failed");
  }
  _CFRelease(lVar7);
  _CFRelease(uVar11);
  _CFRelease(uVar12);
  return 1;
}

