
uint FUN_100dc9a80(uint param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  Data *local_38;
  Data *local_30;
  uint local_28;
  undefined1 local_21;
  
  if ((DAT_102319200 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102319200), iVar3 != 0)) {
    QMutex::QMutex((QMutex *)&DAT_1023191f8,0);
    ___cxa_atexit(PTR__QMutex_1021e14b0,&DAT_1023191f8,0x100000000);
    ___cxa_guard_release(&DAT_102319200);
  }
  if ((DAT_102319218 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102319218), iVar3 != 0)) {
    DAT_102319210 = (uint *)PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_100dccae0,&DAT_102319210,0x100000000);
    ___cxa_guard_release(&DAT_102319218);
  }
  if (DAT_102319208 == '\0') {
    QMutex::lock();
    if (DAT_102319208 == '\0') {
      if (1 < *DAT_102319210) {
        FUN_100dcd4e0(&DAT_102319210);
      }
      puVar9 = DAT_102319210;
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(DAT_102319210 + 4);
      if (*(uint **)(DAT_102319210 + 4) == (uint *)0x0) {
        puVar8 = DAT_102319210 + 2;
LAB_100dc9bd4:
        lVar5 = QMapDataBase::createNode
                          ((int)DAT_102319210,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x20000000400;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0x3ff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9bb6;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9bd4;
        uVar12 = puVar4[6];
LAB_100dc9bb6:
        if (0x400 < (int)uVar12) goto LAB_100dc9bd4;
        puVar4[7] = 0x200;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9c74:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x20000000600;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0x5ff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9c56;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9c74;
        uVar12 = puVar4[6];
LAB_100dc9c56:
        if (0x600 < (int)uVar12) goto LAB_100dc9c74;
        puVar4[7] = 0x200;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9d14:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x20000000800;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0x7ff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9cf6;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9d14;
        uVar12 = puVar4[6];
LAB_100dc9cf6:
        if (0x800 < (int)uVar12) goto LAB_100dc9d14;
        puVar4[7] = 0x200;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9db4:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x40000000c00;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0xbff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9d96;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9db4;
        uVar12 = puVar4[6];
LAB_100dc9d96:
        if (0xc00 < (int)uVar12) goto LAB_100dc9db4;
        puVar4[7] = 0x400;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9e54:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x60000001000;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0xfff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9e36;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9e54;
        uVar12 = puVar4[6];
LAB_100dc9e36:
        if (0x1000 < (int)uVar12) goto LAB_100dc9e54;
        puVar4[7] = 0x600;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9ef4:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x80000001800;
        puVar9 = DAT_102319210;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0x17ff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9ed6;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9ef4;
        uVar12 = puVar4[6];
LAB_100dc9ed6:
        if (0x1800 < (int)uVar12) goto LAB_100dc9ef4;
        puVar4[7] = 0x800;
      }
      if (1 < *puVar9) {
        FUN_100dcd4e0(&DAT_102319210);
        puVar9 = DAT_102319210;
      }
      puVar4 = (uint *)0x0;
      puVar11 = *(uint **)(puVar9 + 4);
      if (*(uint **)(puVar9 + 4) == (uint *)0x0) {
        puVar8 = puVar9 + 2;
LAB_100dc9f94:
        lVar5 = QMapDataBase::createNode((int)puVar9,0x20,(QMapNodeBase *)0x8,SUB81(puVar8,0));
        *(undefined8 *)(lVar5 + 0x18) = 0x100000002000;
      }
      else {
        do {
          while (puVar8 = puVar11, uVar12 = puVar8[6], 0x1fff < (int)uVar12) {
            puVar4 = puVar8;
            puVar11 = *(uint **)(puVar8 + 2);
            if (*(uint **)(puVar8 + 2) == (uint *)0x0) goto LAB_100dc9f76;
          }
          puVar11 = *(uint **)(puVar8 + 4);
        } while (*(uint **)(puVar8 + 4) != (uint *)0x0);
        if (puVar4 == (uint *)0x0) goto LAB_100dc9f94;
        uVar12 = puVar4[6];
LAB_100dc9f76:
        if (0x2000 < (int)uVar12) goto LAB_100dc9f94;
        puVar4[7] = 0x1000;
      }
      DAT_102319208 = '\x01';
    }
    QMutex::unlock();
  }
  lVar5 = *(long *)(DAT_102319210 + 4);
  lVar10 = 0;
  lVar6 = lVar5;
  if (lVar5 != 0) {
    do {
      while (iVar3 = *(int *)(lVar6 + 0x18), (int)param_1 <= iVar3) {
        plVar1 = (long *)(lVar6 + 8);
        lVar10 = lVar6;
        lVar6 = *plVar1;
        if (*plVar1 == 0) goto LAB_100dca009;
      }
      plVar1 = (long *)(lVar6 + 0x10);
      lVar6 = *plVar1;
    } while (*plVar1 != 0);
    if (lVar10 != 0) {
      iVar3 = *(int *)(lVar10 + 0x18);
LAB_100dca009:
      if (iVar3 <= (int)param_1) {
        local_28 = 0;
        lVar10 = 0;
        do {
          while (lVar6 = lVar5, iVar3 = *(int *)(lVar6 + 0x18), (int)param_1 <= iVar3) {
            lVar5 = *(long *)(lVar6 + 8);
            lVar10 = lVar6;
            if (*(long *)(lVar6 + 8) == 0) goto LAB_100dca13c;
          }
          lVar5 = *(long *)(lVar6 + 0x10);
        } while (*(long *)(lVar6 + 0x10) != 0);
        if (lVar10 == 0) {
LAB_100dca141:
          lVar6 = 0;
        }
        else {
          iVar3 = *(int *)(lVar10 + 0x18);
          lVar6 = lVar10;
LAB_100dca13c:
          if ((int)param_1 < iVar3) goto LAB_100dca141;
        }
        puVar9 = &local_28;
        if (lVar6 != 0) {
          puVar9 = (uint *)(lVar6 + 0x1c);
        }
        param_1 = *puVar9;
        goto LAB_100dca1e7;
      }
    }
  }
  if (1 < *DAT_102319210) {
    FUN_100dcd4e0(&DAT_102319210);
  }
  puVar9 = *(uint **)(DAT_102319210 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(DAT_102319210 + 4) == (uint *)0x0) {
LAB_100dca076:
    puVar11 = DAT_102319210 + 2;
  }
  else {
    do {
      while (puVar11 = puVar9, (int)param_1 <= (int)puVar11[6]) {
        puVar9 = *(uint **)(puVar11 + 2);
        puVar4 = puVar11;
        if (*(uint **)(puVar11 + 2) == (uint *)0x0) goto LAB_100dca07a;
      }
      puVar9 = *(uint **)(puVar11 + 4);
    } while (*(uint **)(puVar11 + 4) != (uint *)0x0);
    puVar11 = puVar4;
    if (puVar4 == (uint *)0x0) goto LAB_100dca076;
  }
LAB_100dca07a:
  if (1 < *DAT_102319210) {
    FUN_100dcd4e0(&DAT_102319210);
  }
  if (*(long *)(DAT_102319210 + 4) == 0) {
    puVar9 = DAT_102319210 + 2;
  }
  else {
    puVar9 = *(uint **)(DAT_102319210 + 8);
  }
  if (puVar11 == puVar9) {
    param_1 = param_1 >> 1;
    goto LAB_100dca1e7;
  }
  if (1 < *DAT_102319210) {
    FUN_100dcd4e0(&DAT_102319210);
  }
  if (puVar11 != DAT_102319210 + 2) {
    lVar5 = QMapNodeBase::previousNode();
    param_1 = ((puVar11[7] - *(int *)(lVar5 + 0x1c)) * (param_1 - *(int *)(lVar5 + 0x18))) /
              (puVar11[6] - *(int *)(lVar5 + 0x18)) + *(int *)(lVar5 + 0x1c);
    goto LAB_100dca1e7;
  }
  FUN_100dccb30(&local_30,&DAT_102319210);
  piVar7 = (int *)FUN_100dccc60(&local_30);
  iVar3 = *piVar7;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100dca19e;
    }
    QListData::dispose(local_30);
  }
LAB_100dca19e:
  FUN_100dccd00(&local_38,&DAT_102319210);
  piVar7 = (int *)FUN_100dccc60(&local_38);
  iVar2 = *piVar7;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100dca1e1;
      local_21 = 0;
    }
    QListData::dispose(local_38);
  }
LAB_100dca1e1:
  param_1 = (param_1 - iVar3) + iVar2;
LAB_100dca1e7:
  return param_1 & 0xfffffffc;
}

