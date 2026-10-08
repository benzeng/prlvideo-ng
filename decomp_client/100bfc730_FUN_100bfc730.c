
undefined * FUN_100bfc730(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = &DAT_102316130;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0xcbbb9d5dc1059ed8;
  local_e8 = 0x629a292a367cd507;
  local_e0 = 0x9159015a3070dd17;
  local_d8 = 0x152fecd8f70e5939;
  local_d0 = 0x67332667ffc00b31;
  local_c8 = 0x8eb44a8768581511;
  local_c0 = 0xdb0c2e0d64f98fa7;
  local_b8 = 0x47b5481dbefa4fa4;
  local_20 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_1c = 0x30;
  FUN_100bfc600(&local_f0,param_1,param_2);
  FUN_100bfc0b0(puVar1,&local_f0);
  _OPENSSL_cleanse(&local_f0,0xd8);
  return puVar1;
}

