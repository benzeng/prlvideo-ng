
undefined8 FUN_100114230(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 *local_24;
  undefined4 local_1c;
  int local_18;
  
  local_40 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined4 *)(param_1 + 0x28);
  local_1c = 0;
  local_18 = -1;
  local_30 = 0x837;
  local_24 = &local_40;
  local_2c = 0xc;
  local_28 = 0;
  uVar2 = 0;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c);
  if (iVar1 != 0 || local_18 != 0) {
    FUN_1008e3970("","vm",0,"IOCTL_DUMP_MONITOR failed with the result %x");
    uVar2 = 0x80000009;
  }
  return uVar2;
}

