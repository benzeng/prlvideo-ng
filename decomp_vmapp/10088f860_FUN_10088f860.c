
undefined8 FUN_10088f860(long param_1,long param_2,void *param_3)

{
  long lVar1;
  
  if (param_2 != 0 || param_3 != (void *)0x0) {
    lVar1 = *(long *)(param_1 + 0x78);
    if (param_2 == 0) {
      if (*(int *)(lVar1 + 0xf4) == 0) {
        _memcpy(*(void **)(lVar1 + 0x288),param_3,(long)*(int *)(lVar1 + 0x290));
      }
      else {
        FUN_1008443d0(lVar1 + 0x100,param_3);
      }
      *(undefined4 *)(lVar1 + 0xf8) = 1;
      *(undefined4 *)(lVar1 + 0x298) = 0;
    }
    else {
      _aesni_set_encrypt_key(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
      FUN_100844150(lVar1 + 0x100,lVar1,_aesni_encrypt);
      *(code **)(lVar1 + 0x2a0) = _aesni_ctr32_encrypt_blocks;
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(lVar1 + 0xf8) != 0 &&
          (param_3 = *(void **)(lVar1 + 0x288), param_3 != (void *)0x0)))) {
        FUN_1008443d0(lVar1 + 0x100,param_3,(long)*(int *)(lVar1 + 0x290));
        *(undefined4 *)(lVar1 + 0xf8) = 1;
      }
      *(undefined4 *)(lVar1 + 0xf4) = 1;
    }
  }
  return 1;
}

