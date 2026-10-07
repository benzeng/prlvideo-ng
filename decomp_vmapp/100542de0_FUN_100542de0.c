
undefined8 * FUN_100542de0(undefined8 *param_1,long param_2,long *param_3)

{
  char *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CVmEventParameter *pCVar8;
  QMapNodeBase *pQVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  char cVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  bool bVar19;
  long *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  int local_29c;
  QArrayData *local_298;
  QArrayData *local_290;
  long *local_288;
  long local_280 [2];
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  CVmEvent local_250 [8];
  undefined1 local_248 [216];
  QEvent local_170 [32];
  QArrayData *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [224];
  QEvent local_60 [32];
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((*param_3 == 0) || (lVar11 = *(long *)(*param_3 + 0x10), lVar11 == 0)) {
    *param_1 = 0;
    return param_1;
  }
  lVar11 = *(long *)(lVar11 + 0x80);
  iVar4 = 0;
  if (lVar11 != 0) {
    pcVar1 = *(char **)(lVar11 + 0x10);
    iVar4 = 0;
    if (pcVar1 != (char *)0x0) {
      _strlen(pcVar1);
      iVar4 = (int)pcVar1;
    }
  }
  QString::fromUtf8_helper((char *)&local_150,iVar4);
  QString::normalized(&local_148,&local_150,1,0);
  CVmEvent::CVmEvent(local_140,(QTypedArrayData<unsigned_short> *)&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542eb0;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100542eb0:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_31 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542ef4;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100542ef4:
  CVmEvent::CVmEvent(local_250);
  CVmEventBase::getEventType();
  CVmEventBase::setEventCode((int)local_250);
  uVar3 = CVmEventBase::getEventIssuerType();
  CVmEventBase::setEventIssuerType(local_250,uVar3);
  CVmEventBase::getEventIssuerId();
  CVmEventBase::setEventIssuerId((QTypedArrayData<unsigned_short> *)local_250);
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542f90;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_100542f90:
  uVar12 = 0;
  if (*param_3 != 0) {
    uVar12 = *(undefined8 *)(*param_3 + 0x10);
  }
  FUN_1007d6a90(&local_260,uVar12);
  CVmEventBase::setInitRequestId((QTypedArrayData<unsigned_short> *)local_250);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542ffa;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_100542ffa:
  pCVar8 = operator_new(0xd0);
  CVmEventBase::getEventIssuerId();
  local_270 = (QArrayData *)QString::fromAscii_helper("vm_uuid",7);
  CVmEventParameter::CVmEventParameter(pCVar8,1,&local_268,&local_270);
  CVmEvent::addEventParameter((CVmEventParameter *)local_250);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054309a;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_10054309a:
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005430d0;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1005430d0:
  iVar4 = CVmEventBase::getEventType();
  if (iVar4 == 0x18897) {
    uVar3 = 0;
    if (param_2 == 0) {
LAB_1005434c7:
      uVar6 = CVmEventBase::getEventCode();
      uVar7 = FUN_1006d65a0();
      iVar4 = FUN_100543cb0(uVar6,uVar7,uVar3);
      if (iVar4 == -0x7ffffffd) {
        uVar3 = CVmEventBase::getEventCode();
        uVar6 = CVmEventBase::getEventCode();
        uVar12 = FUN_1007dd120(uVar6);
        FUN_1008e3970("","VmQuestionHelper",0,
                      "Couldn\'t to find default answer for question %.8X \'%s\'",uVar3,uVar12);
        *param_1 = 0;
        goto LAB_10054372f;
      }
    }
    else {
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getSystemFlags();
      QString::toUtf8();
      FUN_100543fa0(&local_288,"vm.default_answers",local_290 + *(long *)(local_290 + 0x10));
      pQVar9 = (QMapNodeBase *)QMapDataBase::createData();
      if (local_280 != local_288) {
        plVar10 = local_280;
        do {
          plVar2 = (long *)*plVar10;
          if ((long *)*plVar10 == (long *)0x0) {
            do {
              plVar17 = (long *)plVar10[2];
              bVar19 = (long *)*plVar17 == plVar10;
              plVar10 = plVar17;
            } while (bVar19);
          }
          else {
            do {
              plVar17 = plVar2;
              plVar2 = (long *)plVar17[1];
            } while ((long *)plVar17[1] != (long *)0x0);
          }
          cVar13 = (char)pQVar9 + '\b';
          if (*(long *)(pQVar9 + 0x10) != 0) {
            cVar13 = (char)*(undefined8 *)(pQVar9 + 0x20);
          }
          lVar11 = QMapDataBase::createNode
                             ((int)pQVar9,0x20,(QMapNodeBase *)&DAT_00000008,(bool)cVar13);
          *(undefined4 *)(lVar11 + 0x18) = *(undefined4 *)((long)plVar17 + 0x1c);
          *(int *)(lVar11 + 0x1c) = (int)plVar17[4];
          plVar10 = plVar17;
        } while (plVar17 != local_288);
      }
      FUN_100543c70(&local_288,local_280[0]);
      if (*(int *)local_290 != -1) {
        if (*(int *)local_290 != 0) {
          LOCK();
          *(int *)local_290 = *(int *)local_290 + -1;
          local_31 = *(int *)local_290 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100543230;
        }
        QArrayData::deallocate(local_290,1,8);
      }
LAB_100543230:
      if (*(int *)local_298 != -1) {
        if (*(int *)local_298 != 0) {
          LOCK();
          *(int *)local_298 = *(int *)local_298 + -1;
          local_31 = *(int *)local_298 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100543266;
        }
        QArrayData::deallocate(local_298,2,8);
      }
LAB_100543266:
      iVar5 = CVmEventBase::getEventCode();
      iVar4 = -0x7ffffffd;
      lVar15 = 0;
      lVar11 = *(long *)(pQVar9 + 0x10);
      if (*(long *)(pQVar9 + 0x10) != 0) {
        do {
          while (lVar16 = lVar11, iVar18 = *(int *)(lVar16 + 0x18), iVar18 < iVar5) {
            lVar11 = *(long *)(lVar16 + 0x10);
            if (*(long *)(lVar16 + 0x10) == 0) {
              if (lVar15 == 0) goto LAB_100543466;
              iVar18 = *(int *)(lVar15 + 0x18);
              goto LAB_1005433b8;
            }
          }
          lVar11 = *(long *)(lVar16 + 8);
          lVar15 = lVar16;
        } while (*(long *)(lVar16 + 8) != 0);
LAB_1005433b8:
        if (iVar18 <= iVar5) {
          uVar3 = CVmEventBase::getEventCode();
          uVar12 = FUN_1007dd120(uVar3);
          FUN_1008e3970("","VmQuestionHelper",0,
                        "Default answer on question %s got from system flags",uVar12);
          iVar4 = CVmEventBase::getEventCode();
          local_29c = 0;
          lVar11 = *(long *)(pQVar9 + 0x10);
          lVar15 = 0;
          if (*(long *)(pQVar9 + 0x10) == 0) {
LAB_10054344f:
            lVar16 = 0;
          }
          else {
            do {
              while (lVar16 = lVar11, iVar5 = *(int *)(lVar16 + 0x18), iVar5 < iVar4) {
                lVar11 = *(long *)(lVar16 + 0x10);
                if (*(long *)(lVar16 + 0x10) == 0) {
                  if (lVar15 == 0) goto LAB_10054344f;
                  iVar5 = *(int *)(lVar15 + 0x18);
                  lVar16 = lVar15;
                  goto LAB_10054344b;
                }
              }
              lVar11 = *(long *)(lVar16 + 8);
              lVar15 = lVar16;
            } while (*(long *)(lVar16 + 8) != 0);
LAB_10054344b:
            if (iVar4 < iVar5) goto LAB_10054344f;
          }
          piVar14 = &local_29c;
          if (lVar16 != 0) {
            piVar14 = (int *)(lVar16 + 0x1c);
          }
          iVar4 = *piVar14;
        }
      }
LAB_100543466:
      CVmConfiguration::getVmSettings();
      CVmSettings::getShutdown();
      uVar3 = Shutdown::getAutoStop();
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005434ba;
        }
        if (*(long *)(pQVar9 + 0x10) != 0) {
          QMapDataBase::freeTree(pQVar9,(int)*(long *)(pQVar9 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar9);
      }
LAB_1005434ba:
      if (iVar4 == -0x7ffffffd) goto LAB_1005434c7;
    }
    pCVar8 = operator_new(0xd0);
    local_2b0 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_2a8,&local_2b0,iVar4,0,10,0x20);
    local_2b8 = (QArrayData *)QString::fromAscii_helper("vm_message_choice_0",0x13);
    CVmEventParameter::CVmEventParameter(pCVar8,0,&local_2a8,&local_2b8);
    CVmEvent::addEventParameter((CVmEventParameter *)local_250);
    if (*(int *)local_2b8 != -1) {
      if (*(int *)local_2b8 != 0) {
        LOCK();
        *(int *)local_2b8 = *(int *)local_2b8 + -1;
        local_31 = *(int *)local_2b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100543619;
      }
      QArrayData::deallocate(local_2b8,2,8);
    }
LAB_100543619:
    if (*(int *)local_2a8 != -1) {
      if (*(int *)local_2a8 != 0) {
        LOCK();
        *(int *)local_2a8 = *(int *)local_2a8 + -1;
        local_31 = *(int *)local_2a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100543651;
      }
      QArrayData::deallocate(local_2a8,2,8);
    }
LAB_100543651:
    if (*(int *)local_2b0 != -1) {
      if (*(int *)local_2b0 != 0) {
        LOCK();
        *(int *)local_2b0 = *(int *)local_2b0 + -1;
        local_31 = *(int *)local_2b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100543687;
      }
      QArrayData::deallocate(local_2b0,2,8);
    }
  }
  else {
    pCVar8 = operator_new(0xd0);
    local_2c0 = (QArrayData *)QString::fromAscii_helper("",0);
    local_2c8 = (QArrayData *)QString::fromAscii_helper("default_answer_on_vm_request",0x1c);
    CVmEventParameter::CVmEventParameter(pCVar8,1,&local_2c0,&local_2c8);
    CVmEvent::addEventParameter((CVmEventParameter *)local_250);
    if (*(int *)local_2c8 != -1) {
      if (*(int *)local_2c8 != 0) {
        LOCK();
        *(int *)local_2c8 = *(int *)local_2c8 + -1;
        local_31 = *(int *)local_2c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100543364;
      }
      QArrayData::deallocate(local_2c8,2,8);
    }
LAB_100543364:
    if (*(int *)local_2c0 != -1) {
      if (*(int *)local_2c0 != 0) {
        LOCK();
        *(int *)local_2c0 = *(int *)local_2c0 + -1;
        local_31 = *(int *)local_2c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100543687;
      }
      QArrayData::deallocate(local_2c0,2,8);
    }
  }
LAB_100543687:
  CBaseNode::toString(SUB81(&local_40,0),SUB81(local_248,0));
  FUN_100069140(&local_2d0,0x3fd,&local_40,param_3,0,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005436f7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005436f7:
  *param_1 = local_2d0;
  if (local_2d0 != (long *)0x0) {
    LOCK();
    *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = local_2d0 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)(*local_2d0 + 0x10))();
    }
  }
LAB_10054372f:
  QEvent::~QEvent(local_170);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_250);
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  return param_1;
}

