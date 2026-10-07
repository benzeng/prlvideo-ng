
undefined8 FUN_10088f380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _aesni_cbc_encrypt(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0x78),param_1 + 0x28,
                     *(undefined4 *)(param_1 + 0x10));
  return 1;
}

