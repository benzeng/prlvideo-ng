
undefined8 FUN_100a26c90(long param_1,undefined4 param_2)

{
  QArrayData *pQVar1;
  undefined1 *puVar2;
  undefined1 local_80 [8];
  void *local_78;
  void *local_70;
  string local_58 [47];
  undefined1 local_29;
  
  FUN_100a332c0(local_80,2,param_2,0,0,0);
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
  FUN_100a33480(puVar2 + 0x10,local_80,2);
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
      if ((bool)local_29) goto LAB_100a26d71;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a26d71:
  std::string::~string(local_58);
  if (local_78 != (void *)0x0) {
    if (local_70 != local_78) {
      local_70 = local_78;
    }
    operator_delete(local_78);
  }
  return 1;
}

