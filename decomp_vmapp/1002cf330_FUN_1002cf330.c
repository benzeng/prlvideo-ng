
void FUN_1002cf330(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long local_38 [2];
  undefined4 local_28;
  
  *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) | 0x40;
  *(uint *)(*param_2 + 0x18) = *(uint *)(*param_2 + 0x18) & 0xffffff7f;
  lVar1 = *param_2;
  if ((*(byte *)(lVar1 + 0x19) & 0x80) != 0) {
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 2;
  }
  uVar2 = *(uint *)(lVar1 + 0xc) & 0xffffffe0;
  if (uVar2 != 0) {
    uVar3 = DAT_1011c5640;
    if (0xb0000000 < DAT_1011c5640) {
      uVar3 = 0xb0000000;
    }
    if (uVar2 < uVar3) {
      local_38[0] = 0;
      local_38[1] = 0;
      local_28 = 0;
      FUN_10008d2d0(local_38,(ulong)uVar2,0x20);
      *(uint *)(local_38[0] + 0xc) =
           *(uint *)(local_38[0] + 0xc) & 0xfffff000 | *(uint *)(*param_2 + 0x1c) & 0xfff;
      *(undefined4 *)(local_38[0] + 8) = *(undefined4 *)(*param_2 + 0x18);
      FUN_10008d3f0(local_38);
    }
  }
  *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 8;
  return;
}

