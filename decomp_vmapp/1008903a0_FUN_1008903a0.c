
undefined8 FUN_1008903a0(long param_1,long param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (param_2 != 0 || param_3 != (undefined8 *)0x0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (param_2 != 0) {
      *(undefined8 *)(lVar1 + 0x208) = 0;
      if ((DAT_1011ccfbc._1_1_ & 2) != 0) {
        pcVar3 = _bsaes_xts_decrypt;
        if (param_4 != 0) {
          pcVar3 = (code *)PTR__bsaes_xts_encrypt_100ba2368;
        }
        *(code **)(lVar1 + 0x208) = pcVar3;
      }
      if (param_4 == 0) {
        FUN_10082f8e0(param_2,*(int *)(param_1 + 0x68) << 2,lVar1);
        pcVar3 = _AES_decrypt;
      }
      else {
        FUN_10082f8d0();
        pcVar3 = _AES_encrypt;
      }
      *(code **)(lVar1 + 0x1f8) = pcVar3;
      FUN_10082f8d0(param_2 + *(int *)(param_1 + 0x68) / 2,*(int *)(param_1 + 0x68) << 2,
                    lVar1 + 0xf4);
      *(code **)(lVar1 + 0x200) = _AES_encrypt;
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

