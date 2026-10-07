
long * FUN_1004399e0(void)

{
  uint uVar1;
  QMapNodeBase *pQVar2;
  long *plVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  QArrayData *pQVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  QArrayData *local_c0;
  QArrayData *local_b8;
  undefined4 local_ac;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined4 local_94;
  QMapNodeBase *local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  
  if (DAT_1011cc778 != (long *)0x0) {
    return DAT_1011cc778;
  }
  QMutex::lock();
  plVar3 = DAT_1011cc778;
  if (DAT_1011cc778 != (long *)0x0) {
    QMutex::unlock();
    return plVar3;
  }
  plVar3 = operator_new(0x158);
  *plVar3 = (long)PTR_shared_null_100ba2180;
  plVar3[1] = (long)PTR_shared_null_100ba20d8;
  ___bzero(plVar3 + 2,0x148);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_80 = 0;
  *(undefined4 *)(plVar3 + 3) = 10;
  *(undefined4 *)((long)plVar3 + 0x1c) = 5;
  plVar3[7] = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 2) = 1;
  *(undefined4 *)((long)plVar3 + 0x14) = 0;
  puVar4 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("RRE",3);
  *puVar4 = &PTR_FUN_10111c508;
  puVar4[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar4 + 2) = 1;
  *puVar4 = &PTR_FUN_100bc0bc0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439b3d;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439b3d:
  puVar6 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("Hextile",7);
  *puVar6 = &PTR_FUN_10111c508;
  puVar6[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar6 + 2) = 2;
  *puVar6 = &PTR_FUN_100bc0c10;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439bbb;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439bbb:
  puVar7 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("ZRLE",4);
  *puVar7 = &PTR_FUN_10111c508;
  puVar7[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar7 + 2) = 3;
  *puVar7 = &PTR_FUN_100bc0c60;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439c35;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439c35:
  puVar8 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_3GRAY",0xc);
  *puVar8 = &PTR_FUN_10111c508;
  puVar8[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar8 + 2) = 4;
  *puVar8 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439cb3;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439cb3:
  puVar9 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_0GRAY",0xc);
  *puVar9 = &PTR_FUN_10111c508;
  puVar9[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar9 + 2) = 5;
  *puVar9 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439d26;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439d26:
  puVar10 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_3NONE",0xc);
  *puVar10 = &PTR_FUN_10111c508;
  puVar10[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar10 + 2) = 6;
  *puVar10 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439d99;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439d99:
  puVar11 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_0RGBG",0xc);
  *puVar11 = &PTR_FUN_10111c508;
  puVar11[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar11 + 2) = 7;
  *puVar11 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439e0c;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439e0c:
  puVar12 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_YV12",0xb);
  *puVar12 = &PTR_FUN_10111c508;
  puVar12[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar12 + 2) = 0x14;
  *puVar12 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439e7f;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439e7f:
  puVar13 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_YV12x6",0xd);
  *puVar13 = &PTR_FUN_10111c508;
  puVar13[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar13 + 2) = 0x15;
  *puVar13 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439ef2;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439ef2:
  puVar14 = operator_new(0x18);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("JPEGLS_YV12x4",0xd);
  *puVar14 = &PTR_FUN_10111c508;
  puVar14[1] = pQVar5;
  iVar18 = *(int *)pQVar5;
  if (1 < iVar18 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_88 = *(int *)pQVar5 != 0;
    UNLOCK();
    iVar18 = *(int *)pQVar5;
  }
  *(undefined4 *)(puVar14 + 2) = 0x16;
  *puVar14 = &PTR_FUN_100bc0cb0;
  if (iVar18 != -1) {
    if (iVar18 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_100439f65;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100439f65:
  local_68 = *(uint *)(puVar4 + 2);
  puVar16 = (undefined8 *)*plVar3;
  uVar20 = *(uint *)(puVar16 + 4);
  if (uVar20 != 0) {
    uVar19 = *(uint *)((long)puVar16 + 0x24) ^ local_68;
    for (puVar15 = *(undefined8 **)(puVar16[1] + ((ulong)uVar19 % (ulong)uVar20) * 8);
        puVar15 != puVar16; puVar15 = (undefined8 *)*puVar15) {
      if ((*(uint *)(puVar15 + 1) == uVar19) && (local_68 == *(uint *)((long)puVar15 + 0xc))) {
        if (puVar15 != puVar16) goto LAB_100439fd0;
        break;
      }
    }
  }
  puVar16 = (undefined8 *)FUN_10043b4f0(plVar3,&local_68);
  *puVar16 = puVar4;
  puVar16 = (undefined8 *)*plVar3;
  uVar20 = *(uint *)(puVar16 + 4);
LAB_100439fd0:
  local_64 = *(uint *)(puVar6 + 2);
  if (uVar20 != 0) {
    uVar19 = *(uint *)((long)puVar16 + 0x24) ^ local_64;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar19 % (ulong)uVar20) * 8);
        puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar19) && (local_64 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a031;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_64);
  *puVar4 = puVar6;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a031:
  local_60 = *(uint *)(puVar7 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_60;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_60 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a08a;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_60);
  *puVar4 = puVar7;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a08a:
  local_5c = *(uint *)(puVar8 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_5c;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_5c == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a0f1;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_5c);
  *puVar4 = puVar8;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a0f1:
  local_58 = *(uint *)(puVar9 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_58;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_58 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a151;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_58);
  *puVar4 = puVar9;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a151:
  local_54 = *(uint *)(puVar10 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_54;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_54 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a1b1;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_54);
  *puVar4 = puVar10;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a1b1:
  local_50 = *(uint *)(puVar11 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_50;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_50 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a211;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_50);
  *puVar4 = puVar11;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a211:
  local_4c = *(uint *)(puVar12 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_4c;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_4c == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a271;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_4c);
  *puVar4 = puVar12;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a271:
  local_48 = *(uint *)(puVar13 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_48;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_48 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a2d1;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_48);
  *puVar4 = puVar13;
  puVar16 = (undefined8 *)*plVar3;
