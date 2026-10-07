
undefined1  [16] FUN_100551180(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = param_2 + 3 + uVar2;
  uVar3 = uVar1 / uVar2;
  if ((((short)param_2 != 0) && ((int)uVar3 <= (int)(uint)*(byte *)(param_1 + 0x10))) &&
     (iVar4 = uVar3 - 1, iVar4 <= *(int *)(param_1 + 0x28))) {
    auVar5 = FUN_1005511c0(param_1,param_2 & 0xffff,iVar4);
    return auVar5;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (ulong)uVar1 % (ulong)uVar2;
  return auVar5 << 0x40;
}

