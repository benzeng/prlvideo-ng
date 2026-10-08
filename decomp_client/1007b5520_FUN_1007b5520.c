
undefined8 * FUN_1007b5520(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_2 + 0x10) == 0) || (*(int *)(*(long *)(param_2 + 0x10) + 4) == 0)) ||
     (*(long *)(param_2 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  FUN_10018c2b0();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  FUN_100109830(&local_30);
  QString::fromUtf8_helper((char *)&local_28,0x1e17f72);
  puVar2 = (undefined8 *)QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007b55cb;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007b55cb:
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

