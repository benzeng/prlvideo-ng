
undefined8 FUN_1000dcbf0(long *param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong in_stack_fffffffffffffda8;
  QWidget *pQVar14;
  undefined1 local_230 [8];
  QString local_228;
  QString local_220;
  undefined1 local_218 [16];
  QString local_208;
  undefined *local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined1 local_1ce;
  undefined1 local_1ca;
  undefined *local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  QArrayData *local_160;
  undefined8 local_158;
  QString local_150;
  QArrayData *local_148;
  QFileInfo local_140 [8];
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  undefined1 local_110 [32];
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  ExternalRefCountData *local_58;
  AnonymousUnion0 local_50;
  QArrayData *local_48;
  uint *local_40 [2];
  
  cVar5 = FUN_1000a6280((QStringList *)(param_1 + 2));
  uVar10 = (undefined4)(in_stack_fffffffffffffda8 >> 0x20);
  if (cVar5 == '\0') {
    iVar6 = CMessageManager::instance();
    local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_58 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_98 = (undefined1  [16])0x0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    local_d8 = (undefined1  [16])0x0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    pQVar14 = (QWidget *)(in_stack_fffffffffffffda8 & 0xffffffff00000000);
    CMessageManager::showMessageBox
              (iVar6,(QString *)0x3c64,(QStringList *)(param_1 + 2),(QStringList *)&local_50.field0,
               (CSlotInfo *)&local_58,SUB81(local_98,0),pQVar14,(CSlotInfo *)0x0);
    uVar10 = (undefined4)((ulong)pQVar14 >> 0x20);
    QVariant::~QVariant((QVariant *)&local_b8);
    if ((int *)local_d8._0_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_d8._0_8_ = *(int *)local_d8._0_8_ + -1;
      local_40[1]._7_1_ = *(int *)local_d8._0_8_ != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && ((int *)local_d8._0_8_ != (int *)0x0)) {
        operator_delete((void *)local_d8._0_8_);
      }
    }
    QVariant::~QVariant((QVariant *)&local_78);
    if ((int *)local_98._0_8_ != (int *)0x0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_40[1]._7_1_ = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && ((int *)local_98._0_8_ != (int *)0x0)) {
        operator_delete((void *)local_98._0_8_);
      }
    }
    FUN_100039a80(&local_58);
    FUN_100039a80(&local_50);
    lVar7 = (**(code **)(*param_1 + 0x68))(param_1);
    if (*(char *)(lVar7 + 0xc) == '\0') {
      FUN_100df99c0("SGAC","prl_client_app",0,
                    "Error: not enabled by guest, guest tools not installed");
      return 0xffffffff;
    }
  }
  FUN_1000ae530(&local_e0,param_2);
  local_e8.field0_0x0 = local_e0.field0_0x0;
  if (1 < *(int *)local_e0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
    local_40[1]._7_1_ = *(int *)local_e0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db6890);
  QString::append(&local_e8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_40[1]._7_1_ = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1000dcdef;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000dcdef:
  cVar5 = QFile::exists(&local_e8);
  if (cVar5 != '\0') {
    local_118 = (QArrayData *)local_e8.field0_0x0;
    if (1 < *(int *)local_e8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
      local_40[1]._7_1_ = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_100b56ca0(local_110,&local_118);
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_40[1]._7_1_ = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dce6b;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_1000dce6b:
    local_128 = (QArrayData *)QString::fromAscii_helper("System",6);
    local_130 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
    local_138 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_100b57250(&local_120,local_110,&local_128,&local_130,&local_138);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_40[1]._7_1_ = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dcf07;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1000dcf07:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_40[1]._7_1_ = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dcf3d;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1000dcf3d:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_40[1]._7_1_ = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dcf73;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1000dcf73:
    QFileInfo::QFileInfo(local_140,&local_e0);
    if (param_3 == '\0') {
      puVar8 = (uint *)param_1[0xb];
      uVar11 = 0;
      if ((int)puVar8[2] < (int)puVar8[3]) {
        plVar2 = param_1 + 0xb;
        do {
          if (1 < *puVar8) {
            FUN_1000e6e10(plVar2,puVar8[1]);
            puVar8 = (uint *)*plVar2;
          }
          uVar9 = puVar8[2];
          lVar7 = *(long *)(puVar8 + ((long)(int)uVar9 + uVar11) * 2 + 4);
          if ((((*(byte *)(lVar7 + 0x24) & 0x10) != 0) && (*(int *)(lVar7 + 0x30) == 0)) &&
             (*(int *)(lVar7 + 0x34) == 0)) {
            iVar6 = QString::compare(lVar7 + 8,&local_120,0);
            if (iVar6 == 0) {
              if ((*(byte *)(lVar7 + 0x24) & 2) == 0) {
                *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)param_2;
                *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)((long)param_2 + 4);
                QFileInfo::absoluteFilePath();
                QString::operator=((QString *)(lVar7 + 0x10),&local_150);
                if (*(int *)local_150.field0_0x0 != -1) {
                  if (*(int *)local_150.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                    local_40[1]._7_1_ = *(int *)local_150.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_40[1]._7_1_) goto LAB_1000dd43d;
                  }
                  QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
                }
LAB_1000dd43d:
                puVar8 = *(uint **)(lVar7 + 0x38);
                if ((int)puVar8[3] <= (int)puVar8[2]) goto LAB_1000dd52f;
                puVar1 = (undefined8 *)(lVar7 + 0x38);
                lVar12 = 0;
                goto LAB_1000dd45f;
              }
              if (1 < DAT_10230ffd0) {
                uVar10 = *(undefined4 *)param_2;
                uVar3 = *(undefined4 *)((long)param_2 + 4);
                QString::toUtf8();
                FUN_100df99c0("SGAC","prl_client_app",2,
                              "Helper (psn={%u, %u}, pva=\"%s\") has kQuitReq flag set",uVar10,uVar3
                              ,local_148 + *(long *)(local_148 + 0x10));
                if (*(int *)local_148 != -1) {
                  if (*(int *)local_148 != 0) {
                    LOCK();
                    *(int *)local_148 = *(int *)local_148 + -1;
                    local_40[1]._7_1_ = *(int *)local_148 != 0;
                    UNLOCK();
                    if ((bool)local_40[1]._7_1_) goto LAB_1000dd601;
                  }
                  QArrayData::deallocate(local_148,1,8);
                }
              }
LAB_1000dd601:
              uVar13 = 0xffffffff;
              if ((-1 < (int)uVar11) &&
                 ((int)uVar11 < *(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8))) {
                FUN_1000e53a0(plVar2,uVar11 & 0xffffffff);
                FUN_1000df020(param_1);
                FUN_1000df110(param_1);
              }
              goto LAB_1000dd24b;
            }
            puVar8 = (uint *)*plVar2;
            uVar9 = puVar8[2];
          }
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)puVar8[3] - (long)(int)uVar9);
      }
    }
    local_218._8_4_ = (int)PTR_shared_null_1021e1288;
    local_218._0_8_ = PTR_shared_null_1021e1288;
    local_218._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_208.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_200 = PTR_shared_null_1021e1288;
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = 0;
    local_1e0 = PTR_shared_null_1021e15e8;
    local_1d8 = PTR_shared_null_1021e1288;
    local_1ce = 0;
    local_1ca = 0;
    local_1c0 = PTR_shared_null_1021e15e8;
    local_1b8 = 0;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    QString::operator=((QString *)(local_218 + 8),&local_120);
    QFileInfo::completeBaseName();
    QString::operator=((QString *)local_218,&local_220);
    if (*(int *)local_220.field0_0x0 != -1) {
      if (*(int *)local_220.field0_0x0 != 0) {
        LOCK();
        *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
        local_40[1]._7_1_ = *(int *)local_220.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dd166;
      }
      QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
    }
