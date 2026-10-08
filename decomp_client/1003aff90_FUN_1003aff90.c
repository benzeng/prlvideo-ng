
undefined8 * FUN_1003aff90(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  _func_void_Node_ptr *local_30;
  undefined1 local_22;
  
  iVar4 = QVariant::userType();
  puVar2 = PTR_shared_null_1021e15d0;
  if (iVar4 == 0x1c) {
    uVar5 = QVariant::constData();
    FUN_100076800(param_1,uVar5);
  }
  else {
    local_30 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    cVar3 = QVariant::convert(param_2,(void *)0x1c);
    if (cVar3 == '\0') {
      *param_1 = puVar2;
    }
    else {
      FUN_100076800(param_1,&local_30);
    }
    if (*(int *)(local_30 + 0x10) != -1) {
      if (*(int *)(local_30 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_30 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) {
          return param_1;
        }
        local_22 = 0;
      }
      QHashData::free_helper(local_30);
    }
  }
  return param_1;
}

