
ulong FUN_10089d680(undefined8 param_1,long param_2,long param_3,int *param_4,undefined8 param_5,
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
  lVar4 = FUN_100894720(param_6);
  lVar5 = FUN_1008966d0(*(undefined8 *)(param_6 + 0x20));
  if ((lVar4 == 0) || (lVar5 == 0)) {
    uVar7 = 0xd9;
    uVar8 = 0xf7;
LAB_10089d73b:
    FUN_100887ce0(0xd,0xdc,uVar7,"a_sign.c",uVar8);
    uVar6 = 0;
  }
  else {
    pcVar1 = *(code **)(*(long *)(lVar5 + 0x10) + 200);
    if (pcVar1 == (code *)0x0) {
LAB_10089d75c:
      if ((*(byte *)(lVar4 + 0x10) & 4) != 0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar3 = FUN_1008946b0(lVar4);
          iVar2 = FUN_1008231b0(&local_44,uVar3,**(undefined4 **)(lVar5 + 0x10));
          if (iVar2 != 0) goto LAB_10089d79a;
        }
        uVar7 = 0xc6;
        uVar8 = 0x114;
        goto LAB_10089d73b;
      }
      local_44 = *(undefined4 *)(lVar4 + 4);
LAB_10089d79a:
      uVar9 = -(uint)((*(byte *)(*(long *)(lVar5 + 0x10) + 8) & 4) == 0) | 5;
      if (param_2 != 0) {
        uVar7 = FUN_100821870(local_44);
        FUN_10089f940(param_2,uVar7,uVar9,0);
      }
      if (param_3 != 0) {
        uVar7 = FUN_100821870(local_44);
        FUN_10089f940(param_3,uVar7,uVar9,0);
      }
LAB_10089d7ed:
      uVar9 = FUN_1008a52d0(param_5,&local_38,param_1);
      len = (size_t)uVar9;
      iVar2 = FUN_100891d80(lVar5);
      len_00 = (size_t)iVar2;
      local_40 = len_00;
      ptr = (void *)FUN_10081ddd0(iVar2,"a_sign.c",0x128);
      if ((ptr == (void *)0x0) || (local_38 == (void *)0x0)) {
        local_40 = 0;
        FUN_100887ce0(0xd,0xdc,0x41,"a_sign.c",299);
      }
      else {
        iVar2 = FUN_10088a910(param_6,local_38,(long)(int)uVar9);
        if (iVar2 != 0) {
          iVar2 = FUN_100897940(param_6,ptr,&local_40);
          if (iVar2 != 0) {
            if (*(long *)(param_4 + 2) != 0) {
              FUN_10081e1a0();
            }
            *(void **)(param_4 + 2) = ptr;
            *param_4 = (int)local_40;
            *(ulong *)(param_4 + 4) = *(ulong *)(param_4 + 4) & 0xfffffffffffffff0 | 8;
            ptr = (void *)0x0;
            goto LAB_10089d93e;
          }
        }
        local_40 = 0;
        FUN_100887ce0(0xd,0xdc,6,"a_sign.c",0x132);
      }
    }
    else {
      iVar2 = (*pcVar1)(param_6,param_1,param_5,param_2,param_3,param_4);
      if (iVar2 == 1) {
        local_40 = (size_t)*param_4;
      }
      else {
        if (0 < iVar2) {
          if (iVar2 == 2) goto LAB_10089d75c;
          goto LAB_10089d7ed;
        }
        FUN_100887ce0(0xd,0xdc,6,"a_sign.c",0x107);
      }
      ptr = (void *)0x0;
      len = 0;
      len_00 = 0;
    }
LAB_10089d93e:
    FUN_10088aa50(param_6);
    if (local_38 != (void *)0x0) {
      _OPENSSL_cleanse(local_38,len);
      FUN_10081e1a0(local_38);
    }
    if (ptr != (void *)0x0) {
      _OPENSSL_cleanse(ptr,len_00);
      FUN_10081e1a0(ptr);
    }
    uVar6 = local_40 & 0xffffffff;
  }
  return uVar6;
}

