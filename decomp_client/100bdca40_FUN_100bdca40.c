
undefined4
FUN_100bdca40(long param_1,undefined8 param_2,ulong param_3,void *param_4,size_t param_5,
             void *param_6,size_t param_7,int param_8)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  void *ptr;
  void *ptr_00;
  undefined8 uVar4;
  ulong len;
  
  ptr = (void *)FUN_100bf3540(param_3 & 0xffffffff,"t1_enc.c",0x4a2);
  if (ptr == (void *)0x0) {
    FUN_100c62ee0(0x14,0x13a,0x41,"t1_enc.c",0x4ec);
    return 0;
  }
  if (param_8 == 0) {
    len = param_5 + 0x40;
  }
  else {
    len = param_5 + 0x42 + param_7;
  }
  ptr_00 = (void *)FUN_100bf3540(len,"t1_enc.c",0x4b0);
  if (ptr_00 != (void *)0x0) {
    _memcpy(ptr_00,param_4,param_5);
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x18) = *(undefined8 *)(lVar1 + 0xdc);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x10) = *(undefined8 *)(lVar1 + 0xd4);
    uVar4 = *(undefined8 *)(lVar1 + 0xc4);
    *(undefined8 *)((long)ptr_00 + param_5 + 8) = *(undefined8 *)(lVar1 + 0xcc);
    *(undefined8 *)((long)ptr_00 + param_5) = uVar4;
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x38) = *(undefined8 *)(lVar1 + 0xbc);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x30) = *(undefined8 *)(lVar1 + 0xb4);
    uVar4 = *(undefined8 *)(lVar1 + 0xa4);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x28) = *(undefined8 *)(lVar1 + 0xac);
    *(undefined8 *)((long)ptr_00 + param_5 + 0x20) = uVar4;
    if (param_8 != 0) {
      *(char *)((long)ptr_00 + param_5 + 0x40) = (char)(param_7 >> 8);
      *(char *)((long)ptr_00 + param_5 + 0x41) = (char)param_7;
      if ((param_6 != (void *)0x0) || (param_7 != 0)) {
        _memcpy((void *)(param_5 + 0x42 + (long)ptr_00),param_6,param_7);
      }
    }
    iVar2 = _memcmp(ptr_00,"client finished",0xf);
    if ((((iVar2 == 0) || (iVar2 = _memcmp(ptr_00,"server finished",0xf), iVar2 == 0)) ||
        (iVar2 = _memcmp(ptr_00,"master secret",0xd), iVar2 == 0)) ||
       (iVar2 = _memcmp(ptr_00,"key expansion",0xd), iVar2 == 0)) {
      FUN_100c62ee0(0x14,0x13a,0x16f,"t1_enc.c",0x4e8);
      uVar3 = 0;
    }
    else {
      uVar4 = FUN_100bceee0(param_1);
      uVar3 = FUN_100bdb0b0(uVar4,ptr_00,len & 0xffffffff,0,0,0,0,0,0,
                            *(long *)(param_1 + 0x130) + 0x14,
                            *(undefined4 *)(*(long *)(param_1 + 0x130) + 0x10),param_2,ptr,
                            (int)param_3);
      _OPENSSL_cleanse(ptr_00,len);
      _OPENSSL_cleanse(ptr,param_3);
    }
    FUN_100bf3910(ptr);
    FUN_100bf3910(ptr_00);
    return uVar3;
  }
  FUN_100c62ee0(0x14,0x13a,0x41,"t1_enc.c",0x4ec);
  FUN_100bf3910(ptr);
  return 0;
}