LAB_1000dd166:
    QFileInfo::absoluteFilePath();
    QString::operator=(&local_208,&local_228);
    if (*(int *)local_228.field0_0x0 != -1) {
      if (*(int *)local_228.field0_0x0 != 0) {
        LOCK();
        *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
        local_40[1]._7_1_ = *(int *)local_228.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_40[1]._7_1_) goto LAB_1000dd1c2;
      }
      QArrayData::deallocate((QArrayData *)local_228.field0_0x0,2,8);
    }
LAB_1000dd1c2:
    local_1e8 = *param_2;
    lVar7 = (**(code **)(*param_1 + 0x68))(param_1);
    uVar10 = 4;
    if (*(char *)(lVar7 + 0xc) == '\0') {
      uVar10 = 5;
    }
    local_1f8._4_4_ = uVar10;
    local_40[0] = (uint *)param_1[0xb];
    param_1 = param_1 + 0xb;
    if (1 < *local_40[0]) {
      FUN_1000e6e10(param_1,local_40[0][1]);
      local_40[0] = (uint *)*param_1;
    }
    local_40[0] = local_40[0] + (long)(int)local_40[0][3] * 2 + 4;
    FUN_1000e52d0(local_230,param_1,local_40,local_218);
    FUN_1000be7b0(local_218);
    uVar13 = 0;
    goto LAB_1000dd24b;
  }
  QString::toUtf8();
  FUN_100df99c0("SGAC","prl_client_app",0,
                "Error: pva file \"%s\" doesn\'t exists (required by running helper with psn={%u, %u})"
                ,local_f0 + *(long *)(local_f0 + 0x10),*(undefined4 *)param_2,
                CONCAT44(uVar10,*(undefined4 *)((long)param_2 + 4)));
  uVar13 = 0xffffffff;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_40[1]._7_1_ = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1000dd323;
    }
    QArrayData::deallocate(local_f0,1,8);
  }
  goto LAB_1000dd323;
