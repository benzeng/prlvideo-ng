
undefined * FUN_100bfc840(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  
  puVar1 = &DAT_102316160;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_f0 = 0x6a09e667f3bcc908;
  local_e8 = 0xbb67ae8584caa73b;
  local_e0 = 0x3c6ef372fe94f82b;
  local_d8 = 0xa54ff53a5f1d36f1;
  local_d0 = 0x510e527fade682d1;
  local_c8 = 0x9b05688c2b3e6c1f;
  local_c0 = 0x1f83d9abfb41bd6b;
  local_b8 = 0x5be0cd19137e2179;
  local_20 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_1c = 0x40;
  FUN_100bfc600(&local_f0,param_1,param_2);
  FUN_100bfc0b0(puVar1,&local_f0);
  _OPENSSL_cleanse(&local_f0,0xd8);
  return puVar1;
}

