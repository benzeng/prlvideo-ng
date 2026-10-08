
void FUN_10022c6b0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  QString QVar5;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar1 = *(int *)(param_1 + 100);
  puVar3 = *(uint **)(param_1 + 0x28);
  if (1 < *puVar3) {
    FUN_10022d1b0((undefined8 *)(param_1 + 0x28),puVar3[1]);
    puVar3 = *(uint **)(param_1 + 0x28);
  }
  lVar2 = *(long *)(puVar3 + ((long)(int)puVar3[2] + (long)iVar1) * 2 + 4);
  if (param_2 < 0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to register Vm (%s), RC( %.8X )",
                  local_38 + *(long *)(local_38 + 0x10),param_2);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10022c75e;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10022c75e:
  *(int *)(lVar2 + 0x28) = param_2;
  lVar4 = QObject::sender();
  if ((lVar4 == 0) ||
     (lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1720,&PTR_vtable_102202220,0), lVar4 == 0)) {
    lVar4 = QObject::sender();
    if ((lVar4 == 0) ||
       (lVar4 = ___dynamic_cast(lVar4,PTR_typeinfo_1021e1720,&PTR_vtable_102205370,0), lVar4 == 0))
    goto LAB_10022c86d;
    local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x88);
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(lVar2 + 0x30),&local_48);
    if (*(int *)local_48.field0_0x0 == -1) goto LAB_10022c86d;
    QVar5.field0_0x0 = local_48.field0_0x0;
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      iVar1 = *(int *)local_48.field0_0x0;
      UNLOCK();
      goto joined_r0x00010022c858;
    }
  }
  else {
    local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x88);
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=((QString *)(lVar2 + 0x30),&local_40);
    if (*(int *)local_40.field0_0x0 == -1) goto LAB_10022c86d;
    QVar5.field0_0x0 = local_40.field0_0x0;
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      iVar1 = *(int *)local_40.field0_0x0;
      UNLOCK();
joined_r0x00010022c858:
      local_29 = iVar1 != 0;
      if ((bool)local_29) goto LAB_10022c86d;
    }
  }
  QArrayData::deallocate((QArrayData *)QVar5.field0_0x0,2,8);
LAB_10022c86d:
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  CAbstractTask::subTaskCompleted((int)param_1);
  return;
}

