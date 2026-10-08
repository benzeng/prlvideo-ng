
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100d32e00(int param_1,QString *param_2,QString *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  bool bVar2;
  QMapNodeBase *pQVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  QString *pQVar11;
  long *plVar12;
  int *piVar13;
  int *piVar14;
  QArrayData *pQVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  float fVar19;
  float local_23c;
  int local_21c;
  QArrayData *local_218;
  undefined1 local_209;
  long local_208 [2];
  QString local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QTypedArrayData<unsigned_short> *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QString local_1c8;
  QFileInfo local_1c0 [8];
  QString local_1b8;
  int *local_1b0;
  int *local_1a8;
  int *local_1a0;
  uint local_198;
  QFileInfo local_190 [8];
  long local_188;
  QString local_180;
  int *local_178;
  int *local_170;
  QMapNodeBase *local_168;
  int *local_160;
  QTypedArrayData<unsigned_short> *local_158;
  QArrayData *local_150;
  QString local_148;
  QString local_140;
  QFileInfo local_138 [8];
  QFileInfo local_130 [15];
  undefined1 local_121;
  undefined1 local_120 [85];
  byte local_cb;
  undefined1 local_88 [80];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar9;
  QFileInfo::QFileInfo(local_130,param_2);
  cVar4 = QFileInfo::exists();
  local_21c = 0x8b60002;
  if (cVar4 == '\0') goto LAB_100d33b66;
  cVar4 = QFileInfo::isDir();
  if ((cVar4 != '\0') || (cVar4 = QFileInfo::isBundle(), cVar4 != '\0')) {
    QFileInfo::QFileInfo(local_138,param_3);
    cVar4 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_138);
    if (cVar4 == '\0') {
      local_148.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QDir::QDir((QDir *)&local_140,&local_148);
      if (*(int *)local_148.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
          local_121 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_100d32f1f;
        }
        QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
      }
LAB_100d32f1f:
      cVar4 = QDir::mkpath(&local_140);
      bVar18 = false;
      if (cVar4 == '\0') {
        local_158 = param_3->field0_0x0;
        if (1 < *(int *)local_158 + 1U) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + 1;
          local_121 = *(int *)local_158 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","VIUtils",0,"TR00047.18:\t%s",local_150 + *(long *)(local_150 + 0x10));
        if (*(int *)local_150 != -1) {
          if (*(int *)local_150 != 0) {
            LOCK();
            *(int *)local_150 = *(int *)local_150 + -1;
            local_121 = *(int *)local_150 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_100d32fd9;
          }
          QArrayData::deallocate(local_150,1,8);
        }
LAB_100d32fd9:
        bVar18 = true;
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_121 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_100d3301a;
          }
          QArrayData::deallocate((QArrayData *)local_158,2,8);
        }
      }
