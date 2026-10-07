
QString * FUN_1005376c0(QString *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  QString local_40;
  undefined1 local_32;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  puVar2 = *(uint **)(param_2 + 0x10);
  puVar4 = (undefined8 *)(param_2 + 0x10);
  if (1 < *puVar2) {
    FUN_100541d10(puVar4);
    puVar2 = (uint *)*puVar4;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar3 = puVar2 + 2;
  }
  else {
    puVar3 = *(uint **)(puVar2 + 8);
  }
  while( true ) {
    if (1 < *puVar2) {
      FUN_100541d10(puVar4);
      puVar2 = (uint *)*puVar4;
    }
    if (puVar3 == puVar2 + 2) break;
    if ((*(long *)(puVar3 + 8) != 0) &&
       (lVar1 = *(long *)(*(long *)(puVar3 + 8) + 0x10), lVar1 != 0)) {
      FUN_10053ab80(&local_40,lVar1,param_3);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_32 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_32) goto LAB_1005377aa;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1005377aa:
      if (*(int *)(param_1->field0_0x0 + 4) != 0) break;
    }
    puVar3 = (uint *)QMapNodeBase::nextNode();
    puVar2 = (uint *)*puVar4;
  }
  QMutex::unlock();
  return param_1;
}

