
void FUN_1001ebae0(long param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  QObject *pQVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_158 [2];
  QString local_150;
  QString local_148;
  QString local_140;
  undefined8 local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  undefined *local_110 [2];
  QArrayData *local_100;
  _func_void_Node_ptr *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined4 local_e0 [2];
  QString local_d8;
  QString local_d0;
  QString local_c8;
  undefined8 local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  int *local_88 [4];
  QVariant local_68 [2];
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  pQVar3 = (QObject *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
      (*(QObject **)(param_1 + 0x20) != (QObject *)0x0)) &&
     (*(QObject **)(param_1 + 0x20) != pQVar3)) {
    FUN_1001b8b80(local_50,(QString *)(param_1 + 0x58),1);
    local_90 = (QArrayData *)QString::fromAscii_helper("1onDowloadTaskStarted()",0x17);
    local_98 = 0x80000000;
    local_a0.field7 = 0;
    FUN_100a1c600(local_88,param_1,&local_90,&local_a0);
    QVariant::~QVariant((QVariant *)&local_a0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ebbd4;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1001ebbd4:
    uVar4 = CTaskManager::instance();
    CTaskManager::removeTaskWatcher(uVar4,local_88,local_50,0x22);
    FUN_1001eef00(local_e0);
    *(undefined4 *)(param_1 + 0x28) = local_e0[0];
    QString::operator=((QString *)(param_1 + 0x30),&local_d8);
    QString::operator=((QString *)(param_1 + 0x38),&local_d0);
    QString::operator=((QString *)(param_1 + 0x40),&local_c8);
    *(undefined8 *)(param_1 + 0x48) = local_c0;
    QString::operator=((QString *)(param_1 + 0x50),&local_b8);
    QString::operator=((QString *)(param_1 + 0x58),&local_b0);
    QString::operator=((QString *)(param_1 + 0x60),&local_a8);
    FUN_1001b8c60(local_e0);
    QVariant::~QVariant(local_68);
    if (local_88[0] != (int *)0x0) {
      LOCK();
      *local_88[0] = *local_88[0] + -1;
      local_31 = *local_88[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_88[0] != (int *)0x0)) {
        operator_delete(local_88[0]);
      }
    }
    CTaskGenericId::~CTaskGenericId(local_50);
  }
  if ((param_2 != 0) && (pQVar3 == (QObject *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,
                  "Cannot initialize OsImageDownloadOperation. Unsupported context.");
    return;
  }
  piVar5 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x18);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar5;
    *(QObject **)(param_1 + 0x20) = pQVar3;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  cVar2 = FUN_1001b7c80();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  if (cVar2 == '\0') {
    FUN_100188480(&local_f0,uVar4);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"The VM [%s] does not need to download OS image.",
                  local_e8 + *(long *)(local_e8 + 0x10));
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001ebfa5;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
LAB_1001ebfa5:
    if (*(int *)local_f0 == -1) {
      return;
    }
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_f0,2,8);
    return;
  }
  FUN_100188480(&local_118,uVar4);
  COsInstallationInfo::COsInstallationInfo((COsInstallationInfo *)local_110,&local_118);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ebdea;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_1001ebdea:
  COsInstallationInfo::load();
  COsInstallationInfo::osImageDownloadInfo();
  *(undefined4 *)(param_1 + 0x28) = local_158[0];
  QString::operator=((QString *)(param_1 + 0x30),&local_150);
  QString::operator=((QString *)(param_1 + 0x38),&local_148);
  QString::operator=((QString *)(param_1 + 0x40),&local_140);
  *(undefined8 *)(param_1 + 0x48) = local_138;
  QString::operator=((QString *)(param_1 + 0x50),&local_130);
  QString::operator=((QString *)(param_1 + 0x58),&local_128);
  QString::operator=((QString *)(param_1 + 0x60),&local_120);
  FUN_1001b8c60(local_158);
  *(undefined4 *)(param_1 + 0x28) = 1;
  FUN_1001ec330(param_1);
  local_110[0] = PTR_vtable_1021e17e0 + 0x10;
  if (*(int *)(local_f8 + 0x10) != -1) {
    if (*(int *)(local_f8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_f8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ebee1;
    }
    QHashData::free_helper(local_f8);
  }
LAB_1001ebee1:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001ebf17;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1001ebf17:
  QObject::~QObject((QObject *)local_110);
  return;
}

