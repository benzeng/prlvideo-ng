
void FUN_10051a6b0(long param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int *local_68;
  QString *local_60;
  QString *local_58;
  int local_50;
  QString local_48;
  int *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  QMutex::lock();
  bVar7 = true;
  plVar3 = (long *)FUN_10051a960(param_1,param_2,&local_32);
  if (*plVar3 != 0) goto LAB_10051a8a8;
  *plVar3 = (long)param_3;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 3) = param_2;
  piVar5 = (int *)plVar3[1];
  plVar3[1] = (long)PTR_shared_null_100ba2188;
  local_40 = piVar5;
  QMutex::lock();
  FUN_10051afa0(param_3 + 2,&local_40);
  QMutex::unlock();
  bVar7 = false;
  QMutex::unlock();
  FUN_10051aa80(param_1,&local_40,param_2);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_68 = piVar5;
  if (*piVar5 != -1) {
    if (*piVar5 == 0) {
      QListData::detach((int)&local_68);
      iVar1 = local_68[2];
      if (iVar1 != local_68[3]) {
        piVar5 = piVar5 + (long)piVar5[2] * 2 + 4;
        piVar6 = local_68 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_68[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)piVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          piVar5 = piVar5 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
    }
  }
  local_60 = (QString *)(local_68 + (long)local_68[2] * 2 + 4);
  local_58 = (QString *)(local_68 + (long)local_68[3] * 2 + 4);
  if (local_68[2] != local_68[3]) {
    do {
      local_50 = 1;
      QString::operator=(&local_48,local_60);
      if (local_50 != 0) {
        (**(code **)(*param_3 + 0x18))(param_3,&local_48,1);
      }
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_100037320(&local_68);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051a89b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10051a89b:
  FUN_100037320(&local_40);
LAB_10051a8a8:
  if (bVar7) {
    QMutex::unlock();
  }
  return;
}

