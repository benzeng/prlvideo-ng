
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100611180(QString *param_1,QByteArray *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  QArrayData *pQVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  QArrayData *pQVar17;
  ulong uVar18;
  QArrayData *local_2110;
  QArrayData *local_2108;
  QFile local_2100 [16];
  QArrayData *local_20f0;
  QArrayData *local_20e8;
  QArrayData *local_20e0;
  QArrayData *local_20d8;
  QArrayData *local_20d0;
  long *local_20c8;
  undefined1 local_20b9;
  char local_20b8 [8];
  char acStack_20b0 [8];
  undefined1 local_20a8 [16];
  undefined4 local_2098;
  undefined4 local_2094;
  undefined4 local_2090;
  undefined1 local_80 [64];
  uint local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20c8 = (long *)0x0;
  cVar7 = QFile::exists(param_1);
  if (cVar7 == '\0') {
    iVar8 = FUN_100610bf0(&local_20c8,local_80,param_3,param_4,param_5);
    if (-1 < iVar8) {
      local_20e8 = (QArrayData *)PTR_shared_null_100ba20d0;
      local_20f0 = (QArrayData *)PTR_shared_null_100ba20d0;
      QFile::QFile(local_2100,param_1);
      QByteArray::fill((char)&local_20f0,0);
      uVar9 = *(undefined4 *)(*(long *)param_2 + 4);
      ___bzero(local_20b8,0x202c);
      local_20b8[0] = s__EncryptedFile__100b47ba0[0];
      local_20b8[1] = s__EncryptedFile__100b47ba0[1];
      local_20b8[2] = s__EncryptedFile__100b47ba0[2];
      local_20b8[3] = s__EncryptedFile__100b47ba0[3];
      local_20b8[4] = s__EncryptedFile__100b47ba0[4];
      local_20b8[5] = s__EncryptedFile__100b47ba0[5];
      local_20b8[6] = s__EncryptedFile__100b47ba0[6];
      local_20b8[7] = s__EncryptedFile__100b47ba0[7];
      acStack_20b0[0] = s__EncryptedFile__100b47ba0[8];
      acStack_20b0[1] = s__EncryptedFile__100b47ba0[9];
      acStack_20b0[2] = s__EncryptedFile__100b47ba0[10];
      acStack_20b0[3] = s__EncryptedFile__100b47ba0[0xb];
      acStack_20b0[4] = s__EncryptedFile__100b47ba0[0xc];
      acStack_20b0[5] = s__EncryptedFile__100b47ba0[0xd];
      acStack_20b0[6] = s__EncryptedFile__100b47ba0[0xe];
      acStack_20b0[7] = s__EncryptedFile__100b47ba0[0xf];
      local_20a8 = FUN_1007d6c90(param_3);
      local_2098 = 0x2000000;
      local_2094 = 0;
      local_2090 = uVar9;
      QString::toUtf8();
      iVar8 = FUN_100610fb0(local_20b8,&local_2108,&local_20c8);
      if (*(int *)local_2108 != -1) {
        if (*(int *)local_2108 != 0) {
          LOCK();
          *(int *)local_2108 = *(int *)local_2108 + -1;
          local_20b9 = *(int *)local_2108 != 0;
          UNLOCK();
          if ((bool)local_20b9) goto LAB_100611378;
        }
        QArrayData::deallocate(local_2108,1,8);
      }
LAB_100611378:
      if (iVar8 < 0) {
        FUN_1008e3970("","crypt",0,"Error 0x%x forming hash for file",iVar8);
      }
      else {
        cVar7 = QFile::open(local_2100,3);
        if (cVar7 == '\0') {
          QString::toUtf8();
          lVar10 = *(long *)(local_2110 + 0x10);
          uVar9 = FUN_100768f60();
          FUN_1008e3970("","crypt",0,"Error creating file %s (%u)",local_2110 + lVar10,uVar9);
          iVar8 = -0x7ffffae0;
          if (*(int *)local_2110 != -1) {
            if (*(int *)local_2110 != 0) {
              LOCK();
              *(int *)local_2110 = *(int *)local_2110 + -1;
              local_20b9 = *(int *)local_2110 != 0;
              UNLOCK();
              if ((bool)local_20b9) goto LAB_100611808;
            }
            QArrayData::deallocate(local_2110,1,8);
          }
        }
        else {
          lVar10 = QIODevice::write((char *)local_2100,(longlong)local_20b8);
          if (lVar10 < 0) {
            uVar9 = FUN_100768f60();
            iVar8 = -0x7ffffae7;
            FUN_1008e3970("","crypt",0,"Error %d when writing header of file",uVar9);
LAB_1006117fc:
            QFile::remove(param_1);
          }
          else {
            QByteArray::operator=((QByteArray *)&local_20e8,param_2);
            uVar15 = (long)(int)*(uint *)(local_20e8 + 4) + -1 + (ulong)local_40;
            uVar11 = uVar15 % (ulong)local_40;
            uVar18 = uVar15 - uVar11;
            QByteArray::resize((int)&local_20e8);
            if ((1 < *(uint *)local_20e8) || (*(long *)(local_20e8 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_20e8,*(uint *)(local_20e8 + 4) + 1,*(uint *)(local_20e8 + 8) >> 0x1f
                        );
            }
            iVar8 = 0;
            if (uVar15 != uVar11) {
              pQVar17 = local_20e8 + *(long *)(local_20e8 + 0x10);
              uVar15 = 0x2000000;
              do {
                plVar6 = local_20c8;
                if (uVar18 < 0x2000000) {
                  uVar15 = uVar18;
                }
                pcVar3 = *(code **)(*local_20c8 + 0x38);
                if ((1 < *(uint *)local_20f0) || (*(long *)(local_20f0 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_20f0,*(uint *)(local_20f0 + 4) + 1,
                             *(uint *)(local_20f0 + 8) >> 0x1f);
                }
                iVar8 = (*pcVar3)(plVar6,pQVar17,uVar15 & 0xffffffff,
                                  local_20f0 + *(long *)(local_20f0 + 0x10));
                if (iVar8 < 0) {
                  FUN_1008e3970("","crypt",0,"Error executing encryption operation 0x%x",iVar8);
                  goto LAB_1006117fc;
                }
                lVar10 = QIODevice::write((char *)local_2100,(longlong)pQVar17);
                if (lVar10 < 0) {
                  uVar9 = FUN_100768f60();
                  iVar8 = -0x7ffffae7;
                  FUN_1008e3970("","crypt",0,"Error %d when writing file",uVar9);
                  goto LAB_1006117fc;
                }
                uVar2 = *(uint *)(local_20f0 + 4);
                if ((1 < *(uint *)local_20f0) || (*(long *)(local_20f0 + 0x10) != 0x18)) {
                  QByteArray::reallocData(&local_20f0,uVar2 + 1,*(uint *)(local_20f0 + 8) >> 0x1f);
                }
                auVar5 = _DAT_100b47b70;
                if (0 < (int)uVar2) {
                  lVar10 = *(long *)(local_20f0 + 0x10);
                  uVar1 = uVar2 - 1;
                  uVar11 = (ulong)uVar1 + 1;
                  uVar16 = uVar11 & 0x1fffffff0;
                  uVar13 = 0;
                  if (uVar16 != 0) {
                    pQVar12 = local_20f0 + lVar10;
                    uVar14 = (ulong)uVar1 + 1 & 0xfffffffffffffff0;
                    do {
                      *pQVar12 = (QArrayData)((char)*pQVar12 + auVar5[0]);
                      pQVar12[1] = (QArrayData)((char)pQVar12[1] + auVar5[1]);
                      pQVar12[2] = (QArrayData)((char)pQVar12[2] + auVar5[2]);
                      pQVar12[3] = (QArrayData)((char)pQVar12[3] + auVar5[3]);
                      pQVar12[4] = (QArrayData)((char)pQVar12[4] + auVar5[4]);
                      pQVar12[5] = (QArrayData)((char)pQVar12[5] + auVar5[5]);
                      pQVar12[6] = (QArrayData)((char)pQVar12[6] + auVar5[6]);
                      pQVar12[7] = (QArrayData)((char)pQVar12[7] + auVar5[7]);
                      pQVar12[8] = (QArrayData)((char)pQVar12[8] + auVar5[8]);
                      pQVar12[9] = (QArrayData)((char)pQVar12[9] + auVar5[9]);
                      pQVar12[10] = (QArrayData)((char)pQVar12[10] + auVar5[10]);
                      pQVar12[0xb] = (QArrayData)((char)pQVar12[0xb] + auVar5[0xb]);
                      pQVar12[0xc] = (QArrayData)((char)pQVar12[0xc] + auVar5[0xc]);
                      pQVar12[0xd] = (QArrayData)((char)pQVar12[0xd] + auVar5[0xd]);
                      pQVar12[0xe] = (QArrayData)((char)pQVar12[0xe] + auVar5[0xe]);
                      pQVar12[0xf] = (QArrayData)((char)pQVar12[0xf] + auVar5[0xf]);
                      pQVar12 = pQVar12 + 0x10;
                      uVar14 = uVar14 - 0x10;
                      uVar13 = uVar16;
                    } while (uVar14 != 0);
                  }
                  if (uVar11 != uVar13) {
                    if ((uVar2 & 3) != 0) {
                      iVar8 = -(uVar2 & 3);
                      do {
                        local_20f0[uVar13 + lVar10] =
                             (QArrayData)((char)local_20f0[uVar13 + lVar10] + '\x01');
                        uVar13 = uVar13 + 1;
                        iVar8 = iVar8 + 1;
                      } while (iVar8 != 0);
                    }
                    if (2 < uVar1) {
                      pQVar12 = local_20f0 + lVar10 + uVar13 + 3;
                      iVar8 = (uVar2 + 3) - ((int)uVar13 + 3);
                      do {
                        pQVar12[-3] = (QArrayData)((char)pQVar12[-3] + '\x01');
                        pQVar12[-2] = (QArrayData)((char)pQVar12[-2] + '\x01');
                        pQVar12[-1] = (QArrayData)((char)pQVar12[-1] + '\x01');
                        *pQVar12 = (QArrayData)((char)*pQVar12 + '\x01');
                        pQVar12 = pQVar12 + 4;
                        iVar8 = iVar8 + -4;
                      } while (iVar8 != 0);
                    }
                  }
                }
                pQVar17 = pQVar17 + uVar15;
                iVar8 = 0;
                uVar18 = uVar18 - uVar15;
              } while (uVar18 != 0);
            }
          }
        }
      }
LAB_100611808:
      (**(code **)*local_20c8)();
      QFile::~QFile(local_2100);
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_20f0 != -1) {
        if (*(int *)local_20f0 != 0) {
          LOCK();
          *(int *)local_20f0 = *(int *)local_20f0 + -1;
          local_20b9 = *(int *)local_20f0 != 0;
          UNLOCK();
          if ((bool)local_20b9) goto LAB_10061186d;
        }
        QArrayData::deallocate(local_20f0,1,8);
      }
LAB_10061186d:
      if (*(uint *)local_20e8 == 0xffffffff) goto LAB_1006118a9;
      local_20d0 = local_20e8;
      if (*(uint *)local_20e8 != 0) {
        LOCK();
        *(uint *)local_20e8 = *(uint *)local_20e8 - 1;
        uVar2 = *(uint *)local_20e8;
        UNLOCK();
        goto joined_r0x000100611891;
      }
      goto LAB_10061189a;
    }
    FUN_1007d6a70(&local_20e0,param_3);
    QString::toLocal8Bit();
    FUN_1008e3970("","crypt",0,"Encryption (%s) initialization and into retrieval failed (0x%x)",
                  local_20d8 + *(long *)(local_20d8 + 0x10),iVar8);
    if (*(int *)local_20d8 != -1) {
      if (*(int *)local_20d8 != 0) {
        LOCK();
        *(int *)local_20d8 = *(int *)local_20d8 + -1;
        local_20b9 = *(int *)local_20d8 != 0;
        UNLOCK();
        if ((bool)local_20b9) goto LAB_100611670;
      }
      QArrayData::deallocate(local_20d8,1,8);
    }
LAB_100611670:
    auVar5._8_8_ = local_20a8._8_8_;
    auVar5._0_8_ = local_20a8._0_8_;
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(int *)local_20e0 == -1) goto LAB_1006118a9;
    if (*(int *)local_20e0 != 0) {
      LOCK();
      *(int *)local_20e0 = *(int *)local_20e0 + -1;
      local_20b9 = *(int *)local_20e0 != 0;
      UNLOCK();
      local_20a8 = auVar5;
      if ((bool)local_20b9) goto LAB_1006118a9;
    }
    uVar15 = 2;
    local_20d0 = local_20e0;
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","crypt",0,"File %s already exists!",local_20d0 + *(long *)(local_20d0 + 0x10));
    auVar4._8_8_ = local_20a8._8_8_;
    auVar4._0_8_ = local_20a8._0_8_;
    iVar8 = -0x7ffffcab;
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(uint *)local_20d0 == 0xffffffff) goto LAB_1006118a9;
    local_20a8 = auVar4;
    if (*(uint *)local_20d0 != 0) {
      LOCK();
      *(uint *)local_20d0 = *(uint *)local_20d0 - 1;
      uVar2 = *(uint *)local_20d0;
      UNLOCK();
joined_r0x000100611891:
      local_20b9 = uVar2 != 0;
      if ((bool)local_20b9) goto LAB_1006118a9;
    }
LAB_10061189a:
    uVar15 = 1;
    auVar5 = local_20a8;
  }
  local_20a8 = auVar5;
  QArrayData::deallocate(local_20d0,uVar15,8);
LAB_1006118a9:
  if (lVar10 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

