
bool FUN_100c6a4a0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  
  lVar1 = param_1[0xf];
  uVar4 = *(uint *)(*param_1 + 0x10) & 0xf0007;
  iVar2 = (int)param_1[0xd] << 3;
  if ((param_4 == 0) && (uVar4 - 1 < 2)) {
    iVar2 = _aesni_set_decrypt_key(param_2,iVar2,lVar1);
    *(code **)(lVar1 + 0xf8) = _aesni_decrypt;
    puVar3 = (undefined *)0x0;
    if (uVar4 == 2) {
      puVar3 = PTR__aesni_cbc_encrypt_1021e1868;
    }
    *(undefined **)(lVar1 + 0x100) = puVar3;
  }
  else {
    iVar2 = _aesni_set_encrypt_key(param_2,iVar2,lVar1);
    *(code **)(lVar1 + 0xf8) = _aesni_encrypt;
    if (uVar4 == 2) {
      *(code **)(lVar1 + 0x100) = _aesni_cbc_encrypt;
    }
    else if (uVar4 == 5) {
      *(code **)(lVar1 + 0x100) = _aesni_ctr32_encrypt_blocks;
    }
    else {
      *(undefined8 *)(lVar1 + 0x100) = 0;
    }
  }
  if (-1 >= iVar2) {
    FUN_100c62ee0(6,0xa5,0x8f,"e_aes.c",0xf6);
  }
  return -1 < iVar2;
}

