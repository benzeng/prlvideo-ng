
void FUN_1000c71c0(long *param_1,long param_2,long *param_3,undefined8 *param_4,QString *param_5)

{
  long *plVar1;
  QString *pQVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  QArrayData *pQVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined1 local_181;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  uint *local_168;
  uint *local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined1 local_13e;
  undefined4 local_13c;
  QArrayData *local_138;
  QString local_130;
  uint *local_128;
  QArrayData *local_120;
  undefined1 local_118 [16];
  undefined *local_108;
  undefined *local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 local_ce;
  undefined1 local_ca;
  undefined *local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_60 [8];
  uint *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  if ((*(int *)(param_5->field0_0x0 + 4) == 0) || (*(int *)(param_5[1].field0_0x0 + 4) == 0)) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    QString::toUtf8();
    pQVar9 = local_48;
    lVar6 = *(long *)(local_48 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",1,
                  "Cannot add stub with empty field (name=\'%s\' path=\'%s\')",pQVar9 + lVar6,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c72ee;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1000c72ee:
    if (*(int *)local_48 == -1) {
      return;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return;
  }
  QMutex::lock();
  plVar1 = param_1 + 0xb;
  puVar11 = (uint *)param_1[0xb];
  if (*puVar11 < 2) {
    puVar13 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
  }
  else {
    FUN_1000e6e10(plVar1,puVar11[1]);
    puVar11 = (uint *)*plVar1;
    puVar13 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
    if (1 < *puVar11) {
      FUN_1000e6e10(plVar1,puVar11[1]);
      puVar11 = (uint *)*plVar1;
    }
  }
  pQVar2 = param_5 + 1;
  puVar11 = puVar11 + (long)(int)puVar11[3] * 2 + 4;
  if (puVar13 == puVar11) {
LAB_1000c73b2:
    if (puVar13 == puVar11) goto LAB_1000c73d4;
    bVar15 = false;
  }
  else {
    do {
      iVar10 = QString::compare(pQVar2,*(long *)puVar13 + 8,0);
      if (iVar10 == 0) {
        if ((((param_3 == (long *)0x0) ||
             (lVar6 = *(long *)puVar13, *param_3 != *(long *)(lVar6 + 0x28))) ||
            ((*(byte *)(lVar6 + 0x24) & 2) == 0)) ||
           ((*(int *)(lVar6 + 0x34) != 0 || (*(int *)(lVar6 + 0x30) != 0)))) goto LAB_1000c73b2;
        local_58 = puVar13;
        FUN_1000e49c0(local_60,plVar1,&local_58);
        goto LAB_1000c7d68;
      }
      puVar13 = puVar13 + 2;
    } while (puVar11 != puVar13);
LAB_1000c73d4:
    local_118._8_4_ = (int)PTR_shared_null_1021e1288;
    local_118._0_8_ = PTR_shared_null_1021e1288;
    local_118._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_108 = PTR_shared_null_1021e1288;
    local_100 = PTR_shared_null_1021e1288;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = PTR_shared_null_1021e15e8;
    local_d8 = PTR_shared_null_1021e1288;
    local_ce = 0;
    local_ca = 0;
    local_c0 = PTR_shared_null_1021e15e8;
    local_b8 = 0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    QString::operator=((QString *)local_118,param_5);
    QString::operator=((QString *)(local_118 + 8),pQVar2);
    local_70 = param_4[7];
    local_78 = param_4[6];
    local_80 = param_4[5];
    local_88 = param_4[4];
    local_90 = param_4[3];
    local_98 = param_4[2];
    local_a8 = *param_4;
    local_a0 = param_4[1];
    uVar5 = *(uint *)(param_2 + 0x24);
    if ((uVar5 & 0x2000) != 0) {
      QMutex::lock();
      QString::toUpper();
      FUN_1000341d0(param_1 + 0x49,&local_120);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c758d;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1000c758d:
      QMutex::unlock();
      uVar5 = *(uint *)(param_2 + 0x24);
    }
    if ((uVar5 & 4) != 0) {
      local_f8[0] = local_f8[0] | 2;
    }
    if ((uVar5 & 0x200) != 0) {
      local_f8[0] = local_f8[0] | 8;
    }
    local_40 = (uint *)*plVar1;
    if (1 < *local_40) {
      FUN_1000e6e10(plVar1,local_40[1]);
      local_40 = (uint *)*plVar1;
    }
    local_40 = local_40 + (long)(int)local_40[3] * 2 + 4;
    FUN_1000e52d0(&local_128,plVar1,&local_40,local_118);
    FUN_1000be7b0(local_118);
    bVar15 = true;
    puVar13 = local_128;
  }
  lVar6 = *(long *)puVar13;
  puVar3 = (undefined8 *)(lVar6 + 0x38);
  puVar11 = *(uint **)(lVar6 + 0x38);
  if (*puVar11 < 2) {
    puVar13 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
  }
  else {
    FUN_1000e7430(puVar3,puVar11[1]);
    puVar11 = (uint *)*puVar3;
    puVar13 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
    if (1 < *puVar11) {
      FUN_1000e7430(puVar3,puVar11[1]);
      puVar11 = (uint *)*puVar3;
    }
  }
  puVar11 = puVar11 + (long)(int)puVar11[3] * 2 + 4;
  puVar14 = puVar13;
  if (puVar13 != puVar11) {
    do {
      puVar14 = puVar13;
      if (*(long *)(param_2 + 0x43c) == **(long **)puVar13) break;
      puVar13 = puVar13 + 2;
      puVar14 = puVar11;
    } while (puVar11 != puVar13);
  }
  QString::fromUtf16((ushort *)&local_138,(int)param_2 + 0x444);
  QString::normalized(&local_130,&local_138,0,0);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_31 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c771a;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000c771a:
  if (puVar14 == puVar11) {
    if (((*(byte *)(param_2 + 0x25) & 0x10) != 0) &&
       ((ulong)*(uint *)(param_2 + 0x1c) != *(ulong *)(param_2 + 0x43c))) {
      FUN_1000c6190(param_1,lVar6,&local_130,*(undefined4 *)(param_2 + 0x14));
    }
    puVar8 = PTR_shared_null_1021e1288;
    local_150 = PTR_shared_null_1021e1288;
    local_148 = 0;
    local_13e = 0;
    local_13c = 0;
    local_158 = *(undefined8 *)(param_2 + 0x43c);
    local_168 = (uint *)*puVar3;
    if (1 < *local_168) {
      FUN_1000e7430(puVar3,local_168[1]);
      local_168 = (uint *)*puVar3;
    }
    local_168 = local_168 + (long)(int)local_168[3] * 2 + 4;
    FUN_1000e4a60(&local_160,puVar3,&local_168,&local_158);
    puVar13 = local_160;
    if (*(int *)puVar8 != -1) {
      if (*(int *)puVar8 != 0) {
        LOCK();
        *(int *)puVar8 = *(int *)puVar8 + -1;
        local_31 = *(int *)puVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c782a;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_1000c782a:
  lVar7 = *(long *)puVar13;
  *(ulong *)(lVar7 + 0x10) = (ulong)*(uint *)(param_2 + 0x14);
  *(byte *)(lVar7 + 0x1c) = *(byte *)(lVar7 + 0x1c) | 2;
  QString::operator=((QString *)(lVar7 + 8),&local_130);
  piVar4 = (int *)(lVar6 + 0x30);
  if ((*(int *)(lVar6 + 0x34) != 0) || (*piVar4 != 0)) {
    local_170 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1000c8180(&local_170,(QString *)(lVar7 + 8),lVar7);
    if ((*(uint *)(lVar7 + 0x1c) & 4) == 0) {
      *(uint *)(lVar7 + 0x1c) = *(uint *)(lVar7 + 0x1c) | 4;
      FUN_1000c4970(piVar4,0x78,local_170 + *(long *)(local_170 + 0x10),
                    *(undefined4 *)(local_170 + 4));
      FUN_1000c8260(param_1,lVar6);
    }
    else {
      FUN_1000c4970(piVar4,0x7a,local_170 + *(long *)(local_170 + 0x10),
                    *(undefined4 *)(local_170 + 4));
    }
    local_178 = (QArrayData *)param_1[2];
    lVar7 = param_1[10];
    if (1 < *(int *)local_178 + 1U) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + 1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
    }
    local_180 = *(QArrayData **)(lVar6 + 8);
    if (1 < *(int *)local_180 + 1U) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + 1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
    }
    FUN_1000b0e90(lVar7,&local_178,&local_180,*(undefined8 *)piVar4,*(undefined8 *)(param_2 + 0x43c)
                 );
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c797a;
      }
      QArrayData::deallocate(local_180,2,8);
    }
LAB_1000c797a:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c79b0;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_1000c79b0:
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_31 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000c79e6;
      }
      QArrayData::deallocate(local_170,1,8);
    }
  }
