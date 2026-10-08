
void FUN_100728c10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  lVar1 = FUN_10018d490(uVar2);
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pVm->server()",
                  "CloneVm/CCloneVmParametersDialog.cpp",0xd3,"onBrowseVmDir");
  }
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  lVar1 = FUN_10018d490(uVar2);
  if (lVar1 == 0) {
    return;
  }
  local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10013f270(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28));
  QFileDialog::getExistingDirectory(&local_20,0,&local_28,&local_30,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100728d09;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100728d09:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100728d39;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100728d39:
  if (*(int *)(local_20 + 4) != 0) {
    FUN_10013f1c0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x28),&local_20);
  }
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

