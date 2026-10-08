
undefined8 * FUN_1009ff9c0(undefined8 *param_1,long *param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  char *pcVar10;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QFileInfo local_130 [8];
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  undefined1 local_110 [8];
  _func_void_Node_ptr *local_108;
  int *local_100;
  int *local_f8;
  int *local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QFileInfo local_b8 [8];
  QArrayData *local_b0;
  QString local_a8;
  undefined1 local_a0 [8];
  _func_void_Node_ptr *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  _func_void_Node_ptr_void_ptr *local_80;
  QArrayData *local_78;
  _func_void_Node_ptr_void_ptr *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [7];
  undefined1 local_49;
  QArrayData **local_48;
  QArrayData **local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  cVar5 = FUN_100d80670();
  if (cVar5 == '\0') {
    local_80 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    local_88 = (QArrayData *)QString::fromAscii_helper("Library/Logs",0xc);
    pcVar10 = "Library/Logs/CrashReporter";
    if (9 < *(int *)PTR_MacintoshVersion_1021e15a8) {
      pcVar10 = "Library/Logs/DiagnosticReports";
    }
    local_90 = (QArrayData *)
               QString::fromAscii_helper
                         (pcVar10,(uint)(9 < *(int *)PTR_MacintoshVersion_1021e15a8) * 4 + 0x1a);
    if (param_3 != '\0') {
      FUN_100d89c40(local_a0);
      FUN_1000627a0(&local_98,local_a0);
      FUN_100a063d0(&local_80,&local_98);
      if (*(int *)(local_98 + 0x10) != -1) {
        if (*(int *)(local_98 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_98 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_49 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffbbd;
        }
        QHashData::free_helper(local_98);
      }
LAB_1009ffbbd:
      FUN_100039a80(local_a0);
      local_b0 = (QArrayData *)QString::fromAscii_helper("/%1",3);
      QString::arg(&local_a8,&local_b0,&local_90,0,0x20);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_49 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffc39;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_1009ffc39:
      QFileInfo::QFileInfo(local_b8,&local_a8);
      cVar5 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_b8);
      if (cVar5 == '\0') {
        local_c8 = (QArrayData *)QString::fromAscii_helper("/%1",3);
        QString::arg(&local_c0,&local_c8,&local_88,0,0x20);
        FUN_100062d00(&local_80,&local_c0,local_60);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_49 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1009ffcef;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1009ffcef:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_49 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1009ffd25;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
      }
LAB_1009ffd25:
      local_d8 = (QArrayData *)QString::fromAscii_helper("/%1/%2",6);
      local_e0 = (QArrayData *)QString::fromAscii_helper("DiagnosticReports",0x11);
      local_48 = &local_88;
      local_40 = &local_e0;
      QString::multiArg((int)&local_d0,(QString **)&local_d8);
      FUN_100062d00(&local_80,&local_d0,local_58);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_49 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffdce;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1009ffdce:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_49 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffe04;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_1009ffe04:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_49 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffe3a;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1009ffe3a:
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_49 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1009ffe70;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
    }
LAB_1009ffe70:
    local_100 = (int *)*param_2;
    if (*local_100 != -1) {
      if (*local_100 == 0) {
        QListData::detach((int)&local_100);
        iVar2 = local_100[2];
        if (iVar2 != local_100[3]) {
          puVar8 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
          piVar9 = local_100 + (long)iVar2 * 2 + 4;
          lVar7 = (long)local_100[3] * 8 + (long)iVar2 * -8;
          do {
            piVar3 = (int *)*puVar8;
            *(int **)piVar9 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_49 = *piVar3 != 0;
              UNLOCK();
            }
            piVar9 = piVar9 + 2;
            puVar8 = puVar8 + 1;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_100 = *local_100 + 1;
        local_49 = *local_100 != 0;
        UNLOCK();
      }
    }
    piVar9 = local_100 + (long)local_100[2] * 2 + 4;
    local_f0 = local_100 + (long)local_100[3] * 2 + 4;
    local_f8 = piVar9;
    if (local_100[2] != local_100[3]) {
      do {
        local_e8 = 1;
        local_f8 = piVar9;
        FUN_100d8a050(local_110,piVar9);
        FUN_1000627a0(&local_108,local_110);
        FUN_100a063d0(&local_80,&local_108);
        if (*(int *)(local_108 + 0x10) != -1) {
          if (*(int *)(local_108 + 0x10) != 0) {
            LOCK();
            pcVar1 = local_108 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            local_49 = *(int *)pcVar1 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1009fffb0;
          }
          QHashData::free_helper(local_108);
        }
LAB_1009fffb0:
        FUN_100039a80(local_110);
        local_128 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
        QString::arg(&local_120,&local_128,piVar9,0,0x20);
        QString::arg(&local_118,&local_120,&local_90,0,0x20);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_49 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100a0003e;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_100a0003e:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_49 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100a00074;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100a00074:
        QFileInfo::QFileInfo(local_130,&local_118);
        cVar5 = QFileInfo::exists();
        QFileInfo::~QFileInfo(local_130);
        if (cVar5 == '\0') {
          local_148 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
          QString::arg(&local_140,&local_148,piVar9,0,0x20);
          QString::arg(&local_138,&local_140,&local_88,0,0x20);
          FUN_100062d00(&local_80,&local_138,local_50);
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_49 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100a0014d;
            }
            QArrayData::deallocate(local_138,2,8);
          }
LAB_100a0014d:
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_49 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100a00183;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_100a00183:
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_49 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_49) goto LAB_100a001c0;
            }
            QArrayData::deallocate(local_148,2,8);
          }
        }
