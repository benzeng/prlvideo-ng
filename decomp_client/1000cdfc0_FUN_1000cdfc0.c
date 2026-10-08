
void FUN_1000cdfc0(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_200;
  QTypedArrayData<unsigned_short> *pQStack_1f0;
  int local_1e0;
  QArrayData *local_1a8;
  int *local_1a0;
  QString local_198;
  QString QStack_190;
  undefined *local_188;
  undefined8 uStack_180;
  long local_178;
  undefined1 local_170;
  undefined8 local_168;
  QArrayData *local_158;
  long local_150;
  QString local_148;
  QString local_140;
  undefined1 local_138 [8];
  QString local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [40];
  byte local_e8;
  undefined1 local_e0 [96];
  QArrayData *local_80;
  QArrayData *local_78;
  int *local_70;
  undefined1 local_68 [32];
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_70 = (int *)PTR_shared_null_1021e15e8;
  plVar1 = param_1 + 0x2b;
  FUN_1000f3390(plVar1,0);
  local_78 = (QArrayData *)QString::fromAscii_helper("en",2);
  cVar5 = FUN_10004db40(param_1 + 6,param_1 + 7,&local_78);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ce062;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000ce062:
  if (cVar5 == '\0' && 0 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",1,"Warning: failed to localize folder \"%s\"",
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000ce0d8;
      }
      QArrayData::deallocate(local_80,1,8);
    }
  }