LAB_1000dd45f:
  do {
    if (1 < *puVar8) {
      FUN_1000e7430(puVar1,puVar8[1]);
      puVar8 = (uint *)*puVar1;
    }
    puVar4 = *(undefined8 **)(puVar8 + ((int)puVar8[2] + lVar12) * 2 + 4);
    if ((*(byte *)((long)puVar4 + 0x1c) & 2) != 0) {
      local_158 = *puVar4;
      local_160 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_1000c8180(&local_160,puVar4 + 1,&local_158);
      FUN_1000c4970(lVar7 + 0x30,0x78,local_160 + *(long *)(local_160 + 0x10),
                    *(undefined4 *)(local_160 + 4));
      *(byte *)((long)puVar4 + 0x1c) = *(byte *)((long)puVar4 + 0x1c) | 4;
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_40[1]._7_1_ = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_40[1]._7_1_) goto LAB_1000dd515;
        }
        QArrayData::deallocate(local_160,1,8);
      }
    }
LAB_1000dd515:
    lVar12 = lVar12 + 1;
    puVar8 = (uint *)*puVar1;
  } while (lVar12 < (long)(int)puVar8[3] - (long)(int)puVar8[2]);
LAB_1000dd52f:
  uVar9 = *(uint *)(lVar7 + 0x20);
  if ((uVar9 & 2) == 0) {
    FUN_1000c8260(param_1,lVar7);
    uVar9 = *(uint *)(lVar7 + 0x20);
  }
  *(undefined4 *)(lVar7 + 0x4c) = 0;
  *(uint *)(lVar7 + 0x20) = uVar9 & 0xfffffffb;
  uVar13 = 1;
  FUN_1000cb9e0(param_1,lVar7);
LAB_1000dd24b:
  QFileInfo::~QFileInfo(local_140);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_40[1]._7_1_ = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1000dd28d;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_1000dd28d:
  FUN_100b57060(local_110);
LAB_1000dd323:
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_40[1]._7_1_ = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_40[1]._7_1_) goto LAB_1000dd359;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1000dd359:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_e0.field0_0x0 != 0) {
        return uVar13;
      }
      local_40[1]._7_1_ = 0;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
  return uVar13;
}

