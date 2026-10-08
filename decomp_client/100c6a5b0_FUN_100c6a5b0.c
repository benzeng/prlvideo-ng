
bool FUN_100c6a5b0(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  
  lVar1 = param_1[0xf];
  uVar6 = *(uint *)(*param_1 + 0x10) & 0xf0007;
  uVar4 = DAT_102311d5c & 0x200;
  if ((param_4 == 0) && (uVar6 - 1 < 2)) {
    iVar2 = (int)param_1[0xd] << 3;
    if ((uVar4 != 0) && (uVar6 == 2)) {
      iVar2 = FUN_100c0aaf0(param_2,iVar2,lVar1);
      *(code **)(lVar1 + 0xf8) = _AES_decrypt;
      pcVar3 = _bsaes_cbc_encrypt;
      goto LAB_100c6a6d3;
    }
    if (uVar4 == 0) {
      iVar2 = FUN_100c0aaf0(param_2,iVar2,lVar1);
      pcVar5 = _AES_decrypt;
LAB_100c6a6c4:
      pcVar3 = (code *)0x0;
      *(code **)(lVar1 + 0xf8) = pcVar5;
      if (uVar6 == 2) {
        pcVar3 = (code *)PTR__AES_cbc_encrypt_1021e1010;
      }
      goto LAB_100c6a6d3;
    }
    iVar2 = _vpaes_set_decrypt_key(param_2,iVar2,lVar1);
    pcVar5 = _vpaes_decrypt;
  }
  else {
    iVar2 = (int)param_1[0xd] << 3;
    if ((uVar4 != 0) && (uVar6 == 5)) {
      iVar2 = FUN_100c0aae0(param_2,iVar2,lVar1);
      *(code **)(lVar1 + 0xf8) = _AES_encrypt;
      pcVar3 = _bsaes_ctr32_encrypt_blocks;
      goto LAB_100c6a6d3;
    }
    if (uVar4 == 0) {
      iVar2 = FUN_100c0aae0(param_2,iVar2,lVar1);
      pcVar5 = _AES_encrypt;
      goto LAB_100c6a6c4;
    }
    iVar2 = _vpaes_set_encrypt_key(param_2,iVar2,lVar1);
    pcVar5 = _vpaes_encrypt;
  }
  pcVar3 = (code *)0x0;
  *(code **)(lVar1 + 0xf8) = pcVar5;
  if (uVar6 == 2) {
    pcVar3 = (code *)PTR__vpaes_cbc_encrypt_1021e1ca8;
  }
LAB_100c6a6d3:
  *(code **)(lVar1 + 0x100) = pcVar3;
  if (-1 >= iVar2) {
    FUN_100c62ee0(6,0x85,0x8f,"e_aes.c",0x212);
  }
  return -1 < iVar2;
}

