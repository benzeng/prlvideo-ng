
ulong FUN_1006f6200(QFileInfo *param_1,long param_2,long *param_3,char param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uid_t uVar5;
  long *plVar6;
  long *plVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  ushort *puVar9;
  int *piVar10;
  undefined8 uVar11;
  _func_void_Node_ptr_void_ptr *p_Var12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  QFileInfo *pQVar16;
  _func_void_Node_ptr_void_ptr *p_Var17;
  QArrayData *pQVar18;
  ushort uVar19;
  undefined1 *puVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  bool bVar24;
  undefined8 in_stack_fffffffffffffd48;
  undefined4 uVar25;
  char *in_stack_fffffffffffffd50;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  undefined1 local_250 [6];
  ushort local_24a;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  ushort local_17c;
  _func_void_Node_ptr_void_ptr *local_f0;
  _func_void_Node_ptr *local_e8;
  QString local_e0;
  QFileInfo local_d8 [8];
  QArrayData *local_d0;
  undefined1 local_c1;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  QFileInfo local_b0 [8];
  Data *local_a8;
  QFileInfo *local_a0;
  QFileInfo *local_98;
  uint local_90;
  Data *local_88;
  QString local_80;
  QDir local_78 [8];
  QString local_70;
  QFileInfo local_68 [8];
  QString local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  
  uVar25 = (undefined4)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  cVar2 = QFileInfo::exists();
  if (cVar2 != '\0') {
    cVar2 = QFileInfo::isFile();
    if ((cVar2 == '\0') && (cVar2 = QFileInfo::isDir(), cVar2 == '\0')) {
      QFileInfo::filePath();
      QFileInfo::QFileInfo(local_58,&local_60);
      cVar2 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_58);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f62b4;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1006f62b4:
      if (cVar2 != '\0') {
        in_stack_fffffffffffffd50 = "setRawPermission";
        FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "fi.isFile() || fi.isDir() || !QFileInfo( fi.filePath() ).exists()",
                      "CFileHelper.cpp",CONCAT44(uVar25,0x68d),"setRawPermission");
      }
    }
    cVar2 = QFileInfo::isFile();
    if ((cVar2 == '\0') && (cVar2 = QFileInfo::isDir(), cVar2 == '\0')) {
      QFileInfo::filePath();
      QFileInfo::QFileInfo(local_68,&local_70);
      cVar2 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_68);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_70.field0_0x0 != 0) goto LAB_1006f6517;
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1006f6517:
      param_1 = (QFileInfo *)0x80000003;
      if (cVar2 == '\0') {
        param_1 = (QFileInfo *)0x0;
      }
      goto LAB_1006f739c;
    }
    cVar2 = QFileInfo::isDir();
    uVar25 = (undefined4)((ulong)in_stack_fffffffffffffd50 >> 0x20);
    if ((cVar2 != '\0') && (param_4 != '\0')) {
      QFileInfo::absoluteFilePath();
      QDir::QDir(local_78,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f639b;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1006f639b:
      QDir::entryInfoList(&local_88,local_78,0x650a,0x20);
      FUN_10005a020(&local_a8,&local_88);
      local_a0 = (QFileInfo *)(local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10);
      local_98 = (QFileInfo *)(local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10);
      local_90 = 1;
      iVar3 = 10;
      if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
        plVar23 = param_3;
        do {
          QFileInfo::QFileInfo(local_b0,local_a0);
          iVar3 = 0xd;
          plVar6 = plVar23;
          if (local_90 != 0) {
            cVar2 = QFileInfo::operator==(param_1,local_b0);
            if (cVar2 == '\0') {
              uVar22 = FUN_1006f6200(local_b0,param_2,param_3,1);
              plVar6 = (long *)(ulong)uVar22;
              if (((int)uVar22 < 0) && (QFileInfo::exists(), uVar22 != 0x80000010)) {
                iVar3 = 1;
                goto LAB_1006f65fa;
              }
            }
            local_90 = 0;
            plVar6 = plVar23;
          }
LAB_1006f65fa:
          QFileInfo::~QFileInfo(local_b0);
          if (iVar3 != 0xd) goto LAB_1006f660f;
          local_a0 = local_a0 + 8;
          uVar22 = local_90 ^ 1;
          bVar24 = local_90 == 1;
          iVar3 = 10;
          local_90 = uVar22;
          if ((bVar24) || (plVar23 = plVar6, local_a0 == local_98)) goto LAB_1006f660f;
        } while( true );
      }
      goto LAB_1006f6612;
    }
    goto LAB_1006f672e;
  }
  QFileInfo::filePath();
  QString::toUtf8();
  FUN_1008e3970("","cmn_utils",0,"%s: file does not exists (path=%s)","setRawPermission",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f6481;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1006f6481:
  param_1 = (QFileInfo *)0x80000010;
  if (*(int *)local_50 == -1) goto LAB_1006f739c;
  local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) goto LAB_1006f739c;
    local_31 = 0;
  }
  goto LAB_1006f6885;
  while (plVar6 = (long *)*plVar6, plVar6 != plVar23) {
LAB_1006f692c:
    if ((*(uint *)(plVar6 + 1) == uVar13) && (*(int *)((long)plVar6 + 0xc) == 1)) break;
  }
