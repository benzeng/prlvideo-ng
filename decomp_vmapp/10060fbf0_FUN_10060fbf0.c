
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10060fbf0(long *param_1,QString *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  QArrayData *pQVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long local_2168;
  QArrayData *local_2150;
  QArrayData *local_2148;
  QArrayData *local_2140;
  QString local_2138;
  QArrayData *local_2130;
  QTypedArrayData<unsigned_short> *local_2128;
  QArrayData *local_2120;
  QFileInfo local_2118 [8];
  QArrayData *local_2110;
  long *local_2108;
  QString local_2100;
  QFile local_20f8 [16];
  long local_20e8 [2];
  undefined1 local_20d1;
  undefined8 local_20d0;
  undefined8 local_20c8;
  undefined8 local_20c0;
  undefined8 local_20b8;
  undefined1 local_20b0 [64];
  uint local_2070;
  char local_2068 [8];
  char acStack_2060 [8];
  undefined1 local_2058 [16];
  uint local_2048;
  undefined4 local_2044;
  undefined4 local_2040;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QFile::QFile((QFile *)local_20e8,param_2);
  local_2100.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_2100.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_2100.field0_0x0 = *(int *)local_2100.field0_0x0 + 1;
    local_20d1 = *(int *)local_2100.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_2100);
  QFile::QFile(local_20f8,&local_2100);
  if (*(int *)local_2100.field0_0x0 != -1) {
    if (*(int *)local_2100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_2100.field0_0x0 = *(int *)local_2100.field0_0x0 + -1;
      local_20d1 = *(int *)local_2100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_20d1) goto LAB_10060fca4;
    }
    QArrayData::deallocate((QArrayData *)local_2100.field0_0x0,2,8);
  }
