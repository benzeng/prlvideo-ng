
undefined1 FUN_100a8da30(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined1 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_38;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  pvVar2 = (void *)FUN_100a78ae0(param_1,&local_20);
  if (pvVar2 == (void *)0x0) {
    FUN_100df99c0("","IOCommunication",0,"SSL get session failed!");
    return 0;
  }
  cVar1 = FUN_100a8dd40(param_1);
  if (cVar1 == '\0') {
    pQVar4 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_19 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sSSL deinit failed!",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a8db50;
      }
      QArrayData::deallocate(local_28,1,8);
    }
LAB_100a8db50:
    if (*(int *)pQVar4 == -1) {
      uVar3 = 0;
      goto LAB_100a8dc38;
    }
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_19 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_19) {
        uVar3 = 0;
        goto LAB_100a8dc38;
      }
    }
  }
  else {
    cVar1 = FUN_100a8de20(param_1,param_1 + 0x350);
    if (cVar1 != '\0') {
      cVar1 = FUN_100a8e5f0(param_1,pvVar2,local_20);
      uVar3 = 1;
      if (cVar1 == '\0') {
        uVar3 = 0;
        FUN_100df99c0("","IOCommunication",0,"SSL set session failed!");
      }
      goto LAB_100a8dc38;
    }
    pQVar4 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_19 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,"%sSSL init failed!",local_38 + *(long *)(local_38 + 0x10))
    ;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100a8dbe2;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100a8dbe2:
    if (*(int *)pQVar4 == -1) {
      uVar3 = 0;
      goto LAB_100a8dc38;
    }
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_19 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_19) {
        uVar3 = 0;
        goto LAB_100a8dc38;
      }
    }
  }
  QArrayData::deallocate(pQVar4,2,8);
  uVar3 = 0;
LAB_100a8dc38:
  _free(pvVar2);
  return uVar3;
}

