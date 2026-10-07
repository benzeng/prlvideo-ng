
long FUN_1008d3fc0(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  void *ptr;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  void *ptr_00;
  undefined8 *local_58;
  undefined8 local_50;
  int local_44;
  void *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = (void *)0x0;
  local_44 = 0;
  if (param_1 == 0) {
    FUN_100887ce0(0x21,0x70,0x8f,"pk7_doit.c",0x1b2);
    return 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_100887ce0(0x21,0x70,0x7a,"pk7_doit.c",0x1b7);
    return 0;
  }
  iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (iVar1 == 0x18) {
    lVar5 = *(long *)(param_1 + 0x20);
    local_50 = *(undefined8 *)(lVar5 + 0x30);
    lVar9 = *(long *)(lVar5 + 8);
    local_58 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8);
    piVar11 = *(int **)(*(long *)(lVar5 + 0x28) + 0x10);
    uVar2 = FUN_100821ab0(*local_58);
    uVar4 = FUN_100821930(uVar2);
    lVar5 = FUN_100890b50(uVar4);
    if (lVar5 == 0) {
      uVar4 = 0x6f;
      uVar10 = 0x1d7;
      goto LAB_1008d43f5;
    }
LAB_1008d4221:
    if ((param_3 == 0) && (piVar11 == (int *)0x0)) {
      uVar4 = 0x7a;
      uVar10 = 0x1ee;
      goto LAB_1008d43f5;
    }
    iVar1 = 0;
    lVar12 = 0;
    if (lVar9 != 0) {
      iVar3 = FUN_100885600(lVar9);
      lVar12 = 0;
      lVar13 = lVar12;
      if (0 < iVar3) {
        do {
          puVar7 = (undefined8 *)FUN_100885620(lVar9,iVar1);
          uVar4 = FUN_100892700();
          lVar12 = FUN_10087d330(uVar4);
          if (lVar12 == 0) {
            uVar4 = 0x1f7;
            goto LAB_1008d44fc;
          }
          uVar2 = FUN_100821ab0(*puVar7);
          uVar4 = FUN_100821930(uVar2);
          lVar8 = FUN_100890b60(uVar4);
          if (lVar8 == 0) {
            FUN_100887ce0(0x21,0x70,0x6d,"pk7_doit.c",0x1ff);
            lVar9 = 0;
            lVar5 = lVar12;
            goto LAB_1008d4403;
          }
          FUN_10087db60(lVar12,0x6f,0,lVar8);
          if (lVar13 != 0) {
            FUN_10087dfb0(lVar13,lVar12);
            lVar12 = lVar13;
          }
          iVar1 = iVar1 + 1;
          iVar3 = FUN_100885600(lVar9);
          lVar13 = lVar12;
        } while (iVar1 < iVar3);
      }
    }
    if (lVar5 == 0) {
      local_50._0_4_ = 0;
      lVar9 = lVar12;
LAB_1008d448e:
      if (param_3 != 0) {
LAB_1008d45b0:
        FUN_10087dfb0(lVar9,param_3);
        return lVar9;
      }
      if (*piVar11 < 1) {
        uVar4 = FUN_10087e660();
        param_3 = FUN_10087d330(uVar4);
        if (param_3 != 0) {
          FUN_10087db60(param_3,0x82,0,0);
          goto LAB_1008d45b0;
        }
      }
      else {
        param_3 = FUN_10087e670(*(undefined8 *)(piVar11 + 2));
        if (param_3 != 0) goto LAB_1008d45b0;
      }
      goto LAB_1008d4098;
    }
    uVar4 = FUN_100893a10();
    lVar9 = FUN_10087d330(uVar4);
    lVar13 = lVar12;
    if (lVar9 == 0) {
      uVar4 = 0x217;
LAB_1008d44fc:
      FUN_100887ce0(0x21,0x70,0x20,"pk7_doit.c",uVar4);
      goto LAB_1008d43fd;
    }
    iVar1 = FUN_100885600(local_50);
    if (param_4 != (long *)0x0) {
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar8 = FUN_100885620(local_50,iVar1);
          iVar3 = FUN_1008b6ba0(**(undefined8 **)(lVar8 + 8),*(undefined8 *)(*param_4 + 0x18));
          if ((iVar3 == 0) &&
             (iVar3 = FUN_1008afeb0(*(undefined8 *)(*param_4 + 8),
                                    *(undefined8 *)(*(long *)(lVar8 + 8) + 8)), iVar3 == 0)) {
            iVar1 = FUN_1008d4790(&local_40,&local_44,lVar8,param_2);
            if (iVar1 < 0) goto LAB_1008d468f;
            FUN_100888070();
            goto LAB_1008d45e4;
          }
          iVar1 = iVar1 + 1;
          iVar3 = FUN_100885600(local_50);
        } while (iVar1 < iVar3);
      }
      FUN_100887ce0(0x21,0x70,0x73,"pk7_doit.c",0x22e);
LAB_1008d468f:
      ptr = (void *)0x0;
      local_50._0_4_ = 0;
LAB_1008d4698:
      lVar5 = 0;
      goto LAB_1008d440c;
    }
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar4 = FUN_100885620(local_50,iVar1);
        iVar3 = FUN_1008d4790(&local_40,&local_44,uVar4,param_2);
        if (iVar3 < 0) goto LAB_1008d468f;
        FUN_100888070();
        iVar1 = iVar1 + 1;
        iVar3 = FUN_100885600(local_50);
      } while (iVar1 < iVar3);
    }
