
/* CBaseNode::saveToFile(QFile*, bool, bool) */

int CBaseNode::saveToFile(QFile *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  QArrayData *pQVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined7 in_register_00000031;
  QString *pQVar13;
  int iVar14;
  ulong uVar15;
  QString *pQVar16;
  bool bVar17;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar18;
  QArrayData *local_190;
  QVariant local_188 [16];
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  int *local_158;
  int *local_150;
  int *local_148;
  uint local_140;
  QString local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70 [2];
  QArrayData *local_60;
  QString local_58;
  bool local_49;
  undefined1 local_48 [16];
  long local_38;
  
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  pQVar13 = (QString *)CONCAT71(in_register_00000031,param_2);
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar10;
  if (pQVar13 == (QString *)0x0) {
    QString::fromUtf8_helper((char *)&local_58,0x9e0227);
    QString::operator=((QString *)(param_1 + 0x30),&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_49 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010c34;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100010c34:
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"%s",local_60 + *(long *)(local_60 + 0x10));
    iVar14 = -0x7ffffbdc;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_49 = *(int *)local_60 != 0;
        UNLOCK();
        if (local_49) goto LAB_10001134f;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_10001134f;
  }
  cVar3 = QIODevice::isOpen();
  if (cVar3 != '\0') {
    (**(code **)(pQVar13->field0_0x0 + 0x70))(pQVar13);
  }
  QFile::QFile((QFile *)local_70);
  pQVar16 = pQVar13;
  if (param_1[0x90] != (QFile)0x0) {
    local_88 = (QArrayData *)QString::fromAscii_helper("%1.tmp.%2",9);
    (**(code **)(pQVar13->field0_0x0 + 0xe0))(&local_90,pQVar13);
    QString::arg(&local_80,&local_88,&local_90,0,0x20);
    FUN_1007d6bd0(local_48);
    FUN_1007d6a70(&local_98,local_48);
    QString::arg(&local_78,&local_80,&local_98,0,0x20);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_49 = *(int *)local_98 != 0;
        UNLOCK();
        if (local_49) goto LAB_1000105a2;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_1000105a2:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if (local_49) goto LAB_1000105d2;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1000105d2:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_49 = *(int *)local_90 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010608;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100010608:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010638;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100010638:
    pQVar16 = local_70;
    QFile::setFileName(pQVar16);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_49 = *(int *)local_78 != 0;
        if (*(int *)local_78 != 0) goto LAB_100010678;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100010678:
  cVar3 = (**(code **)(pQVar16->field0_0x0 + 0x68))(pQVar16,3);
  if (cVar3 == '\0') {
    local_b0 = (QArrayData *)
               QString::fromAscii_helper("Error: cannot open XML file \'%1\', err=\'%2\'!",0x2b);
    (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_b8,pQVar16);
    QString::arg(&local_a8,&local_b0,&local_b8,0,0x20);
    QIODevice::errorString();
    QString::arg(&local_a0,&local_a8,&local_c0,0,0x20);
    QString::operator=((QString *)(param_1 + 0x30),&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_49 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010d73;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_100010d73:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010da9;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100010da9:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010ddf;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100010ddf:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_49 = *(int *)local_b8 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010e15;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100010e15:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if (local_49) goto LAB_100010e4b;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100010e4b:
    QString::toUtf8();
    FUN_1008e3970("","vm",0,"%s",local_c8 + *(long *)(local_c8 + 0x10));
    iVar14 = -0x7ffffbdc;
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
        if (local_49) goto LAB_100011346;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
  }
  else {
    toString(SUB81(&local_d8,0),SUB81(param_1,0));
    QString::toUtf8();
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        UNLOCK();
        local_49 = *(int *)local_d8 != 0;
        if (*(int *)local_d8 != 0) goto LAB_1000106f3;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1000106f3:
    uVar15 = (ulong)*(int *)(local_d0 + 4);
    cVar3 = (**(code **)(pQVar16->field0_0x0 + 0xe8))(pQVar16,uVar15);
    if ((cVar3 == '\0') &&
       (uVar7 = (**(code **)(pQVar16->field0_0x0 + 0x80))(pQVar16), uVar7 != uVar15)) {
      (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_e0,pQVar16);
      uVar7 = FUN_100769600(&local_e0);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          UNLOCK();
          local_49 = *(int *)local_e0 != 0;
          if (*(int *)local_e0 != 0) goto LAB_100010f27;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100010f27:
      iVar14 = -0x7ffffbdc;
      if (uVar7 < uVar15) {
        iVar14 = -0x7ffffbad;
      }
      (**(code **)(pQVar16->field0_0x0 + 0x70))(pQVar16);
    }
    else {
      cVar3 = (**(code **)(pQVar16->field0_0x0 + 0x88))(pQVar16,0);
      if (cVar3 == '\0') {
LAB_100010767:
        (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_f0,pQVar16);
        QString::toUtf8();
        FUN_1008e3970("","vm",0,"Unable to write to file \'%s\'",
                      local_e8 + *(long *)(local_e8 + 0x10));
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_49 = *(int *)local_e8 != 0;
            UNLOCK();
            if (local_49) goto LAB_1000107ef;
          }
          QArrayData::deallocate(local_e8,1,8);
        }
LAB_1000107ef:
        iVar14 = -0x7ffffbdc;
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_49 = *(int *)local_f0 != 0;
            UNLOCK();
            if (local_49) goto LAB_10001082b;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
      }
      else {
        uVar7 = QIODevice::write((char *)pQVar16,(longlong)(local_d0 + *(long *)(local_d0 + 0x10)));
        iVar14 = 0;
        if (uVar7 != uVar15) goto LAB_100010767;
      }
LAB_10001082b:
      cVar3 = QFileDevice::flush();
      if (cVar3 == '\0') {
        (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_100,pQVar16);
        QString::toUtf8();
        pQVar9 = local_f8;
        lVar10 = *(long *)(local_f8 + 0x10);
        uVar4 = QFileDevice::error();
        FUN_1008e3970("","vm",0,"Unable to flush data \'%s\' with %d",pQVar9 + lVar10,uVar4);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_49 = *(int *)local_f8 != 0;
            UNLOCK();
            if (local_49) goto LAB_1000108dd;
          }
          QArrayData::deallocate(local_f8,1,8);
        }
LAB_1000108dd:
        iVar14 = -0x7ffffbdc;
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_49 = *(int *)local_100 != 0;
            UNLOCK();
            if (local_49) goto LAB_100010919;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
LAB_100010919:
      iVar5 = QFileDevice::handle();
      iVar6 = _fcntl(iVar5,0x33);
      if (iVar6 == -1) {
        piVar8 = ___error();
        iVar6 = *piVar8;
        (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_110,pQVar16);
        QString::toUtf8();
        pQVar9 = local_108 + *(long *)(local_108 + 0x10);
        FUN_1008e3970("","vm",0,"fsync() failed - errno %d. fd %d. Filename = %s",iVar6,iVar5,pQVar9
                     );
        uVar18 = (undefined4)((ulong)pQVar9 >> 0x20);
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            UNLOCK();
            local_49 = *(int *)local_108 != 0;
            if (*(int *)local_108 != 0) goto LAB_1000109e2;
          }
          QArrayData::deallocate(local_108,1,8);
        }
LAB_1000109e2:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            UNLOCK();
            local_49 = *(int *)local_110 != 0;
            if (*(int *)local_110 != 0) goto LAB_100010a18;
          }
          QArrayData::deallocate(local_110,2,8);
        }
      }
