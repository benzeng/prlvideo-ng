
int FUN_100278dd0(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  CNetPktFilter local_118 [180];
  int local_64;
  void *local_60;
  int local_54;
  void *local_50;
  undefined8 local_48;
  void *pvStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    return -0x7ffffff7;
  }
  iVar3 = FUN_100060640();
  if (iVar3 != 0) {
    return 0;
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_30 = 0;
  local_38 = 0;
  uStack_34 = 0;
  local_50 = (void *)0x0;
  local_54 = 0;
  local_60 = (void *)0x0;
  local_64 = 0;
  CNetPktFilter::CNetPktFilter(local_118);
  CVmGenericNetworkAdapter::getPktFilter();
  bVar1 = CNetPktFilter::isPreventMacSpoof();
  local_48._0_1_ = bVar1;
  cVar2 = CNetPktFilter::isPreventPromisc();
  bVar1 = bVar1 | cVar2 * '\x02';
  local_48._0_1_ = bVar1;
  iVar3 = FUN_1007da300("net.ipv4.disable",0);
  local_48._0_1_ = bVar1 | (iVar3 != 0) << 2;
  if (iVar3 != 0) {
    FUN_1008e3970("","LocalDevices",0,"IPv4 was forcibly disabled via system-flag");
  }
  iVar3 = FUN_1007da300("net.ipv6.disable",0);
  local_48 = CONCAT71(local_48._1_7_,(byte)local_48 & 0xf7 | (iVar3 != 0) << 3);
  if (iVar3 != 0) {
    FUN_1008e3970("","LocalDevices",0,"IPv6 was forcibly disabled via system-flag");
  }
  cVar2 = CNetPktFilter::isPreventIpSpoof();
  if (cVar2 == '\0') {
LAB_100278ff3:
    local_48 = CONCAT44(local_54,(undefined4)local_48);
    pvStack_40 = local_50;
    local_38 = local_64;
    uStack_34 = SUB84(local_60,0);
    local_30 = (undefined4)((ulong)local_60 >> 0x20);
    iVar4 = (**(code **)(**(long **)(param_1 + 0x170) + 0x58))
                      (*(long **)(param_1 + 0x170),&local_48);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = -0x7ffffff7;
      FUN_1008e3970("","LocalDevices",0,
                    "net_adapter %d:Failed to setup packet filtering options. Error %x",
                    *(undefined4 *)(param_1 + 0x150));
    }
    _free(local_60);
  }
  else {
    cVar2 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
    if ((cVar2 == '\0') && (cVar2 = CVmGenericNetworkAdapter::isAutoApply(), cVar2 != '\0')) {
      CVmGenericNetworkAdapter::getNetAddresses();
      iVar3 = FUN_1006bbbb0(local_120,&local_50,&local_54);
      FUN_100013180(local_120);
      if (iVar3 < 0) goto LAB_10027906c;
    }
    iVar3 = CVmDevice::getEmulatedType();
    if (iVar3 != 5) goto LAB_100278ff3;
    CVmGenericNetworkAdapter::getNetAddresses();
    iVar3 = FUN_1006bbfa0(local_128,&local_60,&local_64);
    FUN_100013180(local_128);
    if (-1 < iVar3) {
      if (local_64 == 0) {
        FUN_1008e3970("","LocalDevices",0,
                      "Network is configured to be host-routed, but no IPv6 addresses are defined. IPv6 is disabled."
                     );
        local_48 = local_48 | 8;
      }
      if (local_54 == 0) {
        FUN_1008e3970("","LocalDevices",0,
                      "Network is configured to be host-routed, but no IPv4 addresses are defined. IPv4 is disabled."
                     );
        local_48 = local_48 | 4;
      }
      goto LAB_100278ff3;
    }
  }
  _free(local_50);
LAB_10027906c:
  CNetPktFilter::~CNetPktFilter(local_118);
  return iVar3;
}

