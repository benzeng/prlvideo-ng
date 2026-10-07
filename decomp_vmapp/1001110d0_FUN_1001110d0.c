
void FUN_1001110d0(long param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = -1;
  local_28 = 0x828;
  local_1c = 0;
  local_24 = 0;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_28,0x1c);
  if (iVar1 != 0 || local_10 != 0) {
    FUN_1008e3970("","vm",0,"Failed to send stop ioctl (%x)");
  }
  return;
}

