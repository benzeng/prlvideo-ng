
void FUN_10061b850(undefined8 param_1)

{
  uint *in_RCX;
  uint uVar1;
  uint uVar2;
  uint in_XMM0_Dc;
  uint uVar3;
  uint in_XMM0_Dd;
  uint in_XMM1_Dd;
  uint in_XMM4_Da;
  
  uVar2 = (uint)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  uVar3 = in_XMM0_Dc ^ uVar2;
  *in_RCX = uVar1 ^ in_XMM1_Dd;
  in_RCX[1] = uVar2 ^ in_XMM4_Da ^ uVar1 ^ in_XMM1_Dd;
  in_RCX[2] = uVar3 ^ uVar1 ^ in_XMM4_Da ^ in_XMM1_Dd;
  in_RCX[3] = in_XMM0_Dd ^ uVar1 ^ uVar3 ^ in_XMM1_Dd;
  return;
}

