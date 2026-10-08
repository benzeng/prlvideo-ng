
ulong FUN_100bb6bb0(long *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  uVar3 = 0;
  if (0 < param_4) {
    uVar3 = -(ulong)CARRY8(*param_2,*param_3) & 1;
    *param_1 = *param_2 + *param_3;
    while (1 < param_4) {
      puVar4 = param_3 + 4;
      uVar1 = uVar3 + param_2[1];
      uVar3 = (-(ulong)CARRY8(uVar1,param_3[1]) & 1) + (ulong)CARRY8(uVar3,param_2[1]);
      param_1[1] = uVar1 + param_3[1];
      if (param_4 < 3) {
        return uVar3;
      }
      uVar1 = uVar3 + param_2[2];
      uVar3 = (-(ulong)CARRY8(uVar1,param_3[2]) & 1) + (ulong)CARRY8(uVar3,param_2[2]);
      param_1[2] = uVar1 + param_3[2];
      if (param_4 < 4) {
        return uVar3;
      }
      uVar1 = uVar3 + param_2[3];
      uVar3 = (-(ulong)CARRY8(uVar1,param_3[3]) & 1) + (ulong)CARRY8(uVar3,param_2[3]);
      param_1[3] = uVar1 + param_3[3];
      if (param_4 + -4 == 0 || param_4 < 4) {
        return uVar3;
      }
      uVar2 = param_2[4];
      uVar1 = uVar3 + uVar2;
      uVar3 = (-(ulong)CARRY8(uVar1,*puVar4) & 1) + (ulong)CARRY8(uVar3,uVar2);
      param_1[4] = uVar1 + *puVar4;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
      param_3 = puVar4;
      param_4 = param_4 + -4;
    }
  }
  return uVar3;
}

