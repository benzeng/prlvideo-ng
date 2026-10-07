
undefined8 FUN_10061b938(undefined1 (*param_1) [16])

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = aesenc(in_XMM0 ^ *param_1,param_1[1]);
  auVar1 = aesenc(auVar1,param_1[2]);
  auVar1 = aesenc(auVar1,param_1[3]);
  auVar1 = aesenc(auVar1,param_1[4]);
  auVar1 = aesenc(auVar1,param_1[5]);
  auVar1 = aesenc(auVar1,param_1[6]);
  auVar1 = aesenc(auVar1,param_1[7]);
  auVar1 = aesenc(auVar1,param_1[8]);
  auVar1 = aesenc(auVar1,param_1[9]);
  auVar1 = aesenclast(auVar1,param_1[10]);
  return auVar1._0_8_;
}

