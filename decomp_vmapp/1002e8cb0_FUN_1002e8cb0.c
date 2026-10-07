
ulong FUN_1002e8cb0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = *(int *)(param_1 + 0x128) - *(uint *)(param_1 + 0x147);
  if (*(uint *)(param_2 + 0x43c) < uVar4) {
    uVar4 = *(uint *)(param_2 + 0x43c);
  }
  _memcpy((void *)((ulong)*(uint *)(param_1 + 0x147) + *(long *)(param_1 + 0x50)),
          (void *)(param_2 + 0x4d8),(ulong)uVar4);
  uVar1 = *(int *)(param_1 + 0x147) + uVar4;
  *(uint *)(param_1 + 0x147) = uVar1;
  *(undefined4 *)(param_2 + 0x468) = 0;
  *(uint *)(param_2 + 0x454) = uVar4;
  if (uVar1 < *(uint *)(param_1 + 0x128)) {
    uVar4 = *(uint *)(param_1 + 0x14c);
  }
  else {
    if (*(int *)(param_1 + 0x188) != 0) {
      if (*(int *)(param_1 + 0x188) == 1) {
        uVar3 = FUN_1002e8ef0(param_1);
        return uVar3;
      }
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[MSC] Unsupported write mode: %u");
      }
    }
    uVar4 = 4;
    if (*(long *)(param_1 + 0x168) != 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x90))
                        (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                         *(long *)(param_1 + 0x168),*(undefined8 *)(param_1 + 0x170));
      if (iVar2 < 0) {
        FUN_1004103f0(0x30c00,param_1 + 0x150,0x12,0);
        uVar4 = 5;
      }
    }
  }
  return (ulong)uVar4;
}