LAB_1006f6942:
  puVar15 = (undefined1 *)0x0;
  if (uVar22 != 0) {
LAB_1006f6948:
    uVar13 = *(uint *)((long)plVar23 + 0x24) ^ 2;
    plVar6 = *(long **)(plVar23[1] + ((ulong)uVar13 % (ulong)uVar22) * 8);
    puVar15 = (undefined1 *)0x0;
    if (plVar6 != plVar23) {
      puVar15 = (undefined1 *)0x0;
      plVar7 = plVar6;
      do {
        if ((*(uint *)(plVar7 + 1) == uVar13) && (*(int *)((long)plVar7 + 0xc) == 2)) {
          puVar15 = (undefined1 *)0x0;
          if (plVar7 != plVar23) {
            if (*(int *)((long)plVar23 + 0x14) != 0) goto LAB_1006f6992;
            goto LAB_1006f69a5;
          }
          break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != plVar23);
    }
  }
  goto LAB_1006f69ac;
  while (plVar6 = (long *)*plVar6, plVar6 != plVar23) {
LAB_1006f6992:
    if ((*(uint *)(plVar6 + 1) == uVar13) && (*(int *)((long)plVar6 + 0xc) == 2)) break;
  }
LAB_1006f69a5:
  puVar15 = local_c0;
LAB_1006f69ac:
  FUN_1006f6110(&local_e8,puVar20,puVar15);
  cVar2 = FUN_1006fcc60(&local_e8,param_3);
  param_1 = (QFileInfo *)0x0;
  if (cVar2 == '\0') {
    p_Var17 = (_func_void_Node_ptr_void_ptr *)*param_3;
    if (1 < *(int *)(p_Var17 + 0x10) + 1U) {
      LOCK();
      pcVar1 = p_Var17 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + 1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
    }
    p_Var8 = p_Var17;
    if ((((byte)p_Var17[0x28] & 1) == 0) && (1 < *(uint *)(p_Var17 + 0x10))) {
      local_f0 = p_Var17;
      p_Var8 = (_func_void_Node_ptr_void_ptr *)
               QHashData::detach_helper(p_Var17,FUN_1006fcda0,0x6fcc50,0x18);
      if (*(int *)(p_Var17 + 0x10) != -1) {
        if (*(int *)(p_Var17 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var17 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f6a5e;
        }
        QHashData::free_helper((_func_void_Node_ptr *)p_Var17);
      }
    }
LAB_1006f6a5e:
    local_f0 = p_Var8;
    p_Var17 = local_f0;
    cVar2 = QFileInfo::isDir();
    if ((cVar2 != '\0') && (uVar22 = *(uint *)(p_Var17 + 0x20), uVar22 != 0)) {
      uVar13 = *(uint *)(p_Var17 + 0x24) ^ 1;
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                (*(long *)(p_Var17 + 8) + ((ulong)uVar13 % (ulong)uVar22) * 8);
      p_Var12 = p_Var8;
      if (p_Var8 != p_Var17) {
        do {
          if ((*(uint *)(p_Var12 + 8) == uVar13) && (*(int *)(p_Var12 + 0xc) == 1)) {
            if (p_Var12 != p_Var17) {
              if (*(int *)(p_Var17 + 0x14) != 0) goto LAB_1006f6b22;
              uVar19 = 0;
              goto LAB_1006f6b4a;
            }
            break;
          }
          p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
        } while (p_Var12 != p_Var17);
LAB_1006f6b71:
        if (uVar22 == 0) goto LAB_1006f6c05;
      }
      uVar13 = *(uint *)(p_Var17 + 0x24) ^ 2;
      p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                (*(long *)(p_Var17 + 8) + ((ulong)uVar13 % (ulong)uVar22) * 8);
      for (p_Var12 = p_Var8; p_Var12 != p_Var17; p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var12
          ) {
        if ((*(uint *)(p_Var12 + 8) == uVar13) && (*(int *)(p_Var12 + 0xc) == 2)) {
          if (p_Var12 != p_Var17) {
            if (*(int *)(p_Var17 + 0x14) != 0) goto LAB_1006f6bc0;
            uVar19 = 0;
            goto LAB_1006f6be8;
          }
          break;
        }
      }
    }
LAB_1006f6c05:
    QFileInfo::absoluteFilePath();
    QString::toUtf8();
    iVar3 = _stat_INODE64(local_188 + *(long *)(local_188 + 0x10));
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f6c76;
      }
      QArrayData::deallocate(local_188,1,8);
    }
LAB_1006f6c76:
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f6cac;
      }
      QArrayData::deallocate(local_190,2,8);
    }