LAB_1000c79e6:
  if ((*(uint *)(lVar6 + 0x24) & 4) != 0) {
    *(uint *)(lVar6 + 0x24) = *(uint *)(lVar6 + 0x24) & 0xfffffffb;
    uVar12 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e92d0(uVar12,*(undefined8 *)(param_2 + 0x43c));
    if ((*(int *)(lVar6 + 0x34) != 0) || (*piVar4 != 0)) {
      FUN_1000c8450(param_1,lVar6,piVar4);
    }
  }
  *(byte *)(lVar6 + 0x24) = *(byte *)(lVar6 + 0x24) & 0xfd;
  if (((*(int *)(lVar6 + 0x34) == 0) && (*piVar4 == 0)) &&
     ((bVar15 || ((param_3 != (long *)0x0 && (*(long *)(lVar6 + 0x28) == *param_3)))))) {
    local_181 = 0;
    iVar10 = FUN_1000c87e0(param_1,param_5,(QString *)(lVar6 + 0x10),&local_181);
    if (iVar10 == 0) {
LAB_1000c7cd4:
      *(undefined8 *)(lVar6 + 0x28) = 0;
      FUN_1000caf00(param_1,lVar6,*(undefined4 *)(param_2 + 0x14),local_181);
      goto LAB_1000c7cf8;
    }
    if (param_5[4].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      bVar15 = false;
    }
    else {
      bVar15 = *(long *)(param_5[4].field0_0x0 + 0x10) != 0;
    }
    if (((param_3 == (long *)0x0) || (bVar15)) || (*(long *)(lVar6 + 0x28) != 0)) {
      if (iVar10 != 1) {
        if (iVar10 == 2) {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",0,"Failed to patch helper for app \'%s\'",
                        local_190 + *(long *)(local_190 + 0x10));
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_31 = *(int *)local_190 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c7b5a;
            }
            QArrayData::deallocate(local_190,1,8);
          }
        }
