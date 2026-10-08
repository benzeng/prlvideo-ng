
void FUN_1005fc430(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QString local_30;
  undefined1 local_22;
  
  QMetaObject::cast((QObject *)&DAT_1021f4d40);
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  CAppliance::getApplianceId();
  QString::operator=((QString *)(lVar1 + 0x98),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1005fc4ad;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005fc4ad:
  uVar2 = FUN_1005ec990(param_1 + 0x38);
  FUN_1005bb920(uVar2);
  return;
}

