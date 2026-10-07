
undefined8 FUN_1000b2c40(long param_1,long *param_2)

{
  bool *pbVar1;
  long lVar2;
  QArrayData *pQVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  bool *pbVar14;
  undefined8 uVar15;
  bool bVar16;
  ulong local_98;
  QString local_90;
  QFile local_88 [16];
  QString local_78;
  QFile local_70 [16];
  QArrayData *local_60;
  QString local_58;
  ulong local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_98 = 0;
  if (*(long *)(param_1 + 0x1910) != 0) {
    local_98 = FUN_1007628b0();
  }
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    pbVar14 = (bool *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    bVar9 = false;
    bVar6 = false;
    bVar8 = false;
    bVar7 = false;
    iVar12 = 0;
    bVar5 = false;
    do {
      pQVar3 = *(QArrayData **)pbVar14;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      bVar4 = bVar5;
      if (*(int *)(pQVar3 + 4) == 0) {
        bVar16 = false;
      }
      else {
        iVar11 = QString::compare_helper
                           (pQVar3 + *(long *)(pQVar3 + 0x10),*(int *)(pQVar3 + 4),"--bufsize",
                            0xffffffff,1);
        if ((iVar11 == 0) &&
           (pbVar14 = pbVar14 + 8,
           pbVar14 != (bool *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8))) {
          iVar12 = QString::toUInt(pbVar14,0);
          iVar12 = iVar12 << 0x14;
          bVar16 = true;
        }
        else {
          iVar11 = QString::compare_helper
                             (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                              "--enable",0xffffffff,1);
          bVar16 = true;
          if (iVar11 == 0) {
            bVar7 = true;
          }
          else {
            iVar11 = QString::compare_helper
                               (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                "--start",0xffffffff,1);
            if ((iVar11 == 0) ||
               (iVar11 = QString::compare_helper
                                   (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                    "--stop",0xffffffff,1), iVar11 == 0)) {
              local_50 = 0xffffffffffffffff;
              pbVar1 = pbVar14 + 8;
              if ((pbVar1 != (bool *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8)) &&
                 (cVar10 = FUN_100762bf0(pbVar1,&local_50), cVar10 != '\0')) {
                pbVar14 = pbVar1;
              }
              iVar11 = QString::compare_helper
                                 (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                  "--start",0xffffffff,1);
              if (iVar11 == 0) {
                local_98 = local_98 | local_50;
              }
              else {
                local_98 = local_98 & ~local_50;
              }
              bVar8 = true;
              bVar16 = true;
            }
            else {
              iVar11 = QString::compare_helper
                                 (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                  "--dump",0xffffffff,1);
              bVar16 = true;
              if (iVar11 == 0) {
                bVar6 = true;
              }
              else {
                iVar11 = QString::compare_helper
                                   (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                    "--parse",0xffffffff,1);
                bVar16 = true;
                if (iVar11 == 0) {
                  bVar9 = true;
                }
                else {
                  iVar11 = QString::compare_helper
                                     (pQVar3 + *(long *)(pQVar3 + 0x10),*(undefined4 *)(pQVar3 + 4),
                                      "--reset",0xffffffff,1);
                  bVar16 = iVar11 == 0;
                  bVar4 = true;
                  if (!bVar16) {
                    bVar4 = bVar5;
                  }
                }
              }
            }
          }
        }
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000b2f4d;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1000b2f4d:
      if (!bVar16) goto LAB_1000b2fd9;
      pbVar14 = pbVar14 + 8;
      bVar5 = bVar4;
    } while (pbVar14 != (bool *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8));
    if (bVar4) {
      if (*(long *)(param_1 + 0x1910) != 0) {
        FUN_100762b60();
        return 0;
      }
      pcVar13 = "eTrace in not initialized yet";
      goto LAB_1000b2fee;
    }
    if ((bVar6) || (!bVar9)) {
      if (bVar6) {
        if (*(long *)(param_1 + 0x1910) != 0) {
          pcVar13 = (char *)FUN_1008e42f0();
          local_60 = (QArrayData *)QString::fromAscii_helper("/",1);
          if (pcVar13 != (char *)0x0) {
            _strlen(pcVar13);
          }
          QString::fromUtf8_helper((char *)&local_58,(int)pcVar13);
          QString::append(&local_58);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b30d3;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_1000b30d3:
          local_78.field0_0x0 = local_58.field0_0x0;
          if (1 < *(int *)local_58.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x9e9299);
          QString::append(&local_78);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b313e;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1000b313e:
          QFile::QFile(local_70,&local_78);
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000b317b;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
LAB_1000b317b:
          cVar10 = FUN_1007629e0(*(undefined8 *)(param_1 + 0x1910),local_70);
          uVar15 = 0x80000009;
          if (cVar10 == '\0') goto LAB_1000b327e;
          if (bVar9) {
            local_90.field0_0x0 = local_58.field0_0x0;
            if (1 < *(int *)local_58.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)&local_48,0x9e92ad);
            QString::append(&local_90);
            if (*(int *)local_48 != -1) {
              if (*(int *)local_48 != 0) {
                LOCK();
                *(int *)local_48 = *(int *)local_48 + -1;
                local_31 = *(int *)local_48 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000b3218;
              }
              QArrayData::deallocate(local_48,2,8);
            }
LAB_1000b3218:
            QFile::QFile(local_88,&local_90);
            if (*(int *)local_90.field0_0x0 != -1) {
              if (*(int *)local_90.field0_0x0 != 0) {
                LOCK();
                *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
                local_31 = *(int *)local_90.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000b325e;
              }
              QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
            }
LAB_1000b325e:
            cVar10 = FUN_100762f20(local_70,local_88);
            QFile::~QFile(local_88);
            if (cVar10 == '\0') goto LAB_1000b327e;
          }
          uVar15 = 0;
LAB_1000b327e:
          QFile::~QFile(local_70);
          if (*(int *)local_58.field0_0x0 == -1) {
            return uVar15;
          }
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_58.field0_0x0 != 0) {
              return uVar15;
            }
            local_31 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          return uVar15;
        }
      }
      else {
        if (!bVar8) {
          if (bVar7) {
            *(int *)(*(long *)(param_1 + 0x1938) + 0x3eb6c) = iVar12;
            FUN_1000acd00(param_1,0x80000000000,0,1);
            return 0;
          }
          goto LAB_1000b2fd9;
        }
        if (*(long *)(param_1 + 0x1910) != 0) {
          FUN_100762800(*(long *)(param_1 + 0x1910),local_98);
          return 0;
        }
      }
      pcVar13 = "eTrace is not initialized yet";
      goto LAB_1000b2fee;
    }
  }
LAB_1000b2fd9:
  pcVar13 = "Invalid eTrace command format";
LAB_1000b2fee:
  FUN_1008e3970("","vm",0,pcVar13);
  return 0x80000009;
}

