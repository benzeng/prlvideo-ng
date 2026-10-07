
undefined8 FUN_100520dd0(long param_1)

{
  int iVar1;
  ulong uVar2;
  string local_30;
  char local_2f [15];
  char *local_20;
  
  std::string::__init((char *)&local_30,0x100a3c491);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = param_1 + 9;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
  }
  std::string::append((char *)&local_30,uVar2);
  if (((byte)local_30 & 1) == 0) {
    local_20 = local_2f;
  }
  iVar1 = _system(local_20);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    param_1 = param_1 + 9;
  }
  else {
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_1008e3970("[TIMESYNC-ZONE]","TimeSyncCommon",0,"Time Zone \'%s\' was set with result: %i",
                param_1,iVar1);
  std::string::~string(&local_30);
  return 1;
}

