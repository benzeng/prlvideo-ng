
uint FUN_1003fc740(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((*param_2 <= *param_1) && (uVar1 = 1, *param_1 == *param_2)) {
    uVar1 = -(uint)(param_2[1] < param_1[1]) & 1;
  }
  return uVar1;
}