LAB_100010a18:
      (**(code **)(pQVar16->field0_0x0 + 0x70))(pQVar16);
      if (-1 < iVar14) {
        if (param_1[0x90] != (QFile)0x0) {
          (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_118,pQVar16);
          (**(code **)(pQVar13->field0_0x0 + 0xe0))(&local_120,pQVar13);
          cVar3 = FUN_1006f3780(&local_118,&local_120);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_49 = *(int *)local_120 != 0;
              UNLOCK();
              if (local_49) goto LAB_100010ab2;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_100010ab2:
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_49 = *(int *)local_118 != 0;
              UNLOCK();
              if (local_49) goto LAB_100010ae8;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_100010ae8:
          if (cVar3 == '\0') {
            if (pQVar16 == pQVar13) {
              FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","pFile!= pOrigFile",
                            "../XmlModel/ParallelsObjects/CBaseNode.cpp",CONCAT44(uVar18,0x1d9),
                            "saveToFile");
            }
            cVar3 = QFile::remove();
            iVar14 = -0x7ffffbdc;
            if (cVar3 != '\0') goto LAB_100011305;
            (**(code **)(pQVar16->field0_0x0 + 0xe0))(&local_130,pQVar16);
            QString::toUtf8();
            FUN_1008e3970("","vm",0,"Can\'t remove tmp file \'%s\'",
                          local_128 + *(long *)(local_128 + 0x10));
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_49 = *(int *)local_128 != 0;
                UNLOCK();
                if (local_49) goto LAB_10001102f;
              }
              QArrayData::deallocate(local_128,1,8);
            }
