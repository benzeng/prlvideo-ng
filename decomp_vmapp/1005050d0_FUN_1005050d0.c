
void FUN_1005050d0(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  QArrayData *pQVar8;
  size_t sVar9;
  size_t sVar10;
  void *pvVar11;
  undefined1 uVar12;
  uint *puVar13;
  char *pcVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ushort *puVar20;
  QString *pQVar21;
  uint uVar22;
  uint *puVar23;
  ushort *puVar24;
  char *pcVar25;
  short *psVar26;
  ulong uVar27;
  undefined2 *puVar28;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  long local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  QByteArray::clear();
  iVar19 = (int)puVar1;
  QByteArray::resize(iVar19);
  puVar13 = *(uint **)(param_1 + 0x10);
  if ((1 < *puVar13) || (*(long *)(puVar13 + 4) != 0x18)) {
    QByteArray::reallocData(puVar1,puVar13[1] + 1,puVar13[2] >> 0x1f);
    puVar13 = (uint *)*puVar1;
  }
  lVar18 = *(long *)(puVar13 + 4);
  pQVar8 = (QArrayData *)QString::fromAscii_helper("\\\\",2);
  FUN_1004c7270(&local_48);
  if (1 < *(int *)pQVar8 + 1U) {
    LOCK();
    *(int *)pQVar8 = *(int *)pQVar8 + 1;
    local_31 = *(int *)pQVar8 != 0;
    UNLOCK();
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
  QString::append(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005051ad;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005051ad:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005051ea;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1005051ea:
  local_50 = (QArrayData *)QString::fromAscii_helper("Parallels Shared Folders",0x18);
  *(undefined2 *)((long)puVar13 + lVar18) = 0x14;
  *(undefined2 *)((long)puVar13 + lVar18 + 2) = 0x581f;
  *(undefined8 *)((long)puVar13 + lVar18 + 0xc) = DAT_100b45d98;
  *(undefined8 *)((long)puVar13 + lVar18 + 4) = DAT_100b45d90;
  *(undefined2 *)((long)puVar13 + lVar18 + 0x16) = 0x47;
  *(undefined1 *)((long)puVar13 + lVar18 + 0x18) = 2;
  pcVar14 = (char *)((long)puVar13 + lVar18 + 0x19);
  qstrcpy(pcVar14,"Entire Network");
  sVar9 = _strlen(pcVar14);
  uVar7 = (int)sVar9 + 6;
  *(short *)(lVar18 + 0x14 + (long)puVar13) = (short)uVar7;
  uVar27 = (ulong)(uVar7 & 0xffff);
  *(undefined1 *)((long)puVar13 + lVar18 + 0x16 + uVar27) = 0x46;
  *(undefined1 *)((long)puVar13 + lVar18 + 0x17 + uVar27) = 1;
  *(undefined1 *)((long)puVar13 + lVar18 + 0x18 + uVar27) = 0x82;
  pcVar25 = (char *)(lVar18 + 0x19 + uVar27 + (long)puVar13);
  qstrcpy(pcVar25,"Parallels Shared Folders");
  sVar9 = _strlen(pcVar25);
  pcVar14 = (char *)(lVar18 + 0x1a + uVar27 + (sVar9 & 0xffffffff) + (long)puVar13);
  qstrcpy(pcVar14,pcVar25);
  psVar26 = (short *)(uVar27 + 0x14 + lVar18 + (long)puVar13);
  sVar10 = _strlen(pcVar14);
  lVar15 = (ulong)((int)sVar10 + 1) + uVar27 + 0x1a + (sVar9 & 0xffffffff);
  *(undefined2 *)((long)puVar13 + lVar15 + lVar18) = 0x25;
  psVar2 = (short *)((long)puVar13 + lVar15 + lVar18 + 2);
  sVar3 = (short)psVar2;
  *psVar26 = sVar3 - (short)psVar26;
  *(undefined1 *)((long)puVar13 + lVar18 + 4 + lVar15) = 0x42;
  *(undefined1 *)((long)puVar13 + lVar18 + 5 + lVar15) = 1;
  *(undefined1 *)((long)puVar13 + lVar18 + 6 + lVar15) = 0x82;
  QString::toUtf8_helper(&local_58);
  pcVar14 = (char *)(lVar18 + 7 + lVar15 + (long)puVar13);
  qstrcpy(pcVar14,(char *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10)));
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005053ef;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,1,8);
  }
LAB_1005053ef:
  sVar9 = 0;
  if (pcVar14 != (char *)0x0) {
    sVar9 = _strlen(pcVar14);
  }
  QString::toLatin1_helper(&local_60);
  pcVar14 = (char *)(lVar18 + 8 + lVar15 + (sVar9 & 0xffffffff) + (long)puVar13);
  qstrcpy(pcVar14,(char *)(local_60.field0_0x0 + *(long *)(local_60.field0_0x0 + 0x10)));
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10050546d;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,1,8);
  }
