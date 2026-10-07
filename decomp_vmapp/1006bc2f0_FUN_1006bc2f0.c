
void FUN_1006bc2f0(void)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  CParallelsNetworkConfig::getSystemFlags();
  FUN_1006bc3c0(&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1006bc345;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006bc345:
  DAT_10116d538 = CParallelsNetworkConfig::isIPv6Enabled();
  FUN_1007da320(&DAT_1011bcd4c,"devices.net.tap",0);
  return;
}

