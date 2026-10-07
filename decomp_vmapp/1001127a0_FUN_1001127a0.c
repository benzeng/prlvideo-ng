
undefined8 FUN_1001127a0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = -1;
  local_30 = 0x831;
  local_2c = 0;
  local_28 = 0x24;
  uVar2 = 0;
  local_24 = param_2;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c);
  if ((iVar1 != 0 || local_18 != 0) && (uVar2 = 0x80000009, 0 < DAT_1011b55f8)) {
    FUN_1008e3970("","vm",1,"IOCTL_PMM_GET_QUOTA failed (0x%x)");
  }
  return uVar2;
}