LAB_1006f6cac:
    p_Var17 = local_f0;
    if (iVar3 == 0) {
      uVar13 = local_17c & 0x1c0;
      uVar22 = *(uint *)(local_f0 + 0x20);
      if (uVar22 == 0) {
        uVar19 = 0;
        bVar24 = false;
      }
      else {
        uVar14 = *(uint *)(local_f0 + 0x24) ^ 1;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                  (*(long *)(local_f0 + 8) + ((ulong)uVar14 % (ulong)uVar22) * 8);
        p_Var12 = p_Var8;
        if (p_Var8 == local_f0) {
          uVar19 = 0;
        }
        else {
          do {
            if ((*(uint *)(p_Var12 + 8) == uVar14) && (*(int *)(p_Var12 + 0xc) == 1)) {
              if (p_Var12 != local_f0) {
                if (*(int *)(local_f0 + 0x14) != 0) goto LAB_1006f6eae;
                goto LAB_1006f6ed6;
              }
              uVar19 = 0;
              goto LAB_1006f6edb;
            }
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          } while (p_Var12 != local_f0);
          uVar19 = 0;
LAB_1006f6edb:
          if (uVar22 == 0) {
            bVar24 = false;
            goto LAB_1006f6f55;
          }
        }
        uVar14 = *(uint *)(local_f0 + 0x24) ^ 2;
        p_Var8 = *(_func_void_Node_ptr_void_ptr **)
                  (*(long *)(local_f0 + 8) + ((ulong)uVar14 % (ulong)uVar22) * 8);
        p_Var12 = p_Var8;
        if (p_Var8 == local_f0) {
          bVar24 = false;
        }
        else {
          do {
            if ((*(uint *)(p_Var12 + 8) == uVar14) && (*(int *)(p_Var12 + 0xc) == 2)) {
              if (p_Var12 == local_f0) {
                bVar24 = false;
                goto LAB_1006f6f55;
              }
              bVar24 = true;
              if (*(int *)(local_f0 + 0x14) != 0) {
                uVar19 = 0;
                goto LAB_1006f6f2b;
              }
              uVar19 = 0;
              goto LAB_1006f6f55;
            }
            p_Var12 = *(_func_void_Node_ptr_void_ptr **)p_Var12;
          } while (p_Var12 != local_f0);
          bVar24 = false;
        }
      }
LAB_1006f6f55:
      uVar22 = local_17c & 0x3f;
      if (bVar24) {
        uVar22 = (uint)uVar19;
      }
      cVar2 = QFileInfo::isDir();
      uVar22 = uVar22 | uVar13;
      uVar13 = 0;
      if (cVar2 != '\0') {
        bVar24 = (uVar22 & 0x24) != 0;
        uVar13 = (uint)bVar24 + (uint)bVar24 * 8 | uVar22 >> 2 & 0x40;
      }
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      iVar3 = _open((char *)(local_1b8 + *(long *)(local_1b8 + 0x10)),0x100);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f7001;
        }
        QArrayData::deallocate(local_1b8,1,8);
      }
