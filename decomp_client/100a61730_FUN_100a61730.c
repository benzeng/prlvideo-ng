
QString * FUN_100a61730(QString *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  undefined4 local_a0;
  QString local_98;
  uint *local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  uint *local_70;
  uint *local_68;
  uint *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100a61250(&local_70);
  if (local_70[3] == local_70[2]) goto LAB_100a6259f;
  local_80 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_78,&local_80,param_2,8,0x10,0x30);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a617d1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a617d1:
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("00000409",8);
  local_90 = (uint *)PTR_shared_null_1021e15e8;
  if (1 < *local_70) {
    FUN_100a63160(&local_70,local_70[1]);
  }
  puVar8 = local_70 + (long)(int)local_70[2] * 2 + 4;
  bVar6 = true;
  bVar9 = true;
  while( true ) {
    if (1 < *local_70) {
      FUN_100a63160(&local_70,local_70[1]);
    }
    if (puVar8 == local_70 + (long)(int)local_70[3] * 2 + 4) break;
    FUN_100a615b0(&local_98,*(long *)puVar8 + *(long *)(*(long *)puVar8 + 0x10));
    if (*(int *)(local_98.field0_0x0 + 4) != 0) {
      iVar5 = QString::indexOf(&local_98,&local_88,0,0);
      bVar2 = false;
      if (iVar5 == -1) {
        bVar2 = bVar9;
      }
      bVar9 = bVar2;
      iVar5 = QString::indexOf(&local_98,&local_78,0,0);
      if (iVar5 != -1) {
        bVar6 = false;
      }
      local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_a0 = 0;
      QString::operator=(&local_a8,&local_98);
      QString::left((int)&local_b0);
      iVar5 = QString::compare_helper
                        (local_b0 + *(long *)(local_b0 + 0x10),*(undefined4 *)(local_b0 + 4),"a",
                         0xffffffff,1);
      local_a0 = CONCAT31(local_a0._1_3_,iVar5 == 0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6197b;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100a6197b:
      local_b8 = (QArrayData *)QString::fromAscii_helper("0409",4);
      uVar3 = QString::endsWith(&local_98,&local_b8,1);
      local_a0._0_2_ = CONCAT11(uVar3,(undefined1)local_a0);
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a619e3;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100a619e3:
      QString::right((int)&local_c0);
      uVar3 = QString::endsWith(&local_98,&local_c0,1);
      local_a0._0_3_ = CONCAT12(uVar3,(undefined2)local_a0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a61a48;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100a61a48:
      FUN_100a62fd0(&local_90,&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a61a93;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
    }
LAB_100a61a93:
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a61850;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_100a61850:
    puVar8 = puVar8 + 2;
  }
  if (local_90[3] != local_90[2]) {
    if (*local_90 < 2) {
      puVar8 = local_90 + (long)(int)local_90[2] * 2 + 4;
    }
    else {
      FUN_100a63530(&local_90,local_90[1]);
      puVar8 = local_90 + (long)(int)local_90[2] * 2 + 4;
      if (1 < *local_90) {
        FUN_100a63530(&local_90,local_90[1]);
      }
    }
    if (puVar8 != local_90 + (long)(int)local_90[3] * 2 + 4) {
      local_68 = local_90 + (long)(int)local_90[3] * 2 + 4;
      local_60 = puVar8;
      FUN_100a635e0(&local_60,&local_68,*(undefined8 *)puVar8);
    }
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    uVar7 = *local_90;
    if (1 < uVar7) {
      FUN_100a63530(&local_90,local_90[1]);
      uVar7 = *local_90;
    }
    *(undefined1 *)(*(long *)(local_90 + (long)(int)local_90[2] * 2 + 4) + 0xb) = 1;
    if (1 < uVar7) {
      FUN_100a63530(&local_90,local_90[1]);
    }
    puVar8 = local_90 + (long)(int)local_90[2] * 2 + 4;
    while( true ) {
      if (1 < *local_90) {
        FUN_100a63530(&local_90,local_90[1]);
      }
      if (puVar8 == local_90 + (long)(int)local_90[3] * 2 + 4) break;
      if (*(char *)(*(long *)puVar8 + 0xb) == '\0') {
        QString::fromUtf8_helper((char *)&local_50,0x1e41978);
        QString::operator=(&local_c8,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a61cf0;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_58,0x1e3d472);
        QString::operator=(&local_c8,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a61cf0;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
      }
LAB_100a61cf0:
      local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      uVar1 = *(undefined8 *)puVar8;
      local_d8 = (QArrayData *)QString::fromAscii_helper("040a",4);
      cVar4 = QString::endsWith(uVar1,&local_d8,1);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a61d67;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100a61d67:
      if (cVar4 == '\0') {
        uVar1 = *(undefined8 *)puVar8;
        local_e0 = (QArrayData *)QString::fromAscii_helper("1809",4);
        cVar4 = QString::endsWith(uVar1,&local_e0,1);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a61e38;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100a61e38:
        if (cVar4 == '\0') {
          local_f0 = (QArrayData *)QString::fromAscii_helper("%1",2);
          QString::right((int)&local_f8);
          QString::arg(&local_e8,&local_f0,&local_f8,0,0x20);
          QString::operator=(&local_d0,&local_e8);
          if (*(int *)local_e8.field0_0x0 != -1) {
            if (*(int *)local_e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
              local_31 = *(int *)local_e8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a61f38;
            }
            QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
          }
LAB_100a61f38:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a61f6e;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_100a61f6e:
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a61fb0;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
        }
        else {
          QString::fromUtf8_helper((char *)&local_40,0x1e3d491);
          QString::operator=(&local_d0,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a61fb0;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
      }
      else {
        QString::fromUtf8_helper((char *)&local_48,0x1e3d487);
        QString::operator=(&local_d0,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a61fb0;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
      }
LAB_100a61fb0:
      local_110 = (QArrayData *)QString::fromAscii_helper("%1:%2",5);
      QString::arg(&local_108,&local_110,&local_d0,0,0x20);
      QString::arg(&local_100,&local_108,*(undefined8 *)puVar8,0,0x20);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6203f;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100a6203f:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a62075;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100a62075:
      local_128 = (QArrayData *)
                  QString::fromAscii_helper
                            ("\n\t\t<gs:InputLanguageID Action=\"add\" ID=\"%1\" %2/>",0x30);
      QString::arg(&local_120,&local_128,&local_100,0,0x20);
      QString::arg(&local_118,&local_120,&local_c8,0,0x20);
      QString::append(param_1);
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6210e;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_100a6210e:
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a62144;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100a62144:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6217a;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_100a6217a:
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a621b0;
        }
        QArrayData::deallocate(local_100,2,8);
      }
LAB_100a621b0:
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a61be0;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_100a61be0:
      puVar8 = puVar8 + 2;
    }
    if (bVar9) {
      local_140 = (QArrayData *)
                  QString::fromAscii_helper
                            ("\n\t\t<gs:InputLanguageID Action=\"remove\" ID=\"%1:%2\"/>",0x33);
      QString::right((int)&local_148);
      QString::arg(&local_138,&local_140,&local_148,0,0x20);
      QString::arg(&local_130,&local_138,&local_88,0,0x20);
      QString::append(param_1);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a622bc;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_100a622bc:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a622f2;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100a622f2:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a62328;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_100a62328:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6235e;
        }
        QArrayData::deallocate(local_140,2,8);
      }
    }
LAB_100a6235e:
    if ((bVar6) && (cVar4 = operator==(&local_78,&local_88), cVar4 == '\0')) {
      local_160 = (QArrayData *)
                  QString::fromAscii_helper
                            ("\n\t\t<gs:InputLanguageID Action=\"remove\" ID=\"%1:%2\"/>",0x33);
      QString::right((int)&local_168);
      QString::arg(&local_158,&local_160,&local_168,0,0x20);
      QString::arg(&local_150,&local_158,&local_78,0,0x20);
      QString::append(param_1);
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a62434;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100a62434:
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a6246a;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100a6246a:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a624a0;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_100a624a0:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a624d6;
        }
        QArrayData::deallocate(local_160,2,8);
      }
    }
LAB_100a624d6:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a6250c;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
  }
LAB_100a6250c:
  if (*local_90 != 0xffffffff) {
    if (*local_90 != 0) {
      LOCK();
      *local_90 = *local_90 - 1;
      local_31 = *local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6253f;
    }
    FUN_100a630b0(&local_90,local_90);
  }
LAB_100a6253f:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6256f;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100a6256f:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a6259f;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a6259f:
  FUN_1000ee530(&local_70);
  return param_1;
}