LAB_100a001c0:
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_49 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100a00207;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_100a00207:
        piVar9 = local_f8 + 2;
        local_f8 = piVar9;
      } while (piVar9 != local_f0);
    }
    local_e8 = 1;
    FUN_100039a80(&local_100);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    FUN_100a05510(&local_80);
    p_Var4 = local_80;
    *param_1 = local_80;
    if (1 < *(int *)(local_80 + 0x10) + 1U) {
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + 1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
    }
    if ((((byte)local_80[0x28] & 1) == 0) && (1 < *(uint *)(local_80 + 0x10))) {
      uVar6 = QHashData::detach_helper(local_80,FUN_100062bb0,0x62be0,0x18);
      if (*(int *)(p_Var4 + 0x10) != -1) {
        if (*(int *)(p_Var4 + 0x10) != 0) {
          LOCK();
          pcVar1 = p_Var4 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_49 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100a002cb;
        }
        QHashData::free_helper((_func_void_Node_ptr *)p_Var4);
      }
LAB_100a002cb:
      *param_1 = uVar6;
    }
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_49 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100a00304;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100a00304:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100a00334;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100a00334:
    if (*(int *)(local_80 + 0x10) != -1) {
      if (*(int *)(local_80 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_80 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100a00363;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_80);
    }
    goto LAB_100a00363;
  }
  if (param_3 == '\0') {
    *param_1 = PTR_shared_null_1021e15d0;
    goto LAB_100a00363;
  }
  local_70 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
  FUN_100d8a070(&local_78);
  FUN_100062d00(&local_70,&local_78,local_68);
  p_Var4 = local_70;
  *param_1 = local_70;
  if (1 < *(int *)(local_70 + 0x10) + 1U) {
    LOCK();
    pcVar1 = local_70 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_49 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if ((((byte)local_70[0x28] & 1) == 0) && (1 < *(uint *)(local_70 + 0x10))) {
    uVar6 = QHashData::detach_helper(local_70,FUN_100062bb0,0x62be0,0x18);
    if (*(int *)(p_Var4 + 0x10) != -1) {
      if (*(int *)(p_Var4 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var4 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_49 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1009ffa99;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var4);
    }
LAB_1009ffa99:
    *param_1 = uVar6;
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1009ffacc;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1009ffacc:
  if (*(int *)(p_Var4 + 0x10) != -1) {
    if (*(int *)(p_Var4 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var4 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_49 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100a00363;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var4);
  }
LAB_100a00363:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