LAB_10050546d:
  iVar16 = 0;
  if (pcVar14 != (char *)0x0) {
    sVar10 = _strlen(pcVar14);
    iVar16 = (int)sVar10;
  }
  lVar15 = (ulong)(iVar16 + 1) + lVar15 + 8 + (sVar9 & 0xffffffff);
  *(undefined2 *)((long)puVar13 + lVar15 + lVar18) = 0x25;
  puVar24 = (ushort *)((long)puVar13 + lVar15 + lVar18 + 2);
  *psVar2 = (short)puVar24 - sVar3;
  puVar23 = (uint *)*puVar1;
  if ((1 < *puVar23) || (*(long *)(puVar23 + 4) != 0x18)) {
    QByteArray::reallocData(puVar1,puVar23[1] + 1,puVar23[2] >> 0x1f);
    puVar23 = (uint *)*puVar1;
  }
  uVar7 = puVar23[1];
  uVar22 = puVar23[4];
  QString::QString(&local_78,0x5c);
  local_70.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10050558c;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10050558c:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005055bc;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1005055bc:
  QString::toLatin1_helper(&local_80);
  iVar16 = 0;
  pQVar8 = (QArrayData *)(local_80.field0_0x0 + *(long *)(local_80.field0_0x0 + 0x10));
  if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_80.field0_0x0 + 4) != 0)) {
    lVar17 = 0;
    do {
      if (pQVar8[lVar17] == (QArrayData)0x0) break;
      lVar17 = lVar17 + 1;
    } while ((uint)lVar17 < *(uint *)(local_80.field0_0x0 + 4));
    iVar16 = (int)lVar17;
    if (iVar16 == -1) {
      sVar9 = _strlen((char *)pQVar8);
      iVar16 = (int)sVar9;
    }
  }
  local_88.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar8,iVar16);
  cVar5 = operator==(&local_68,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100505667;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100505667:
  uVar22 = ((int)puVar23 + uVar7 + uVar22) - (int)puVar24;
  uVar7 = *(int *)(local_80.field0_0x0 + 4) + 9 + *(int *)(local_50 + 4);
  if (cVar5 == '\0') {
    uVar7 = uVar7 + 2 + (*(int *)(local_80.field0_0x0 + 4) + 1 + *(int *)(local_50 + 4)) * 2;
  }
  bVar4 = true;
  if (uVar7 <= uVar22) {
    *(undefined1 *)((long)puVar13 + lVar18 + 4 + lVar15) = 0xc3;
    *(undefined1 *)((long)puVar13 + lVar18 + 5 + lVar15) = 1;
    uVar12 = 0x81;
    if (cVar5 == '\0') {
      uVar12 = 0x91;
    }
    *(undefined1 *)((long)puVar13 + lVar18 + 6 + lVar15) = uVar12;
    pcVar14 = (char *)(lVar18 + 7 + lVar15 + (long)puVar13);
    qstrcpy(pcVar14,(char *)(local_80.field0_0x0 + *(long *)(local_80.field0_0x0 + 0x10)));
    sVar9 = 0;
    if (pcVar14 != (char *)0x0) {
      sVar9 = _strlen(pcVar14);
    }
    QString::toLatin1_helper(&local_90);
    pcVar14 = (char *)(lVar18 + 8 + lVar15 + (sVar9 & 0xffffffff) + (long)puVar13);
    qstrcpy(pcVar14,(char *)(local_90.field0_0x0 + *(long *)(local_90.field0_0x0 + 0x10)));
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100505792;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,1,8);
    }
LAB_100505792:
    iVar16 = 0;
    if (pcVar14 != (char *)0x0) {
      sVar10 = _strlen(pcVar14);
      iVar16 = (int)sVar10;
    }
    lVar15 = (ulong)(iVar16 + 1) + lVar15 + 8 + (sVar9 & 0xffffffff);
    puVar28 = (undefined2 *)(lVar15 + lVar18 + (long)puVar13);
    if (cVar5 == '\0') {
      pvVar11 = (void *)QString::utf16();
      _memcpy(puVar28,pvVar11,(long)*(int *)(local_68.field0_0x0 + 4) * 2);
      iVar16 = *(int *)(local_68.field0_0x0 + 4);
      *(undefined2 *)((long)puVar13 + lVar15 + (long)iVar16 * 2 + lVar18) = 0;
      pvVar11 = (void *)QString::utf16();
      lVar15 = lVar15 + 2 + (long)iVar16 * 2;
      _memcpy((void *)(lVar15 + lVar18 + (long)puVar13),pvVar11,(long)*(int *)(local_50 + 4) * 2);
      iVar16 = *(int *)(local_50 + 4);
      lVar17 = lVar15 + (long)iVar16 * 2;
      *(undefined2 *)((long)puVar13 + lVar17 + lVar18) = 0;
      lVar15 = lVar15 + 2 + (long)iVar16 * 2;
      puVar28 = (undefined2 *)(lVar18 + 2 + lVar17 + (long)puVar13);
    }
    *puVar28 = 0x25;
    puVar20 = (ushort *)((long)puVar13 + lVar18 + 2 + lVar15);
    uVar6 = (short)puVar20 - (short)puVar24;
    *puVar24 = uVar6;
    uVar22 = uVar22 - uVar6;
    bVar4 = false;
    puVar24 = puVar20;
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005058cb;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,1,8);
  }
