
void FUN_1001f75a0(long param_1)

{
  undefined *puVar1;
  QString *pQVar2;
  QString local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x58) == 0) || (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0)) ||
     (*(long *)(param_1 + 0x60) == 0)) {
    FUN_100df99c0("[CompactHdd]","prl_client_app",0,"(!)Error: can\'t cancel compact operation.");
    return;
  }
  CSdkRequest::cancel();
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  pQVar2 = (QString *)0x0;
  CProgressDialog::setRange((int)*(long *)(param_1 + 0x40),0);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (pQVar2 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) {
    pQVar2 = *(QString **)(param_1 + 0x40);
  }
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1ddaea4);
  puVar1 = PTR_shared_null_1021e1288;
  CProgressDialog::setText(pQVar2,&local_28);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_19 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001f7689;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1001f7689:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

