
void FUN_100a29ed0(long param_1,long *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_80 [8];
  void *local_78;
  void *local_70;
  string local_58 [47];
  undefined1 local_29;
  
  iVar4 = CSdkEvent::type();
  if (iVar4 != 0x1896b) {
    return;
  }
  FUN_100a332c0(local_80,0,0,0,0,0);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  cVar3 = FUN_100a23aa0(lVar1,local_80);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  if (cVar3 != '\0') {
    lVar1 = *(long *)(param_1 + 0x30);
    puVar5 = operator_new(0x88);
    pQVar2 = *(QArrayData **)(param_1 + 0x38);
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 4) = 2;
    *(undefined8 *)(puVar5 + 8) = 0;
    FUN_100a33480(puVar5 + 0x10,local_80,2);
    *(QArrayData **)(puVar5 + 0x60) = pQVar2;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    *(undefined1 **)(puVar5 + 0x70) = puVar5 + 0x70;
    *(undefined1 **)(puVar5 + 0x78) = puVar5 + 0x70;
    *(undefined8 *)(puVar5 + 0x80) = 0;
    FUN_100a2ae40(lVar1 + 0x80,puVar5);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a29ffb;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_100a29ffb:
  std::string::~string(local_58);
  if (local_78 != (void *)0x0) {
    if (local_70 != local_78) {
      local_70 = local_78;
    }
    operator_delete(local_78);
  }
  return;
}

