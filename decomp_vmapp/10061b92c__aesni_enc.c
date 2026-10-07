
void _aesni_enc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  uVar1 = FUN_10061b938(*param_3);
  *param_2 = uVar1;
  *(undefined4 *)(param_2 + 1) = extraout_XMM0_Dc;
  *(undefined4 *)((long)param_2 + 0xc) = extraout_XMM0_Dd;
  return;
}

