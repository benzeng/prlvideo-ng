
void FUN_100338f60(long *param_1)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  QWidget *pQVar8;
  QMapNodeBase *pQVar9;
  undefined8 uVar10;
  QArrayData *pQVar11;
  long lVar12;
  QArrayData *pQVar13;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QMapNodeBase *local_60;
  QMapNodeBase *local_58;
  QMapNodeBase *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    lVar12 = 0;
    if ((param_1[2] != 0) && (lVar12 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar12 = param_1[3];
    }
    FUN_1003193e0(&local_48,lVar12);
    QString::toUtf8();
    FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                  "DDLL [%p] FINISHED VM [%s] guest screens reconfiguration.",param_1,
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100339012;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100339012:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100339042;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100339042:
  *(undefined1 *)(param_1 + 6) = 0;
  lVar12 = 0;
  if ((param_1[2] != 0) && (lVar12 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar12 = param_1[3];
  }
  plVar5 = (long *)FUN_100319950(lVar12);
  pQVar6 = (QMapNodeBase *)*plVar5;
  if (*(int *)pQVar6 == 0) {
    pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*plVar5 + 0x10) != 0) {
      puVar7 = (ulong *)FUN_1000340b0(*(long *)(*plVar5 + 0x10),pQVar6);
      *(ulong **)(pQVar6 + 0x10) = puVar7;
      *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar6 != -1) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
    pQVar6 = (QMapNodeBase *)*plVar5;
  }
  if (*(long *)(pQVar6 + 0x10) == 0) {
    bVar3 = false;
  }
  else {
    pQVar9 = *(QMapNodeBase **)(pQVar6 + 0x20);
    bVar3 = false;
    do {
      if (pQVar9 == pQVar6 + 8) break;
      lVar12 = 0;
      if ((*(long *)(pQVar9 + 0x20) != 0) &&
         (lVar12 = 0, *(int *)(*(long *)(pQVar9 + 0x20) + 4) != 0)) {
        lVar12 = *(long *)(pQVar9 + 0x28);
      }
      bVar1 = false;
      if ((((lVar12 != 0) && (pQVar8 = (QWidget *)FUN_100323e30(lVar12,0), pQVar8 != (QWidget *)0x0)
           ) && (iVar4 = FUN_100325aa0(lVar12), iVar4 != 0)) &&
         (cVar2 = MacUtils::inLiveResize(pQVar8), cVar2 != '\0')) {
        bVar3 = true;
        bVar1 = true;
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("GUI_DDLL","prl_client_app",2,"Live resize in progress.");
        }
      }
      pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
    } while (!bVar1);
  }
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100339262;
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      FUN_100034170();
      QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_100339262:
  local_50 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  plVar5 = param_1 + 5;
  if (!bVar3) {
    FUN_100335d70(&local_60,param_1);
    FUN_100336250(&local_58,param_1,&local_60);
    uVar10 = FUN_100339d10(&local_50,&local_58);
    cVar2 = FUN_100339c20(plVar5,uVar10);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003392f1;
      }
      if (*(long *)(local_58 + 0x10) != 0) {
        QMapDataBase::freeTree(local_58,(int)*(long *)(local_58 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_58);
    }
LAB_1003392f1:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10033932c;
      }
      if (*(long *)(local_60 + 0x10) != 0) {
        QMapDataBase::freeTree(local_60,(int)*(long *)(local_60 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_60);
    }
LAB_10033932c:
    if (cVar2 == '\0') {
      if (1 < DAT_10230ffd0) {
        lVar12 = 0;
        if ((param_1[2] != 0) && (lVar12 = 0, *(int *)(param_1[2] + 4) != 0)) {
          lVar12 = param_1[3];
        }
        FUN_1003193e0(&local_70,lVar12);
        QString::toUtf8();
        pQVar13 = local_68 + *(long *)(local_68 + 0x10);
        FUN_1003379a0(&local_80,&local_50);
        QString::toUtf8();
        pQVar11 = local_78 + *(long *)(local_78 + 0x10);
        FUN_1003379a0(&local_90,plVar5);
        QString::toUtf8();
        FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                      "RELAYOUT VM [%s] screens! New desired layout\n%s differs from last applied one\n%s"
                      ,pQVar13,pQVar11,local_88 + *(long *)(local_88 + 0x10));
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100339428;
          }
          QArrayData::deallocate(local_88,1,8);
        }
LAB_100339428:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10033945e;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10033945e:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10033948e;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_10033948e:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003394be;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003394be:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003394ee;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_1003394ee:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10033951e;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_10033951e:
      (**(code **)(*param_1 + 0x60))(param_1,0);
      goto LAB_10033952c;
    }
  }
  FUN_100321d40(plVar5);
LAB_10033952c:
  pQVar6 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    if (*(long *)(local_50 + 0x10) != 0) {
      QMapDataBase::freeTree(local_50,(int)*(long *)(local_50 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
  return;
}

