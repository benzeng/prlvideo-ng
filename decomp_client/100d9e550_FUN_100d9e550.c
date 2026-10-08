
undefined8 * FUN_100d9e550(undefined8 *param_1,ushort *param_2,ulong *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 local_2c [2];
  undefined4 local_24;
  
  *param_1 = PTR_shared_null_1021e15d0;
  if (param_2 != (ushort *)0x0) {
    uVar3 = *param_2;
    local_2c[0] = 1;
    puVar2 = (ushort *)FUN_100da4e60(param_1,local_2c);
    uVar5 = (uint)uVar3;
    *puVar2 = (ushort)((uVar5 & 8) << 3) | (ushort)((uVar5 & 4) << 5) | (ushort)((uVar5 & 2) << 7);
  }
  if (param_3 != (ulong *)0x0) {
    uVar1 = *param_3;
    local_24 = 2;
    puVar2 = (ushort *)FUN_100da4e60(param_1,&local_24);
    uVar3 = 0x24;
    if ((uVar1 & 2) == 0) {
      uVar3 = 0;
    }
    uVar6 = 0x12;
    if ((uVar1 & 4) == 0) {
      uVar6 = 0;
    }
    uVar4 = 9;
    if ((uVar1 & 8) == 0) {
      uVar4 = 0;
    }
    *puVar2 = uVar4 | uVar6 | uVar3;
  }
  return param_1;
}

