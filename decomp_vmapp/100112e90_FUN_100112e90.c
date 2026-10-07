
void FUN_100112e90(long param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  int local_18;
  
  FUN_1000c5130(param_1 + 0x130,0);
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    local_1c = 0;
    local_18 = -1;
    local_30 = 0x80e;
    local_24 = 0;
    local_2c = 0;
    iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c);
    if (iVar1 != 0 || local_18 != 0) {
      FUN_1008e3970("","vm",0,"IOCTL_PMM_UNINIT failure! %x");
    }
  }
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    local_1c = 0;
    local_18 = -1;
    local_30 = 0x802;
    local_24 = 0;
    local_2c = 0;
    iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c);
    if (iVar1 != 0 || local_18 != 0) {
      FUN_1008e3970("","vm",0,"IOCTL_QUIT failed (%x)");
    }
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    FUN_1001155d0(param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