LAB_1008d45e4:
    local_38 = 0;
    FUN_10087db60(lVar9,0x81,0,&local_38);
    iVar1 = FUN_10088af10(local_38,lVar5,0,0,0,0);
    lVar5 = 0;
    if (0 < iVar1) {
      iVar1 = FUN_100894390(local_38,local_58[1]);
      lVar5 = 0;
      if (-1 < iVar1) {
        local_50._0_4_ = FUN_100894680(local_38);
        ptr = (void *)FUN_10081ddd0((int)local_50,"pk7_doit.c",0x24f);
        lVar5 = 0;
        if (ptr == (void *)0x0) {
          ptr = (void *)0x0;
          goto LAB_1008d440c;
        }
        iVar1 = FUN_10088be00(local_38,ptr);
        lVar5 = 0;
        if (iVar1 < 1) goto LAB_1008d440c;
        pvVar14 = ptr;
        if (local_40 == (void *)0x0) {
          pvVar14 = (void *)0x0;
          local_44 = (int)local_50;
          local_40 = ptr;
        }
        ptr_00 = local_40;
        iVar1 = local_44;
        iVar3 = FUN_100894680(local_38);
        ptr = pvVar14;
        if ((iVar1 != iVar3) && (iVar3 = FUN_10088bd00(local_38,iVar1), iVar3 == 0)) {
          _OPENSSL_cleanse(ptr_00,(long)iVar1);
          FUN_10081e1a0(ptr_00);
          ptr = (void *)0x0;
          ptr_00 = pvVar14;
          iVar1 = (int)local_50;
          local_44 = (int)local_50;
          local_40 = pvVar14;
        }
        FUN_100888070();
        iVar3 = FUN_10088af10(local_38,0,0,ptr_00,0,0);
        if (0 < iVar3) {
          if (ptr_00 != (void *)0x0) {
            _OPENSSL_cleanse(ptr_00,(long)iVar1);
            FUN_10081e1a0(ptr_00);
            local_40 = (void *)0x0;
          }
          if (ptr != (void *)0x0) {
            _OPENSSL_cleanse(ptr,(long)(int)local_50);
            FUN_10081e1a0(ptr);
          }
          if (lVar12 != 0) {
            FUN_10087dfb0(lVar12);
            lVar9 = lVar12;
          }
          goto LAB_1008d448e;
        }
        goto LAB_1008d4698;
      }
    }
  }
  else {
    if (iVar1 == 0x17) {
      local_50 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
      local_58 = *(undefined8 **)(lVar5 + 8);
      piVar11 = *(int **)(lVar5 + 0x10);
      uVar2 = FUN_100821ab0(*local_58);
      uVar4 = FUN_100821930(uVar2);
      lVar5 = FUN_100890b50(uVar4);
      lVar9 = 0;
      if (lVar5 != 0) goto LAB_1008d4221;
      local_50._0_4_ = 0;
      FUN_100887ce0(0x21,0x70,0x6f,"pk7_doit.c",0x1e3);
      lVar9 = 0;
LAB_1008d4098:
      lVar5 = 0;
      ptr = (void *)0x0;
      lVar12 = lVar9;
      lVar9 = 0;
      goto LAB_1008d440c;
    }
    if (iVar1 == 0x16) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      iVar1 = FUN_100821ab0(*(undefined8 *)(lVar5 + 0x18));
      if (iVar1 == 0x15) {
        piVar11 = *(int **)(lVar5 + 0x20);
      }
      else {
        iVar1 = FUN_100821ab0(*(undefined8 *)(lVar5 + 0x18));
        piVar11 = (int *)0x0;
        if (5 < iVar1 - 0x15U) {
          piVar6 = *(int **)(lVar5 + 0x20);
          piVar11 = (int *)0x0;
          if ((piVar6 != (int *)0x0) && (piVar11 = (int *)0x0, *piVar6 == 4)) {
            piVar11 = *(int **)(piVar6 + 2);
          }
        }
      }
      iVar1 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
      piVar6 = piVar11;
      if (((iVar1 == 0x16) && (piVar6 = (int *)FUN_1008d27b0(param_1,2,0), piVar11 != (int *)0x0))
         || (piVar6 != (int *)0x0)) {
        lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        lVar5 = 0;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        goto LAB_1008d4221;
      }
      uVar4 = 0x9b;
      uVar10 = 0x1c9;
    }
    else {
      uVar4 = 0x70;
      uVar10 = 0x1e8;
    }
LAB_1008d43f5:
    FUN_100887ce0(0x21,0x70,uVar4,"pk7_doit.c",uVar10);
    lVar13 = 0;
LAB_1008d43fd:
    lVar9 = 0;
    lVar5 = 0;
  }
LAB_1008d4403:
  ptr = (void *)0x0;
  local_50._0_4_ = 0;
  lVar12 = lVar13;
LAB_1008d440c:
  pvVar14 = local_40;
  if (local_40 != (void *)0x0) {
    _OPENSSL_cleanse(local_40,(long)local_44);
    FUN_10081e1a0(pvVar14);
  }
  if (ptr != (void *)0x0) {
    _OPENSSL_cleanse(ptr,(long)(int)local_50);
    FUN_10081e1a0(ptr);
  }
  if (lVar12 != 0) {
    FUN_10087e280(lVar12);
  }
  if (lVar5 != 0) {
    FUN_10087e280(lVar5);
  }
  if (lVar9 != 0) {
    FUN_10087e280(lVar9);
  }
  return 0;
}

