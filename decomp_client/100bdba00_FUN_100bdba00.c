
undefined8 FUN_100bdba00(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  local_44 = 0;
  local_48 = 0;
  uVar5 = 1;
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x3ec) == 0) {
    iVar2 = FUN_100bea520(*(undefined8 *)(param_1 + 0x130),&local_30,&local_38,&local_44,&local_48,
                          local_40);
    if (iVar2 == 0) {
      uVar5 = 0x8a;
      uVar6 = 0x27a;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(lVar4 + 0x3f8) = local_30;
      *(undefined8 *)(lVar4 + 0x400) = local_38;
      *(undefined4 *)(lVar4 + 0x408) = local_44;
      *(int *)(lVar4 + 0x40c) = local_48;
      iVar2 = FUN_100c6fbf0(local_30);
      iVar2 = iVar2 + local_48;
      iVar3 = FUN_100c6fbe0(local_30);
      iVar2 = (iVar3 + iVar2) * 2;
      FUN_100bcf9d0(param_1);
      lVar4 = FUN_100bf3540(iVar2,"t1_enc.c",0x288);
      if (lVar4 != 0) {
        lVar1 = *(long *)(param_1 + 0x80);
        *(int *)(lVar1 + 0x3ec) = iVar2;
        *(long *)(lVar1 + 0x3f0) = lVar4;
        ptr = (void *)FUN_100bf3540(iVar2,"t1_enc.c",0x290);
        if (ptr != (void *)0x0) {
          uVar5 = FUN_100bceee0(param_1);
          iVar3 = FUN_100bdb0b0(uVar5,"key expansion",0xd,*(long *)(param_1 + 0x80) + 0xa4,0x20,
                                *(long *)(param_1 + 0x80) + 0xc4,0x20,0,0,
                                *(long *)(param_1 + 0x130) + 0x14,
                                *(undefined4 *)(*(long *)(param_1 + 0x130) + 0x10),lVar4,ptr,iVar2);
          uVar5 = 0;
          if (((iVar3 != 0) && (uVar5 = 1, (*(byte *)(param_1 + 0x1a9) & 8) == 0)) &&
             (**(int **)(param_1 + 8) < 0x302)) {
            lVar4 = *(long *)(param_1 + 0x80);
            *(undefined4 *)(lVar4 + 0xe4) = 1;
            lVar1 = *(long *)(*(long *)(param_1 + 0x130) + 0xe0);
            if ((lVar1 != 0) && ((lVar1 = *(long *)(lVar1 + 0x28), lVar1 == 4 || (lVar1 == 0x20))))
            {
              *(undefined4 *)(lVar4 + 0xe4) = 0;
            }
          }
          _OPENSSL_cleanse(ptr,(long)iVar2);
          FUN_100bf3910(ptr);
          return uVar5;
        }
        FUN_100c62ee0(0x14,0xd3,0x41,"t1_enc.c",0x291);
        FUN_100bf3910(lVar4);
        return 0;
      }
      uVar5 = 0x41;
      uVar6 = 0x289;
    }
    FUN_100c62ee0(0x14,0xd3,uVar5,"t1_enc.c",uVar6);
    uVar5 = 0;
  }
  return uVar5;
}

