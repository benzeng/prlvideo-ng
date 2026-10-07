
int FUN_100611af0(QString *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  long *plVar19;
  char cVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  QArrayData *pQVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  uint *puVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  QArrayData *local_2108;
  QArrayData *local_2100;
  QArrayData *local_20f8;
  long *local_20f0;
  QArrayData *local_20e8;
  QFile local_20e0 [16];
  QArrayData *local_20d0;
  undefined1 local_20c1;
  undefined1 local_20c0 [64];
  uint local_2080;
  undefined1 local_2078 [16];
  undefined1 local_2068 [16];
  undefined1 local_2058 [16];
  uint local_2048;
  int local_2040;
  long local_38;
  
  lVar30 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar30;
  cVar20 = QFile::exists(param_1);
  if (cVar20 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","crypt",0,"File %s not exists!",local_20d0 + *(long *)(local_20d0 + 0x10));
    iVar21 = -0x7ffffff0;
    if (*(int *)local_20d0 != -1) {
      if (*(int *)local_20d0 != 0) {
        LOCK();
        *(int *)local_20d0 = *(int *)local_20d0 + -1;
        local_20c1 = *(int *)local_20d0 != 0;
        UNLOCK();
        if ((bool)local_20c1) goto LAB_100612136;
      }
      QArrayData::deallocate(local_20d0,1,8);
    }
    goto LAB_100612136;
  }
  QFile::QFile(local_20e0,param_1);
  cVar20 = QFile::open(local_20e0,3);
  if (cVar20 == '\0') {
    QString::toUtf8();
    pQVar24 = local_20e8;
    lVar30 = *(long *)(local_20e8 + 0x10);
    uVar22 = FUN_100768f60();
    FUN_1008e3970("","crypt",0,"Error opening file %s (%u)",pQVar24 + lVar30,uVar22);
    iVar21 = -0x7ffffae0;
    if (*(int *)local_20e8 != -1) {
      if (*(int *)local_20e8 != 0) {
        LOCK();
        *(int *)local_20e8 = *(int *)local_20e8 + -1;
        local_20c1 = *(int *)local_20e8 != 0;
        UNLOCK();
        if ((bool)local_20c1) goto LAB_100612120;
      }
      QArrayData::deallocate(local_20e8,1,8);
    }
  }
  else {
    iVar21 = FUN_100610a40(local_2068,local_20e0);
    if (iVar21 < 0) {
      FUN_1008e3970("","crypt",0,"Header loading failed: 0x%x",iVar21);
    }
    else {
      FUN_1007d6cd0(local_2078,local_2058);
      local_20f0 = (long *)0x0;
      iVar21 = FUN_100610bf0(&local_20f0,local_20c0,local_2078,param_3,param_4);
      if (iVar21 < 0) {
        FUN_1007d6a70(&local_2100,local_2078);
        QString::toLocal8Bit();
        FUN_1008e3970("","crypt",0,"Encryption (%s) initialization and into retrieval failed (0x%x)"
                      ,local_20f8 + *(long *)(local_20f8 + 0x10),iVar21);
        if (*(int *)local_20f8 != -1) {
          if (*(int *)local_20f8 != 0) {
            LOCK();
            *(int *)local_20f8 = *(int *)local_20f8 + -1;
            local_20c1 = *(int *)local_20f8 != 0;
            UNLOCK();
            if ((bool)local_20c1) goto LAB_100611ffe;
          }
          QArrayData::deallocate(local_20f8,1,8);
        }
LAB_100611ffe:
        if (*(int *)local_2100 != -1) {
          if (*(int *)local_2100 != 0) {
            LOCK();
            *(int *)local_2100 = *(int *)local_2100 + -1;
            local_20c1 = *(int *)local_2100 != 0;
            UNLOCK();
            if ((bool)local_20c1) goto LAB_100612120;
          }
          QArrayData::deallocate(local_2100,2,8);
        }
      }
      else {
        local_2108 = (QArrayData *)PTR_shared_null_100ba20d0;
        uVar31 = (ulong)local_2048;
        uVar32 = ((ulong)(local_2040 + -1 + local_2080) / (ulong)local_2080) * (ulong)local_2080;
        QByteArray::resize((int)param_2);
        QByteArray::fill((char)&local_2108,0);
        puVar29 = (uint *)*param_2;
        if ((1 < *puVar29) || (*(long *)(puVar29 + 4) != 0x18)) {
          QByteArray::reallocData(param_2,puVar29[1] + 1,puVar29[2] >> 0x1f);
          puVar29 = (uint *)*param_2;
        }
        lVar30 = *(long *)(puVar29 + 4);
        iVar21 = FUN_100610ea0(local_2068,&local_20f0);
        if (iVar21 < 0) {
          FUN_1008e3970("","crypt",0,"Error loading hash 0x%x",iVar21);
        }
        else {
          if (uVar32 != 0) {
            lVar30 = (long)puVar29 + lVar30;
            do {
              if (uVar32 < local_2048) {
                uVar31 = uVar32;
              }
              uVar23 = QIODevice::read((char *)local_20e0,lVar30);
              plVar19 = local_20f0;
              if ((uVar23 != 0) && (uVar23 != uVar31)) {
                uVar22 = FUN_100768f60();
                iVar21 = -0x7ffffae8;
                FUN_1008e3970("","crypt",0,"Error %d when reading file (%lld:%llu)",uVar22,uVar23,
                              uVar31);
LAB_1006120c2:
                QByteArray::fill((char)param_2,0);
                goto LAB_1006120d5;
              }
              pcVar2 = *(code **)(*local_20f0 + 0x40);
              if ((1 < *(uint *)local_2108) || (*(long *)(local_2108 + 0x10) != 0x18)) {
                QByteArray::reallocData
                          (&local_2108,*(uint *)(local_2108 + 4) + 1,
                           *(uint *)(local_2108 + 8) >> 0x1f);
              }
              iVar21 = (*pcVar2)(plVar19,lVar30,uVar31 & 0xffffffff,
                                 local_2108 + *(long *)(local_2108 + 0x10));
              if (iVar21 < 0) {
                FUN_1008e3970("","crypt",0,"Error executing decryption operation 0x%x",iVar21);
                goto LAB_1006120c2;
              }
              uVar1 = *(uint *)(local_2108 + 4);
              if ((1 < *(uint *)local_2108) || (*(long *)(local_2108 + 0x10) != 0x18)) {
                QByteArray::reallocData(&local_2108,uVar1 + 1,*(uint *)(local_2108 + 8) >> 0x1f);
              }
              cVar18 = UNK_100b47b7f;
              cVar17 = UNK_100b47b7e;
              cVar16 = UNK_100b47b7d;
              cVar15 = UNK_100b47b7c;
              cVar14 = UNK_100b47b7b;
              cVar13 = UNK_100b47b7a;
              cVar12 = UNK_100b47b79;
              cVar11 = UNK_100b47b78;
              cVar10 = UNK_100b47b77;
              cVar9 = UNK_100b47b76;
              cVar8 = UNK_100b47b75;
              cVar7 = UNK_100b47b74;
              cVar6 = UNK_100b47b73;
              cVar5 = UNK_100b47b72;
              cVar4 = UNK_100b47b71;
              cVar20 = DAT_100b47b70;
              if (0 < (int)uVar1) {
                lVar3 = *(long *)(local_2108 + 0x10);
                uVar28 = uVar1 - 1;
                uVar23 = (ulong)uVar28 + 1;
                uVar27 = uVar23 & 0x1fffffff0;
                uVar25 = 0;
                if (uVar27 != 0) {
                  pQVar24 = local_2108 + lVar3;
                  uVar26 = (ulong)uVar28 + 1 & 0xfffffffffffffff0;
                  do {
                    *pQVar24 = (QArrayData)((char)*pQVar24 + cVar20);
                    pQVar24[1] = (QArrayData)((char)pQVar24[1] + cVar4);
                    pQVar24[2] = (QArrayData)((char)pQVar24[2] + cVar5);
                    pQVar24[3] = (QArrayData)((char)pQVar24[3] + cVar6);
                    pQVar24[4] = (QArrayData)((char)pQVar24[4] + cVar7);
                    pQVar24[5] = (QArrayData)((char)pQVar24[5] + cVar8);
                    pQVar24[6] = (QArrayData)((char)pQVar24[6] + cVar9);
                    pQVar24[7] = (QArrayData)((char)pQVar24[7] + cVar10);
                    pQVar24[8] = (QArrayData)((char)pQVar24[8] + cVar11);
                    pQVar24[9] = (QArrayData)((char)pQVar24[9] + cVar12);
                    pQVar24[10] = (QArrayData)((char)pQVar24[10] + cVar13);
                    pQVar24[0xb] = (QArrayData)((char)pQVar24[0xb] + cVar14);
                    pQVar24[0xc] = (QArrayData)((char)pQVar24[0xc] + cVar15);
                    pQVar24[0xd] = (QArrayData)((char)pQVar24[0xd] + cVar16);
                    pQVar24[0xe] = (QArrayData)((char)pQVar24[0xe] + cVar17);
                    pQVar24[0xf] = (QArrayData)((char)pQVar24[0xf] + cVar18);
                    pQVar24 = pQVar24 + 0x10;
                    uVar26 = uVar26 - 0x10;
                    uVar25 = uVar27;
                  } while (uVar26 != 0);
                }
                if (uVar23 != uVar25) {
                  if ((uVar1 & 3) != 0) {
                    iVar21 = -(uVar1 & 3);
                    do {
                      local_2108[uVar25 + lVar3] =
                           (QArrayData)((char)local_2108[uVar25 + lVar3] + '\x01');
                      uVar25 = uVar25 + 1;
                      iVar21 = iVar21 + 1;
                    } while (iVar21 != 0);
                  }
                  if (2 < uVar28) {
                    pQVar24 = local_2108 + lVar3 + uVar25 + 3;
                    iVar21 = (uVar1 + 3) - ((int)uVar25 + 3);
                    do {
                      pQVar24[-3] = (QArrayData)((char)pQVar24[-3] + '\x01');
                      pQVar24[-2] = (QArrayData)((char)pQVar24[-2] + '\x01');
                      pQVar24[-1] = (QArrayData)((char)pQVar24[-1] + '\x01');
                      *pQVar24 = (QArrayData)((char)*pQVar24 + '\x01');
                      pQVar24 = pQVar24 + 4;
                      iVar21 = iVar21 + -4;
                    } while (iVar21 != 0);
                  }
                }
              }
              lVar30 = lVar30 + uVar31;
              uVar32 = uVar32 - uVar31;
            } while (uVar32 != 0);
          }
          iVar21 = 0;
          QByteArray::resize((int)param_2);
        }
LAB_1006120d5:
        (**(code **)*local_20f0)();
        if (*(int *)local_2108 != -1) {
          if (*(int *)local_2108 != 0) {
            LOCK();
            *(int *)local_2108 = *(int *)local_2108 + -1;
            local_20c1 = *(int *)local_2108 != 0;
            UNLOCK();
            if ((bool)local_20c1) goto LAB_100612120;
          }
          QArrayData::deallocate(local_2108,1,8);
        }
      }
    }
  }
LAB_100612120:
  QFile::~QFile(local_20e0);
  lVar30 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100612136:
  if (lVar30 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar21;
}

