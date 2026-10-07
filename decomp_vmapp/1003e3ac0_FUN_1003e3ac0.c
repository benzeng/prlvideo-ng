
undefined8 FUN_1003e3ac0(long *param_1,QString *param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  FILE *pFVar6;
  char *pcVar7;
  QArrayData *pQVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined *puVar15;
  QArrayData *local_10d0;
  QString local_10c8;
  QString local_10c0;
  QArrayData *local_10b8;
  int *local_10b0;
  QString local_10a8;
  QArrayData *local_10a0;
  QRegExp local_1098 [8];
  int *local_1090;
  QArrayData *local_1088;
  QString local_1080;
  QArrayData *local_1078;
  QArrayData *local_1070;
  QString local_1068;
  QString local_1060;
  int *local_1058;
  int local_104c;
  QString local_1048;
  undefined1 local_1039;
  short local_1038;
  undefined2 uStack_1036;
  undefined4 uStack_1034;
  long local_e38;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1070 = (QArrayData *)
               QString::fromAscii_helper
                         ("hdiutil attach \"%1\" -nomount -noverify -noautofsck",0x32);
  QString::arg(&local_1068,&local_1070,param_2,0,0x20);
  if (*(int *)local_1070 != -1) {
    if (*(int *)local_1070 != 0) {
      LOCK();
      *(int *)local_1070 = *(int *)local_1070 + -1;
      local_1039 = *(int *)local_1070 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_1003e3b5a;
    }
    QArrayData::deallocate(local_1070,2,8);
  }
LAB_1003e3b5a:
  QByteArray::QByteArray((QByteArray *)&local_1078,0xff,'\0');
  puVar15 = PTR_shared_null_100ba20d0;
  local_1080.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (DAT_101119890 < 0) {
    DAT_101119890 = FUN_1007da300("devices.dmg.stub",0);
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 2;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  if (DAT_101119890 < 1) {
    QString::toUtf8();
    pFVar6 = _popen((char *)(local_1088 + *(long *)(local_1088 + 0x10)),"r");
    if (*(int *)local_1088 != -1) {
      if (*(int *)local_1088 != 0) {
        LOCK();
        *(int *)local_1088 = *(int *)local_1088 + -1;
        local_1039 = *(int *)local_1088 != 0;
        UNLOCK();
        if ((bool)local_1039) goto LAB_1003e3c42;
      }
      QArrayData::deallocate(local_1088,1,8);
    }
LAB_1003e3c42:
    uVar14 = 0xffffffff;
    if (pFVar6 != (FILE *)0x0) {
      if ((1 < *(uint *)local_1078) || (*(long *)(local_1078 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_1078,*(uint *)(local_1078 + 4) + 1,*(uint *)(local_1078 + 8) >> 0x1f);
      }
      pcVar7 = _fgets((char *)(local_1078 + *(long *)(local_1078 + 0x10)),
                      *(uint *)(local_1078 + 4) - 1,pFVar6);
      piVar11 = (int *)PTR_shared_null_100ba2188;
      iVar12 = 0;
      if (pcVar7 != (char *)0x0) {
        local_1090 = (int *)PTR_shared_null_100ba2188;
        local_10a0 = (QArrayData *)QString::fromAscii_helper("^/dev/disk[0-9]{1,3}",0x14);
        QRegExp::QRegExp(local_1098,&local_10a0,1,0);
        if (*(int *)local_10a0 != -1) {
          if (*(int *)local_10a0 != 0) {
            LOCK();
            *(int *)local_10a0 = *(int *)local_10a0 + -1;
            local_1039 = *(int *)local_10a0 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e3d1e;
          }
          QArrayData::deallocate(local_10a0,2,8);
        }
LAB_1003e3d1e:
        if (local_1068.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
          local_1060.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar15;
          QString::operator=(&local_1068,&local_1060);
          if (*(int *)local_1060.field0_0x0 != -1) {
            if (*(int *)local_1060.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1060.field0_0x0 = *(int *)local_1060.field0_0x0 + -1;
              local_1039 = *(int *)local_1060.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1039) goto LAB_1003e3d84;
            }
            QArrayData::deallocate((QArrayData *)local_1060.field0_0x0,2,8);
          }
        }
LAB_1003e3d84:
        lVar9 = 0;
        pQVar8 = local_1078 + *(long *)(local_1078 + 0x10);
        if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_1078 + 4) != 0)) {
          lVar9 = 0;
          do {
            if (pQVar8[lVar9] == (QArrayData)0x0) break;
            lVar9 = lVar9 + 1;
          } while ((uint)lVar9 < *(uint *)(local_1078 + 4));
        }
        local_10a8.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar8,(int)lVar9)
        ;
        QString::operator=(&local_1068,&local_10a8);
        if (*(int *)local_10a8.field0_0x0 != -1) {
          if (*(int *)local_10a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_10a8.field0_0x0 = *(int *)local_10a8.field0_0x0 + -1;
            local_1039 = *(int *)local_10a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e3e08;
          }
          QArrayData::deallocate((QArrayData *)local_10a8.field0_0x0,2,8);
        }
LAB_1003e3e08:
        iVar12 = 0;
        iVar4 = QRegExp::indexIn(local_1098,&local_1068,0,0);
        if (iVar4 == 0) {
          QRegExp::capturedTexts();
          piVar13 = (int *)PTR_shared_null_100ba2188;
          if (local_10b0 != piVar11) {
            local_1058 = local_10b0;
            if (*local_10b0 != -1) {
              if (*local_10b0 == 0) {
                QListData::detach((int)&local_1058);
                iVar12 = local_1058[2];
                if (iVar12 != local_1058[3]) {
                  local_10b0 = local_10b0 + (long)local_10b0[2] * 2 + 4;
                  piVar11 = local_1058 + (long)iVar12 * 2 + 4;
                  lVar9 = (long)local_1058[3] * 8 + (long)iVar12 * -8;
                  do {
                    piVar13 = *(int **)local_10b0;
                    *(int **)piVar11 = piVar13;
                    if (1 < *piVar13 + 1U) {
                      LOCK();
                      *piVar13 = *piVar13 + 1;
                      local_1039 = *piVar13 != 0;
                      UNLOCK();
                    }
                    piVar11 = piVar11 + 2;
                    local_10b0 = local_10b0 + 2;
                    lVar9 = lVar9 + -8;
                    piVar13 = local_1090;
                  } while (lVar9 != 0);
                }
              }
              else {
                LOCK();
                *local_10b0 = *local_10b0 + 1;
                local_1039 = *local_10b0 != 0;
                UNLOCK();
              }
            }
            piVar11 = local_1058;
            local_1090 = local_1058;
            local_1058 = piVar13;
            FUN_100013180(&local_1058);
          }
          FUN_100013180(&local_10b0);
          iVar12 = 2;
          QString::operator=(&local_1080,(QString *)(piVar11 + (long)piVar11[2] * 2 + 4));
        }
        QRegExp::~QRegExp(local_1098);
        FUN_100013180(&local_1090);
      }
      uVar5 = _pclose(pFVar6);
      puVar15 = (undefined *)(ulong)uVar5;
      goto LAB_1003e3f53;
    }
  }
  else {
    QString::operator=(&local_1080,param_2);
    iVar12 = 1;
LAB_1003e3f53:
    QString::toUtf8();
    FUN_1008e3970("","DVDImage",0,"[Dmg] open: %s",local_10b8 + *(long *)(local_10b8 + 0x10));
    if (*(int *)local_10b8 != -1) {
      if (*(int *)local_10b8 != 0) {
        LOCK();
        *(int *)local_10b8 = *(int *)local_10b8 + -1;
        local_1039 = *(int *)local_10b8 != 0;
        UNLOCK();
        if ((bool)local_1039) goto LAB_1003e3fcb;
      }
      QArrayData::deallocate(local_10b8,1,8);
    }
LAB_1003e3fcb:
    local_10c0.field0_0x0 = local_1080.field0_0x0;
    if (1 < *(int *)local_1080.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_1080.field0_0x0 = *(int *)local_1080.field0_0x0 + 1;
      local_1039 = *(int *)local_1080.field0_0x0 != 0;
      UNLOCK();
    }
    if (iVar12 != 0) {
      do {
        plVar1 = (long *)param_1[6];
        if (DAT_101119890 < 1) {
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_10c0,0,1,0,0x100);
        }
        else {
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_10c0,1,1,0,0);
        }
        uVar5 = FUN_100768f60();
        puVar15 = (undefined *)(ulong)uVar5;
        cVar2 = (**(code **)(*(long *)param_1[6] + 0x98))();
        if (cVar2 != '\0') {
          plVar1 = (long *)param_1[6];
          (**(code **)(*plVar1 + 0x60))(plVar1,0,0);
          bVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_1038,0x1000,&local_104c);
          uVar10 = 0;
          if ((bVar3 & local_104c == 0x1000) == 1) {
            if (local_1038 == 0x5245) {
              uVar10 = (ulong)CONCAT11((char)uStack_1036,(char)((ushort)uStack_1036 >> 8));
            }
            else {
              uVar10 = 0x200;
              if (local_e38 != 0x5452415020494645) {
                bVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_1038,0x1000,&local_104c);
                uVar10 = 0;
                if ((bVar3 & local_104c == 0x1000) == 1) {
                  (**(code **)(*plVar1 + 0x60))(plVar1,0x1000,0);
                  bVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_1038,0x1000,&local_104c);
                  uVar10 = 0x800;
                  if (((bVar3 & local_104c == 0x1000) == 1) &&
                     (uVar10 = 0x1000,
                     CONCAT44(uStack_1034,CONCAT22(uStack_1036,local_1038)) != 0x5452415020494645))
                  {
                    uVar10 = 0x800;
                  }
                }
              }
            }
          }
          param_1[0x1a] = uVar10;
          if ((int)uVar10 != 0) {
            *(undefined4 *)((long)param_1 + 0x2c) = 1;
            lVar9 = (**(code **)(*param_1 + 0x70))(param_1);
            param_1[0x14] = lVar9;
            param_1[0x13] = lVar9 + 1;
            uVar14 = 0;
            QString::operator=((QString *)(param_1 + 0x24),&local_1080);
            goto LAB_1003e4390;
          }
        }
        if (uVar5 != 0x10) break;
        pQVar8 = (QArrayData *)QString::fromAscii_helper("/dev/r",6);
        QString::QString(&local_1048,0x2f);
        QString::section(&local_10d0,&local_1080,&local_1048,2);
        if (*(int *)local_1048.field0_0x0 != -1) {
          if (*(int *)local_1048.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1048.field0_0x0 = *(int *)local_1048.field0_0x0 + -1;
            local_1039 = *(int *)local_1048.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e426d;
          }
          QArrayData::deallocate((QArrayData *)local_1048.field0_0x0,2,8);
        }