LAB_10060fca4:
  local_2108 = (long *)0x0;
  local_20c0 = *(undefined8 *)((long)param_1 + 0x51);
  local_20b8 = *(undefined8 *)((long)param_1 + 0x59);
  cVar6 = FUN_1007ea210(&local_20c0);
  local_2110 = (QArrayData *)PTR_shared_null_100ba20d0;
  QFileInfo::QFileInfo(local_2118,(QFile *)local_20e8);
  uVar10 = QFileInfo::size();
  (**(code **)(*param_1 + 0xc0))(param_1,1);
  cVar7 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar7 == '\0') {
    cVar7 = QFile::open(local_20e8,3);
    if (cVar7 == '\0') {
      uVar9 = FUN_100768f60();
      local_2128 = param_2->field0_0x0;
      if (1 < *(int *)local_2128 + 1U) {
        LOCK();
        *(int *)local_2128 = *(int *)local_2128 + 1;
        local_20d1 = *(int *)local_2128 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","crypt",0,"Error %u opening file %s",uVar9,
                    local_2120 + *(long *)(local_2120 + 0x10));
      if (*(int *)local_2120 != -1) {
        if (*(int *)local_2120 != 0) {
          LOCK();
          *(int *)local_2120 = *(int *)local_2120 + -1;
          local_20d1 = *(int *)local_2120 != 0;
          UNLOCK();
          if ((bool)local_20d1) goto LAB_10060fe8a;
        }
        QArrayData::deallocate(local_2120,1,8);
      }
LAB_10060fe8a:
      auVar4._8_8_ = local_2058._8_8_;
      auVar4._0_8_ = local_2058._0_8_;
      iVar8 = -0x7ffffae0;
      if (*(int *)local_2128 != -1) {
        if (*(int *)local_2128 != 0) {
          LOCK();
          *(int *)local_2128 = *(int *)local_2128 + -1;
          local_20d1 = *(int *)local_2128 != 0;
          UNLOCK();
          local_2058 = auVar4;
          if ((bool)local_20d1) goto LAB_100610647;
        }
        QArrayData::deallocate((QArrayData *)local_2128,2,8);
      }
    }
    else {
      cVar7 = QFile::open(local_20f8,3);
      if (cVar7 == '\0') {
        uVar9 = FUN_100768f60();
        local_2138.field0_0x0 = param_2->field0_0x0;
        if (1 < *(int *)local_2138.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_2138.field0_0x0 = *(int *)local_2138.field0_0x0 + 1;
          local_20d1 = *(int *)local_2138.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_2138);
        QString::toLocal8Bit();
        FUN_1008e3970("","crypt",0,"Error %u opening file %s",uVar9,
                      local_2130 + *(long *)(local_2130 + 0x10));
        if (*(int *)local_2130 != -1) {
          if (*(int *)local_2130 != 0) {
            LOCK();
            *(int *)local_2130 = *(int *)local_2130 + -1;
            local_20d1 = *(int *)local_2130 != 0;
            UNLOCK();
            if ((bool)local_20d1) goto LAB_10060ff8f;
          }
          QArrayData::deallocate(local_2130,1,8);
        }
LAB_10060ff8f:
        auVar3._8_8_ = local_2058._8_8_;
        auVar3._0_8_ = local_2058._0_8_;
        iVar8 = -0x7ffffae0;
        if (*(int *)local_2138.field0_0x0 != -1) {
          if (*(int *)local_2138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_2138.field0_0x0 = *(int *)local_2138.field0_0x0 + -1;
            local_20d1 = *(int *)local_2138.field0_0x0 != 0;
            UNLOCK();
            local_2058 = auVar3;
            if ((bool)local_20d1) goto LAB_100610647;
          }
          QArrayData::deallocate((QArrayData *)local_2138.field0_0x0,2,8);
        }
      }
      else {
        if (cVar6 == '\0') {
          ___bzero(local_2068,0x202c);
          local_2068[0] = s__EncryptedFile__100b47ba0[0];
          local_2068[1] = s__EncryptedFile__100b47ba0[1];
          local_2068[2] = s__EncryptedFile__100b47ba0[2];
          local_2068[3] = s__EncryptedFile__100b47ba0[3];
          local_2068[4] = s__EncryptedFile__100b47ba0[4];
          local_2068[5] = s__EncryptedFile__100b47ba0[5];
          local_2068[6] = s__EncryptedFile__100b47ba0[6];
          local_2068[7] = s__EncryptedFile__100b47ba0[7];
          acStack_2060[0] = s__EncryptedFile__100b47ba0[8];
          acStack_2060[1] = s__EncryptedFile__100b47ba0[9];
          acStack_2060[2] = s__EncryptedFile__100b47ba0[10];
          acStack_2060[3] = s__EncryptedFile__100b47ba0[0xb];
          acStack_2060[4] = s__EncryptedFile__100b47ba0[0xc];
          acStack_2060[5] = s__EncryptedFile__100b47ba0[0xd];
          acStack_2060[6] = s__EncryptedFile__100b47ba0[0xe];
          acStack_2060[7] = s__EncryptedFile__100b47ba0[0xf];
          local_2058 = FUN_1007d6c90(&local_20c0);
          local_2048 = 0x2000000;
          local_2044 = 0;
          local_2040 = (undefined4)uVar10;
          uVar16 = 0x2000000;
        }
        else {
          iVar8 = FUN_100610a40(local_2068,local_20e8);
          uVar16 = local_2048;
          if (iVar8 < 0) {
            FUN_1008e3970("","crypt",0,"File header loading failure.");
            goto LAB_100610647;
          }
          FUN_1007d6cd0(&local_20d0,local_2058);
          local_20b8 = local_20c8;
          local_20c0 = local_20d0;
        }
        pvVar11 = _valloc((ulong)uVar16);
        if (pvVar11 == (void *)0x0) {
          iVar8 = -0x7ffffffe;
          FUN_1008e3970("","crypt",0,"Error allocating memory for buffer");
          goto LAB_100610647;
        }
        iVar8 = FUN_100610bf0(&local_2108,local_20b0,&local_20c0,param_1 + 0xd,param_1 + 0xe);
        if (iVar8 < 0) {
          FUN_1007d6a70(&local_2148,&local_20c0);
          QString::toLocal8Bit();
          FUN_1008e3970("","crypt",0,
                        "Encryption engine (%s) initialization and into retrieval failed (0x%x)",
                        local_2140 + *(long *)(local_2140 + 0x10),iVar8);
          if (*(int *)local_2140 != -1) {
            if (*(int *)local_2140 != 0) {
              LOCK();
              *(int *)local_2140 = *(int *)local_2140 + -1;
              local_20d1 = *(int *)local_2140 != 0;
              UNLOCK();
              if ((bool)local_20d1) goto LAB_10061016e;
            }
            QArrayData::deallocate(local_2140,1,8);
          }
LAB_10061016e:
          if (*(int *)local_2148 != -1) {
            if (*(int *)local_2148 != 0) {
              LOCK();
              *(int *)local_2148 = *(int *)local_2148 + -1;
              local_20d1 = *(int *)local_2148 != 0;
              UNLOCK();
              if ((bool)local_20d1) goto LAB_10061063b;
            }
            QArrayData::deallocate(local_2148,2,8);
          }
        }
        else {
          QByteArray::fill((char)&local_2110,0);
          if (cVar6 == '\0') {
            QString::toUtf8();
            iVar8 = FUN_100610fb0(local_2068,&local_2150,&local_2108);
            if (*(int *)local_2150 != -1) {
              if (*(int *)local_2150 != 0) {
                LOCK();
                *(int *)local_2150 = *(int *)local_2150 + -1;
                local_20d1 = *(int *)local_2150 != 0;
                UNLOCK();
                if ((bool)local_20d1) goto LAB_100610242;
              }
              QArrayData::deallocate(local_2150,1,8);
            }
          }
          else {
            iVar8 = FUN_100610ea0(local_2068,&local_2108);
          }
LAB_100610242:
          if (iVar8 < 0) {
            FUN_1008e3970("","crypt",0,"Error initializing/creating hash object 0x%x",iVar8);
          }
          else {
            if (cVar6 == '\0') {
              lVar12 = QIODevice::write((char *)local_20f8,(longlong)local_2068);
              if (lVar12 != 0x202c) {
                iVar8 = -0x7ffffae7;
                FUN_1008e3970("","crypt",0,"File size is less than header.");
                goto LAB_10061062c;
              }
            }
            local_2168 = 0;
            while( true ) {
              cVar7 = (**(code **)(local_20e8[0] + 0x90))(local_20e8);
              if (cVar7 != '\0') break;
              uVar13 = QIODevice::read((char *)local_20e8,(longlong)pvVar11);
              plVar5 = local_2108;
              if ((long)uVar13 < 0) {
                uVar9 = FUN_100768f60();
                iVar8 = -0x7ffffae8;
                FUN_1008e3970("","crypt",0,"Error %d reading source file",uVar9);
                goto LAB_10061062c;
              }
              if (cVar6 == '\0') {
                if ((uVar13 != local_2048) && ((long)uVar13 % (long)(ulong)local_2070 != 0)) {
                  uVar15 = (ulong)(local_2070 - (int)((long)uVar13 % (long)(ulong)local_2070));
                  ___bzero((uVar13 & 0xffffffff) + (long)pvVar11,uVar15);
                  uVar13 = uVar13 + uVar15;
                }
                plVar5 = local_2108;
                pcVar2 = *(code **)(*local_2108 + 0x38);
                if ((1 < *(uint *)local_2110) || (*(long *)(local_2110 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_2110,*(uint *)(local_2110 + 4) + 1,
                             *(uint *)(local_2110 + 8) >> 0x1f);
                }
                iVar8 = (*pcVar2)(plVar5,pvVar11,uVar13 & 0xffffffff,
                                  local_2110 + *(long *)(local_2110 + 0x10));
              }
              else {
                pcVar2 = *(code **)(*local_2108 + 0x40);
                if ((1 < *(uint *)local_2110) || (*(long *)(local_2110 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_2110,*(uint *)(local_2110 + 4) + 1,
                             *(uint *)(local_2110 + 8) >> 0x1f);
                }
                iVar8 = (*pcVar2)(plVar5,pvVar11,uVar13 & 0xffffffff,
                                  local_2110 + *(long *)(local_2110 + 0x10));
              }
              if (iVar8 < 0) {
                FUN_1008e3970("","crypt",0,"Error executing requested operation 0x%x",iVar8);
                goto LAB_10061062c;
              }
              lVar12 = QIODevice::write((char *)local_20f8,(longlong)pvVar11);
              if (lVar12 < 0) {
                uVar9 = FUN_100768f60();
                iVar8 = -0x7ffffae7;
                FUN_1008e3970("","crypt",0,"Error %d writing destination file",uVar9);
                goto LAB_10061062c;
              }
              uVar16 = *(uint *)(local_2110 + 4);
              if ((1 < *(uint *)local_2110) || (*(long *)(local_2110 + 0x10) != 0x18)) {
                QByteArray::reallocData(&local_2110,uVar16 + 1,*(uint *)(local_2110 + 8) >> 0x1f);
              }
              auVar4 = _DAT_100b47b70;
              if (0 < (int)uVar16) {
                lVar12 = *(long *)(local_2110 + 0x10);
                uVar1 = uVar16 - 1;
                uVar13 = (ulong)uVar1 + 1;
                uVar19 = uVar13 & 0x1fffffff0;
                uVar15 = 0;
                if (uVar19 != 0) {
                  pQVar14 = local_2110 + lVar12;
                  uVar17 = (ulong)uVar1 + 1 & 0xfffffffffffffff0;
                  do {
                    *pQVar14 = (QArrayData)((char)*pQVar14 + auVar4[0]);
                    pQVar14[1] = (QArrayData)((char)pQVar14[1] + auVar4[1]);
                    pQVar14[2] = (QArrayData)((char)pQVar14[2] + auVar4[2]);
                    pQVar14[3] = (QArrayData)((char)pQVar14[3] + auVar4[3]);
                    pQVar14[4] = (QArrayData)((char)pQVar14[4] + auVar4[4]);
                    pQVar14[5] = (QArrayData)((char)pQVar14[5] + auVar4[5]);
                    pQVar14[6] = (QArrayData)((char)pQVar14[6] + auVar4[6]);
                    pQVar14[7] = (QArrayData)((char)pQVar14[7] + auVar4[7]);
                    pQVar14[8] = (QArrayData)((char)pQVar14[8] + auVar4[8]);
                    pQVar14[9] = (QArrayData)((char)pQVar14[9] + auVar4[9]);
                    pQVar14[10] = (QArrayData)((char)pQVar14[10] + auVar4[10]);
                    pQVar14[0xb] = (QArrayData)((char)pQVar14[0xb] + auVar4[0xb]);
                    pQVar14[0xc] = (QArrayData)((char)pQVar14[0xc] + auVar4[0xc]);
                    pQVar14[0xd] = (QArrayData)((char)pQVar14[0xd] + auVar4[0xd]);
                    pQVar14[0xe] = (QArrayData)((char)pQVar14[0xe] + auVar4[0xe]);
                    pQVar14[0xf] = (QArrayData)((char)pQVar14[0xf] + auVar4[0xf]);
                    pQVar14 = pQVar14 + 0x10;
                    uVar17 = uVar17 - 0x10;
                    uVar15 = uVar19;
                  } while (uVar17 != 0);
                }
                if (uVar13 != uVar15) {
                  if ((uVar16 & 3) != 0) {
                    iVar18 = -(uVar16 & 3);
                    do {
                      local_2110[uVar15 + lVar12] =
                           (QArrayData)((char)local_2110[uVar15 + lVar12] + '\x01');
                      uVar15 = uVar15 + 1;
                      iVar18 = iVar18 + 1;
                    } while (iVar18 != 0);
                  }
                  if (2 < uVar1) {
                    pQVar14 = local_2110 + lVar12 + uVar15 + 3;
                    iVar18 = (uVar16 + 3) - ((int)uVar15 + 3);
                    do {
                      pQVar14[-3] = (QArrayData)((char)pQVar14[-3] + '\x01');
                      pQVar14[-2] = (QArrayData)((char)pQVar14[-2] + '\x01');
                      pQVar14[-1] = (QArrayData)((char)pQVar14[-1] + '\x01');
                      *pQVar14 = (QArrayData)((char)*pQVar14 + '\x01');
                      pQVar14 = pQVar14 + 4;
                      iVar18 = iVar18 + -4;
                    } while (iVar18 != 0);
                  }
                }
              }
              (**(code **)(*param_1 + 0xc0))
                        (param_1,(ulong)(local_2168 * 1000) / uVar10 & 0xffffffff,
                         (ulong)(local_2168 * 1000) % uVar10);
              cVar7 = (**(code **)(*param_1 + 0x30))(param_1);
              if (cVar7 != '\0') {
                iVar8 = -0x7ffffd8b;
                FUN_1008e3970("","crypt",0,"File operation canceled");
                goto LAB_10061062c;
              }
              local_2168 = local_2168 + (ulong)local_2048;
            }
            if (cVar6 != '\0') {
              QFile::resize((longlong)local_20f8);
            }
          }
LAB_10061062c:
          (**(code **)*local_2108)();
        }
LAB_10061063b:
        _free(pvVar11);
      }
    }
  }
  else {
    iVar8 = -0x7ffffd8b;
    FUN_1008e3970("","crypt",0,"Catch operation cancel");
  }
LAB_100610647:
  QFileInfo::~QFileInfo(local_2118);
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_2110 != -1) {
    if (*(int *)local_2110 != 0) {
      LOCK();
      *(int *)local_2110 = *(int *)local_2110 + -1;
      local_20d1 = *(int *)local_2110 != 0;
      UNLOCK();
      if ((bool)local_20d1) goto LAB_100610699;
    }
    QArrayData::deallocate(local_2110,1,8);
  }
LAB_100610699:
  QFile::~QFile(local_20f8);
  QFile::~QFile((QFile *)local_20e8);
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

