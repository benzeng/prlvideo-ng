
undefined4 FUN_100482aa0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  bool bVar18;
  void **ppvVar19;
  long *local_1d0;
  Data *local_1c8;
  Data *local_1c0;
  Data *local_1b8;
  undefined4 local_1b0;
  long local_1a8;
  Data *local_1a0;
  Data *local_198;
  Data *local_190;
  undefined4 local_188;
  Data *local_180;
  long *local_178;
  QString local_170;
  long local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  CVmEvent local_148 [8];
  undefined1 local_140 [216];
  QEvent local_68 [32];
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  local_168 = param_2;
  local_170.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  if (*(ushort *)(param_2 + 0x14) < 0x10) {
    uVar6 = 0xf0000003;
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Invalid inline data size: %d (need %lu)",
                  *(ushort *)(param_2 + 0x14),0x10);
    goto LAB_100483290;
  }
  puVar8 = (uint *)FUN_1002a6010(param_2);
  if (0x10005 < *puVar8) {
    uVar6 = 0xf0000001;
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,
                  "Unsupported version of ToolsCenter protocol: 0x%08X (need 0x%08X)",*puVar8,
                  0x10005);
    goto LAB_100483290;
  }
  FUN_10078f4f0(&local_178,1,1,&DAT_1011ccb98,1);
  QMutex::lock();
  uVar6 = 0xf0000002;
  bVar18 = true;
  switch(puVar8[1]) {
  case 0:
    puVar10 = *(uint **)(param_1 + 0x60);
    uVar11 = puVar10[2];
    if (puVar10[3] != uVar11) {
      ppvVar19 = (void **)(param_1 + 0x60);
      uVar16 = *puVar10;
      if (1 < uVar16) {
        FUN_1004968a0(ppvVar19,puVar10[1]);
        puVar10 = *ppvVar19;
        uVar16 = *puVar10;
        uVar11 = puVar10[2];
      }
      lVar14 = (long)(int)uVar11;
      uVar2 = **(undefined8 **)(puVar10 + lVar14 * 2 + 4);
      uVar3 = (*(undefined8 **)(puVar10 + lVar14 * 2 + 4))[1];
      if (1 < uVar16) {
        FUN_1004968a0(ppvVar19,puVar10[1]);
        puVar10 = *ppvVar19;
        if (1 < *puVar10) {
          FUN_1004968a0(ppvVar19,puVar10[1]);
          puVar10 = *ppvVar19;
        }
        lVar14 = (long)(int)puVar10[2];
      }
      if (*(void **)(puVar10 + lVar14 * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar10 + lVar14 * 2 + 4));
      }
      QListData::erase(ppvVar19);
      *(undefined8 *)puVar8 = uVar2;
      *(undefined8 *)(puVar8 + 2) = uVar3;
      uVar6 = 0;
      goto switchD_100482ca0_caseD_1;
    }
    lVar14 = *(long *)(param_1 + 0x48);
    iVar7 = *(int *)(lVar14 + 8);
    plVar12 = (long *)(lVar14 + 0x10 + (long)iVar7 * 8);
    iVar1 = *(int *)(lVar14 + 0xc);
    if (iVar7 == iVar1) {
LAB_100482f57:
      if (plVar12 != (long *)(lVar14 + 0x10 + (long)iVar1 * 8)) break;
    }
    else {
      lVar13 = (long)iVar1 * 8 + (long)iVar7 * -8;
      do {
        if (*plVar12 == param_2) goto LAB_100482f57;
        plVar12 = plVar12 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x58) + 0xc) == *(int *)(*(long *)(param_1 + 0x58) + 8)) {
        FUN_100036f00((long *)(param_1 + 0x48),&local_168);
        *(uint *)(param_1 + 0x40) = *puVar8;
        uVar6 = 0xffffffff;
        if ((*(char *)(param_1 + 0x69) != '\0') &&
           (lVar14 = *(long *)(param_1 + 0x48), *(int *)(lVar14 + 0xc) - *(int *)(lVar14 + 8) == 1))
        {
          *(undefined1 *)(param_1 + 0x69) = 0;
          bVar18 = false;
          QMutex::unlock();
          if ((*(long *)(DAT_1011c3698 + 0x110) != 0) &&
             (FUN_10047f560(param_1), *(char *)(param_1 + 0x68) == '\0')) {
            FUN_100482130(param_1);
          }
        }
        break;
      }
      cVar5 = FUN_100482990(param_1,param_2);
    } while (cVar5 == '\0');
    goto switchD_100482ca0_caseD_1;
  case 3:
    lVar14 = FUN_10047dd20(param_1,puVar8 + 5);
    uVar6 = 0;
    if (lVar14 != 0) {
      FUN_1004838c0(param_1,lVar14,param_2);
      uVar6 = 0;
    }
    break;
  case 4:
    lVar14 = FUN_10047dd20(param_1,puVar8 + 5);
    if (lVar14 == 0) {
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to find guest exec session");
      uVar6 = 0xf0000003;
      break;
    }
    plVar9 = (long *)FUN_10047e7a0(lVar14);
    plVar12 = local_178;
    uVar6 = 0xf0000003;
    local_1d0 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to find cmd in guest exec session");
      break;
    }
    switch(puVar8[4]) {
    case 0:
      local_150 = *(QArrayData **)(DAT_1011c3650 + 0x18);
      if (1 < *(int *)local_150 + 1U) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
      }
      local_158 = (QArrayData *)QString::fromAscii_helper("",0);
      CVmEvent::CVmEvent(local_148,0x18aec,&local_150,0,100000,0,&local_158,0);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100482d49;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100482d49:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100482d7f;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100482d7f:
      lVar14 = DAT_1011c3650;
      CBaseNode::toString(SUB81(&local_160,0),SUB81(local_140,0));
      FUN_100063e20(lVar14,&local_160,0xbbb,plVar9,0);
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100482de9;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_100482de9:
      QEvent::~QEvent(local_68);
      CVmEventBase::~CVmEventBase((CVmEventBase *)local_148);
      uVar6 = 0;
      break;
    default:
      goto switchD_100482ca0_caseD_1;
    case 3:
      uVar6 = (*(code *)plVar9[3])(plVar9,&local_178,plVar9 + 1,param_2,param_1);
      break;
    case 4:
      uVar6 = (*(code *)plVar9[3])(plVar9,&local_178,plVar9 + 1,param_2,param_1);
      FUN_100495e90(lVar14 + 0x18,&local_1d0);
      FUN_10047e3d0(plVar9);
      operator_delete(plVar9);
      if (*(char *)(lVar14 + 0x20) != '\0') {
        QString::operator=(&local_170,(QString *)(lVar14 + 0x10));
      }
      break;
    case 5:
      lVar13 = local_178[2];
      *(undefined4 *)(lVar13 + 0x40) = 0x30e0c;
      if (local_178 == (long *)0x0) {
        lVar13 = 0;
      }
      puVar15 = (undefined8 *)0x0;
      if (*plVar9 != 0) {
        puVar15 = *(undefined8 **)(*plVar9 + 0x10);
      }
      uVar2 = *puVar15;
      *(undefined8 *)(lVar13 + 0x18) = puVar15[1];
      *(undefined8 *)(lVar13 + 0x10) = uVar2;
      local_48 = local_178;
      if (local_178 != (long *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      uVar6 = FUN_10047f040(param_1,plVar9 + 1,&local_48,lVar14);
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar9 = plVar12 + 1;
        lVar14 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      break;
    case 6:
      FUN_10078f4f0(&local_40,0x30e0e,1,&DAT_1011ccb98,1);
      lVar14 = 0;
      if (local_40 != (long *)0x0) {
        lVar14 = local_40[2];
      }
      puVar15 = (undefined8 *)0x0;
      if (*plVar9 != 0) {
        puVar15 = *(undefined8 **)(*plVar9 + 0x10);
      }
      uVar2 = *puVar15;
      *(undefined8 *)(lVar14 + 0x18) = puVar15[1];
      *(undefined8 *)(lVar14 + 0x10) = uVar2;
      iVar7 = FUN_100433970(*(undefined8 *)(*(long *)(DAT_1011c3650 + 0x10) + 0x18),plVar9 + 1,
                            &local_40,1);
      uVar6 = 0;
      if (iVar7 == 0) {
        uVar6 = 0xf0000000;
        FUN_1008e3970("TCHOST","ToolsCenterHost",0,
                      "VM exec: can\'t send data to client, session will be closed.\n");
      }
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar12 = local_40 + 1;
        lVar14 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      goto switchD_100482ca0_caseD_1;
    }
    break;
  case 8:
    local_180 = (Data *)PTR_shared_null_100ba2188;
    local_1a0 = *(Data **)(param_1 + 0x48);
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 == 0) {
        QListData::detach((int)&local_1a0);
        lVar13 = (long)*(int *)(local_1a0 + 8);
        lVar14 = *(long *)(param_1 + 0x48);
        if (((Data *)(lVar14 + (long)*(int *)(lVar14 + 8) * 8) != local_1a0 + lVar13 * 8) &&
           (lVar17 = *(int *)(local_1a0 + 0xc) - lVar13,
           lVar17 != 0 && lVar13 <= *(int *)(local_1a0 + 0xc))) {
          _memcpy(local_1a0 + lVar13 * 8 + 0x10,
                  (void *)(lVar14 + 0x10 + (long)*(int *)(lVar14 + 8) * 8),lVar17 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + 1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
      }
    }
    local_198 = local_1a0 + (long)*(int *)(local_1a0 + 8) * 8 + 0x10;
    local_190 = local_1a0 + (long)*(int *)(local_1a0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_1a0 + 8) != *(int *)(local_1a0 + 0xc)) {
      do {
        local_188 = 1;
        local_1a8 = *(long *)local_198;
        if (local_1a8 != param_2) {
          FUN_100036f00(&local_180,&local_1a8);
        }
        local_198 = local_198 + 8;
      } while (local_198 != local_190);
    }
    local_188 = 1;
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_31 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100483092;
      }
      QListData::dispose(local_1a0);
    }
