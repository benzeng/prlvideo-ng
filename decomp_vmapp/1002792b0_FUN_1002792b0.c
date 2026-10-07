
undefined8 FUN_1002792b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CNetLinkRateLimit *pCVar6;
  undefined8 uVar7;
  undefined8 local_160;
  undefined8 local_158;
  long local_150;
  CNetLinkRateLimit local_148 [224];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pCVar6 = (CNetLinkRateLimit *)CVmGenericNetworkAdapter::getLinkRateLimit();
  CNetLinkRateLimit::CNetLinkRateLimit(local_148,pCVar6);
  CVmGenericNetworkAdapter::getNetProfile();
  uVar2 = CVmNetworkAdapterProfile::getType();
  CVmGenericNetworkAdapter::getNetProfile();
  cVar1 = CVmNetworkAdapterProfile::isCustom();
  if (cVar1 == '\0') {
    CVmProfileHelper::fill_net_rl_profile(uVar2,local_148);
  }
  else {
    CVmGenericNetworkAdapter::getLinkRateLimit();
  }
  local_150 = DAT_1011c3698 + 0x110;
  iVar3 = FUN_1000b4970(&local_150);
  if (iVar3 - 1U < 2) {
    cVar1 = CNetLinkRateLimit::isEnable();
    iVar3 = *(int *)(param_1 + 0x204);
    if ((iVar3 != 100) || (cVar1 == '\x01')) {
      cVar1 = CNetLinkRateLimit::isEnable();
      uVar2 = 0;
      local_160 = 0;
      local_158 = 0;
      if (cVar1 != '\0') {
        local_158 = CNetLinkRateLimit::getRxBps();
        local_160 = CNetLinkRateLimit::getRxLossPpm();
        uVar2 = CNetLinkRateLimit::getRxDelayMs();
        iVar3 = 100;
      }
      uVar4 = FUN_1007da300("devices.net.rx.buf_time_ms",0);
      uVar5 = FUN_1007da300("devices.net.rx.queue_size_pkts",0);
      FUN_100279a70(&uStack_50,iVar3,local_158,uVar4,uVar5,local_160,uVar2);
      cVar1 = CNetLinkRateLimit::isEnable();
      uVar2 = 0;
      local_160 = 0;
      local_158 = 0;
      if (cVar1 != '\0') {
        local_158 = CNetLinkRateLimit::getTxBps();
        local_160 = CNetLinkRateLimit::getTxLossPpm();
        uVar2 = CNetLinkRateLimit::getTxDelayMs();
        iVar3 = 100;
      }
      uVar4 = FUN_1007da300("devices.net.tx.buf_time_ms",0);
      uVar5 = FUN_1007da300("devices.net.tx.queue_size_pkts",0);
      FUN_100279a70(&local_68,iVar3,local_158,uVar4,uVar5,local_160,uVar2);
      goto LAB_1002794a6;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
LAB_1002794a6:
  iVar3 = (**(code **)(**(long **)(param_1 + 0x170) + 0xd0))(*(long **)(param_1 + 0x170),&local_68);
  uVar7 = 0;
  if (iVar3 != 0) {
    uVar7 = 0x80000009;
    FUN_1008e3970("","LocalDevices",0,
                  "net_adapter %d:Failed to setup packet ratelimit options. Error %x",
                  *(undefined4 *)(param_1 + 0x150),iVar3);
  }
  CNetLinkRateLimit::~CNetLinkRateLimit(local_148);
  return uVar7;
}

