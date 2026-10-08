
undefined8 FUN_10027e080(undefined8 param_1)

{
  code *pcVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  QHash *pQVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long *plVar9;
  bool bVar10;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  int *local_a0 [4];
  QVariant local_80 [2];
  int *local_68;
  int *local_60;
  int *local_58;
  uint local_50;
  _func_void_Node_ptr *local_48;
  int *local_40;
  undefined1 local_31;
  
  pQVar5 = (QHash *)CTaskManager::instance();
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  CTaskManager::getTasksByType((uint)&local_40,pQVar5);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027e0eb;
    }
    QHashData::free_helper(local_48);
  }
LAB_10027e0eb:
  FUN_100033e80(&local_68,&local_40);
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  local_58 = local_68 + (long)local_68[3] * 2 + 4;
  local_50 = 1;
  if (local_68[2] != local_68[3]) {
    do {
      piVar2 = (int *)**(undefined8 **)local_60;
      plVar3 = (long *)(*(undefined8 **)local_60)[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        local_31 = *piVar2 != 0;
        UNLOCK();
      }
      if (local_50 != 0) {
        if ((((piVar2 != (int *)0x0) && (plVar3 != (long *)0x0)) && (piVar2[1] != 0)) &&
           (cVar4 = CAbstractTask::isFinished(), cVar4 == '\0')) {
          CAbstractTask::setWaitForSubTaskCompletion();
          local_a8 = (QArrayData *)
                     QString::fromAscii_helper("1onTaskDLCItemDownloadFinished()",0x20);
          local_b0 = 0x80000000;
          local_b8.field7 = 0;
          FUN_100a1c600(local_a0,param_1,&local_a8,&local_b8);
          QVariant::~QVariant((QVariant *)&local_b8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10027e21b;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_10027e21b:
          uVar6 = CTaskManager::instance();
          plVar9 = (long *)0x0;
          if (piVar2[1] != 0) {
            plVar9 = plVar3;
          }
          uVar7 = (**(code **)(*plVar9 + 0x70))();
          CTaskManager::addTaskWatcher(uVar6,local_a0,uVar7,4);
          plVar9 = (long *)0x0;
          if (piVar2[1] != 0) {
            plVar9 = plVar3;
          }
          (**(code **)(*plVar9 + 0x78))(plVar9,0x80000275);
          QVariant::~QVariant(local_80);
          if (local_a0[0] != (int *)0x0) {
            LOCK();
            *local_a0[0] = *local_a0[0] + -1;
            local_31 = *local_a0[0] != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_a0[0] != (int *)0x0)) {
              operator_delete(local_a0[0]);
            }
          }
        }
        local_50 = 0;
      }
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + -1;
        local_31 = *piVar2 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar2);
        }
      }
      local_60 = local_60 + 2;
      uVar8 = local_50 ^ 1;
      bVar10 = local_50 != 1;
      local_50 = uVar8;
    } while ((bVar10) && (local_60 != local_58));
  }
  if (*local_68 != -1) {
    if (*local_68 != 0) {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10027e322;
    }
    FUN_100034010(&local_68,local_68);
  }
LAB_10027e322:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    FUN_100034010(&local_40,local_40);
  }
  return 0;
}

