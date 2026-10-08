
void FUN_1000834d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *self;
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  QObject *pQVar9;
  int *piVar10;
  CSignalSelectorBinding *pCVar11;
  QObject *pQVar12;
  bool bVar13;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  int *local_a0;
  QObject *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  int *local_58;
  QObject *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_2,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  lVar6 = FUN_10007f750(uVar8,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008358f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10008358f:
  if (lVar6 == 0) {
LAB_100083935:
    (**(code **)(param_3 + 0x10))(param_3,0);
    return;
  }
  lVar7 = FUN_10008b940(lVar6);
  if (lVar7 != 0) {
    uVar8 = FUN_10008b940();
    cVar1 = FUN_10018ecf0(uVar8);
    bVar13 = true;
    if (cVar1 != '\0') {
      uVar8 = FUN_10008b940(lVar6);
      iVar4 = FUN_10018bce0(uVar8);
      bVar13 = iVar4 == 3;
    }
    uVar8 = FUN_10008b940(lVar6);
    uVar2 = FUN_10018ecf0(uVar8);
    uVar8 = FUN_10008b940(lVar6);
    uVar3 = FUN_10018ecf0(uVar8);
    pQVar9 = operator_new(0x50);
    uVar8 = FUN_10008b940(lVar6);
    FUN_100188480(&local_48,uVar8);
    FUN_100240130(pQVar9,&local_48,bVar13,uVar3,uVar2);
    piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100083680;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_100083680:
    pCVar11 = operator_new(0x18);
    pQVar12 = (QObject *)0x0;
    if ((piVar10 != (int *)0x0) && (pQVar12 = (QObject *)0x0, piVar10[1] != 0)) {
      pQVar12 = pQVar9;
    }
    local_80 = PTR___NSConcreteStackBlock_1021e1280;
    local_78 = 0xc6000000;
    local_74 = 0;
    local_70 = FUN_100083b60;
    local_68 = &DAT_1021edc10;
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      local_31 = *piVar10 != 0;
      UNLOCK();
    }
    local_60 = param_3;
    local_58 = piVar10;
    local_50 = pQVar9;
    CSignalSelectorBinding::CSignalSelectorBinding
              (pCVar11,pQVar12,"2taskFinished(PRL_RESULT)",(_func_void *)&local_80);
    CAbstractTask::execute();
    if (local_58 != (int *)0x0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_58 != (int *)0x0)) {
        operator_delete(local_58);
      }
    }
    if (piVar10 == (int *)0x0) {
      return;
    }
    LOCK();
    *piVar10 = *piVar10 + -1;
    local_31 = *piVar10 != 0;
    UNLOCK();
    if ((bool)local_31) {
      return;
    }
    operator_delete(piVar10);
    return;
  }
  lVar7 = FUN_10008b970(lVar6);
  if (lVar7 == 0) goto LAB_100083935;
  uVar8 = FUN_100794960();
  FUN_10008ba40(&local_88,lVar6);
  uVar8 = FUN_100795f20(uVar8,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000837c7;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000837c7:
  pQVar9 = operator_new(0x38);
  FUN_10008ba40(&local_90,lVar6);
  FUN_10023f880(pQVar9,uVar8,&local_90,1);
  piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100083841;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100083841:
  pCVar11 = operator_new(0x18);
  pQVar12 = (QObject *)0x0;
  if ((piVar10 != (int *)0x0) && (pQVar12 = (QObject *)0x0, piVar10[1] != 0)) {
    pQVar12 = pQVar9;
  }
  local_c8 = PTR___NSConcreteStackBlock_1021e1280;
  local_c0 = 0xc6000000;
  local_bc = 0;
  local_b8 = FUN_100083c60;
  local_b0 = &DAT_1021edc40;
  if (piVar10 != (int *)0x0) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    local_31 = *piVar10 != 0;
    UNLOCK();
  }
  local_a8 = param_3;
  local_a0 = piVar10;
  local_98 = pQVar9;
  CSignalSelectorBinding::CSignalSelectorBinding
            (pCVar11,pQVar12,"2taskFinished(PRL_RESULT)",(_func_void *)&local_c8);
  CAbstractTask::execute();
  if (local_a0 != (int *)0x0) {
    LOCK();
    *local_a0 = *local_a0 + -1;
    local_31 = *local_a0 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_a0 != (int *)0x0)) {
      operator_delete(local_a0);
    }
  }
  if (piVar10 == (int *)0x0) {
    return;
  }
  LOCK();
  *piVar10 = *piVar10 + -1;
  local_31 = *piVar10 != 0;
  UNLOCK();
  if ((bool)local_31) {
    return;
  }
  operator_delete(piVar10);
  return;
}