LAB_1006f7001:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f7037;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_1006f7037:
      param_1 = (QFileInfo *)0x0;
      if (iVar3 != -1) {
        cVar2 = QFileInfo::isDir();
        if (((cVar2 == '\0') && (iVar4 = _fstat_INODE64(iVar3,local_250), iVar4 == 0)) &&
           (1 < local_24a)) {
          if (2 < DAT_1011b55f8) {
            QFileInfo::absoluteFilePath();
            QString::toUtf8();
            FUN_1008e3970("","cmn_utils",3,
                          "Change perms: skipping file \'%s\' due it has %lu of hard links",
                          local_258 + *(long *)(local_258 + 0x10),local_24a);
            if (*(int *)local_258 != -1) {
              if (*(int *)local_258 != 0) {
                LOCK();
                *(int *)local_258 = *(int *)local_258 + -1;
                local_31 = *(int *)local_258 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f711c;
              }
              QArrayData::deallocate(local_258,1,8);
            }
LAB_1006f711c:
            if (*(int *)local_260 != -1) {
              if (*(int *)local_260 != 0) {
                LOCK();
                *(int *)local_260 = *(int *)local_260 + -1;
                local_31 = *(int *)local_260 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f7152;
              }
              QArrayData::deallocate(local_260,2,8);
            }
          }
LAB_1006f7152:
          _close(iVar3);
        }
        else {
          iVar4 = _fchmod(iVar3,(ushort)uVar13 | (ushort)uVar22);
          if (iVar4 != 0) {
            piVar10 = ___error();
            iVar4 = *piVar10;
            if (iVar4 == 2) {
              param_1 = (QFileInfo *)0x80000010;
              _close(iVar3);
              goto LAB_1006f7342;
            }
            uVar5 = _getuid();
            if ((uVar5 != 0) || (piVar10 = ___error(), *piVar10 != 1)) {
              QFileInfo::absoluteFilePath();
              QString::toUtf8();
              pQVar18 = local_268 + *(long *)(local_268 + 0x10);
              FUN_1007d8510(&local_280);
              QString::toUtf8();
              FUN_1008e3970("","cmn_utils",0,
                            "Can\'t change permissions (mode %0#4o, dir_mode %0#4o) to file \'%s\' by error %d (\'%s\')"
                            ,uVar22,uVar13,pQVar18,CONCAT44(uVar25,iVar4),
                            local_278 + *(long *)(local_278 + 0x10));
              if (*(int *)local_278 != -1) {
                if (*(int *)local_278 != 0) {
                  LOCK();
                  *(int *)local_278 = *(int *)local_278 + -1;
                  local_31 = *(int *)local_278 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006f7290;
                }
                QArrayData::deallocate(local_278,1,8);
              }
LAB_1006f7290:
              if (*(int *)local_280 != -1) {
                if (*(int *)local_280 != 0) {
                  LOCK();
                  *(int *)local_280 = *(int *)local_280 + -1;
                  local_31 = *(int *)local_280 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006f72c6;
                }
                QArrayData::deallocate(local_280,2,8);
              }
LAB_1006f72c6:
              if (*(int *)local_268 != -1) {
                if (*(int *)local_268 != 0) {
                  LOCK();
                  *(int *)local_268 = *(int *)local_268 + -1;
                  local_31 = *(int *)local_268 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006f72fc;
                }
                QArrayData::deallocate(local_268,1,8);
              }
LAB_1006f72fc:
              if (*(int *)local_270 != -1) {
                if (*(int *)local_270 != 0) {
                  LOCK();
                  *(int *)local_270 = *(int *)local_270 + -1;
                  local_31 = *(int *)local_270 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1006f7332;
                }
                QArrayData::deallocate(local_270,2,8);
              }
LAB_1006f7332:
              param_1 = (QFileInfo *)0x80000339;
              _close(iVar3);
              goto LAB_1006f7342;
            }
          }
          _close(iVar3);
        }
      }
    }
    else {
      piVar10 = ___error();
      iVar3 = *piVar10;
      QFileInfo::absoluteFilePath();
      QString::toUtf8();
      pQVar18 = local_198 + *(long *)(local_198 + 0x10);
      uVar11 = FUN_1007d8540();
      FUN_1007d8510(&local_1b0);
      QString::toUtf8();
      FUN_1008e3970("","cmn_utils",0,"setRawPermission(): stat( \'%s\' ) return error %ld (%s)",
                    pQVar18,uVar11,local_1a8 + *(long *)(local_1a8 + 0x10));
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f6d7c;
        }
        QArrayData::deallocate(local_1a8,1,8);
      }
