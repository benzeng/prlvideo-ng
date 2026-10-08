
long * FUN_100615e10(long *param_1,undefined8 *param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  Data *pDVar8;
  long lVar9;
  Data *pDVar10;
  long lVar11;
  QArrayData *pQVar12;
  bool bVar13;
  undefined4 local_15c;
  QArrayData *local_158;
  Data *local_150;
  Data *local_148;
  Data *local_140;
  Data *local_138;
  uint local_130;
  Data *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  CVmEventParameter local_110 [8];
  undefined1 local_108 [200];
  long local_40;
  undefined1 local_31;
  
  if (param_4 != (char *)0x0) {
    *param_4 = '\0';
  }
  local_40 = 0;
  iVar5 = _PrlSrv_GetRestrictionInfo(*param_2,param_3,&local_40);
  if (iVar5 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlSrv_GetRestrictionInfo failed with RC = %.8X",
                  iVar5);
    *param_1 = (long)PTR_shared_null_1021e15e8;
    goto LAB_10061607e;
  }
  CVmEventParameter::CVmEventParameter(local_110);
  uVar2 = *param_2;
  CBaseNode::toString(SUB81(&local_120,0),SUB81(local_108,0));
  QString::toUtf8();
  if ((1 < *(uint *)local_118) || (*(long *)(local_118 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_118,*(uint *)(local_118 + 4) + 1,*(uint *)(local_118 + 8) >> 0x1f);
  }
  iVar5 = _PrlVm_FromString(uVar2,local_118 + *(long *)(local_118 + 0x10));
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100615f0a;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100615f0a:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100615f40;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100615f40:
  if (iVar5 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlVm_FromString failed with RC = %.8X",iVar5);
LAB_100616068:
    *param_1 = (long)PTR_shared_null_1021e15e8;
  }
  else {
    cVar4 = CVmEventParameter::isIsList();
    if (cVar4 == '\0') goto LAB_100616068;
    local_128 = (Data *)PTR_shared_null_1021e15e8;
    CVmEventParameter::getValuesList();
    local_148 = local_150;
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 == 0) {
        QListData::detach((int)&local_148);
        iVar5 = *(int *)(local_148 + 8);
        if (iVar5 != *(int *)(local_148 + 0xc)) {
          pDVar8 = local_150 + (long)*(int *)(local_150 + 8) * 8 + 0x10;
          pDVar10 = local_148 + (long)iVar5 * 8 + 0x10;
          lVar7 = (long)*(int *)(local_148 + 0xc) * 8 + (long)iVar5 * -8;
          do {
            piVar3 = *(int **)pDVar8;
            *(int **)pDVar10 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            pDVar10 = pDVar10 + 8;
            pDVar8 = pDVar8 + 8;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + 1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
      }
    }
    local_140 = local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10;
    local_138 = local_148 + (long)*(int *)(local_148 + 0xc) * 8 + 0x10;
    local_130 = 1;
    if (*(int *)local_150 == -1) {
LAB_100616185:
      do {
        iVar5 = 6;
        if (local_140 == local_138) break;
        local_158 = *(QArrayData **)local_140;
        if (1 < *(int *)local_158 + 1U) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + 1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
        }
        iVar5 = 9;
        if (local_130 != 0) {
          local_15c = QString::toUInt((bool *)&local_158,(int)param_4);
          FUN_1000bf010(&local_128,&local_15c);
          if ((param_4 == (char *)0x0) || (*param_4 != '\0')) {
            local_130 = 0;
          }
          else {
            FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t convert param to uint");
            *param_1 = (long)PTR_shared_null_1021e15e8;
            iVar5 = 1;
          }
        }
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            local_31 = *(int *)local_158 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100616286;
          }
          QArrayData::deallocate(local_158,2,8);
        }
LAB_100616286:
        if (iVar5 != 9) break;
        local_140 = local_140 + 8;
        uVar6 = local_130 ^ 1;
        bVar13 = local_130 != 1;
        iVar5 = 6;
        local_130 = uVar6;
      } while (bVar13);
    }
    else {
      if (*(int *)local_150 == 0) {
LAB_10061610c:
        iVar5 = *(int *)(local_150 + 0xc);
        if (iVar5 != *(int *)(local_150 + 8)) {
          lVar7 = (long)*(int *)(local_150 + 8) * 8 + (long)iVar5 * -8;
          pDVar8 = local_150 + (long)iVar5 * 8 + 8;
          do {
            pQVar12 = *(QArrayData **)pDVar8;
            if (*(int *)pQVar12 == 0) {
LAB_100616150:
              QArrayData::deallocate(pQVar12,2,8);
            }
            else if (*(int *)pQVar12 != -1) {
              LOCK();
              *(int *)pQVar12 = *(int *)pQVar12 + -1;
              local_31 = *(int *)pQVar12 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar12 = *(QArrayData **)pDVar8;
                goto LAB_100616150;
              }
            }
            pDVar8 = pDVar8 + -8;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        QListData::dispose(local_150);
      }
      else {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_10061610c;
      }
      iVar5 = 6;
      if (local_130 != 0) goto LAB_100616185;
    }
    pDVar8 = local_148;
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100616351;
      }
      iVar1 = *(int *)(local_148 + 0xc);
      if (iVar1 != *(int *)(local_148 + 8)) {
        lVar7 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_148 + (long)iVar1 * 8 + 8;
        do {
          pQVar12 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar12 == 0) {
LAB_100616330:
            QArrayData::deallocate(pQVar12,2,8);
          }
          else if (*(int *)pQVar12 != -1) {
            LOCK();
            *(int *)pQVar12 = *(int *)pQVar12 + -1;
            local_31 = *(int *)pQVar12 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar12 = *(QArrayData **)pDVar10;
              goto LAB_100616330;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_100616351:
    if (iVar5 == 6) {
      *param_1 = (long)local_128;
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 == 0) {
          QListData::detach((int)param_1);
          lVar7 = *param_1;
          lVar9 = (long)*(int *)(lVar7 + 8);
          if ((local_128 + (long)*(int *)(local_128 + 8) * 8 != (Data *)(lVar7 + lVar9 * 8)) &&
             (lVar11 = *(int *)(lVar7 + 0xc) - lVar9, lVar11 != 0 && lVar9 <= *(int *)(lVar7 + 0xc))
             ) {
            _memcpy((void *)(lVar7 + 0x10 + lVar9 * 8),
                    local_128 + (long)*(int *)(local_128 + 8) * 8 + 0x10,lVar11 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + 1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
        }
      }
    }
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100616072;
      }
      QListData::dispose(local_128);
    }
  }
LAB_100616072:
  CVmEventParameter::~CVmEventParameter(local_110);
LAB_10061607e:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  return param_1;
}

