
undefined1 FUN_100a11580(long param_1)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  CSlotInfo *this;
  CTaskGenericId *pCVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined1 uVar7;
  QArrayData *local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  _func_void_Node_ptr *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_30,&local_38);
    if (cVar3 == '\0') {
      uVar7 = 0;
    }
    else {
      this = operator_new(0x18);
      local_40 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      CTaskGenericId::CTaskGenericId((CTaskGenericId *)this,0x7d1,(QHash *)&local_40);
      if (*(int *)(local_40 + 0x10) != -1) {
        if (*(int *)(local_40 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_40 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_21 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100a11620;
        }
        QHashData::free_helper(local_40);
      }
LAB_100a11620:
      pCVar4 = (CTaskGenericId *)CTaskManager::instance();
      local_80 = (QArrayData *)
                 QString::fromAscii_helper
                           ("1onReauthorizationFinished(PRL_RESULT,CAbstractTask*)",0x35);
      local_88 = 0x80000000;
      local_90.field7 = 0;
      FUN_100a1c600(local_78,param_1,&local_80,&local_90);
      uVar5 = CTaskManager::runTask(pCVar4,this,SUB81(local_78,0));
      QVariant::~QVariant(local_58);
      if (local_78[0] != (int *)0x0) {
        LOCK();
        *local_78[0] = *local_78[0] + -1;
        local_21 = *local_78[0] != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_78[0] != (int *)0x0)) {
          operator_delete(local_78[0]);
        }
      }
      QVariant::~QVariant((QVariant *)&local_90);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100a116e4;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100a116e4:
      FUN_100a18750(uVar5,&local_30,&local_38);
      if (DAT_102311290 == (void *)0x0) {
        pvVar6 = operator_new(0x20);
        FUN_100a0cb00(pvVar6);
        DAT_102280a60 = 1;
        DAT_102311290 = pvVar6;
      }
      FUN_100a0cbf0(&local_98,DAT_102311290);
      FUN_100a187e0(uVar5,&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_21 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100a11776;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100a11776:
      uVar7 = 1;
      CAbstractTask::execute();
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100a117f5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a117f5:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar7;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar7;
}

