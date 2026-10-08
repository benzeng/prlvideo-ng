
undefined8
FUN_100c47bb0(int param_1,void *param_2,uint param_3,undefined8 *param_4,long *param_5,
             undefined8 param_6,ulong param_7,undefined8 param_8)

{
  void *ptr;
  uint uVar1;
  int iVar2;
  int iVar3;
  char *ptr_00;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  size_t len;
  undefined8 uVar9;
  char *local_40;
  void *local_38;
  
  uVar1 = FUN_100c4c150(param_8);
  if (uVar1 != param_7) {
    uVar8 = 0x77;
    uVar9 = 0xba;
LAB_100c47c49:
    FUN_100c62ee0(4,0x91,uVar8,"rsa_sign.c",uVar9);
    return 0;
  }
  if ((param_1 == 0x72) && (param_4 != (undefined8 *)0x0)) {
    iVar2 = FUN_100c4c1a0(param_7 & 0xffffffff,param_6,param_4,param_8,1);
    if (iVar2 < 1) {
      return 0;
    }
    *param_5 = (long)iVar2;
    return 1;
  }
  ptr_00 = (char *)FUN_100bf3540(param_7 & 0xffffffff,"rsa_sign.c",199);
  if (ptr_00 == (char *)0x0) {
    uVar8 = 0x41;
    uVar9 = 0xc9;
    goto LAB_100c47c49;
  }
  if ((param_1 == 0x72) && (param_3 != 0x24)) {
    uVar8 = 0x83;
    uVar9 = 0xcd;
    goto LAB_100c47d71;
  }
  iVar2 = FUN_100c4c1a0(param_7,param_6,ptr_00,param_8,1);
  uVar8 = 0;
  if (iVar2 < 1) goto LAB_100c47d79;
  if ((((param_1 == 0x5f) && (iVar2 == 0x12)) && (*ptr_00 == '\x04')) && (ptr_00[1] == '\x10')) {
    if (param_4 != (undefined8 *)0x0) {
      uVar8 = *(undefined8 *)(ptr_00 + 2);
      param_4[1] = *(undefined8 *)(ptr_00 + 10);
      *param_4 = uVar8;
      *param_5 = 0x10;
      uVar8 = 1;
      goto LAB_100c47d79;
    }
    iVar2 = _memcmp(param_2,ptr_00 + 2,0x10);
    uVar8 = 1;
    if (iVar2 == 0) goto LAB_100c47d79;
    uVar8 = 0x68;
    uVar9 = 0xde;
  }
  else {
    if (param_1 != 0x72) {
      len = (size_t)iVar2;
      uVar8 = 0;
      local_40 = ptr_00;
      plVar4 = (long *)FUN_100c7ba30(0,&local_40,len);
      if (plVar4 == (long *)0x0) goto LAB_100c47d79;
      if (local_40 == ptr_00 + len) {
        local_38 = (void *)0x0;
        iVar3 = FUN_100c7ba50(plVar4,&local_38);
        ptr = local_38;
        if (iVar3 < 1) goto LAB_100c47f33;
        if (iVar3 != iVar2) {
          _OPENSSL_cleanse(local_38,(long)iVar3);
          FUN_100bf3910(local_38);
          goto LAB_100c47f33;
        }
        iVar2 = _memcmp(ptr_00,local_38,len);
        _OPENSSL_cleanse(ptr,len);
        FUN_100bf3910(local_38);
        if (iVar2 != 0) goto LAB_100c47f33;
        puVar6 = (undefined8 *)*plVar4;
        if (puVar6[1] != 0) {
          iVar2 = FUN_100c76e30();
          if (iVar2 == 5) {
            puVar6 = (undefined8 *)*plVar4;
            goto LAB_100c47e51;
          }
          uVar8 = 0x68;
          uVar9 = 0xfb;
          goto LAB_100c47f52;
        }
LAB_100c47e51:
        iVar2 = FUN_100bf7220(*puVar6);
        if (iVar2 != param_1) {
          if (((param_1 != 4) || (iVar2 != 8)) && ((param_1 != 3 || (iVar2 != 7)))) {
            uVar8 = 100;
            uVar9 = 0x111;
            goto LAB_100c47f52;
          }
          _fwrite("signature has problems, re-make with post SSLeay045\n",0x34,1,
                  *(FILE **)PTR____stderrp_1021e1848);
        }
        if (param_4 == (undefined8 *)0x0) {
          if (*(uint *)plVar4[1] == param_3) {
            iVar2 = _memcmp(param_2,*(void **)((uint *)plVar4[1] + 2),(ulong)param_3);
            uVar8 = 1;
            if (iVar2 == 0) goto LAB_100c47f5a;
          }
          uVar8 = 0x68;
          uVar9 = 0x121;
          goto LAB_100c47f52;
        }
        uVar8 = FUN_100bf70a0(param_1);
        lVar5 = FUN_100c6bd60(uVar8);
        if (lVar5 == 0) {
          piVar7 = (int *)plVar4[1];
          iVar2 = *piVar7;
        }
        else {
          iVar2 = FUN_100c6fc50(lVar5);
          piVar7 = (int *)plVar4[1];
          if (iVar2 != *piVar7) {
            uVar8 = 0x8f;
            uVar9 = 0x119;
            goto LAB_100c47f52;
          }
        }
        _memcpy(param_4,*(void **)(piVar7 + 2),(long)iVar2);
        *param_5 = (long)*(int *)plVar4[1];
        uVar8 = 1;
      }
      else {
LAB_100c47f33:
        uVar8 = 0x68;
        uVar9 = 0xf1;
LAB_100c47f52:
        FUN_100c62ee0(4,0x91,uVar8,"rsa_sign.c",uVar9);
        uVar8 = 0;
      }
LAB_100c47f5a:
      FUN_100c7ba90(plVar4);
      goto LAB_100c47d79;
    }
    if (iVar2 == 0x24) {
      iVar2 = _memcmp(ptr_00,param_2,0x24);
      uVar8 = 1;
      if (iVar2 == 0) goto LAB_100c47d79;
    }
    uVar8 = 0x68;
    uVar9 = 0xe5;
  }
LAB_100c47d71:
  FUN_100c62ee0(4,0x91,uVar8,"rsa_sign.c",uVar9);
  uVar8 = 0;
LAB_100c47d79:
  _OPENSSL_cleanse(ptr_00,param_7 & 0xffffffff);
  FUN_100bf3910(ptr_00);
  return uVar8;
}