LAB_100d3301a:
      QDir::~QDir((QDir *)&local_140);
      local_21c = 0x8b60009;
      if (bVar18) goto LAB_100d33b66;
    }
  }
  local_160 = (int *)PTR_shared_null_1021e15e8;
  FUN_100d34040(param_2);
  local_168 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_178 = local_160;
  if (*local_160 != -1) {
    if (*local_160 == 0) {
      QListData::detach((int)&local_178);
      iVar8 = local_178[2];
      if (iVar8 != local_178[3]) {
        piVar13 = local_160 + (long)local_160[2] * 2 + 4;
        piVar14 = local_178 + (long)iVar8 * 2 + 4;
        lVar9 = (long)local_178[3] * 8 + (long)iVar8 * -8;
        do {
          piVar1 = *(int **)piVar13;
          *(int **)piVar14 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_121 = *piVar1 != 0;
            UNLOCK();
          }
          piVar14 = piVar14 + 2;
          piVar13 = piVar13 + 2;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
    else {
      LOCK();
      *local_160 = *local_160 + 1;
      local_121 = *local_160 != 0;
      UNLOCK();
    }
  }
  local_170 = local_178 + (long)local_178[2] * 2 + 4;
  lVar9 = 0;
  if (local_178[2] != local_178[3]) {
    lVar9 = 0;
    do {
      local_180.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_170;
      if (1 < *(int *)local_180.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + 1;
        local_121 = *(int *)local_180.field0_0x0 != 0;
        UNLOCK();
      }
      local_170 = local_170 + 2;
      QFileInfo::QFileInfo(local_190,&local_180);
      lVar10 = QFileInfo::size();
      QFileInfo::~QFileInfo(local_190);
      local_188 = lVar10;
      FUN_100dcc950(&local_168,&local_180,&local_188);
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_121 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_100d331ec;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_100d331ec:
      lVar9 = lVar9 + lVar10;
    } while (local_170 != local_178 + (long)local_178[3] * 2 + 4);
  }
  local_1b0 = local_160;
  if (*local_160 != -1) {
    if (*local_160 == 0) {
      QListData::detach((int)&local_1b0);
      iVar8 = local_1b0[2];
      if (iVar8 != local_1b0[3]) {
        piVar13 = local_160 + (long)local_160[2] * 2 + 4;
        piVar14 = local_1b0 + (long)iVar8 * 2 + 4;
        lVar10 = (long)local_1b0[3] * 8 + (long)iVar8 * -8;
        do {
          piVar1 = *(int **)piVar13;
          *(int **)piVar14 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_121 = *piVar1 != 0;
            UNLOCK();
          }
          piVar14 = piVar14 + 2;
          piVar13 = piVar13 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_160 = *local_160 + 1;
      local_121 = *local_160 != 0;
      UNLOCK();
    }
  }
  local_1a8 = local_1b0 + (long)local_1b0[2] * 2 + 4;
  local_1a0 = local_1b0 + (long)local_1b0[3] * 2 + 4;
  local_198 = 1;
  if (local_1b0[2] == local_1b0[3]) {
    local_21c = 0x8b60009;
  }
  else {
    local_21c = 0x8b60009;
    local_23c = 0.0;
    do {
      local_1b8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_1a8;
      if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
        local_121 = *(int *)local_1b8.field0_0x0 != 0;
        UNLOCK();
      }
      iVar8 = 0xb;
      if (local_198 != 0) {
        QFileInfo::QFileInfo(local_1c0,&local_1b8);
        cVar4 = QFileInfo::isDir();
        if (cVar4 == '\0') {
LAB_100d3365a:
          cVar4 = QFileInfo::isFile();
          if (cVar4 != '\0') {
            local_1f8.field0_0x0 = local_1b8.field0_0x0;
            if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
              local_121 = *(int *)local_1b8.field0_0x0 != 0;
              UNLOCK();
            }
            pQVar11 = (QString *)QString::replace(&local_1f8,param_2,param_3,1);
            QString::operator=(&local_1f8,pQVar11);
            pQVar3 = local_168;
            local_208[1] = 0;
            lVar10 = *(long *)(local_168 + 0x10);
            lVar17 = 0;
            if (*(long *)(local_168 + 0x10) == 0) {
LAB_100d3372a:
              lVar16 = 0;
            }
            else {
              do {
                while (lVar16 = lVar10, cVar4 = operator<((QString *)(lVar16 + 0x18),&local_1b8),
                      cVar4 != '\0') {
                  lVar10 = *(long *)(lVar16 + 0x10);
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    lVar16 = lVar17;
                    if (lVar17 == 0) goto LAB_100d3372a;
                    goto LAB_100d33716;
                  }
                }
                lVar10 = *(long *)(lVar16 + 8);
                lVar17 = lVar16;
              } while (*(long *)(lVar16 + 8) != 0);
LAB_100d33716:
              cVar4 = operator<(&local_1b8,(QString *)(lVar16 + 0x18));
              if (cVar4 != '\0') goto LAB_100d3372a;
            }
            plVar12 = (long *)(lVar16 + 0x20);
            if (lVar16 == 0) {
              plVar12 = local_208 + 1;
            }
            fVar19 = 0.0;
            if (0 < *plVar12) {
              local_208[0] = 0;
              lVar10 = *(long *)(pQVar3 + 0x10);
              lVar17 = 0;
              if (*(long *)(pQVar3 + 0x10) == 0) {
LAB_100d337b9:
                lVar16 = 0;
              }
              else {
                do {
                  while (lVar16 = lVar10, cVar4 = operator<((QString *)(lVar16 + 0x18),&local_1b8),
                        cVar4 != '\0') {
                    lVar10 = *(long *)(lVar16 + 0x10);
                    if (*(long *)(lVar16 + 0x10) == 0) {
                      lVar16 = lVar17;
                      if (lVar17 == 0) goto LAB_100d337b9;
                      goto LAB_100d337a5;
                    }
                  }
                  lVar10 = *(long *)(lVar16 + 8);
                  lVar17 = lVar16;
                } while (*(long *)(lVar16 + 8) != 0);
LAB_100d337a5:
                cVar4 = operator<(&local_1b8,(QString *)(lVar16 + 0x18));
                if (cVar4 != '\0') goto LAB_100d337b9;
              }
              plVar12 = (long *)(lVar16 + 0x20);
              if (lVar16 == 0) {
                plVar12 = local_208;
              }
              fVar19 = _DAT_100e16ffc / (float)(lVar9 / *plVar12);
            }
            iVar8 = FUN_100d31b30(local_23c,&local_1b8,&local_1f8,param_4,param_5,param_6);
            if ((iVar8 == 0x8000000) || (cVar4 = FUN_100d31ea0(&local_1b8,param_7), cVar4 != '\0'))
            {
              local_23c = local_23c + fVar19;
              bVar18 = false;
            }
            else {
              bVar18 = true;
              FUN_100df99c0("","VIUtils",0,"TR00047.17:\t0x%x",iVar8);
              local_21c = iVar8;
            }
            if (*(int *)local_1f8.field0_0x0 != -1) {
              if (*(int *)local_1f8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
                local_121 = *(int *)local_1f8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_100d338c9;
              }
              QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
            }
LAB_100d338c9:
            bVar2 = true;
            if (bVar18) goto LAB_100d338d5;
          }
          bVar2 = false;
        }
        else {
          local_1c8.field0_0x0 = local_1b8.field0_0x0;
          if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
            local_121 = *(int *)local_1b8.field0_0x0 != 0;
            UNLOCK();
          }
          local_1d0 = (QArrayData *)PTR_shared_null_1021e1288;
          pQVar11 = (QString *)QString::replace(&local_1c8,param_2,&local_1d0,1);
          QString::operator=(&local_1c8,pQVar11);
          if (*(int *)local_1d0 != -1) {
            if (*(int *)local_1d0 != 0) {
              LOCK();
              *(int *)local_1d0 = *(int *)local_1d0 + -1;
              local_121 = *(int *)local_1d0 != 0;
              UNLOCK();
              if ((bool)local_121) goto LAB_100d33405;
            }
            QArrayData::deallocate(local_1d0,2,8);
          }
LAB_100d33405:
          uVar6 = QDir::separator();
          cVar4 = QString::startsWith(&local_1c8,uVar6,1);
          if (cVar4 != '\0') {
            QString::remove((int)&local_1c8,0);
          }
          bVar18 = false;
          if ((*(int *)(local_1c8.field0_0x0 + 4) != 0) &&
             (cVar4 = FUN_100d31ab0(param_3,&local_1c8), cVar4 == '\0')) {
            local_1e0 = param_3->field0_0x0;
            if (1 < *(int *)local_1e0 + 1U) {
              LOCK();
              *(int *)local_1e0 = *(int *)local_1e0 + 1;
              local_121 = *(int *)local_1e0 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            pQVar15 = local_1d8 + *(long *)(local_1d8 + 0x10);
            local_1f0 = (QArrayData *)local_1c8.field0_0x0;
            if (1 < *(int *)local_1c8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + 1;
              local_121 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
            }
            QString::toLocal8Bit();
            FUN_100df99c0("","VIUtils",0,"TR00047.16:\t%s\t%s",pQVar15,
                          local_1e8 + *(long *)(local_1e8 + 0x10));
            if (*(int *)local_1e8 != -1) {
              if (*(int *)local_1e8 != 0) {
                LOCK();
                *(int *)local_1e8 = *(int *)local_1e8 + -1;
                local_121 = *(int *)local_1e8 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_100d33546;
              }
              QArrayData::deallocate(local_1e8,1,8);
            }
LAB_100d33546:
            if (*(int *)local_1f0 != -1) {
              if (*(int *)local_1f0 != 0) {
                LOCK();
                *(int *)local_1f0 = *(int *)local_1f0 + -1;
                local_121 = *(int *)local_1f0 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_100d33582;
              }
              QArrayData::deallocate(local_1f0,2,8);
            }
LAB_100d33582:
            if (*(int *)local_1d8 != -1) {
              if (*(int *)local_1d8 != 0) {
                LOCK();
                *(int *)local_1d8 = *(int *)local_1d8 + -1;
                local_121 = *(int *)local_1d8 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_100d335be;
              }
              QArrayData::deallocate(local_1d8,1,8);
            }
LAB_100d335be:
            local_21c = 0x8b60009;
            bVar18 = true;
            if (*(int *)local_1e0 != -1) {
              if (*(int *)local_1e0 != 0) {
                LOCK();
                *(int *)local_1e0 = *(int *)local_1e0 + -1;
                local_121 = *(int *)local_1e0 != 0;
                UNLOCK();
                if ((bool)local_121) goto LAB_100d33610;
              }
              QArrayData::deallocate((QArrayData *)local_1e0,2,8);
            }
          }
LAB_100d33610:
          if (*(int *)local_1c8.field0_0x0 != -1) {
            if (*(int *)local_1c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
              local_121 = *(int *)local_1c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_121) goto LAB_100d3364c;
            }
            QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
          }
LAB_100d3364c:
          bVar2 = true;
          if (!bVar18) goto LAB_100d3365a;
        }
LAB_100d338d5:
        QFileInfo::~QFileInfo(local_1c0);
        if (bVar2) {
          iVar8 = 1;
        }
        else {
          local_198 = 0;
          iVar8 = 0xb;
        }
      }
      if (*(int *)local_1b8.field0_0x0 != -1) {
        if (*(int *)local_1b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
          local_121 = *(int *)local_1b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_100d3393b;
        }
        QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
      }
LAB_100d3393b:
      if (iVar8 != 0xb) goto LAB_100d3397a;
      local_1a8 = local_1a8 + 2;
      uVar7 = local_198 ^ 1;
      bVar18 = local_198 != 1;
      local_198 = uVar7;
    } while ((bVar18) && (local_1a8 != local_1a0));
  }
  iVar8 = 8;
