
void FUN_100468be0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  QArrayData *local_90;
  void *local_88;
  void *pvStack_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  void *local_68;
  void *local_60;
  string local_48 [47];
  undefined1 local_19;
  
  FUN_100469fb0(local_70,4,0,0,0,0);
  local_88 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_78 = 0;
  FUN_10046a180(local_70,&local_88);
  uVar2 = FUN_10046a270(local_70);
  local_90 = (QArrayData *)*param_2;
  iVar1 = *(int *)local_90;
  if (1 < iVar1 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_19 = *(int *)local_90 != 0;
    UNLOCK();
  }
  FUN_100466fb0(iVar1 + 1U,uVar2,local_88,(long)pvStack_80 - (long)local_88,&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100468c9a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100468c9a:
  if (local_88 != (void *)0x0) {
    if (pvStack_80 != local_88) {
      pvStack_80 = local_88;
    }
    operator_delete(local_88);
  }
  std::string::~string(local_48);
  if (local_68 != (void *)0x0) {
    if (local_60 != local_68) {
      local_60 = local_68;
    }
    operator_delete(local_68);
  }
  return;
}

