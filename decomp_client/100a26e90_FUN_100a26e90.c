
void FUN_100a26e90(long param_1,long *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined1 *puVar3;
  undefined1 local_80 [8];
  void *local_78;
  void *local_70;
  string local_58 [47];
  undefined1 local_29;
  
  if (*param_2 == 0) {
    return;
  }
  lVar1 = *(long *)(*param_2 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x10) == 0) {
    return;
  }
  lVar1 = *(long *)(lVar1 + 8);
  FUN_100a332c0(local_80,4,*(undefined4 *)(lVar1 + 0x10),1,*(undefined8 *)(lVar1 + 0x18),
                *(int *)(lVar1 + 0x20) - (int)*(undefined8 *)(lVar1 + 0x18));
  puVar3 = operator_new(0x88);
  pQVar2 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 2;
  *(undefined8 *)(puVar3 + 8) = 0;
  FUN_100a33480(puVar3 + 0x10,local_80,2);
  *(QArrayData **)(puVar3 + 0x60) = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  *(undefined1 **)(puVar3 + 0x70) = puVar3 + 0x70;
  *(undefined1 **)(puVar3 + 0x78) = puVar3 + 0x70;
  *(undefined8 *)(puVar3 + 0x80) = 0;
  FUN_100a2ae40(param_1 + 0x80,puVar3);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a26fa0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a26fa0:
  std::string::~string(local_58);
  if (local_78 != (void *)0x0) {
    if (local_70 != local_78) {
      local_70 = local_78;
    }
    operator_delete(local_78);
  }
  return;
}