LAB_10043a2d1:
  local_44 = *(uint *)(puVar14 + 2);
  if (*(uint *)(puVar16 + 4) != 0) {
    uVar20 = *(uint *)((long)puVar16 + 0x24) ^ local_44;
    for (puVar4 = *(undefined8 **)(puVar16[1] + ((ulong)uVar20 % (ulong)*(uint *)(puVar16 + 4)) * 8)
        ; puVar4 != puVar16; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar20) && (local_44 == *(uint *)((long)puVar4 + 0xc))) {
        if (puVar4 != puVar16) goto LAB_10043a32d;
        break;
      }
    }
  }
  puVar4 = (undefined8 *)FUN_10043b4f0(plVar3,&local_44);
  *puVar4 = puVar14;
LAB_10043a32d:
  local_90 = (QMapNodeBase *)PTR_shared_null_100ba20d8;
  local_94 = 0x60003;
  puVar4 = (undefined8 *)FUN_10043b3b0(&local_90,&local_94);
  local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar18 = *(int *)(PTR_shared_null_100ba20d0 + 4);
  uVar20 = iVar18 + 1;
  uVar19 = *(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff;
  if ((*(uint *)PTR_shared_null_100ba20d0 < 2) && (uVar20 <= uVar19)) {
    *(undefined8 **)
     (PTR_shared_null_100ba20d0 + (long)iVar18 * 8 + *(long *)(PTR_shared_null_100ba20d0 + 0x10)) =
         puVar8;
  }
  else {
    uVar21 = uVar19;
    if (uVar19 < uVar20) {
      uVar21 = uVar20;
    }
    FUN_10043bda0(&local_a8,(long)iVar18,uVar21,(ulong)(uVar19 < uVar20) << 3);
    *(undefined8 **)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 8 + *(long *)(local_a8 + 0x10))
         = puVar8;
  }
  uVar20 = *(uint *)(local_a8 + 4);
  *(uint *)(local_a8 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_a8 + 8) & 0x7fffffff;
  if ((*(uint *)local_a8 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_a8 + (long)(int)uVar20 * 8 + *(long *)(local_a8 + 0x10) + 8) = puVar9;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_a8,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 8 + *(long *)(local_a8 + 0x10))
         = puVar9;
  }
  uVar20 = *(uint *)(local_a8 + 4);
  *(uint *)(local_a8 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_a8 + 8) & 0x7fffffff;
  if ((*(uint *)local_a8 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_a8 + (long)(int)uVar20 * 8 + *(long *)(local_a8 + 0x10) + 8) = puVar10;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_a8,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 8 + *(long *)(local_a8 + 0x10))
         = puVar10;
  }
  uVar20 = *(uint *)(local_a8 + 4);
  *(uint *)(local_a8 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_a8 + 8) & 0x7fffffff;
  if ((*(uint *)local_a8 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_a8 + (long)(int)uVar20 * 8 + *(long *)(local_a8 + 0x10) + 8) = puVar11;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_a8,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 8 + *(long *)(local_a8 + 0x10))
         = puVar11;
  }
  uVar20 = *(uint *)(local_a8 + 4);
  *(uint *)(local_a8 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_a8 + 8) & 0x7fffffff;
  if ((*(uint *)local_a8 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_a8 + (long)(int)uVar20 * 8 + *(long *)(local_a8 + 0x10) + 8) = puVar6;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_a8,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 8 + *(long *)(local_a8 + 0x10))
         = puVar6;
  }
  *(uint *)(local_a8 + 4) = *(uint *)(local_a8 + 4) + 1;
  if (*(uint *)local_a8 == 0) {
    if ((int)*(uint *)(local_a8 + 8) < 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(local_a8 + 8) & 0x7fffffff,0);
      local_a0 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar5[0xb] = (QArrayData)((byte)pQVar5[0xb] | 0x80);
      pQVar5 = local_a0;
      pQVar17 = local_a0;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)*(uint *)(local_a8 + 4),0);
      pQVar17 = pQVar5;
      local_a0 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
        pQVar17 = (QArrayData *)0x0;
      }
    }
    if ((*(uint *)(pQVar17 + 8) & 0x7fffffff) != 0) {
      _memcpy(pQVar17 + *(long *)(pQVar17 + 0x10),local_a8 + *(long *)(local_a8 + 0x10),
              (long)(int)*(uint *)(local_a8 + 4) << 3);
      *(uint *)(local_a0 + 4) = *(uint *)(local_a8 + 4);
      pQVar5 = local_a0;
    }
  }
  else {
    pQVar5 = local_a8;
    if (*(uint *)local_a8 == 0xffffffff) {
      local_a0 = local_a8;
    }
    else {
      LOCK();
      *(uint *)local_a8 = *(uint *)local_a8 + 1;
      local_88 = *(uint *)local_a8 != 0;
      UNLOCK();
      local_a0 = local_a8;
    }
  }
  *puVar4 = puVar10;
  if (pQVar5 != (QArrayData *)puVar4[1]) {
    pQVar17 = pQVar5;
    if (*(uint *)pQVar5 != 0xffffffff) {
      if (*(uint *)pQVar5 == 0) {
        if ((int)*(uint *)(pQVar5 + 8) < 0) {
          pQVar17 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
          local_40 = pQVar17;
          if (pQVar17 == (QArrayData *)0x0) {
            qBadAlloc();
          }
          pQVar17[0xb] = (QArrayData)((byte)pQVar17[0xb] | 0x80);
        }
        else {
          pQVar17 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)*(uint *)(pQVar5 + 4),0);
          local_40 = pQVar17;
          if (pQVar17 == (QArrayData *)0x0) {
            qBadAlloc();
          }
        }
        if ((*(uint *)(pQVar17 + 8) & 0x7fffffff) != 0) {
          _memcpy(pQVar17 + *(long *)(pQVar17 + 0x10),pQVar5 + *(long *)(pQVar5 + 0x10),
                  (long)(int)*(uint *)(pQVar5 + 4) << 3);
          *(uint *)(local_40 + 4) = *(uint *)(local_a0 + 4);
          pQVar5 = local_a0;
          pQVar17 = local_40;
        }
      }
      else {
        LOCK();
        *(uint *)pQVar5 = *(uint *)pQVar5 + 1;
        local_88 = *(uint *)pQVar5 != 0;
        UNLOCK();
      }
    }
    local_40 = (QArrayData *)puVar4[1];
    puVar4[1] = pQVar17;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_88 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_88) goto LAB_10043a75c;
      }
      QArrayData::deallocate(local_40,8,8);
    }
  }
