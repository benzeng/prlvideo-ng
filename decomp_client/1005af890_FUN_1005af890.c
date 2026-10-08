
void FUN_1005af890(long param_1)

{
  code *pcVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QString *pQVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  QHash *pQVar9;
  void *pvVar10;
  undefined8 uVar11;
  int *piVar12;
  Connection local_c0 [8];
  Connection local_b8 [8];
  undefined1 local_b0 [8];
  _func_void_Node_ptr *local_a8;
  _func_void_Node_ptr *local_a0;
  int *local_98;
  QArrayData *local_90;
  undefined4 local_88;
  QArrayData *local_80;
  undefined4 local_78;
  QFileInfo local_70 [8];
  _func_void_Node_ptr *local_68;
  int *local_60;
  int *local_58;
  QString *local_50;
  QString *local_48;
  int local_40;
  undefined1 local_31;
  
  uVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar8 = FUN_1005b86c0(uVar7);
  if (lVar8 == 0) {
    return;
  }
  uVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005bca20(&local_68,uVar7,2);
  FUN_1002b5da0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar6 = local_58[2];
      if (iVar6 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar12 = local_58 + (long)iVar6 * 2 + 4;
        lVar8 = (long)local_58[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar12 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_60 = local_60 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  local_40 = 1;
  FUN_100039a80(&local_60);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005af9cc;
    }
    QHashData::free_helper(local_68);
  }
LAB_1005af9cc:
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      pQVar4 = local_50;
      QFileInfo::QFileInfo(local_70,local_50);
      lVar8 = QFileInfo::size();
      if ((lVar8 == 0) || (cVar5 = QFileInfo::exists(), cVar5 == '\0')) {
        pQVar3 = (QArrayData *)pQVar4->field0_0x0;
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        lVar8 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        local_78 = 2;
        local_80 = pQVar3;
        FUN_1005b6b10(lVar8 + 0x140,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005afaa2;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1005afaa2:
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        local_88 = 2;
        local_90 = pQVar3;
        FUN_100840070(param_1,&local_90);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005afb02;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_1005afb02:
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005afb2d;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
      }
LAB_1005afb2d:
      QFileInfo::~QFileInfo(local_70);
      local_50 = local_50 + 1;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  FUN_100039a80(&local_58);
  pQVar9 = (QHash *)CTaskManager::instance();
  local_a0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_98,pQVar9);
  if (*(int *)(local_a0 + 0x10) != -1) {
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005afbbe;
    }
    QHashData::free_helper(local_a0);
  }
LAB_1005afbbe:
  if (local_98[3] != local_98[2]) {
    lVar8 = **(long **)(local_98 + (long)local_98[2] * 2 + 4);
    if ((((lVar8 != 0) && (*(int *)(lVar8 + 4) != 0)) &&
        (pvVar10 = (void *)(*(long **)(local_98 + (long)local_98[2] * 2 + 4))[1],
        pvVar10 != (void *)0x0)) && (cVar5 = CAbstractTask::isFinished(), cVar5 == '\0'))
    goto LAB_1005afca4;
  }
  pvVar10 = operator_new(0x58);
  uVar7 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = FUN_1005b86c0(uVar7);
  uVar11 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005bca20(&local_a8,uVar11,2);
  FUN_1005cd320(local_b0);
  FUN_1002b40a0(pvVar10,uVar7,&local_a8,local_b0);
  FUN_100039a80(local_b0);
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005afca4;
    }
    QHashData::free_helper(local_a8);
  }
LAB_1005afca4:
  QObject::connect(local_b8,pvVar10,"2osImageAutodetected(const QString&,const DetectOSInfo&)",
                   param_1,"1onOsImageAutodetected(const QString&,const DetectOSInfo&)",0x80);
  QMetaObject::Connection::~Connection(local_b8);
  QObject::connect(local_c0,pvVar10,"2osImageHasNoData(const QString&)",param_1,
                   "1onOsImageHasNoData(const QString&)",0x80);
  QMetaObject::Connection::~Connection(local_c0);
  iVar6 = CAbstractTask::state();
  if (iVar6 == 0) {
    CAbstractTask::execute();
  }
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      UNLOCK();
      if (*local_98 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100034010(&local_98,local_98);
  }
  return;
}

