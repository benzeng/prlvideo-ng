
void FUN_1004b7870(long param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QMutex::lock();
  local_30 = *(QArrayData **)(param_1 + 0x40);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QMutex::unlock();
  local_3c = 0;
  local_38 = 0;
  local_40 = param_2;
  pvVar1 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar1 == (void *)0x0) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",0,
                  "Failed to create package (create confirmed) to client_app");
  }
  else {
    FUN_10052a120(pvVar1,1,0x15,&local_40,0x10);
    FUN_1004b4c70(*(undefined8 *)(param_1 + 0x38),&local_30,pvVar1);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

