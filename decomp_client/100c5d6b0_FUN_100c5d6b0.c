
uint FUN_100c5d6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int local_24;
  ulong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  iVar1 = FUN_100c5c280(&local_10,0,&local_18,&local_20,&local_24,param_3,param_4);
  uVar2 = 0xffffffff;
  if ((iVar1 != 0) && (local_24 == 0)) {
    uVar2 = ~-(uint)((local_20 & 0xffffffff80000000) == 0) | (uint)local_20;
  }
  return uVar2;
}

