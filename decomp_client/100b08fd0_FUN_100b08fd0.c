
void FUN_100b08fd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_30 [15];
  undefined1 local_21;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  cVar2 = FUN_100dd86e0(param_2,&cf_ProtocolCharacteristics);
  if (cVar2 == '\0') {
    return;
  }
  FUN_100dd8610(local_30,param_2,&cf_ProtocolCharacteristics);
  cVar2 = FUN_100dd86a0(local_30);
  puVar1 = PTR_shared_null_1021e1288;
  if (cVar2 == '\0') goto LAB_100b0912a;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar2 = FUN_100dd87a0(local_30,&cf_PhysicalInterconnect,&local_38);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    iVar3 = QString::compare_helper
                      (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                       "Virtual Interface",0xffffffff,1);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
  }
  local_40 = (QArrayData *)puVar1;
  cVar2 = FUN_100dd87a0(local_30,&cf_PhysicalInterconnectLocation,&local_40);
  if ((cVar2 != '\0') &&
     (iVar3 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "External",0xffffffff,1), iVar3 == 0)) {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b090fa;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100b090fa:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b0912a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b0912a:
  FUN_100dd86b0(local_30);
  return;
}

