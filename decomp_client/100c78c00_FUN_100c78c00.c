
ulong FUN_100c78c00(undefined8 param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
                   long param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *ptr;
  undefined8 uVar8;
  uint uVar9;
  size_t len;
  size_t len_00;
  undefined4 local_44;
  size_t local_40;
  void *local_38;
  
  local_38 = (void *)0x0;
  local_40 = 0;
  lVar4 = FUN_100c6fca0(param_6);
  lVar5 = FUN_100c71c50(*(undefined8 *)(param_6 + 0x20));
  if ((lVar4 == 0) || (lVar5 == 0)) {
    uVar7 = 0xd9;
    uVar8 = 0xf7;
LAB_100c78cbb:
    FUN_100c62ee0(0xd,0xdc,uVar7,"a_sign.c",uVar8);
    uVar6 = 0;
  }
  else {
    pcVar1 = *(code **)(*(long *)(lVar5 + 0x10) + 200);
    if (pcVar1 == (code *)0x0) {
LAB_100c78cdc:
      if ((*(byte *)(lVar4 + 0x10) & 4) != 0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar3 = FUN_100c6fc30(lVar4);
          iVar2 = FUN_100bf8920(&local_44,uVar3,**(undefined4 **)(lVar5 + 0x10));
          if (iVar2 != 0) goto LAB_100c78d1a;
        }
        uVar7 = 0xc6;
        uVar8 = 0x114;
        goto LAB_100c78cbb;
      }
      local_44 = *(undefined4 *)(lVar4 + 4);
LAB_100c78d1a:
      uVar9 = -(uint)((*(byte *)(*(long *)(lVar5 + 0x10) + 8) & 4) == 0) | 5;
      if (param_2 != 0) {
        uVar7 = FUN_100bf6fe0(local_44);
        FUN_100c7aec0(param_2,uVar7,uVar9,0);
      }
      if (param_3 != 0) {
        uVar7 = FUN_100bf6fe0(local_44);
        FUN_100c7aec0(param_3,uVar7,uVar9,0);
      }
LAB_100c78d6d:
      uVar9 = FUN_100c80850(param_5,&local_38,param_1);
      len = (size_t)uVar9;
      iVar2 = FUN_100c6d160(lVar5);
      len_00 = (size_t)iVar2;
      local_40 = len_00;
      ptr = (void *)FUN_100bf3540(iVar2,"a_sign.c",0x128);
      if ((ptr == (void *)0x0) || (local_38 == (void *)0x0)) {
        local_40 = 0;
        FUN_100c62ee0(0xd,0xdc,0x41,"a_sign.c",299);
      }
      else {
        iVar2 = FUN_100c65b10(param_6,local_38,(long)(int)uVar9);
        if (iVar2 != 0) {
          iVar2 = FUN_100c72ec0(param_6,ptr,&local_40);
          if (iVar2 != 0) {
            if (*(long *)(param_4 + 2) != 0) {
              FUN_100bf3910();
            }
            *(void **)(param_4 + 2) = ptr;
            *param_4 = (int)local_40;
            *(ulong *)(param_4 + 4) = *(ulong *)(param_4 + 4) & 0xfffffffffffffff0 | 8;
            ptr = (void *)0x0;
            goto LAB_100c78ebe;
          }
        }
        local_40 = 0;
        FUN_100c62ee0(0xd,0xdc,6,"a_sign.c",0x132);
      }
    }
    else {
      iVar2 = (*pcVar1)(param_6,param_1,param_5,param_2,param_3,param_4);
      if (iVar2 == 1) {
        local_40 = (size_t)*param_4;
      }
      else {
        if (0 < iVar2) {
          if (iVar2 == 2) goto LAB_100c78cdc;
          goto LAB_100c78d6d;
        }
        FUN_100c62ee0(0xd,0xdc,6,"a_sign.c",0x107);
      }
      ptr = (void *)0x0;
      len = 0;
      len_00 = 0;
    }
LAB_100c78ebe:
    FUN_100c65c50(param_6);
    if (local_38 != (void *)0x0) {
      _OPENSSL_cleanse(local_38,len);
      FUN_100bf3910(local_38);
    }
    if (ptr != (void *)0x0) {
      _OPENSSL_cleanse(ptr,len_00);
      FUN_100bf3910(ptr);
    }
    uVar6 = local_40 & 0xffffffff;
  }
  return uVar6;
}

