
undefined * FUN_100bfbe80(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar1 = &DAT_102316110;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_20 = 0;
  local_28 = 0;
  local_88 = 0xbb67ae856a09e667;
  uStack_80 = 0xa54ff53a3c6ef372;
  local_78 = 0x9b05688c510e527f;
  uStack_70 = 0x5be0cd191f83d9ab;
  local_1c = 0x20;
  FUN_100bfbb60(&local_88,param_1,param_2);
  FUN_100bfbcc0(puVar1,&local_88);
  _OPENSSL_cleanse(&local_88,0x70);
  return puVar1;
}