LAB_1006f6d7c:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f6db2;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
LAB_1006f6db2:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f6de8;
        }
        QArrayData::deallocate(local_198,1,8);
      }
LAB_1006f6de8:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f6e1e;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_1006f6e1e:
      param_1 = (QFileInfo *)0x80000010;
      p_Var17 = local_f0;
      if (iVar3 != 2) {
        param_1 = (QFileInfo *)0x80000339;
      }
    }
LAB_1006f7342:
    if (*(int *)(p_Var17 + 0x10) != -1) {
      if (*(int *)(p_Var17 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var17 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f736e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var17);
    }
  }
LAB_1006f736e:
  if (*(int *)(local_e8 + 0x10) != -1) {
    if (*(int *)(local_e8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_e8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f739c;
    }
    QHashData::free_helper(local_e8);
  }
  goto LAB_1006f739c;
  while (p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8, p_Var8 != p_Var17) {
LAB_1006f6b22:
    if ((*(uint *)(p_Var8 + 8) == uVar13) && (*(int *)(p_Var8 + 0xc) == 1)) {
      if (p_Var8 == p_Var17) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ushort *)(p_Var8 + 0x10);
      }
      goto LAB_1006f6b4a;
    }
  }
  uVar19 = 0;
LAB_1006f6b4a:
  local_3c = 1;
  puVar9 = (ushort *)FUN_1006fcad0(&local_f0,&local_3c);
  *puVar9 = uVar19 | 0x40;
  uVar22 = *(uint *)(local_f0 + 0x20);
  p_Var17 = local_f0;
  goto LAB_1006f6b71;
  while (p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8, p_Var8 != p_Var17) {
LAB_1006f6bc0:
    if ((*(uint *)(p_Var8 + 8) == uVar13) && (*(int *)(p_Var8 + 0xc) == 2)) {
      if (p_Var8 == p_Var17) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ushort *)(p_Var8 + 0x10);
      }
      goto LAB_1006f6be8;
    }
  }
  uVar19 = 0;
LAB_1006f6be8:
  local_38 = 2;
  puVar9 = (ushort *)FUN_1006fcad0(&local_f0,&local_38);
  *puVar9 = uVar19 | 9;
  goto LAB_1006f6c05;
  while (p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8, p_Var8 != local_f0) {
LAB_1006f6eae:
    if ((*(uint *)(p_Var8 + 8) == uVar14) && (*(int *)(p_Var8 + 0xc) == 1)) {
      if (p_Var8 != local_f0) {
        uVar19 = *(ushort *)(p_Var8 + 0x10);
        uVar13 = (uint)uVar19;
        goto LAB_1006f6edb;
      }
      break;
    }
  }
