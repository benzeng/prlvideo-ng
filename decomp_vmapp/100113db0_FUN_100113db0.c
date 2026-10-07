
undefined8 FUN_100113db0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined8 local_24;
  undefined4 local_1c;
  int local_18;
  
  local_2c = param_3 << 2;
  local_1c = 0;
  local_18 = -1;
  local_30 = 0x83a;
  uVar2 = 0;
  local_28 = local_2c;
  local_24 = param_2;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c);
  if (iVar1 != 0 || local_18 != 0) {
    FUN_1008e3970("","vm",0,"VGPU IOCTL_VGPU_PIN_PAGES failed %x");
    uVar2 = 0x80000009;
  }
  return uVar2;
}