LAB_100d3397a:
  FUN_100039a80(&local_1b0);
  if (iVar8 == 8) {
    cVar4 = QFileInfo::isBundle();
    if (cVar4 != '\0') {
      QString::toUtf8();
      if ((1 < *(uint *)local_218) || (*(long *)(local_218 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_218,*(uint *)(local_218 + 4) + 1,*(uint *)(local_218 + 8) >> 0x1f);
      }
      iVar8 = _FSPathMakeRef(local_218 + *(long *)(local_218 + 0x10),local_88,&local_209);
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_121 = *(int *)local_218 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_100d33a39;
        }
        QArrayData::deallocate(local_218,1,8);
      }
LAB_100d33a39:
      if (iVar8 == 0) {
        sVar5 = _FSGetCatalogInfo(local_88,0x800,local_120,0,0,0);
        if (sVar5 == 0) {
          local_cb = local_cb | 0x20;
          _FSSetCatalogInfo(local_88,0x800,local_120);
        }
        else {
          FUN_100df99c0("","VIUtils",0,"TR00047.19:\t%d",(int)sVar5);
        }
      }
      else {
        FUN_100df99c0("","VIUtils",0,"TR00047.20:\t%d",iVar8);
      }
    }
    if (param_1 == 0) {
      FUN_100d34950(param_2);
    }
    local_21c = 0x8000000;
    if (param_5 != (code *)0x0) {
      (*param_5)(100,param_6);
    }
  }
  FUN_100039a80(&local_178);
  pQVar3 = local_168;
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_121 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_121) goto LAB_100d33b5a;
    }
    if (*(long *)(local_168 + 0x10) != 0) {
      FUN_100dcce30();
      QMapDataBase::freeTree(pQVar3,(int)*(undefined8 *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100d33b5a:
  FUN_100039a80(&local_160);
LAB_100d33b66:
  QFileInfo::~QFileInfo(local_130);
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_21c;
}