LAB_10043a75c:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_10043a787;
    }
    QArrayData::deallocate(pQVar5,8,8);
  }
LAB_10043a787:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_88 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_10043a7b6;
    }
    QArrayData::deallocate(local_a8,8,8);
  }
LAB_10043a7b6:
  local_ac = 0x60007;
  puVar4 = (undefined8 *)FUN_10043b3b0(&local_90,&local_ac);
  local_c0 = (QArrayData *)PTR_shared_null_100ba20d0;
  iVar18 = *(int *)(PTR_shared_null_100ba20d0 + 4);
  uVar20 = iVar18 + 1;
  uVar19 = *(uint *)(PTR_shared_null_100ba20d0 + 8) & 0x7fffffff;
  if ((*(uint *)PTR_shared_null_100ba20d0 < 2) && (uVar20 <= uVar19)) {
    *(undefined8 **)
     (PTR_shared_null_100ba20d0 + (long)iVar18 * 8 + *(long *)(PTR_shared_null_100ba20d0 + 0x10)) =
         puVar14;
  }
  else {
    uVar21 = uVar19;
    if (uVar19 < uVar20) {
      uVar21 = uVar20;
    }
    FUN_10043bda0(&local_c0,(long)iVar18,uVar21,(ulong)(uVar19 < uVar20) << 3);
    *(undefined8 **)(local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 8 + *(long *)(local_c0 + 0x10))
         = puVar14;
  }
  uVar20 = *(uint *)(local_c0 + 4);
  *(uint *)(local_c0 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_c0 + 8) & 0x7fffffff;
  if ((*(uint *)local_c0 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_c0 + (long)(int)uVar20 * 8 + *(long *)(local_c0 + 0x10) + 8) = puVar13;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_c0,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 8 + *(long *)(local_c0 + 0x10))
         = puVar13;
  }
  uVar20 = *(uint *)(local_c0 + 4);
  *(uint *)(local_c0 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_c0 + 8) & 0x7fffffff;
  if ((*(uint *)local_c0 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_c0 + (long)(int)uVar20 * 8 + *(long *)(local_c0 + 0x10) + 8) = puVar12;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_c0,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 8 + *(long *)(local_c0 + 0x10))
         = puVar12;
  }
  uVar20 = *(uint *)(local_c0 + 4);
  *(uint *)(local_c0 + 4) = uVar20 + 1;
  uVar21 = uVar20 + 2;
  uVar19 = *(uint *)(local_c0 + 8) & 0x7fffffff;
  if ((*(uint *)local_c0 < 2) && (uVar21 <= uVar19)) {
    *(undefined8 **)(local_c0 + (long)(int)uVar20 * 8 + *(long *)(local_c0 + 0x10) + 8) = puVar11;
  }
  else {
    uVar1 = uVar19;
    if (uVar19 < uVar21) {
      uVar1 = uVar21;
    }
    FUN_10043bda0(&local_c0,uVar20 + 1,uVar1,(ulong)(uVar19 < uVar21) << 3);
    *(undefined8 **)(local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 8 + *(long *)(local_c0 + 0x10))
         = puVar11;
  }
  *(uint *)(local_c0 + 4) = *(uint *)(local_c0 + 4) + 1;
  if (*(uint *)local_c0 == 0) {
    if ((int)*(uint *)(local_c0 + 8) < 0) {
      pQVar5 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(local_c0 + 8) & 0x7fffffff,0);
      local_b8 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar5[0xb] = (QArrayData)((byte)pQVar5[0xb] | 0x80);
      pQVar5 = local_b8;
      pQVar17 = local_b8;
    }
    else {
      pQVar5 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)*(uint *)(local_c0 + 4),0);
      pQVar17 = pQVar5;
      local_b8 = pQVar5;
      if (pQVar5 == (QArrayData *)0x0) {
        qBadAlloc();
        pQVar17 = (QArrayData *)0x0;
      }
    }
    if ((*(uint *)(pQVar17 + 8) & 0x7fffffff) != 0) {
      _memcpy(pQVar17 + *(long *)(pQVar17 + 0x10),local_c0 + *(long *)(local_c0 + 0x10),
              (long)(int)*(uint *)(local_c0 + 4) << 3);
      *(uint *)(local_b8 + 4) = *(uint *)(local_c0 + 4);
      pQVar5 = local_b8;
    }
  }
  else {
    pQVar5 = local_c0;
    if (*(uint *)local_c0 == 0xffffffff) {
      local_b8 = local_c0;
    }
    else {
      LOCK();
      *(uint *)local_c0 = *(uint *)local_c0 + 1;
      local_88 = *(uint *)local_c0 != 0;
      UNLOCK();
      local_b8 = local_c0;
    }
  }
  *puVar4 = puVar13;
  if (pQVar5 != (QArrayData *)puVar4[1]) {
    pQVar17 = pQVar5;
    if (*(uint *)pQVar5 != 0xffffffff) {
      if (*(uint *)pQVar5 == 0) {
        if ((int)*(uint *)(pQVar5 + 8) < 0) {
          pQVar17 = (QArrayData *)QArrayData::allocate(8,8,*(uint *)(pQVar5 + 8) & 0x7fffffff,0);
          local_38 = pQVar17;
          if (pQVar17 == (QArrayData *)0x0) {
            qBadAlloc();
          }
          pQVar17[0xb] = (QArrayData)((byte)pQVar17[0xb] | 0x80);
        }
        else {
          pQVar17 = (QArrayData *)QArrayData::allocate(8,8,(long)(int)*(uint *)(pQVar5 + 4),0);
          local_38 = pQVar17;
          if (pQVar17 == (QArrayData *)0x0) {
            qBadAlloc();
          }
        }
        if ((*(uint *)(pQVar17 + 8) & 0x7fffffff) != 0) {
          _memcpy(pQVar17 + *(long *)(pQVar17 + 0x10),pQVar5 + *(long *)(pQVar5 + 0x10),
                  (long)(int)*(uint *)(pQVar5 + 4) << 3);
          *(uint *)(local_38 + 4) = *(uint *)(local_b8 + 4);
          pQVar5 = local_b8;
          pQVar17 = local_38;
        }
      }
      else {
        LOCK();
        *(uint *)pQVar5 = *(uint *)pQVar5 + 1;
        local_88 = *(uint *)pQVar5 != 0;
        UNLOCK();
      }
    }
    local_38 = (QArrayData *)puVar4[1];
    puVar4[1] = pQVar17;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_88 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_88) goto LAB_10043ab69;
      }
      QArrayData::deallocate(local_38,8,8);
    }
  }
LAB_10043ab69:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_88 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_10043ab94;
    }
    QArrayData::deallocate(pQVar5,8,8);
  }
LAB_10043ab94:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_88 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_10043abc3;
    }
    QArrayData::deallocate(local_c0,8,8);
  }
LAB_10043abc3:
  FUN_10043af10(plVar3,&local_90);
  pQVar2 = local_90;
  DAT_1011cc778 = plVar3;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_88 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_88) goto LAB_10043ac20;
    }
    if (*(long *)(local_90 + 0x10) != 0) {
      FUN_10043b910();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_10043ac20:
  QMutex::unlock();
  return DAT_1011cc778;
}

