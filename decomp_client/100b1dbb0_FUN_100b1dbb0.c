
void FUN_100b1dbb0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_1[0x30a1];
  uVar2 = (uint)((ulong)param_1[0x30a1] >> 0x20);
  param_1[0x30a1] =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  uVar1 = (uint)param_1[0x30a2];
  uVar2 = (uint)((ulong)param_1[0x30a2] >> 0x20);
  param_1[0x30a2] =
       CONCAT44(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18,
                uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18);
  uVar1 = *(uint *)((long)param_1 + 0x1851c);
  *(uint *)((long)param_1 + 0x1851c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30a4);
  *(uint *)(param_1 + 0x30a4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)((long)param_1 + 0x18524);
  *(uint *)((long)param_1 + 0x18524) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30a7);
  *(uint *)(param_1 + 0x30a7) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30e8);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30eb);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30ee);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30f1);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30f4);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30f7);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30fa);
                    /* WARNING: Could not recover jumptable at 0x000100b1dcd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x30fd);
  return;
}

