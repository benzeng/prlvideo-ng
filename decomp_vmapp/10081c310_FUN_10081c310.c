
undefined4 FUN_10081c310(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *ptr;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_1008e09a0(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2d0));
  uVar2 = 0xffffffff;
  lVar3 = 0;
  if (iVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1008dff10(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2e8),
                          *(undefined8 *)(param_1 + 0x2d0));
    lVar4 = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_1008e00c0(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x308),lVar3,
                            *(undefined8 *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x2d0));
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        iVar1 = FUN_10084b410(lVar4);
        iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
        ptr = (void *)FUN_10081ddd0(iVar1,"tls_srp.c",0x162);
        if (ptr == (void *)0x0) {
          uVar2 = 0xffffffff;
        }
        else {
          FUN_10084bdf0(lVar4,ptr);
          uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x18))
                            (param_1,param_2,ptr,iVar1);
          _OPENSSL_cleanse(ptr,(long)iVar1);
          FUN_10081e1a0(ptr);
        }
      }
    }
  }
  FUN_10084b440(lVar4);
  FUN_10084b440(lVar3);
  return uVar2;
}

