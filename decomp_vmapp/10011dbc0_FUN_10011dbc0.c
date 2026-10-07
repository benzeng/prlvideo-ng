
void FUN_10011dbc0(long param_1,undefined8 param_2,QString *param_3)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  char cVar6;
  Data *pDVar7;
  CVmEventParameterList *pCVar8;
  long lVar9;
  long lVar10;
  CVmEventParameter *pCVar11;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  long *local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xf8);
  local_40 = (uint *)0x0;
  local_48 = (uint *)0x0;
  puVar3 = (uint *)*plVar2;
  local_50 = plVar2;
  if (1 < *puVar3) {
    uVar1 = puVar3[2];
    pDVar7 = (Data *)QListData::detach((int)plVar2);
    lVar4 = *plVar2;
    lVar9 = (long)*(int *)(lVar4 + 8);
    if ((puVar3 + (long)(int)uVar1 * 2 != (uint *)(lVar4 + lVar9 * 8)) &&
       (lVar10 = *(int *)(lVar4 + 0xc) - lVar9, lVar10 != 0 && lVar9 <= *(int *)(lVar4 + 0xc))) {
      _memcpy((void *)(lVar4 + 0x10 + lVar9 * 8),puVar3 + (long)(int)uVar1 * 2 + 4,lVar10 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_31 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011dc6f;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_10011dc6f:
  puVar5 = (uint *)*plVar2;
  puVar3 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
  local_48 = puVar3;
  if (1 < *puVar5) {
    pDVar7 = (Data *)QListData::detach((int)plVar2);
    lVar4 = *plVar2;
    lVar9 = (long)*(int *)(lVar4 + 8);
    puVar5 = (uint *)(lVar4 + 0x10 + lVar9 * 8);
    if ((puVar3 != puVar5) &&
       (lVar10 = *(int *)(lVar4 + 0xc) - lVar9, lVar10 != 0 && lVar9 <= *(int *)(lVar4 + 0xc))) {
      _memcpy(puVar5,puVar3,lVar10 * 8);
    }
    if (*(int *)pDVar7 != -1) {
      if (*(int *)pDVar7 != 0) {
        LOCK();
        *(int *)pDVar7 = *(int *)pDVar7 + -1;
        local_31 = *(int *)pDVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011dcdb;
      }
      QListData::dispose(pDVar7);
    }
  }
LAB_10011dcdb:
  local_40 = (uint *)(*plVar2 + 0x10 + (long)*(int *)(*plVar2 + 0xc) * 8);
  if (local_40 != puVar3) {
    local_48 = puVar3;
    do {
      plVar2 = *(long **)local_48;
      local_40 = local_48;
      local_48 = local_48 + 2;
      CVmEventParameter::getParamName();
      cVar6 = operator==(&local_58,param_3);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011dd5c;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_10011dd5c:
      if (cVar6 != '\0') {
        FUN_1008e3970("","prl_proto_serializer",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "pParam->getParamName() != sParamName","CProtoCommands.cpp",0x8d,
                      "SetStringListParamValue");
      }
      CVmEventParameter::getParamName();
      cVar6 = operator==(&local_60,param_3);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10011ddea;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_10011ddea:
      if ((cVar6 != '\0') && (FUN_100133f60(&local_50), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    } while ((uint *)(*local_50 + 0x10 + (long)*(int *)(*local_50 + 0xc) * 8) != local_48);
  }
  pCVar8 = operator_new(0xd0);
  local_68 = (QArrayData *)param_3->field0_0x0;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  CVmEventParameterList::CVmEventParameterList(pCVar8,1,param_2,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011de90;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10011de90:
  pCVar11 = (CVmEventParameter *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    pCVar11 = *(CVmEventParameter **)(*(long *)(param_1 + 8) + 0x10);
  }
  CVmEvent::addEventParameter(pCVar11);
  return;
}