LAB_1005058cb:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005058fb;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1005058fb:
  if (bVar4) {
LAB_100505c52:
    QByteArray::resize(iVar19);
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",1,"failed to create the IDL: path too long");
    }
  }
  else {
    local_a0 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::split(&local_98,param_3,&local_a0,1,1);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10050597f;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10050597f:
    if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
      pQVar21 = (QString *)(local_98 + 0x10 + (long)*(int *)(local_98 + 8) * 8);
      puVar20 = puVar24;
      do {
        QString::toLatin1_helper(&local_a8);
        iVar16 = 0;
        pQVar8 = (QArrayData *)(local_a8.field0_0x0 + *(long *)(local_a8.field0_0x0 + 0x10));
        if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_a8.field0_0x0 + 4) != 0)) {
          lVar18 = 0;
          do {
            if (pQVar8[lVar18] == (QArrayData)0x0) break;
            lVar18 = lVar18 + 1;
          } while ((uint)lVar18 < *(uint *)(local_a8.field0_0x0 + 4));
          iVar16 = (int)lVar18;
          if (iVar16 == -1) {
            sVar9 = _strlen((char *)pQVar8);
            iVar16 = (int)sVar9;
          }
        }
        local_b0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromLatin1_helper((char *)pQVar8,iVar16);
        cVar5 = operator==(pQVar21,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100505a47;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_100505a47:
        if (cVar5 == '\0') {
          uVar7 = *(int *)(pQVar21->field0_0x0 + 4) * 2 + 0x11;
        }
        else {
          uVar7 = *(int *)(pQVar21->field0_0x0 + 4) + 0x10;
        }
        puVar24 = puVar20;
        bVar4 = true;
        if (uVar7 <= uVar22) {
          *(undefined1 *)(puVar20 + 7) = 0;
          puVar20[6] = 0;
          puVar20[4] = 0;
          puVar20[5] = 0;
          puVar20[0] = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          puVar20[3] = 0;
          *(undefined1 *)(puVar20 + 1) = 0x31;
          puVar20[6] = 0x10;
          if (cVar5 == '\0') {
            *(undefined1 *)(puVar20 + 1) = 0x35;
            pvVar11 = (void *)QString::utf16();
            _memcpy(puVar20 + 7,pvVar11,(long)*(int *)(pQVar21->field0_0x0 + 4) * 2);
            puVar20[(long)*(int *)(pQVar21->field0_0x0 + 4) + 7] = 0;
          }
          else {
            _memcpy(puVar20 + 7,
                    (QArrayData *)(local_a8.field0_0x0 + *(long *)(local_a8.field0_0x0 + 0x10)),
                    (long)*(int *)(local_a8.field0_0x0 + 4));
            *(undefined1 *)((long)*(int *)(local_a8.field0_0x0 + 4) + 0xe + (long)puVar20) = 0;
          }
          puVar24 = (ushort *)((long)puVar20 + (ulong)uVar7);
          *(undefined1 *)((long)puVar20 + ((ulong)uVar7 - 1)) = 0;
          *puVar20 = (ushort)uVar7;
          uVar22 = uVar22 - (uVar7 & 0xffff);
          bVar4 = false;
          if ((pQVar21 + 1 == (QString *)(local_98 + 0x10 + (long)*(int *)(local_98 + 0xc) * 8)) &&
             (bVar4 = false, param_4 == '\0')) {
            *(byte *)(puVar20 + 1) = (byte)puVar20[1] & 0xcc | 0x32;
            puVar20[6] = 0;
            bVar4 = false;
          }
        }
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100505bc6;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,1,8);
        }
LAB_100505bc6:
        if (bVar4) {
          FUN_100013180(&local_98);
          goto LAB_100505c52;
        }
        pQVar21 = pQVar21 + 1;
        puVar20 = puVar24;
      } while (pQVar21 != (QString *)(local_98 + 0x10 + (long)*(int *)(local_98 + 0xc) * 8));
    }
    FUN_100013180(&local_98);
    *puVar24 = 0;
    puVar13 = (uint *)*puVar1;
    if ((1 < *puVar13) || (*(long *)(puVar13 + 4) != 0x18)) {
      QByteArray::reallocData(puVar1,puVar13[1] + 1,puVar13[2] >> 0x1f);
    }
    QByteArray::resize(iVar19);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100505cbd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100505cbd:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

