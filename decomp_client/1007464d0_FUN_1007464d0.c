
void FUN_1007464d0(QObject *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QObject local_98 [8];
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  undefined4 local_60;
  QMapNodeBase *local_58;
  int local_4c;
  void *local_48;
  int *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206010);
  pQVar4 = *(QMapNodeBase **)(lVar3 + 0x70);
  if (*(int *)pQVar4 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar1 = *(long *)(*(long *)(lVar3 + 0x70) + 0x10);
    local_58 = pQVar4;
    if (lVar1 != 0) {
      puVar5 = (ulong *)FUN_1002833f0(lVar1,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else {
    local_58 = pQVar4;
    if (*(int *)pQVar4 != -1) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)pQVar4 != 0);
      pQVar4 = *(QMapNodeBase **)(lVar3 + 0x70);
      local_58 = pQVar4;
    }
  }
  FUN_100283220(param_1 + 0x68,&local_58);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)pQVar4 != 0);
      if (*(int *)pQVar4 != 0) goto LAB_1007465c9;
    }
    if (*(long *)(pQVar4 + 0x10) != 0) {
      FUN_100283b30();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_1007465c9:
  local_90.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x38);
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_90.field0_0x0 != 0);
  }
  local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x40);
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_88.field0_0x0 != 0);
  }
  local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x48);
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_80.field0_0x0 != 0);
  }
  local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x50);
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_78.field0_0x0 != 0);
  }
  local_70.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x58);
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_70.field0_0x0 != 0);
  }
  local_98[0] = *(QObject *)(lVar3 + 0x30);
  local_68.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x60);
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    UNLOCK();
    local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_68.field0_0x0 != 0);
  }
  local_60 = *(undefined4 *)(lVar3 + 0x68);
  param_1[0x28] = local_98[0];
  QString::operator=((QString *)(param_1 + 0x30),&local_90);
  QString::operator=((QString *)(param_1 + 0x38),&local_88);
  QString::operator=((QString *)(param_1 + 0x40),&local_80);
  QString::operator=((QString *)(param_1 + 0x48),&local_78);
  QString::operator=((QString *)(param_1 + 0x50),&local_70);
  QString::operator=((QString *)(param_1 + 0x58),&local_68);
  *(undefined4 *)(param_1 + 0x60) = local_60;
  FUN_10012ac30(local_98);
  *(int *)(param_1 + 0x80) = param_2;
  if (param_2 < 0) {
    iVar2 = (uint)(param_2 != -0x7ffffd8b) + (uint)(param_2 != -0x7ffffd8b) * 2;
    if (*(int *)(param_1 + 0x20) == iVar2) goto LAB_100746772;
    *(int *)(param_1 + 0x20) = iVar2;
    local_4c = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 2) goto LAB_100746772;
    *(undefined4 *)(param_1 + 0x20) = 2;
    local_4c = 2;
  }
  local_48 = (void *)0x0;
  local_40 = &local_4c;
  QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6280,0,&local_48);
LAB_100746772:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

