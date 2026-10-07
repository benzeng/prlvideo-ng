
uint FUN_1007feaa0(undefined8 param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = 0;
  if (param_4 + 1U <= uVar1) {
    uVar2 = (uint)*(byte *)(*(long *)(param_2 + 4) + (ulong)(uVar1 - 1));
    uVar3 = param_4 + 1U + uVar2;
    uVar2 = uVar2 + 1;
    uVar3 = ~((int)(~param_3 & param_3 - uVar2 | (uVar1 - uVar3 ^ uVar3 | uVar3 ^ uVar1) ^ uVar1) >>
             0x1f);
    uVar2 = uVar2 & uVar3;
    param_2[1] = uVar1 - uVar2;
    *param_2 = *param_2 | uVar2 << 8;
    uVar2 = (uVar3 | 1) ^ 0xfffffffe;
  }
  return uVar2;
}

