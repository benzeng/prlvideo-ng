
ulong FUN_1005ad310(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 in_RAX;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_24;
  
  local_24 = (uint)((ulong)in_RAX >> 0x20);
  uVar2 = (ulong)param_3;
  FUN_1005aba60(param_1,param_2,&local_24);
  uVar3 = (ulong)local_24;
  if (uVar3 != 0) {
    uVar2 = (ulong)param_3;
    lVar1 = (**(code **)(*(long *)*param_1 + 0x2e0))();
    if (lVar1 * uVar3 <= uVar2) {
      lVar1 = (**(code **)(*(long *)*param_1 + 0x2e0))();
      uVar2 = lVar1 * uVar3;
    }
  }
  return uVar2 & 0xffffffff;
}

