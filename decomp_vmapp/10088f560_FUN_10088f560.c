
undefined8 FUN_10088f560(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if ((ulong)(long)*(int *)(*param_1 + 4) <= param_4) {
    _aesni_ecb_encrypt(param_3,param_2,param_4,param_1[0xf],(int)param_1[2]);
  }
  return 1;
}

