
uint FUN_1002d0720(long param_1,long param_2,undefined8 *param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long local_48 [2];
  undefined4 local_38;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*(undefined8 *)(param_1 + 0x1b10 + param_4 * 0x510),0x400);
  uVar2 = 0;
  if ((*(ulong *)(local_48[0] + 0x20 + (long)(int)(param_5 - 1) * 0x20) & 7) == 1) {
    uVar3 = (ulong)(param_5 & 0xff);
    lVar5 = param_4 * 0x510 + param_1;
    lVar1 = *(long *)(lVar5 + 0x1628 + uVar3 * 0x28);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar5 + 0x1628 + uVar3 * 0x28) = 0;
      FUN_1002c8590(param_1,lVar1);
      uVar2 = 0x8000;
      if (*(int *)(lVar1 + 0x464) != 0) goto LAB_1002d0868;
    }
    uVar2 = 0x800;
    if ((*(int *)(lVar5 + 0x1634 + uVar3 * 0x28) == 0) && ((*(byte *)(param_2 + 0xc) & 0x20) != 0))
    {
      param_3[1] = 0;
      *param_3 = 0;
      uVar2 = (int)param_4 << 0x18 | 0x8000;
      *(uint *)((long)param_3 + 0xc) = uVar2;
      uVar4 = *(uint *)(lVar5 + 0x1624 + uVar3 * 0x28) & 0xff000000;
      *(uint *)(param_3 + 1) = uVar4;
      *(uint *)((long)param_3 + 0xc) = (param_5 & 0x1f) << 0x10 | uVar2 | 4;
      *(uint *)(param_3 + 1) = *(uint *)(lVar5 + 0x1624 + uVar3 * 0x28) & 0xffffff | uVar4;
      uVar2 = *(uint *)(param_2 + 8) >> 0x16 | 0x2c00;
    }
  }
LAB_1002d0868:
  FUN_10008d3f0(local_48);
  return uVar2;
}

