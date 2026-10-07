
void FUN_10032d990(long param_1,ulong param_2,long param_3,undefined4 param_4)

{
  ulong local_18;
  undefined4 local_10;
  
  if ((*(ushort *)(param_1 + 0xb0) & 0x400) == 0) {
    local_18 = param_2 & 0xffffffff | param_3 << 0x20;
    local_10 = param_4;
    FUN_10032f860(param_1 + 0x68,&local_18);
  }
  return;
}

