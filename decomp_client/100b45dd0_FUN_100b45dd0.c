
void FUN_100b45dd0(void)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  CParallelsNetworkConfig::getSystemFlags();
  FUN_100b45ea0(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100b45e25;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100b45e25:
  DAT_1022cf3f8 = CParallelsNetworkConfig::isIPv6Enabled();
  FUN_100ddbea0(&DAT_102313d84,"devices.net.tap",0);
  return;
}

