
undefined8 FUN_1000f4760(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  void *pvVar11;
  undefined8 uVar12;
  long *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  utimbuf local_190;
  QArrayData *local_180;
  undefined1 local_178 [8];
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  undefined **local_158 [2];
  QString local_148;
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  char local_122;
  undefined1 local_121;
  undefined1 local_120 [76];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_88 [80];
  long local_38;
  
  puVar4 = PTR_shared_null_1021e1288;
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_138 = (QArrayData *)PTR_shared_null_1021e1288;
  local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38 = lVar2;
  FUN_100d72f10(local_158);
  local_158[0] = &PTR_FUN_10226cb40;
  iVar8 = FUN_1000f5090(param_1,param_3,local_158);
  uVar12 = 3;
  if (iVar8 == 0) {
    FUN_1000f5210(param_1,param_3,&local_138,&local_140,&local_148);
    local_168.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
    QDir::QDir((QDir *)&local_160,&local_168);
    cVar6 = QDir::mkpath(&local_160);
    QDir::~QDir((QDir *)&local_160);
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_121 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1000f487b;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_1000f487b:
    if (cVar6 != '\0') {
      QString::toUtf8();
      iVar8 = FUN_100d74e50(local_158,local_170 + *(long *)(local_170 + 0x10),100);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_121 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_1000f48f0;
        }
        QArrayData::deallocate(local_170,1,8);
      }
LAB_1000f48f0:
      if (iVar8 == 0) {
        QString::toUtf8();
        iVar8 = _FSPathMakeRef(local_130 + *(long *)(local_130 + 0x10),local_88,&local_122);
        if (*(int *)local_130 != -1) {
          if (*(int *)local_130 != 0) {
            LOCK();
            *(int *)local_130 = *(int *)local_130 + -1;
            local_121 = *(int *)local_130 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_1000f4964;
          }
          QArrayData::deallocate(local_130,1,8);
        }
LAB_1000f4964:
        uVar12 = 3;
        cVar6 = '\x03';
        if ((iVar8 == 0) && (cVar6 = '\x03', local_122 == '\0')) {
          sVar7 = _FSGetCatalogInfo(local_88,0x800,local_120,0,0,0);
          cVar6 = '\x03';
          if (sVar7 == 0) {
            local_d0 = 0x50534158;
            if (param_2 == 0) {
              local_d4 = 0x50534136;
            }
            else {
              cVar6 = '\x02';
              if (param_2 != 1) goto LAB_1000f4a02;
              local_d4 = 0x50534135;
            }
            sVar7 = _FSSetCatalogInfo(local_88,0x800,local_120);
            cVar6 = (sVar7 != 0) * '\x03';
          }
        }
LAB_1000f4a02:
        if (cVar6 == '\0') {
          FUN_100ab71b0(local_178);
          FUN_100ab7640(local_178,param_3 + 0x30);
          FUN_100ab78c0(local_178,0x80);
          uVar12 = FUN_100ab7900();
          uVar9 = FUN_100ab7a20();
          FUN_100ab7880(local_178,uVar12,uVar9);
          QString::toUtf8();
          FUN_100ab78d0(local_178,local_180 + *(long *)(local_180 + 0x10));
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_121 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_121) goto LAB_1000f4abd;
            }
            QArrayData::deallocate(local_180,1,8);
          }
LAB_1000f4abd:
          cVar6 = QFile::rename(&local_148,&local_140);
          uVar12 = 3;
          if ((cVar6 != '\0') && (uVar12 = 0, param_2 == 0)) {
            local_190.actime = *(time_t *)(param_3 + 0x40);
            local_190.modtime = local_190.actime;
            QString::toUtf8();
            iVar8 = _utime((char *)(local_198 + *(long *)(local_198 + 0x10)),&local_190);
            if (*(int *)local_198 != -1) {
              if (*(int *)local_198 != 0) {
                LOCK();
                *(int *)local_198 = *(int *)local_198 + -1;
                local_121 = *(int *)local_198 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_1000f4b69;
              }
              QArrayData::deallocate(local_198,1,8);
            }
LAB_1000f4b69:
            if ((iVar8 != 0) && (piVar10 = ___error(), 0 < DAT_10230ffd0)) {
              iVar8 = *piVar10;
              QString::toUtf8();
              FUN_100df99c0("SGAC","prl_client_app",1,
                            "Failed to change modification time of file \'%s\' with error: %d",
                            local_1a0 + *(long *)(local_1a0 + 0x10),iVar8);
              if (*(int *)local_1a0 != -1) {
                if (*(int *)local_1a0 != 0) {
                  LOCK();
                  *(int *)local_1a0 = *(int *)local_1a0 + -1;
                  local_121 = *(int *)local_1a0 != 0;
                  UNLOCK();
                  if ((bool)local_121) goto LAB_1000f4c06;
                }
                QArrayData::deallocate(local_1a0,1,8);
              }
            }
LAB_1000f4c06:
            pvVar11 = operator_new(0x60);
            FUN_1000e6090(pvVar11);
            local_1a8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
            if (local_1a8 == (long *)0x0) {
              FUN_1000e6210(pvVar11);
              operator_delete(pvVar11);
              local_1a8 = (long *)0x0;
              pvVar11 = (void *)0x0;
            }
            else {
              *(undefined4 *)(local_1a8 + 1) = 1;
              local_1a8[2] = (long)pvVar11;
              *local_1a8 = (long)&PTR_FUN_10226d4b8;
            }
            plVar5 = local_1a8;
            QString::operator=((QString *)((long)pvVar11 + 0x10),(QString *)(param_3 + 0x10));
            *(undefined8 *)(plVar5[2] + 0x40) = *(undefined8 *)(param_3 + 0x40);
            uVar12 = 0;
            if (*(long *)(param_1 + 0x40) != 0) {
              uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
            }
            FUN_1000f7490(uVar12,&local_140,&local_1a8);
            uVar12 = 0;
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              lVar3 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                uVar12 = 0;
              }
            }
          }
          FUN_100ab75f0(local_178);
        }
      }
    }
  }
  FUN_100d72f50(local_158);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_121 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_121) goto LAB_1000f4d28;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1000f4d28:
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_121 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_121) goto LAB_1000f4d64;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_1000f4d64:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_121 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_121) goto LAB_1000f4da0;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1000f4da0:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