LAB_1003e426d:
        if (1 < *(int *)pQVar8 + 1U) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + 1;
          local_1039 = *(int *)pQVar8 != 0;
          UNLOCK();
        }
        local_10c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
        QString::append(&local_10c8);
        QString::operator=(&local_10c0,&local_10c8);
        if (*(int *)local_10c8.field0_0x0 != -1) {
          if (*(int *)local_10c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_10c8.field0_0x0 = *(int *)local_10c8.field0_0x0 + -1;
            local_1039 = *(int *)local_10c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e42e9;
          }
          QArrayData::deallocate((QArrayData *)local_10c8.field0_0x0,2,8);
        }
LAB_1003e42e9:
        if (*(int *)local_10d0 != -1) {
          if (*(int *)local_10d0 != 0) {
            LOCK();
            *(int *)local_10d0 = *(int *)local_10d0 + -1;
            local_1039 = *(int *)local_10d0 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e4325;
          }
          QArrayData::deallocate(local_10d0,2,8);
        }
LAB_1003e4325:
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_1039 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_1039) goto LAB_1003e435a;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_1003e435a:
        iVar12 = iVar12 + -1;
        puVar15 = &DAT_00000010;
      } while (iVar12 != 0);
    }
    uVar14 = 0xffffffff;
    FUN_1008e3970("","DVDImage",0,"[Dmg]Can not open file: %d",(ulong)puVar15 & 0xffffffff);
