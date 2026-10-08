
undefined8 FUN_1002ed0c0(long param_1)

{
  int iVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100060bb0();
  pQVar2 = (QObject *)FUN_100061a60(param_1 + 0x30);
  piVar3 = (int *)0x0;
  if (pQVar2 != (QObject *)0x0) {
    piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  }
  piVar4 = *(int **)(param_1 + 0x50);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x50);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x50) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
    }
    *(int **)(param_1 + 0x50) = piVar3;
    *(QObject **)(param_1 + 0x58) = pQVar2;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_21 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar3);
    }
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return 0x80015342;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 4) == 0) {
    return 0x80015342;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0x80015342;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 1) {
    return 0x80000001;
  }
  if (iVar1 == 2) {
    uVar5 = FUN_1002eca30(param_1);
    return uVar5;
  }
  if (iVar1 == 3) {
    uVar5 = FUN_1002ebdd0(param_1);
    return uVar5;
  }
  FUN_100060bb0();
  FUN_100062330(&local_38,*(undefined4 *)(param_1 + 0x28));
  QString::toLocal8Bit();
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"(!)Error: invalid context type %s",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ed225;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1002ed225:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002ed255;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ed255:
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                "Tasks/CTaskResumeWindow.cpp",0x140,"createWindow");
  return 0x80015342;
}

