
undefined4 FUN_10081c460(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *ptr;
  long lVar4;
  long lVar5;
  void *ptr_00;
  size_t len;
  
  iVar1 = FUN_1008e0910(*(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2d0));
  if ((iVar1 == 0) ||
     (lVar3 = FUN_1008dff10(*(undefined8 *)(param_1 + 0x2f0),*(undefined8 *)(param_1 + 0x2e8),
                            *(undefined8 *)(param_1 + 0x2d0)), lVar3 == 0)) {
    ptr = (char *)0x0;
    lVar3 = 0;
  }
  else {
    ptr = (char *)0x0;
    if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
      ptr = (char *)(**(code **)(param_1 + 0x2c0))(param_1,*(undefined8 *)(param_1 + 0x2a8));
      if (ptr == (char *)0x0) {
        ptr = (char *)0x0;
      }
      else {
        lVar4 = FUN_1008e04a0(*(undefined8 *)(param_1 + 0x2e0),*(undefined8 *)(param_1 + 0x2c8),ptr)
        ;
        if (lVar4 != 0) {
          lVar5 = FUN_1008e06c0(*(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)(param_1 + 0x2e8),
                                *(undefined8 *)(param_1 + 0x2d8),lVar4,
                                *(undefined8 *)(param_1 + 0x2f8),lVar3);
          if (lVar5 == 0) {
            lVar5 = 0;
            uVar2 = 0xffffffff;
          }
          else {
            iVar1 = FUN_10084b410(lVar5);
            iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
            ptr_00 = (void *)FUN_10081ddd0(iVar1,"tls_srp.c",0x191);
            if (ptr_00 == (void *)0x0) {
              uVar2 = 0xffffffff;
            }
            else {
              FUN_10084bdf0(lVar5,ptr_00);
              uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x18))
                                (param_1,param_2,ptr_00,iVar1);
              _OPENSSL_cleanse(ptr_00,(long)iVar1);
              FUN_10081e1a0(ptr_00);
            }
          }
          goto LAB_10081c5da;
        }
      }
    }
  }
  lVar5 = 0;
  lVar4 = 0;
  uVar2 = 0xffffffff;
LAB_10081c5da:
  FUN_10084b440(lVar5);
  FUN_10084b440(lVar4);
  if (ptr != (char *)0x0) {
    len = _strlen(ptr);
    _OPENSSL_cleanse(ptr,len);
    FUN_10081e1a0(ptr);
  }
  FUN_10084b440(lVar3);
  return uVar2;
}

