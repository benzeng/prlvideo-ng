
void FUN_100a26a40(long param_1,undefined4 param_2,undefined8 param_3)

{
  QArrayData *pQVar1;
  undefined1 *puVar2;
  undefined1 local_98 [8];
  void *local_90;
  void *local_88;
  string local_70 [40];
  void *local_48;
  void *local_40;
  undefined1 local_29;
  
  FUN_100a23f10(&local_48,param_3,1);
  FUN_100a332c0(local_98,6,param_2,1,local_48,(int)local_40 - (int)local_48);
  puVar2 = operator_new(0x88);
  pQVar1 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = 2;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_100a33480(puVar2 + 0x10,local_98,2);
  *(QArrayData **)(puVar2 + 0x60) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  *(undefined1 **)(puVar2 + 0x70) = puVar2 + 0x70;
  *(undefined1 **)(puVar2 + 0x78) = puVar2 + 0x70;
  *(undefined8 *)(puVar2 + 0x80) = 0;
  FUN_100a2ae40(param_1 + 0x80,puVar2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a26b43;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a26b43:
  std::string::~string(local_70);
  if (local_90 != (void *)0x0) {
    if (local_88 != local_90) {
      local_88 = local_90;
    }
    operator_delete(local_90);
  }
  if (local_48 != (void *)0x0) {
    if (local_40 != local_48) {
      local_40 = local_48;
    }
    operator_delete(local_48);
  }
  return;
}

