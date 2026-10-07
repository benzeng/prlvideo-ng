
long FUN_1008deab0(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t len;
  long *plVar10;
  undefined8 uVar11;
  void *ptr;
  size_t *psVar12;
  undefined1 *local_68;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x18);
  local_38 = lVar8;
  uVar6 = FUN_100893a10();
  lVar7 = FUN_10087d330(uVar6);
  if (lVar7 == 0) {
    FUN_100887ce0(0x2e,0x78,0x41,"cms_enc.c",0x58);
    lVar7 = 0;
    goto LAB_1008def40;
  }
  FUN_10087db60(lVar7,0x81,0);
  if (lVar9 == 0) {
    uVar5 = FUN_100821ab0(*puVar1);
    uVar6 = FUN_100821930(uVar5);
    lVar8 = FUN_100890b50(uVar6);
    if (lVar8 != 0) goto LAB_1008deb70;
    uVar6 = 0x94;
    uVar11 = 0x69;
LAB_1008ded97:
    FUN_100887ce0(0x2e,0x78,uVar6,"cms_enc.c",uVar11);
    ptr = (void *)0x0;
    len = 0;
    bVar3 = false;
    bVar2 = false;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_1008deb70:
    bVar3 = false;
    iVar4 = FUN_10088af10(local_50,lVar8,0,0,0,lVar9 != 0);
    if (iVar4 < 1) {
      FUN_100887ce0(0x2e,0x78,0x65,"cms_enc.c",0x70);
      ptr = (void *)0x0;
      len = 0;
      bVar2 = false;
    }
    else if (lVar9 == 0) {
      iVar4 = FUN_100894390(local_50,puVar1[1]);
      if (iVar4 < 1) {
        uVar6 = 0x66;
        uVar11 = 0x80;
        goto LAB_1008ded97;
      }
      iVar4 = FUN_100894680(local_50);
      len = (size_t)iVar4;
      local_68 = (undefined1 *)0x0;
LAB_1008dec9e:
      ptr = (void *)FUN_10081ddd0(iVar4,"cms_enc.c",0x86);
      if (ptr == (void *)0x0) {
        FUN_100887ce0(0x2e,0x78,0x41,"cms_enc.c",0x88);
        ptr = (void *)0x0;
      }
      else {
        iVar4 = FUN_10088be00(local_50,ptr);
        if (0 < iVar4) {
          if (*(long *)(param_1 + 0x20) != 0) goto LAB_1008decee;
          *(void **)(param_1 + 0x20) = ptr;
          *(size_t *)(param_1 + 0x28) = len;
          if (lVar9 == 0) {
            FUN_100888070();
          }
          bVar2 = lVar9 != 0;
          ptr = (void *)0x0;
          goto LAB_1008decf8;
        }
      }
      bVar3 = false;
      bVar2 = false;
    }
    else {
      uVar6 = FUN_100894620();
      uVar5 = FUN_1008944e0(uVar6);
      uVar6 = FUN_100821870(uVar5);
      *puVar1 = uVar6;
      iVar4 = FUN_1008944d0(local_50);
      bVar3 = false;
      local_68 = (undefined1 *)0x0;
      if (0 < iVar4) {
        local_68 = local_48;
        iVar4 = FUN_100886f90(local_68,iVar4);
        ptr = (void *)0x0;
        len = 0;
        bVar2 = false;
        if (iVar4 < 1) goto LAB_1008deecc;
      }
      iVar4 = FUN_100894680(local_50);
      len = (size_t)iVar4;
      ptr = (void *)0x0;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_1008dec9e;
LAB_1008decee:
      bVar2 = false;
LAB_1008decf8:
      plVar10 = (long *)(param_1 + 0x20);
      psVar12 = (size_t *)(param_1 + 0x28);
      if ((*psVar12 != len) && (iVar4 = FUN_10088bd00(local_50), iVar4 < 1)) {
        if ((lVar9 == 0) && (*(int *)(param_1 + 0x30) == 0)) {
          _OPENSSL_cleanse((void *)*plVar10,*psVar12);
          FUN_10081e1a0(*plVar10);
          *plVar10 = (long)ptr;
          *psVar12 = len;
          FUN_100888070();
          ptr = (void *)0x0;
          goto LAB_1008dee0c;
        }
        uVar6 = 0x76;
        uVar11 = 0xa3;
        goto LAB_1008deebc;
      }
LAB_1008dee0c:
      bVar3 = false;
      iVar4 = FUN_10088af10(local_50,0,0,*plVar10,local_68,lVar9 != 0);
      if (iVar4 < 1) {
        FUN_100887ce0(0x2e,0x78,0x65,"cms_enc.c",0xb3);
      }
      else {
        bVar3 = true;
        if (local_68 != (undefined1 *)0x0) {
          lVar9 = FUN_1008a8980();
          puVar1[1] = lVar9;
          if (lVar9 == 0) {
            uVar6 = 0x41;
            uVar11 = 0xba;
          }
          else {
            iVar4 = FUN_100894260(local_50,lVar9);
            if (0 < iVar4) goto LAB_1008deecc;
            uVar6 = 0x66;
            uVar11 = 0xbf;
          }
LAB_1008deebc:
          FUN_100887ce0(0x2e,0x78,uVar6,"cms_enc.c",uVar11);
          bVar3 = false;
        }
      }
    }
  }
LAB_1008deecc:
  if ((*(void **)(param_1 + 0x20) != (void *)0x0) && ((!bVar3 || (!bVar2)))) {
    _OPENSSL_cleanse(*(void **)(param_1 + 0x20),*(size_t *)(param_1 + 0x28));
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (ptr != (void *)0x0) {
    _OPENSSL_cleanse(ptr,len);
    FUN_10081e1a0(ptr);
  }
  if (bVar3) {
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    FUN_10087d4e0(lVar7);
    lVar7 = 0;
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_1008def40:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

