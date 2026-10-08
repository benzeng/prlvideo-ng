
QHash * FUN_1004ce280(QHash *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  QArrayData *local_48;
  Data *local_40;
  _func_void_Node_ptr *local_38;
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  FUN_10044b130(&local_30);
  plVar2 = operator_new(0x78);
  uVar3 = FUN_10044b340(param_2);
  uVar3 = FUN_1003b0a90(uVar3);
  FUN_10043b280(plVar2,uVar3,0);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(plVar2,&local_48,PTR_staticMetaObject_1021e1540,&local_40,1);
  FUN_1003bb600(&local_38,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004ce32c;
    }
    QListData::dispose(local_40);
  }
LAB_1004ce32c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004ce35c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004ce35c:
  (**(code **)(*plVar2 + 0x20))(plVar2);
  Mappings::unitePaths(param_1,(QHash *)&local_30);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004ce3a7;
    }
    QHashData::free_helper(local_38);
  }
LAB_1004ce3a7:
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return param_1;
}

