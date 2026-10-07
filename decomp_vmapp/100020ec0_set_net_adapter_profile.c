
/* CVmProfileHelper::set_net_adapter_profile(_PRL_VIRTUAL_NET_ADAPTER_PROFILE,
   CVmGenericNetworkAdapter&) */

undefined8 CVmProfileHelper::set_net_adapter_profile(undefined4 param_1,CNetLinkRateLimit *param_2)

{
  bool bVar1;
  CNetLinkRateLimit *this;
  CNetLinkRateLimit *pCVar2;
  undefined8 uVar3;
  
  this = operator_new(0xe0);
  pCVar2 = (CNetLinkRateLimit *)CVmGenericNetworkAdapter::getLinkRateLimit();
  CNetLinkRateLimit::CNetLinkRateLimit(this,pCVar2);
  fill_net_rl_profile(param_1,this);
  CVmGenericNetworkAdapter::setLinkRateLimit(param_2);
  uVar3 = CVmGenericNetworkAdapter::getNetProfile();
  CVmNetworkAdapterProfile::setType(uVar3,param_1);
  bVar1 = (bool)CVmGenericNetworkAdapter::getNetProfile();
  CVmNetworkAdapterProfile::setCustom(bVar1);
  return 0;
}