LAB_100483092:
    FUN_100036f60((long *)(param_1 + 0x48));
    bVar18 = false;
    QMutex::unlock();
    local_1c8 = local_180;
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 == 0) {
        QListData::detach((int)&local_1c8);
        lVar14 = (long)*(int *)(local_1c8 + 8);
        if ((local_180 + (long)*(int *)(local_180 + 8) * 8 != local_1c8 + lVar14 * 8) &&
           (lVar13 = *(int *)(local_1c8 + 0xc) - lVar14,
           lVar13 != 0 && lVar14 <= *(int *)(local_1c8 + 0xc))) {
          _memcpy(local_1c8 + lVar14 * 8 + 0x10,local_180 + (long)*(int *)(local_180 + 8) * 8 + 0x10
                  ,lVar13 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + 1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
      }
    }
    local_1c0 = local_1c8 + (long)*(int *)(local_1c8 + 8) * 8 + 0x10;
    local_1b8 = local_1c8 + (long)*(int *)(local_1c8 + 0xc) * 8 + 0x10;
    if (*(int *)(local_1c8 + 8) != *(int *)(local_1c8 + 0xc)) {
      do {
        local_1b0 = 1;
        FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)local_1c0,0xf0000000);
        local_1c0 = local_1c0 + 8;
      } while (local_1c0 != local_1b8);
    }
    local_1b0 = 1;
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004831c1;
      }
      QListData::dispose(local_1c8);
    }
LAB_1004831c1:
    uVar6 = 0;
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_100482ca0_caseD_1;
      }
      QListData::dispose(local_180);
    }
    goto switchD_100482ca0_caseD_1;
  case 0xc:
    FUN_100483b40(param_1,param_2);
    uVar6 = 0;
    break;
  case 0xd:
    CDispCommonPreferences::getWorkspacePreferences();
    bVar4 = CDispWorkspacePreferences::isEnableSendStatisticReport();
    puVar8[2] = (uint)bVar4;
    uVar6 = 0;
  }
  bVar18 = false;
  QMutex::unlock();
  if (0 < *(int *)(local_170.field0_0x0 + 4)) {
    FUN_10047eb10(param_1,&local_170);
  }
switchD_100482ca0_caseD_1:
  if (bVar18) {
    QMutex::unlock();
  }
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar12 = local_178 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
LAB_100483290:
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_170.field0_0x0 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
  return uVar6;
}

