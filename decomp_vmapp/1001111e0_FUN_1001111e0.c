
undefined8 FUN_1001111e0(long param_1,undefined8 param_2,undefined4 param_3)

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
  local_30 = 0x82b;
  local_2c = 0;
  uVar2 = 0;
  local_28 = param_3;
  local_24 = param_2;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c,0);
  if (iVar1 != 0 || local_18 != 0) {
    FUN_1008e3970("","vm",0,"Ioctl %#x failed %#x",0x82b);
    uVar2 = 0x80000016;
  }
  return uVar2;
}