LAB_1000ce0d8:
  FUN_1000f6ad0(param_1 + 2,param_1 + 6);
  if ((param_3 & 0x10) == 0) {
    iVar6 = FUN_100a67f70(local_68,0x14);
    if (iVar6 == 0) {
      FUN_1000f5ae0(plVar1);
      lVar15 = *param_2;
      iVar7 = *(int *)(lVar15 + 8);
      iVar6 = 0;
      if (iVar7 != *(int *)(lVar15 + 0xc)) {
        plVar17 = (long *)(lVar15 + 0x10 + (long)iVar7 * 8);
        lVar15 = (long)*(int *)(lVar15 + 0xc) * 8 + (long)iVar7 * -8;
        iVar6 = 0;
        do {
          FUN_1000e6090(local_e0);
          QMutex::lock();
          lVar16 = *plVar17;
          iVar7 = FUN_1000f3ec0(plVar1,*(long *)(lVar16 + 0x10) + lVar16,*(undefined4 *)(lVar16 + 4)
                                ,0,param_1 + 0x34,local_e0);
          QMutex::unlock();
          iVar13 = 0;
          if (iVar7 == 0) {
            FUN_1000f5c30(plVar1,local_e0);
            cVar5 = FUN_1000f5660(plVar1,local_e0);
            if (cVar5 == '\0') {
              iVar13 = 10;
            }
            else {
              lVar16 = *plVar17;
              iVar7 = FUN_100a68060(local_68,*(long *)(lVar16 + 0x10) + lVar16,
                                    *(undefined4 *)(lVar16 + 4));
              if (iVar7 == 0) {
                iVar6 = iVar6 + 1;
              }
              else {
                iVar13 = 0xd;
                if (0 < DAT_10230ffd0) {
                  FUN_100df99c0("SGAC","prl_client_app",1,"bbPut() err %i",iVar7);
                }
              }
            }
          }
          FUN_1000e6210(local_e0);
          if (iVar13 != 0) {
            if (iVar13 == 0xd) goto LAB_1000ce823;
            if (iVar13 != 10) goto LAB_1000ce910;
          }
          plVar17 = plVar17 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
      if ((param_3 & 0x80) == 0) {
        FUN_1000f5e50(plVar1);
      }
      if (0 < iVar6) {
        puVar9 = (undefined4 *)FUN_100a67f30(local_68);
        puVar9[1] = 2;
        *puVar9 = 0x7d;
        puVar9[2] = 0;
        iVar6 = FUN_100a67f40(local_68);
        puVar9[4] = iVar6 + -0x14;
        puVar9[3] = 0x90;
        uVar10 = (**(code **)(*param_1 + 0x68))();
        FUN_1000e85b0(uVar10,puVar9);
      }
LAB_1000ce823:
      FUN_100a681d0(local_68);
    }
    else if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",1,"bbCompose() err %i",iVar6);
    }
  }
  else {
    if ((param_3 & 0x80) == 0) {
      FUN_1000f3e00(plVar1,0);
    }
    puVar4 = PTR_shared_null_1021e15e8;
    puVar3 = PTR_shared_null_1021e1288;
    lVar15 = *param_2;
    iVar6 = *(int *)(lVar15 + 0xc);
    if (*(int *)(lVar15 + 8) != iVar6) {
      plVar18 = (long *)(lVar15 + 0x10 + (long)*(int *)(lVar15 + 8) * 8);
      plVar17 = param_1 + 0x49;
      local_1e0 = 10000;
      auVar19._8_4_ = (int)PTR_shared_null_1021e1288;
      auVar19._0_8_ = PTR_shared_null_1021e1288;
      auVar19._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      auVar20._8_4_ = (int)PTR_shared_null_1021e15e8;
      auVar20._0_8_ = PTR_shared_null_1021e15e8;
      auVar20._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
      do {
        FUN_1000e6090(&local_140);
        QMutex::lock();
        lVar16 = *plVar18;
        iVar7 = FUN_1000f3ec0(plVar1,*(long *)(lVar16 + 0x10) + lVar16,*(undefined4 *)(lVar16 + 4),0
                              ,param_1 + 0x34,&local_140);
        QMutex::unlock();
        if (iVar7 == 0) {
          FUN_1000f4760(plVar1,0,&local_140);
          QString::toUpper();
          lVar16 = *plVar17;
          iVar7 = *(int *)(lVar16 + 8);
          iVar13 = -1;
          if (iVar7 < *(int *)(lVar16 + 0xc)) {
            lVar14 = lVar16 + 8 + (long)iVar7 * 8;
            lVar16 = (long)*(int *)(lVar16 + 0xc) * 8 + (long)iVar7 * -8;
            do {
              if (lVar16 == 0) {
                iVar13 = -1;
                goto LAB_1000ce307;
              }
              cVar5 = operator==((QString *)(lVar14 + 8),&local_148);
              lVar14 = lVar14 + 8;
              lVar16 = lVar16 + -8;
            } while (cVar5 == '\0');
            iVar13 = (int)(lVar14 - (*plVar17 + 0x10 + (ulong)*(uint *)(*plVar17 + 8) * 8) >> 3);
          }
LAB_1000ce307:
          if (*(int *)local_148.field0_0x0 != -1) {
            if (*(int *)local_148.field0_0x0 != 0) {
              LOCK();
              *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
              local_31 = *(int *)local_148.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000ce33d;
            }
            QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
          }
LAB_1000ce33d:
          if ((-1 < iVar13) && ((local_e8 & 2) == 0)) {
            FUN_100094da0(plVar17,iVar13);
            local_158 = (QArrayData *)QString::fromAscii_helper("/",1);
            QString::split(&local_150,local_138,&local_158,0,1);
            iVar7 = *(int *)(local_150 + 0xc) - *(int *)(local_150 + 8);
            FUN_100039a80(&local_150);
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_31 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000ce3e3;
              }
              QArrayData::deallocate(local_158,2,8);
            }
LAB_1000ce3e3:
            if (iVar7 < local_1e0) {
              local_40 = PTR_shared_null_1021e15e8;
              FUN_1000e5fc0(&local_70,&local_40);
              FUN_100039a80(&local_40);
              local_1e0 = iVar7;
            }
            if ((iVar7 == local_1e0) &&
               (cVar5 = QtPrivate::QStringList_contains(&local_70,local_128,1), local_1e0 = iVar7,
               cVar5 == '\0')) {
              FUN_1000341d0(&local_70,local_128);
            }
          }
          if ((param_3 & 0x800) != 0) {
            pQStack_1f0 = auVar19._8_8_;
            local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
            QStack_190.field0_0x0 = pQStack_1f0;
            uStack_200 = auVar20._8_8_;
            local_188 = puVar4;
            uStack_180 = uStack_200;
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            QString::operator=(&local_198,&local_140);
            QString::operator=(&QStack_190,&local_130);
            local_170 = 0;
            pvVar8 = operator_new(8);
            FUN_100ab71b0(pvVar8);
            FUN_1000e4bf0(&local_178,pvVar8);
            uVar10 = 0;
            if (local_178 != 0) {
              uVar10 = *(undefined8 *)(local_178 + 0x10);
            }
            FUN_100ab7640(uVar10,local_110);
            FUN_1000cd500(param_1,&local_198);
            FUN_1000e64e0(&local_198);
          }
        }
        FUN_1000e6210(&local_140);
        plVar18 = plVar18 + 1;
      } while (plVar18 != (long *)(lVar15 + 0x10 + (long)iVar6 * 8));
    }
    if (((local_70[3] != local_70[2]) && (*(char *)((long)param_1 + 0x101) != '\0')) &&
       ((char)param_1[0x2d] == '\0')) {
      local_1a0 = local_70;
      if (*local_70 != -1) {
        if (*local_70 == 0) {
          QListData::detach((int)&local_1a0);
          iVar6 = local_1a0[2];
          if (iVar6 != local_1a0[3]) {
            piVar11 = local_70 + (long)local_70[2] * 2 + 4;
            piVar12 = local_1a0 + (long)iVar6 * 2 + 4;
            lVar15 = (long)local_1a0[3] * 8 + (long)iVar6 * -8;
            do {
              piVar2 = *(int **)piVar11;
              *(int **)piVar12 = piVar2;
              if (1 < *piVar2 + 1U) {
                LOCK();
                *piVar2 = *piVar2 + 1;
                local_31 = *piVar2 != 0;
                UNLOCK();
              }
              piVar12 = piVar12 + 2;
              piVar11 = piVar11 + 2;
              lVar15 = lVar15 + -8;
            } while (lVar15 != 0);
          }
        }
        else {
          LOCK();
          *local_70 = *local_70 + 1;
          local_31 = *local_70 != 0;
          UNLOCK();
        }
      }
      FUN_1007f88c0(param_1,&local_1a0);
      FUN_100039a80(&local_1a0);
    }
    if ((char)param_1[0x2d] != '\0') {
      local_48 = PTR_shared_null_1021e15e8;
      FUN_1000e5fc0(param_1 + 0x49,&local_48);
      FUN_100039a80(&local_48);
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;
    if ((char)param_1[0x20] != '\0') {
      local_1a8 = (QArrayData *)param_1[2];
      if (1 < *(int *)local_1a8 + 1U) {
        LOCK();
        *(int *)local_1a8 = *(int *)local_1a8 + 1;
        local_31 = *(int *)local_1a8 != 0;
        UNLOCK();
      }
      FUN_1007f8860(param_1,&local_1a8,1,0);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000ce910;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
    }
  }
LAB_1000ce910:
  FUN_100039a80(&local_70);
  return;
}

