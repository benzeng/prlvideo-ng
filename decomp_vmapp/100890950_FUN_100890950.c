
undefined8 FUN_100890950(long param_1,long param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  
  if (param_2 != 0 || param_3 != (void *)0x0) {
    lVar3 = *(long *)(param_1 + 0x78);
    if (param_2 != 0) {
      iVar4 = *(int *)(param_1 + 0x68) << 3;
      if ((DAT_1011ccfbc._1_1_ & 2) == 0) {
        FUN_10082f8d0(param_2,iVar4,lVar3);
        uVar1 = *(undefined4 *)(lVar3 + 0x104);
        uVar2 = *(undefined4 *)(lVar3 + 0x108);
        pcVar5 = _AES_encrypt;
      }
      else {
        _vpaes_set_encrypt_key(param_2,iVar4,lVar3);
        uVar1 = *(undefined4 *)(lVar3 + 0x104);
        uVar2 = *(undefined4 *)(lVar3 + 0x108);
        pcVar5 = _vpaes_encrypt;
      }
      FUN_1008458d0(lVar3 + 0x110,uVar2,uVar1,lVar3,pcVar5);
      *(undefined8 *)(lVar3 + 0x148) = 0;
      *(undefined4 *)(lVar3 + 0xf4) = 1;
    }
    if (param_3 != (void *)0x0) {
      _memcpy((void *)(param_1 + 0x28),param_3,0xf - (long)*(int *)(lVar3 + 0x104));
      *(undefined4 *)(lVar3 + 0xf8) = 1;
    }
  }
  return 1;
}