LAB_1006f6ed6:
  uVar19 = 0;
  uVar13 = 0;
  goto LAB_1006f6edb;
  while (p_Var8 = *(_func_void_Node_ptr_void_ptr **)p_Var8, p_Var8 != local_f0) {
LAB_1006f6f2b:
    if ((*(uint *)(p_Var8 + 8) == uVar14) && (*(int *)(p_Var8 + 0xc) == 2)) {
      if (p_Var8 == local_f0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ushort *)(p_Var8 + 0x10);
      }
      break;
    }
  }
  goto LAB_1006f6f55;
LAB_1006f660f:
  param_1 = (QFileInfo *)((ulong)plVar6 & 0xffffffff);
LAB_1006f6612:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f668d;
    }
    param_1 = (QFileInfo *)((ulong)param_1 & 0xffffffff);
    iVar4 = *(int *)(local_a8 + 0xc);
    if (iVar4 != *(int *)(local_a8 + 8)) {
      lVar21 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar4 * -8;
      pQVar16 = (QFileInfo *)(local_a8 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar16);
        pQVar16 = pQVar16 + -8;
        lVar21 = lVar21 + 8;
      } while (lVar21 != 0);
    }
    QListData::dispose(local_a8);
  }
LAB_1006f668d:
  uVar25 = (undefined4)((ulong)in_stack_fffffffffffffd50 >> 0x20);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f670d;
    }
    param_1 = (QFileInfo *)((ulong)param_1 & 0xffffffff);
    iVar4 = *(int *)(local_88 + 0xc);
    if (iVar4 != *(int *)(local_88 + 8)) {
      lVar21 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar4 * -8;
      pQVar16 = (QFileInfo *)(local_88 + (long)iVar4 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(pQVar16);
        uVar25 = (undefined4)((ulong)in_stack_fffffffffffffd50 >> 0x20);
        pQVar16 = pQVar16 + -8;
        lVar21 = lVar21 + 8;
      } while (lVar21 != 0);
    }
    QListData::dispose(local_88);
  }
LAB_1006f670d:
  QDir::~QDir(local_78);
  if (iVar3 != 10) goto LAB_1006f739c;
LAB_1006f672e:
  QFileInfo::absoluteFilePath();
  cVar2 = FUN_100704960(&local_d0,local_b8,local_c0,&local_c1,*(undefined8 *)(param_2 + 0x18),0);
  uVar22 = 0x80000382;
  if (cVar2 != '\0') {
    uVar22 = 0;
  }
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f67b2;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1006f67b2:
  if (cVar2 != '\0') {
    plVar23 = (long *)*param_3;
    uVar22 = *(uint *)(plVar23 + 4);
    puVar20 = (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x0;
    if (uVar22 != 0) {
      uVar13 = *(uint *)((long)plVar23 + 0x24) ^ 1;
      plVar6 = *(long **)(plVar23[1] + (ulong)(uVar13 % uVar22) * 8);
      puVar20 = (undefined1 *)0x0;
      if (plVar6 != plVar23) {
        puVar20 = (undefined1 *)0x0;
        plVar7 = plVar6;
        do {
          if ((*(uint *)(plVar7 + 1) == uVar13) && (*(int *)((long)plVar7 + 0xc) == 1)) {
            puVar20 = (undefined1 *)0x0;
            if ((plVar7 != plVar23) && (puVar20 = local_b8, *(int *)((long)plVar23 + 0x14) != 0))
            goto LAB_1006f692c;
            break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != plVar23);
        goto LAB_1006f6942;
      }
      goto LAB_1006f6948;
    }
    goto LAB_1006f69ac;
  }
  QFileInfo::absoluteFilePath();
  QFileInfo::QFileInfo(local_d8,&local_e0);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_d8);
  param_1 = (QFileInfo *)0x80000010;
  if (cVar2 != '\0') {
    param_1 = (QFileInfo *)(ulong)uVar22;
  }
  if (*(int *)local_e0.field0_0x0 == -1) goto LAB_1006f739c;
  if (*(int *)local_e0.field0_0x0 != 0) {
    LOCK();
    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_e0.field0_0x0 != 0) goto LAB_1006f739c;
    local_31 = 0;
  }
LAB_1006f6885:
  QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
LAB_1006f739c:
  return (ulong)param_1 & 0xffffffff;
}

