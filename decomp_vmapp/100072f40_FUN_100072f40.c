
void FUN_100072f40(long param_1,QString *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  CVmEventParameter *pCVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  long *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  CVmEvent local_248 [8];
  undefined1 local_240 [216];
  QEvent local_168 [32];
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  undefined1 local_130 [216];
  QEvent local_58 [39];
  undefined1 local_31;
  
  QMutex::lock();
  bVar13 = true;
  plVar10 = *(long **)(param_1 + 0x368);
  uVar2 = *(uint *)(plVar10 + 4);
  if (uVar2 == 0) goto LAB_1000733c4;
  uVar7 = qHash(param_2,*(uint *)((long)plVar10 + 0x24));
  uVar4 = (ulong)uVar7 % (ulong)uVar2;
  plVar11 = *(long **)(plVar10[1] + uVar4 * 8);
  if (plVar11 == plVar10) goto LAB_1000733c4;
  plVar1 = (long *)(param_1 + 0x368);
  plVar14 = (long *)(plVar10[1] + uVar4 * 8);
  do {
    plVar12 = plVar11;
    plVar15 = plVar10;
    if (*(uint *)(plVar11 + 1) == uVar7) {
      cVar6 = operator==(param_2,(QString *)(plVar11 + 2));
      plVar10 = (long *)*plVar14;
      plVar12 = plVar10;
      plVar15 = (long *)*plVar1;
      if (cVar6 != '\0') break;
    }
    plVar10 = plVar15;
    plVar11 = (long *)*plVar12;
    plVar14 = plVar12;
    plVar15 = plVar10;
  } while (plVar11 != plVar10);
  if (plVar10 == plVar15) goto LAB_1000733c4;
  puVar8 = (undefined8 *)FUN_1000b1620(*(undefined8 *)(param_1 + 0x20));
  local_140 = (QArrayData *)*puVar8;
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  local_148 = (QArrayData *)QString::fromAscii_helper("",0);
  CVmEvent::CVmEvent(local_138,0x186e7,&local_140,0,100000,0,&local_148,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000730c1;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000730c1:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000730f7;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000730f7:
  CVmEvent::CVmEvent(local_248);
  local_250 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)local_250 + 1U) {
    LOCK();
    *(int *)local_250 = *(int *)local_250 + 1;
    local_31 = *(int *)local_250 != 0;
    UNLOCK();
  }
  cVar6 = FUN_1000736d0(param_1,&local_250,0);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100073174;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_100073174:
  if (cVar6 != '\0') {
    pCVar9 = operator_new(0xd0);
    CBaseNode::toString(SUB81(&local_258,0),SUB81(local_240,0));
    local_260 = (QArrayData *)QString::fromAscii_helper("conn_stats_connection_info",0x1a);
    CVmEventParameter::CVmEventParameter(pCVar9,1,&local_258);
    CVmEvent::addEventParameter((CVmEventParameter *)local_138);
    if (*(int *)local_260 != -1) {
      if (*(int *)local_260 != 0) {
        LOCK();
        *(int *)local_260 = *(int *)local_260 + -1;
        local_31 = *(int *)local_260 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100073237;
      }
      QArrayData::deallocate(local_260,2,8);
    }
LAB_100073237:
    if (*(int *)local_258 != -1) {
      if (*(int *)local_258 != 0) {
        LOCK();
        *(int *)local_258 = *(int *)local_258 + -1;
        local_31 = *(int *)local_258 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007326d;
      }
      QArrayData::deallocate(local_258,2,8);
    }
  }
LAB_10007326d:
  FUN_1000230e0(plVar1,param_2);
  if (*(int *)(*plVar1 + 0x14) == 0) {
    FUN_100117240(param_1);
  }
  bVar13 = false;
  QMutex::unlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  CBaseNode::toString(SUB81(&local_268,0),SUB81(local_130,0));
  plVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_270 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_100bef0d0;
    local_270 = plVar10;
  }
  FUN_100063e20(uVar3,&local_268,0xbbb,&local_270,0);
  if (local_270 != (long *)0x0) {
    LOCK();
    plVar10 = local_270 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_270 + 0x10))();
    }
  }
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100073377;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_100073377:
  QEvent::~QEvent(local_168);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_248);
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
LAB_1000733c4:
  if (bVar13) {
    QMutex::unlock();
  }
  return;
}