LAB_1003e4390:
    if (*(int *)local_10c0.field0_0x0 != -1) {
      if (*(int *)local_10c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_10c0.field0_0x0 = *(int *)local_10c0.field0_0x0 + -1;
        local_1039 = *(int *)local_10c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_1039) goto LAB_1003e43cc;
      }
      QArrayData::deallocate((QArrayData *)local_10c0.field0_0x0,2,8);
    }
  }
LAB_1003e43cc:
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_1080.field0_0x0 != -1) {
    if (*(int *)local_1080.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1080.field0_0x0 = *(int *)local_1080.field0_0x0 + -1;
      local_1039 = *(int *)local_1080.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_1003e4412;
    }
    QArrayData::deallocate((QArrayData *)local_1080.field0_0x0,2,8);
  }
LAB_1003e4412:
  if (*(int *)local_1078 != -1) {
    if (*(int *)local_1078 != 0) {
      LOCK();
      *(int *)local_1078 = *(int *)local_1078 + -1;
      local_1039 = *(int *)local_1078 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_1003e444e;
    }
    QArrayData::deallocate(local_1078,1,8);
  }
LAB_1003e444e:
  if (*(int *)local_1068.field0_0x0 != -1) {
    if (*(int *)local_1068.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1068.field0_0x0 = *(int *)local_1068.field0_0x0 + -1;
      local_1039 = *(int *)local_1068.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_1003e448a;
    }
    QArrayData::deallocate((QArrayData *)local_1068.field0_0x0,2,8);
  }
LAB_1003e448a:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}

