
void FUN_1003e19e0(long *param_1)

{
  uint uVar1;
  
  if (((*(byte *)((long)param_1 + 0x6c) & 2) != 0) ||
     (uVar1 = *(uint *)(param_1 + 0x19), uVar1 == 0xffffffff)) {
    uVar1 = (uint)CONCAT11((char)*(undefined2 *)(param_1[0xb] + 7),
                           (char)((ushort)*(undefined2 *)(param_1[0xb] + 7) >> 8));
  }
  uVar1 = uVar1 & 0xffff;
  ___bzero(param_1[9],uVar1);
  if ((2 < uVar1) && ((int)param_1[0x12] != 0)) {
    *(undefined1 *)(param_1[9] + 1) = 0x11;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003e1a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,4,uVar1);
  return;
}