LAB_1000c7b5a:
        if (param_5[4].field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
          bVar15 = false;
        }
        else {
          bVar15 = *(long *)(param_5[4].field0_0x0 + 0x10) != 0;
        }
        if ((!bVar15) && (0 < DAT_10230ffd0)) {
          QString::toUtf8();
          FUN_100df99c0("SGAC","prl_client_app",1,"Creating helper for app \'%s\' without icon",
                        local_198 + *(long *)(local_198 + 0x10));
          if (*(int *)local_198 != -1) {
            if (*(int *)local_198 != 0) {
              LOCK();
              *(int *)local_198 = *(int *)local_198 + -1;
              local_31 = *(int *)local_198 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000c7c27;
            }
            QArrayData::deallocate(local_198,1,8);
          }
        }
LAB_1000c7c27:
        local_181 = 1;
        FUN_1000ca990(&local_1a0,param_1,param_5);
        QString::operator=((QString *)(lVar6 + 0x10),&local_1a0);
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_31 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000c7c89;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
LAB_1000c7c89:
        uVar12 = (**(code **)(*param_1 + 0x68))(param_1);
        local_1a8 = PTR_shared_null_1021e15e8;
        FUN_1000341d0(&local_1a8,pQVar2);
        FUN_1000e9920(uVar12,&local_1a8);
        FUN_100039a80(&local_1a8);
      }
      goto LAB_1000c7cd4;
    }
    *(long *)(lVar6 + 0x28) = *param_3;
    uVar12 = (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1000e85b0(uVar12,param_2);
  }
  else {
LAB_1000c7cf8:
    if ((param_5[4].field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) &&
       (*(long *)(param_5[4].field0_0x0 + 0x10) != 0)) {
      FUN_1000cb0b0();
    }
    if (*(char *)((long)param_1 + 0x251) != '\0') {
      FUN_1000c5f40(param_1,param_4);
    }
  }
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c7d68;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_1000c7d68:
  QMutex::unlock();
  return;
}