LAB_10001102f:
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_49 = *(int *)local_130 != 0;
                UNLOCK();
                if (local_49) goto LAB_100011305;
              }
              QArrayData::deallocate(local_130,2,8);
            }
            goto LAB_100011305;
          }
        }
        (**(code **)(pQVar13->field0_0x0 + 0xe0))(&local_138,pQVar13);
        QString::operator=((QString *)(param_1 + 0x28),&local_138);
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_49 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if (local_49) goto LAB_100010b4d;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_100010b4d:
        local_158 = *(int **)(param_1 + 0x78);
        if (*local_158 != -1) {
          if (*local_158 == 0) {
            QListData::detach((int)&local_158);
            iVar14 = local_158[2];
            if (iVar14 != local_158[3]) {
              puVar12 = (undefined8 *)
                        (*(long *)(param_1 + 0x78) + 0x10 +
                        (long)*(int *)(*(long *)(param_1 + 0x78) + 8) * 8);
              piVar8 = local_158 + (long)iVar14 * 2 + 4;
              lVar10 = (long)local_158[3] * 8 + (long)iVar14 * -8;
              do {
                piVar1 = (int *)*puVar12;
                *(int **)piVar8 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar8 = piVar8 + 2;
                puVar12 = puVar12 + 1;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
          }
          else {
            LOCK();
            *local_158 = *local_158 + 1;
            local_49 = *local_158 != 0;
            UNLOCK();
          }
        }
        local_150 = local_158 + (long)local_158[2] * 2 + 4;
        local_148 = local_158 + (long)local_158[3] * 2 + 4;
        local_140 = 1;
        if (local_158[2] != local_158[3]) {
          do {
            local_160 = *(QArrayData **)local_150;
            if (1 < *(int *)local_160 + 1U) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + 1;
              local_49 = *(int *)local_160 != 0;
              UNLOCK();
            }
            if (local_140 != 0) {
              if (0 < DAT_1011b55f8) {
                QString::toUtf8();
                pQVar9 = local_168 + *(long *)(local_168 + 0x10);
                pcVar2 = *(code **)(*(long *)param_1 + 0x40);
                local_190 = local_160;
                if (1 < *(int *)local_160 + 1U) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + 1;
                  local_49 = *(int *)local_160 != 0;
                  UNLOCK();
                }
                (*pcVar2)(local_188,param_1,&local_190);
                QVariant::toString();
                QString::toUtf8();
                FUN_1008e3970("","vm",1,"SavedDoc: path: \'%s\', value: \'%s\'",pQVar9,
                              local_170 + *(long *)(local_170 + 0x10));
                if (*(int *)local_170 != -1) {
                  if (*(int *)local_170 != 0) {
                    LOCK();
                    *(int *)local_170 = *(int *)local_170 + -1;
                    local_49 = *(int *)local_170 != 0;
                    UNLOCK();
                    if (local_49) goto LAB_1000111d7;
                  }
                  QArrayData::deallocate(local_170,1,8);
                }
LAB_1000111d7:
                if (*(int *)local_178 != -1) {
                  if (*(int *)local_178 != 0) {
                    LOCK();
                    *(int *)local_178 = *(int *)local_178 + -1;
                    local_49 = *(int *)local_178 != 0;
                    UNLOCK();
                    if (local_49) goto LAB_10001120d;
                  }
                  QArrayData::deallocate(local_178,2,8);
                }
LAB_10001120d:
                QVariant::~QVariant(local_188);
                if (*(int *)local_190 != -1) {
                  if (*(int *)local_190 != 0) {
                    LOCK();
                    *(int *)local_190 = *(int *)local_190 + -1;
                    local_49 = *(int *)local_190 != 0;
                    UNLOCK();
                    if (local_49) goto LAB_10001124b;
                  }
                  QArrayData::deallocate(local_190,2,8);
                }
LAB_10001124b:
                if (*(int *)local_168 != -1) {
                  if (*(int *)local_168 != 0) {
                    LOCK();
                    *(int *)local_168 = *(int *)local_168 + -1;
                    local_49 = *(int *)local_168 != 0;
                    UNLOCK();
                    if (local_49) goto LAB_100011281;
                  }
                  QArrayData::deallocate(local_168,1,8);
                }
              }
LAB_100011281:
              local_140 = 0;
            }
            if (*(int *)local_160 != -1) {
              if (*(int *)local_160 != 0) {
                LOCK();
                *(int *)local_160 = *(int *)local_160 + -1;
                local_49 = *(int *)local_160 != 0;
                UNLOCK();
                if (local_49) goto LAB_1000112c1;
              }
              QArrayData::deallocate(local_160,2,8);
            }
LAB_1000112c1:
            local_150 = local_150 + 2;
            uVar11 = local_140 ^ 1;
            bVar17 = local_140 != 1;
            local_140 = uVar11;
          } while ((bVar17) && (local_150 != local_148));
        }
        iVar14 = 0;
        FUN_100013180(&local_158);
      }
    }
LAB_100011305:
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_49 = *(int *)local_d0 != 0;
        UNLOCK();
        if (local_49) goto LAB_100011346;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
  }
LAB_100011346:
  QFile::~QFile((QFile *)local_70);
LAB_10001134f:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar14;
}

