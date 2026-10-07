
undefined8 FUN_1008904a0(long param_1,long param_2,void *param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  
  if (param_2 != 0 || param_3 != (void *)0x0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (param_2 != 0) {
      _aesni_set_encrypt_key(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
      FUN_1008458d0(lVar1 + 0x110,*(undefined4 *)(lVar1 + 0x108),*(undefined4 *)(lVar1 + 0x104),
                    lVar1,_aesni_encrypt);
      pcVar2 = _aesni_ccm64_decrypt_blocks;
      if (param_4 != 0) {
        pcVar2 = (code *)PTR__aesni_ccm64_encrypt_blocks_100ba2348;
      }
      *(code **)(lVar1 + 0x148) = pcVar2;
      *(undefined4 *)(lVar1 + 0xf4) = 1;
    }
    if (param_3 != (void *)0x0) {
      _memcpy((void *)(param_1 + 0x28),param_3,0xf - (long)*(int *)(lVar1 + 0x104));
      *(undefined4 *)(lVar1 + 0xf8) = 1;
    }
  }
  return 1;
}

