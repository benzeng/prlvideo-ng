
bool FUN_1006cbd70(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = _SCNetworkServiceCopyProtocol(param_1,*(undefined8 *)PTR__kSCEntNetIPv6_100ba2510);
  if (lVar2 == 0) {
    bVar3 = false;
    FUN_1008e3970("","prl_net",0,"Assertion: ipv6 is not configured in SCPrefs for vnic");
  }
  else {
    cVar1 = _SCNetworkProtocolGetEnabled(lVar2);
    bVar3 = cVar1 != '\0';
    if (bVar3) {
      _SCNetworkProtocolSetEnabled(lVar2,0);
    }
    _CFRelease(lVar2);
  }
  return bVar3;
}

