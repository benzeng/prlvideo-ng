
undefined8 FUN_10061afb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x80000003;
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 7) = DAT_100bc8450;
    param_2[6] = DAT_100bc8448;
    param_2[5] = DAT_100bc8440;
    param_2[4] = DAT_100bc8438;
    param_2[3] = PTR_s_This_engine_realizes_AES_encrypt_100bc8430;
    param_2[2] = PTR_s_AES_encryption_engine_100bc8428;
    param_2[1] = PTR_s_Copyright_1999_2017_Parallels_In_100bc8420;
    *param_2 = PTR_s_Parallels_International_GmbH__100bc8418;
    uVar1 = 0;
  }
  return uVar1;
}

