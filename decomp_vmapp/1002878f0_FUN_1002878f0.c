
undefined8 FUN_1002878f0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  size_t sVar6;
  ulong local_860;
  undefined8 local_858;
  undefined4 *local_850;
  undefined4 local_848 [2];
  undefined8 local_840;
  void *local_38;
  uint local_2c;
  
  local_860 = 0;
  iVar3 = FUN_1007d75f0(*(long *)(param_1 + 0xa0) + 0x1028,&local_860,4);
  uVar2 = local_860;
  uVar4 = 0;
  if ((iVar3 == 4) && (local_860 != 0xffffffffffffffff)) {
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x98) + 0x10a0) << 0x20 | local_860;
    sVar6 = (ulong)*(byte *)(param_2 + 10) << 2;
    local_860 = DAT_1011c3688;
    local_858 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
    local_850 = local_848;
    local_848[0] = 0;
    local_840 = 0;
    FUN_10008d820(&local_860,uVar5,sVar6,&local_38);
    if (local_38 == (void *)0x0) {
      FUN_1008e3970("","LocalDevices",0,"LSI: no map for reply 0x%08X",uVar2 & 0xffffffff);
    }
    else {
      _memcpy(local_38,(void *)(param_2 + 8),sVar6);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x3a120) + 0xf0);
    *plVar1 = *plVar1 + 1;
    local_2c = (uint)uVar2 >> 1 | 0x80000000;
    iVar3 = FUN_1007d74c0(DAT_1011c3ca0 + 0x1020,&local_2c,4);
    if (iVar3 != 4) {
      FUN_1008e3970("","LocalDevices",0,"LSI: beware reply fifo: 0x%08X",local_2c);
    }
    FUN_10008d470(&local_860);
    uVar4 = 1;
  }
  return uVar4;
}

