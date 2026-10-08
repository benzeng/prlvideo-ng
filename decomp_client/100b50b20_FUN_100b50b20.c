
undefined1 FUN_100b50b20(undefined8 param_1,char *param_2)

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
    uVar1 = *(undefined8 *)PTR__kSCEntNetIPv4_1021e1a20;
    lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
    if (lVar6 == 0) {
      cVar5 = _SCNetworkServiceAddProtocolType(param_1,uVar1);
      if (cVar5 == '\0') goto LAB_100b50ec0;
      lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
      if (lVar6 == 0) goto LAB_100b5110e;
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
                        (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                         PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
    }
    else {
      lVar7 = _CFDictionaryCreateMutableCopy(0,0,lVar7);
    }
    if (lVar7 == 0) {
      FUN_100df99c0("","prl_net",0,"copyProtoConfigurationSafe failed");
    }
    cVar5 = FUN_100b527d0(lVar7,*(undefined8 *)PTR__kSCValNetIPv4ConfigMethodManual_1021e1ad8);
    uVar3 = *(undefined8 *)PTR__kSCPropNetIPv4Addresses_1021e1a50;
    lVar8 = FUN_100b4ecf0(lVar7,uVar3,0);
    lVar9 = _CFArrayGetTypeID();
    if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
      uVar11 = _CFArrayCreateMutable(0,0,0);
    }
    else {
      uVar11 = _CFArrayCreateMutableCopy(0,0,lVar8);
    }
    uVar4 = *(undefined8 *)PTR__kSCPropNetIPv4SubnetMasks_1021e1a60;
    lVar8 = FUN_100b4ecf0(lVar7,uVar4,0);
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
    lVar8 = FUN_100b52860(uVar11,uVar1);
    if (lVar8 < 0) {
      lVar8 = _CFArrayGetCount(uVar11);
      if (0 < lVar8) {
        _CFArrayRemoveValueAtIndex(uVar11,0);
        _CFArrayRemoveValueAtIndex(uVar12,0);
      }
LAB_100b51099:
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
        goto LAB_100b51099;
      }
      if (cVar5 == '\0') {
        _CFRelease(lVar7);
        _CFRelease(uVar11);
        _CFRelease(uVar12);
        goto LAB_100b51104;
      }
    }
    FUN_100b503f0(lVar7,uVar11,uVar3,0);
    FUN_100b503f0(lVar7,uVar12,uVar4,0);
    _SCNetworkProtocolSetConfiguration(lVar6,lVar7);
    _CFRelease(lVar7);
    _CFRelease(uVar11);
    _CFRelease(uVar12);
    uVar15 = 1;
LAB_100b51104:
    _CFRelease(lVar6);
    return uVar15;
  }
  uVar1 = *(undefined8 *)PTR__kSCEntNetIPv6_1021e1a28;
  lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
  if (lVar6 == 0) {
    cVar5 = _SCNetworkServiceAddProtocolType(param_1,uVar1);
    if (cVar5 == '\0') {
LAB_100b50ec0:
      pcVar14 = "Failed to add proto to SCNetworkService";
LAB_100b51123:
      FUN_100df99c0("","prl_net",0,pcVar14);
      return 0;
    }
    lVar6 = _SCNetworkServiceCopyProtocol(param_1,uVar1);
    if (lVar6 == 0) {
LAB_100b5110e:
      pcVar14 = "SCNetworkServiceCopyProtocol returned NULL";
      goto LAB_100b51123;
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
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                       PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
  }
  else {
    lVar7 = _CFDictionaryCreateMutableCopy(0,0,lVar7);
  }
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_net",0,"copyProtoConfigurationSafe failed");
  }
  cVar5 = FUN_100b527d0(lVar7,*(undefined8 *)PTR__kSCValNetIPv6ConfigMethodManual_1021e1ae0);
  uVar3 = *(undefined8 *)PTR__kSCPropNetIPv6Addresses_1021e1a68;
  lVar8 = FUN_100b4ecf0(lVar7,uVar3,0);
  lVar9 = _CFArrayGetTypeID();
  if ((lVar8 == 0) || (lVar10 = _CFGetTypeID(lVar8), lVar10 != lVar9)) {
    uVar11 = _CFArrayCreateMutable(0,0,0);
  }
  else {
    uVar11 = _CFArrayCreateMutableCopy(0,0,lVar8);
  }
  uVar4 = *(undefined8 *)PTR__kSCPropNetIPv6PrefixLength_1021e1a70;
  lVar8 = FUN_100b4ecf0(lVar7,uVar4,0);
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
  lVar8 = FUN_100b52860(uVar11,uVar1);
  if (lVar8 < 0) {
    lVar8 = _CFArrayGetCount(uVar11);
    if (0 < lVar8) {
      _CFArrayRemoveValueAtIndex(uVar11,0);
      lVar8 = 0;
      goto LAB_100b50db7;
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
      goto LAB_100b50dd8;
    }
    _CFArrayRemoveValueAtIndex(uVar11,lVar8);
LAB_100b50db7:
    _CFArrayRemoveValueAtIndex(uVar12,lVar8);
  }
  _CFArrayInsertValueAtIndex(uVar11,0,uVar1);
  _CFArrayInsertValueAtIndex(uVar12,0,uVar2);
LAB_100b50dd8:
  FUN_100b503f0(lVar7,uVar11,uVar3,0);
  FUN_100b503f0(lVar7,uVar12,uVar4,0);
  cVar5 = _SCNetworkProtocolSetConfiguration(lVar6,lVar7);
  if (cVar5 == '\0') {
    FUN_100df99c0("","prl_net",0,"SCNetworkProtocolSetConfiguration failed");
  }
  _CFRelease(lVar7);
  _CFRelease(uVar11);
  _CFRelease(uVar12);
  return 1;
}

