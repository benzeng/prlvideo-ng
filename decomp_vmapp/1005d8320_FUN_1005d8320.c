
undefined8 FUN_1005d8320(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  QArrayData *pQVar14;
  undefined *puVar15;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar16;
  uint local_1dc;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined *local_188;
  int *local_180;
  long *local_178;
  long *local_170;
  undefined4 local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  undefined *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  int *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar16 = (undefined4)((ulong)in_stack_fffffffffffffde8 >> 0x20);
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = *param_1;
  local_38 = lVar2;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) {
    FUN_1008e3970("","vdisk",0,"Error: invalid VMDK pointer!");
    if ((*param_1 == 0) || (uVar12 = 0x80021025, *(long *)(*param_1 + 0x10) == 0)) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                    "VMwareDiskDescriptor.cpp",CONCAT44(uVar16,0x104),"ReparentVMDK");
      uVar12 = 0x80021025;
    }
    goto LAB_1005d97f7;
  }
  if (lVar8 == *param_2) {
    FUN_1008e3970("","vdisk",0,"Error: can\'t reparent VMDK to itself");
    uVar12 = 0x80021025;
    goto LAB_1005d97f7;
  }
  FUN_1007d6870(&local_48);
  if ((*param_2 == 0) || (*(long *)(*param_2 + 0x10) == 0)) {
    if ((*param_3 == 0) || (*(long *)(*param_3 + 0x10) == 0)) {
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: can\'t reparent VMDK \'%s\' in case of invalid root VMDK",
                    local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_49 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d86e3;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_1005d86e3:
      uVar12 = 0x80021025;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_49 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d97f7;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
      goto LAB_1005d97f7;
    }
    lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
    uVar12 = 0;
    if (lVar8 != 0) {
      uVar12 = *(undefined8 *)(lVar8 + 0x10);
    }
    local_c0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
    local_c8 = (QArrayData *)QString::fromAscii_helper("parentFileNameHint",0x12);
    FUN_1006af990(uVar12,&local_c0,&local_c8);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d85da;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1005d85da:
    local_1dc = 0xffffffff;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d8a20;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
  else {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QFileInfo::absolutePath();
    QFileInfo::absolutePath();
    cVar5 = operator==(&local_60,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_49 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d8408;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1005d8408:
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_49 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d8438;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1005d8438:
    if (cVar5 == '\0') {
      QFileInfo::absoluteFilePath();
      QString::operator=(&local_58,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_49 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d8781;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
    else {
      QFileInfo::fileName();
      QString::operator=(&local_58,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_49 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d8781;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
LAB_1005d8781:
    lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
    uVar12 = 0;
    if (lVar8 != 0) {
      uVar12 = *(undefined8 *)(lVar8 + 0x10);
    }
    local_80 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
    local_88 = (QArrayData *)QString::fromAscii_helper("parentFileNameHint",0x12);
    local_90 = PTR_shared_null_100ba2188;
    FUN_10000c490(&local_90,&local_58);
    cVar5 = FUN_1006ad450(uVar12,&local_80,&local_88,&local_90);
    FUN_100013180(&local_90);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d883a;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1005d883a:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d886a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1005d886a:
    if (cVar5 == '\0') {
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      pQVar14 = local_98;
      lVar8 = *(long *)(local_98 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,
                    "Error: can\'t update VMDK \'%s\' with \'parentFileNameHint\' = \'%s\'",
                    pQVar14 + lVar8,local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_49 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d8966;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
LAB_1005d8966:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_49 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d899c;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_1005d899c:
      local_1dc = 0xffffffff;
      bVar4 = true;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_49 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d89e2;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
    else {
      lVar8 = *param_2;
      bVar4 = false;
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
      }
      local_48 = *(undefined8 *)(lVar9 + 0x218);
      local_40 = *(undefined8 *)(lVar9 + 0x220);
      local_1dc = *(uint *)(*(long *)(lVar8 + 0x10) + 0x210);
    }
LAB_1005d89e2:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_49 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1005d8a12;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1005d8a12:
    uVar12 = 0x80021025;
    if (bVar4) goto LAB_1005d97f7;
  }
LAB_1005d8a20:
  lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
  uVar12 = 0;
  if (lVar8 != 0) {
    uVar12 = *(undefined8 *)(lVar8 + 0x10);
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
  local_d8 = (QArrayData *)QString::fromAscii_helper("parentCID",9);
  puVar15 = PTR_shared_null_100ba2188;
  local_e0 = PTR_shared_null_100ba2188;
  local_e8 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar7 = QString::sprintf((char *)&local_e8,"%08x",(ulong)local_1dc);
  FUN_10000c490(&local_e0,uVar7);
  cVar5 = FUN_1006ad450(uVar12,&local_d0,&local_d8,&local_e0);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_49 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d8b05;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005d8b05:
  FUN_100013180(&local_e0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_49 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d8b47;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1005d8b47:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_49 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d8b7d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1005d8b7d:
  if (cVar5 != '\0') {
    cVar5 = FUN_1007ea210(&local_48);
    if (cVar5 != '\0') {
      local_100 = (int *)puVar15;
      lVar8 = *(long *)(*(long *)(*param_3 + 0x10) + 0x200);
      uVar12 = 0;
      if (lVar8 != 0) {
        uVar12 = *(undefined8 *)(lVar8 + 0x10);
      }
      local_108 = (QArrayData *)QString::fromAscii_helper("DDB",3);
      cVar5 = FUN_1006afe20(uVar12,&local_108,&local_100);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_49 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1005d8c1d;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1005d8c1d:
      if (cVar5 == '\0') {
        QFileInfo::absoluteFilePath();
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error: can\'t open get all DDB keys of root VMDK \'%s\'",
                      local_110 + *(long *)(local_110 + 0x10));
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_49 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d9094;
          }
          QArrayData::deallocate(local_110,1,8);
        }
LAB_1005d9094:
        iVar6 = 1;
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_49 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d97a3;
          }
          QArrayData::deallocate(local_118,2,8);
        }
      }
      else {
        local_120 = puVar15;
        lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
        uVar12 = 0;
        if (lVar8 != 0) {
          uVar12 = *(undefined8 *)(lVar8 + 0x10);
        }
        local_128 = (QArrayData *)QString::fromAscii_helper("DDB",3);
        local_130 = (QArrayData *)QString::fromAscii_helper("ddb.longContentID",0x11);
        lVar8 = FUN_1006aff80(uVar12,&local_128,&local_130);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_49 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d8ccc;
          }
          QArrayData::deallocate(local_130,2,8);
        }
LAB_1005d8ccc:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_49 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d8d02;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1005d8d02:
        if (lVar8 != 0) {
          FUN_10051afa0(&local_120,lVar8 + 0x20);
        }
        local_138 = puVar15;
        lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
        uVar12 = 0;
        if (lVar8 != 0) {
          uVar12 = *(undefined8 *)(lVar8 + 0x10);
        }
        local_140 = (QArrayData *)QString::fromAscii_helper("DDB",3);
        local_148 = (QArrayData *)QString::fromAscii_helper("ddb.parallels_snapshot_uuid",0x1b);
        lVar8 = FUN_1006aff80(uVar12,&local_140,&local_148);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            local_49 = *(int *)local_148 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d8dba;
          }
          QArrayData::deallocate(local_148,2,8);
        }
LAB_1005d8dba:
        if (*(int *)local_140 != -1) {
          if (*(int *)local_140 != 0) {
            LOCK();
            *(int *)local_140 = *(int *)local_140 + -1;
            local_49 = *(int *)local_140 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d8df0;
          }
          QArrayData::deallocate(local_140,2,8);
        }
LAB_1005d8df0:
        if (lVar8 != 0) {
          FUN_10051afa0(&local_138,lVar8 + 0x20);
        }
        lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
        uVar12 = 0;
        if (lVar8 != 0) {
          uVar12 = *(undefined8 *)(lVar8 + 0x10);
        }
        local_150 = (QArrayData *)QString::fromAscii_helper("DDB",3);
        cVar5 = FUN_1006afb30(uVar12,&local_150);
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_49 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1005d8e81;
          }
          QArrayData::deallocate(local_150,2,8);
        }
LAB_1005d8e81:
        if (cVar5 == '\0') {
          QFileInfo::absoluteFilePath();
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Error: can\'t clear DDB block for VMDL \'%s\'",
                        local_158 + *(long *)(local_158 + 0x10));
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_49 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1005d9171;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_1005d9171:
          iVar6 = 1;
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_49 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_1005d978b;
            }
            QArrayData::deallocate(local_160,2,8);
          }
        }
        else {
          local_180 = local_100;
          if (*local_100 != -1) {
            if (*local_100 == 0) {
              QListData::detach((int)&local_180);
              iVar6 = local_180[2];
              if (iVar6 != local_180[3]) {
                piVar10 = local_100 + (long)local_100[2] * 2 + 4;
                piVar11 = local_180 + (long)iVar6 * 2 + 4;
                lVar8 = (long)local_180[3] * 8 + (long)iVar6 * -8;
                do {
                  piVar3 = *(int **)piVar10;
                  *(int **)piVar11 = piVar3;
                  if (1 < *piVar3 + 1U) {
                    LOCK();
                    *piVar3 = *piVar3 + 1;
                    local_49 = *piVar3 != 0;
                    UNLOCK();
                  }
                  piVar11 = piVar11 + 2;
                  piVar10 = piVar10 + 2;
                  lVar8 = lVar8 + -8;
                } while (lVar8 != 0);
              }
            }
            else {
              LOCK();
              *local_100 = *local_100 + 1;
              local_49 = *local_100 != 0;
              UNLOCK();
            }
          }
          plVar13 = (long *)(local_180 + (long)local_180[2] * 2 + 4);
          local_170 = (long *)(local_180 + (long)local_180[3] * 2 + 4);
          local_178 = plVar13;
          if (local_180[2] != local_180[3]) {
            do {
              local_168 = 1;
              lVar8 = *plVar13;
              local_188 = puVar15;
              local_178 = plVar13;
              iVar6 = QString::compare_helper
                                (*(long *)(lVar8 + 0x10) + lVar8,*(undefined4 *)(lVar8 + 4),
                                 "ddb.longContentID",0xffffffff,1);
              if (iVar6 == 0) {
                FUN_10051afa0(&local_188,&local_120);
LAB_1005d9327:
                bVar4 = false;
                if (*(int *)(local_188 + 0xc) != *(int *)(local_188 + 8)) {
                  lVar8 = *(long *)(*(long *)(*param_1 + 0x10) + 0x200);
                  uVar12 = 0;
                  if (lVar8 != 0) {
                    uVar12 = *(undefined8 *)(lVar8 + 0x10);
                  }
                  local_1b0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                  cVar5 = FUN_1006ad450(uVar12,&local_1b0,plVar13,&local_188);
                  if (*(int *)local_1b0 != -1) {
                    if (*(int *)local_1b0 != 0) {
                      LOCK();
                      *(int *)local_1b0 = *(int *)local_1b0 + -1;
                      local_49 = *(int *)local_1b0 != 0;
                      UNLOCK();
                      if ((bool)local_49) goto LAB_1005d93c5;
                    }
                    QArrayData::deallocate(local_1b0,2,8);
                  }
LAB_1005d93c5:
                  bVar4 = false;
                  if (cVar5 == '\0') {
                    QString::toUtf8();
                    lVar8 = *(long *)(local_1b8 + 0x10);
                    QFileInfo::absoluteFilePath();
                    QString::toUtf8();
                    lVar9 = *(long *)(local_1c0 + 0x10);
                    QFileInfo::absoluteFilePath();
                    QString::toUtf8();
                    FUN_1008e3970("","vdisk",0,
                                  "Error: can\'t insert DDB key \'%s\' from root VMDK \'%s\' to VMDK \'%s\'"
                                  ,local_1b8 + lVar8,local_1c0 + lVar9,
                                  local_1d0 + *(long *)(local_1d0 + 0x10));
                    if (*(int *)local_1d0 != -1) {
                      if (*(int *)local_1d0 != 0) {
                        LOCK();
                        *(int *)local_1d0 = *(int *)local_1d0 + -1;
                        local_49 = *(int *)local_1d0 != 0;
                        UNLOCK();
                        if ((bool)local_49) goto LAB_1005d94d3;
                      }
                      QArrayData::deallocate(local_1d0,1,8);
                    }
LAB_1005d94d3:
                    if (*(int *)local_1d8 != -1) {
                      if (*(int *)local_1d8 != 0) {
                        LOCK();
                        *(int *)local_1d8 = *(int *)local_1d8 + -1;
                        local_49 = *(int *)local_1d8 != 0;
                        UNLOCK();
                        if ((bool)local_49) goto LAB_1005d9509;
                      }
                      QArrayData::deallocate(local_1d8,2,8);
                    }
LAB_1005d9509:
                    if (*(int *)local_1c0 != -1) {
                      if (*(int *)local_1c0 != 0) {
                        LOCK();
                        *(int *)local_1c0 = *(int *)local_1c0 + -1;
                        local_49 = *(int *)local_1c0 != 0;
                        UNLOCK();
                        if ((bool)local_49) goto LAB_1005d953f;
                      }
                      QArrayData::deallocate(local_1c0,1,8);
                    }
LAB_1005d953f:
                    if (*(int *)local_1c8 != -1) {
                      if (*(int *)local_1c8 != 0) {
                        LOCK();
                        *(int *)local_1c8 = *(int *)local_1c8 + -1;
                        local_49 = *(int *)local_1c8 != 0;
                        UNLOCK();
                        if ((bool)local_49) goto LAB_1005d9575;
                      }
                      QArrayData::deallocate(local_1c8,2,8);
                    }
LAB_1005d9575:
                    bVar4 = true;
                    if (*(int *)local_1b8 != -1) {
                      if (*(int *)local_1b8 != 0) {
                        LOCK();
                        *(int *)local_1b8 = *(int *)local_1b8 + -1;
                        local_49 = *(int *)local_1b8 != 0;
                        UNLOCK();
                        if ((bool)local_49) goto LAB_1005d96ec;
                      }
                      QArrayData::deallocate(local_1b8,1,8);
                    }
                  }
                }
              }
              else {
                lVar8 = *plVar13;
                iVar6 = QString::compare_helper
                                  (*(long *)(lVar8 + 0x10) + lVar8,*(undefined4 *)(lVar8 + 4),
                                   "ddb.parallels_snapshot_uuid",0xffffffff,1);
                if (iVar6 == 0) {
                  FUN_10051afa0(&local_188,&local_138);
                  goto LAB_1005d9327;
                }
                lVar8 = *(long *)(*(long *)(*param_3 + 0x10) + 0x200);
                uVar12 = 0;
                if (lVar8 != 0) {
                  uVar12 = *(undefined8 *)(lVar8 + 0x10);
                }
                local_190 = (QArrayData *)QString::fromAscii_helper("DDB",3);
                lVar8 = FUN_1006aff80(uVar12,&local_190,plVar13);
                if (*(int *)local_190 != -1) {
                  if (*(int *)local_190 != 0) {
                    LOCK();
                    *(int *)local_190 = *(int *)local_190 + -1;
                    local_49 = *(int *)local_190 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1005d92e1;
                  }
                  QArrayData::deallocate(local_190,2,8);
                }
LAB_1005d92e1:
                if (lVar8 != 0) {
                  FUN_10051afa0(&local_188,lVar8 + 0x20);
                  goto LAB_1005d9327;
                }
                QString::toUtf8();
                pQVar14 = local_198 + *(long *)(local_198 + 0x10);
                QFileInfo::absoluteFilePath();
                QString::toUtf8();
                FUN_1008e3970("","vdisk",0,"Error: can\'t get DDB key \'%s\' of root VMDK \'%s\'",
                              pQVar14,local_1a0 + *(long *)(local_1a0 + 0x10));
                if (*(int *)local_1a0 != -1) {
                  if (*(int *)local_1a0 != 0) {
                    LOCK();
                    *(int *)local_1a0 = *(int *)local_1a0 + -1;
                    local_49 = *(int *)local_1a0 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1005d967a;
                  }
                  QArrayData::deallocate(local_1a0,1,8);
                }
LAB_1005d967a:
                if (*(int *)local_1a8 != -1) {
                  if (*(int *)local_1a8 != 0) {
                    LOCK();
                    *(int *)local_1a8 = *(int *)local_1a8 + -1;
                    local_49 = *(int *)local_1a8 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1005d96b0;
                  }
                  QArrayData::deallocate(local_1a8,2,8);
                }
LAB_1005d96b0:
                bVar4 = true;
                if (*(int *)local_198 != -1) {
                  if (*(int *)local_198 != 0) {
                    LOCK();
                    *(int *)local_198 = *(int *)local_198 + -1;
                    local_49 = *(int *)local_198 != 0;
                    UNLOCK();
                    if ((bool)local_49) goto LAB_1005d96ec;
                  }
                  QArrayData::deallocate(local_198,1,8);
                }
              }
LAB_1005d96ec:
              FUN_100013180(&local_188);
              iVar6 = 1;
              if (bVar4) goto LAB_1005d9739;
              plVar13 = local_178 + 1;
              puVar15 = PTR_shared_null_100ba2188;
              local_178 = plVar13;
            } while (plVar13 != local_170);
          }
          local_168 = 1;
          iVar6 = 0x16;
LAB_1005d9739:
          FUN_100013180(&local_180);
          if (iVar6 == 0x16) {
            lVar8 = *param_1;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            plVar13 = (long *)*param_3;
            *param_3 = lVar8;
            iVar6 = 0;
            if (plVar13 != (long *)0x0) {
              LOCK();
              plVar1 = plVar13 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)(*plVar13 + 0x10))();
                iVar6 = 0;
              }
            }
          }
        }
LAB_1005d978b:
        FUN_100013180(&local_138);
        FUN_100013180(&local_120);
      }
LAB_1005d97a3:
      FUN_100013180(&local_100);
      uVar12 = 0x80021025;
      if (iVar6 != 0) goto LAB_1005d97f7;
    }
    uVar12 = 0;
    lVar8 = 0;
    if (*param_1 != 0) {
      lVar8 = *(long *)(*param_1 + 0x10);
    }
    *(undefined8 *)(lVar8 + 0x230) = local_40;
    *(undefined8 *)(lVar8 + 0x228) = local_48;
    *(uint *)(*(long *)(*param_1 + 0x10) + 0x214) = local_1dc;
    goto LAB_1005d97f7;
  }
  QFileInfo::absoluteFilePath();
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: can\'t update VMDK \'%s\' with \'parentCID\' = \'%u\'",
                local_f0 + *(long *)(local_f0 + 0x10),local_1dc);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_49 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d8fb8;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
LAB_1005d8fb8:
  uVar12 = 0x80021025;
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_49 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005d97f7;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005d97f7:
  if (lVar2 == local_38) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

