
undefined8 * FUN_100027520(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  QArrayData *pQVar7;
  QFileInfo *this;
  undefined *puVar8;
  long lVar9;
  int local_12c;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QArrayData *local_108;
  QString local_100;
  QFileInfo local_f8 [8];
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  undefined *local_d0;
  Data *local_c8;
  QDir local_c0 [8];
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar8 = PTR_shared_null_100ba20d0;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  uVar4 = FUN_100060640();
  FUN_1008e3970("PTIAHOST","vm",0,"Searching file package %d (execution mode is %d) ...",param_3,
                uVar4);
  if (param_3 < 0x20) {
    if (param_3 < 8) {
      if (param_3 == 1) {
        FUN_1006e0980(&local_78,0x9ff);
        QString::operator=(&local_68,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100027923;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
      }
      else {
        if (param_3 != 2) goto LAB_1000278ad;
        FUN_1006e0980(&local_80,0x703);
        QString::operator=(&local_68,&local_80);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100027923;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
      }
LAB_100027923:
      local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar8;
      FUN_1006e01a0(&local_f0,uVar4);
      QString::operator=(&local_88,&local_f0);
      if (*(int *)local_f0.field0_0x0 != -1) {
        if (*(int *)local_f0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
          local_31 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027d3e;
        }
        QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
      }
LAB_100027d3e:
      if (*(uint *)(local_88.field0_0x0 + 4) == 0) {
        FUN_1008e3970("PTIAHOST","vm",0,
                      "File package path is empty. Unsupported app executed mode %d",uVar4);
        *param_1 = puVar8;
      }
      else {
        uVar3 = QDir::separator();
        local_108 = (QArrayData *)local_88.field0_0x0;
        if (1 < *(uint *)local_88.field0_0x0 + 1) {
          LOCK();
          *(uint *)local_88.field0_0x0 = *(uint *)local_88.field0_0x0 + 1;
          local_31 = *(uint *)local_88.field0_0x0 != 0;
          UNLOCK();
        }
        uVar5 = *(uint *)(local_88.field0_0x0 + 4);
        if ((1 < *(uint *)local_88.field0_0x0) ||
           ((*(uint *)(local_88.field0_0x0 + 8) & 0x7fffffff) < uVar5 + 2)) {
          QString::reallocData((uint)&local_108,SUB41(uVar5 + 2,0));
          uVar5 = *(uint *)(local_108 + 4);
        }
        *(uint *)(local_108 + 4) = uVar5 + 1;
        *(undefined2 *)(local_108 + (long)(int)uVar5 * 2 + *(long *)(local_108 + 0x10)) = uVar3;
        *(undefined2 *)
         (local_108 + (long)(int)*(uint *)(local_108 + 4) * 2 + *(long *)(local_108 + 0x10)) = 0;
        local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_108;
        if (1 < *(uint *)local_108 + 1) {
          LOCK();
          *(uint *)local_108 = *(uint *)local_108 + 1;
          local_31 = *(uint *)local_108 != 0;
          UNLOCK();
        }
        QString::append(&local_100);
        QFileInfo::QFileInfo(local_f8,&local_100);
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100027e4e;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_100027e4e:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100027e84;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100027e84:
        cVar2 = QFileInfo::exists();
        if (cVar2 == '\0') {
          QString::toUtf8();
          lVar9 = *(long *)(local_118 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("PTIAHOST","vm",0,
                        "Unable to locate file package (Id=%d): Path=%s; FileName=%s",param_3,
                        local_118 + lVar9,local_120 + *(long *)(local_120 + 0x10));
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_31 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100027fc2;
            }
            QArrayData::deallocate(local_120,1,8);
          }
LAB_100027fc2:
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_31 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100027ff8;
            }
            QArrayData::deallocate(local_118,1,8);
          }
LAB_100027ff8:
          QString::fromUtf8_helper((char *)&local_40,0xa320a0);
          QString::operator=(&local_60,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100028047;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
        else {
          QFileInfo::absoluteFilePath();
          QString::operator=(&local_60,&local_110);
          if (*(int *)local_110.field0_0x0 != -1) {
            if (*(int *)local_110.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
              local_31 = *(int *)local_110.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100028047;
            }
            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
          }
        }
LAB_100028047:
        *param_1 = local_60.field0_0x0;
        if (1 < *(int *)local_60.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
        }
        QFileInfo::~QFileInfo(local_f8);
      }
      goto LAB_10002806c;
    }
    if (param_3 == 8) {
      FUN_1006e0980(&local_70,0x8ff);
      QString::operator=(&local_68,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027923;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
      goto LAB_100027923;
    }
    if (param_3 == 0x10) goto LAB_1000277f4;
LAB_1000278ad:
    *param_1 = puVar8;
  }
  else {
    if (param_3 < 0x21) {
      QString::fromUtf8_helper((char *)&local_58,0x9e1265);
      QString::operator=(&local_68,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000277f4;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
    else if (1 < param_3 - 0x40U) {
      if (param_3 == 0x21) {
        QString::fromUtf8_helper((char *)&local_50,0x9e1275);
        QString::operator=(&local_68,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000277f4;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
      }
      else {
        if (param_3 != 0x22) goto LAB_1000278ad;
        QString::fromUtf8_helper((char *)&local_48,0x9e1286);
        QString::operator=(&local_68,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000277f4;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
      }
    }
LAB_1000277f4:
    local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar8;
    uVar5 = param_3 - 0x10;
    if (0x31 < uVar5) goto LAB_100027923;
    if ((0x3000000000001U >> ((ulong)uVar5 & 0x3f) & 1) == 0) {
      if ((0x70000UL >> ((ulong)uVar5 & 0x3f) & 1) == 0) goto LAB_100027923;
      FUN_1006de3a0(&local_e8);
      QString::operator=(&local_88,&local_e8);
      if (*(int *)local_e8.field0_0x0 != -1) {
        if (*(int *)local_e8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
          local_31 = *(int *)local_e8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027d3e;
        }
        QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
      }
      goto LAB_100027d3e;
    }
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar8;
    if (param_3 == 0x41) {
      local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("drweb",5);
      QString::operator=(&local_90,&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027a53;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
    }
    else if (param_3 == 0x40) {
      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("norton",6)
      ;
      QString::operator=(&local_90,&local_a0);
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027a53;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
    }
    else if (param_3 == 0x10) {
      local_98.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("kaspersky",9);
      QString::operator=(&local_90,&local_98);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027a53;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
    }
LAB_100027a53:
    FUN_1006de3a0(&local_b0);
    QString::operator=(&local_88,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_31 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027aa5;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100027aa5:
    uVar6 = QDir::separator();
    QString::QString(&local_b8,uVar6);
    QString::append(&local_b8);
    QString::append(&local_88);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027b11;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_100027b11:
    QDir::QDir(local_c0,&local_88);
    pQVar7 = (QArrayData *)QString::fromAscii_helper("*.exe",5);
    local_d0 = PTR_shared_null_100ba2188;
    local_d8 = pQVar7;
    FUN_10000c490(&local_d0,&local_d8);
    QDir::entryInfoList(&local_c8,local_c0,&local_d0,0xffffffff,0xffffffff);
    FUN_100013180(&local_d0);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027bc0;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
LAB_100027bc0:
    if (*(int *)(local_c8 + 0xc) - *(int *)(local_c8 + 8) == 1) {
      QFileInfo::fileName();
      QString::operator=(&local_68,&local_e0);
      local_12c = 5;
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100027c54;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
    }
    else {
      *param_1 = puVar8;
      local_12c = 1;
    }
LAB_100027c54:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027ce8;
      }
      iVar1 = *(int *)(local_c8 + 0xc);
      if (iVar1 != *(int *)(local_c8 + 8)) {
        lVar9 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar1 * -8;
        this = (QFileInfo *)(local_c8 + (long)iVar1 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(this);
          this = this + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(local_c8);
      puVar8 = PTR_shared_null_100ba20d0;
    }
LAB_100027ce8:
    QDir::~QDir(local_c0);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100027d31;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100027d31:
    if (local_12c == 5) goto LAB_100027d3e;
LAB_10002806c:
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10002809c;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
  }
LAB_10002809c:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000280cc;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000280cc:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return param_1;
}

