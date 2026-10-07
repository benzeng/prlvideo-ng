
void FUN_100111150(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = -1;
  local_28 = 0x82a;
  local_1c = &local_2c;
  local_24 = 4;
  local_20 = 0;
  local_2c = param_2;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_28,0x1c,0);
  if (iVar1 != 0 || local_10 != 0) {
    FUN_1008e3970("","vm",0,"Failed to send power source switched ioctl (%u) %x",local_2c);
  }
  return;
}

