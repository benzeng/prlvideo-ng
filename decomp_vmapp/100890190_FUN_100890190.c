
undefined8 FUN_100890190(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  
  if (param_2 != 0 || param_3 != (undefined8 *)0x0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (param_2 != 0) {
      if (param_4 == 0) {
        _aesni_set_decrypt_key(param_2,*(int *)(param_1 + 0x68) << 2,lVar1);
        pcVar3 = _aesni_xts_decrypt;
        pcVar4 = _aesni_decrypt;
      }
      else {
        _aesni_set_encrypt_key();
        pcVar3 = _aesni_xts_encrypt;
        pcVar4 = _aesni_encrypt;
      }
      *(code **)(lVar1 + 0x1f8) = pcVar4;
      *(code **)(lVar1 + 0x208) = pcVar3;
      _aesni_set_encrypt_key
                (param_2 + *(int *)(param_1 + 0x68) / 2,*(int *)(param_1 + 0x68) << 2,lVar1 + 0xf4);
      *(code **)(lVar1 + 0x200) = _aesni_encrypt;
      *(long *)(lVar1 + 0x1e8) = lVar1;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(long *)(lVar1 + 0x1f0) = lVar1 + 0xf4;
      uVar2 = *param_3;
      *(undefined8 *)(param_1 + 0x30) = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = uVar2;
    }
  }
  return 1;
}

