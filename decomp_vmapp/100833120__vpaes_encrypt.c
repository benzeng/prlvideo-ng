
void _vpaes_encrypt(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_XMM0_Qb;
  
  FUN_1008331e0(*param_1);
  uVar1 = FUN_100832a40();
  *param_2 = uVar1;
  param_2[1] = extraout_XMM0_Qb;
  return;
}

