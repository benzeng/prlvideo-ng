
void FUN_100089af0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  CTaskGenericId *pCVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  QArrayData *local_50;
  CTaskGenericId local_48 [31];
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar3 = FUN_10018d470();
  if ((uVar3 & 0x180) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_setRunnable__10226a050,0);
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar3 = FUN_10018d470(uVar7);
  if ((uVar3 & 0x180) == 0) {
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = FUN_10018d480(uVar7);
    if ((uVar3 & 0x180) != 0) {
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (*(undefined8 *)(param_1 + 0x18),PTR_s_setProgress__10226a088,0);
    }
    goto LAB_100089c6e;
  }
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100188480(&local_50,uVar7);
  FUN_100086960(local_48,&local_50);
  CTaskManager::getTaskById(pCVar4);
  lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220ab00);
  CTaskGenericId::~CTaskGenericId(local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100089bf8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100089bf8:
  puVar2 = PTR__OBJC_CLASS___PDProgress_10226aa60;
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = FUN_1002e9570(lVar5);
    puVar1 = PTR__objc_msgSend_1021e1c68;
    uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_progressWithAbstractOperation__10226a0a8,uVar6);
    (*(code *)puVar1)(uVar7,PTR_s_setProgress__10226a088,uVar6);
  }
LAB_100089c6e:
  FUN_100867880(*(undefined8 *)(param_1 + 0x10));
  return;
}

