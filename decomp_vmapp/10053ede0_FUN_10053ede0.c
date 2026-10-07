
QString * FUN_10053ede0(QString *param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  QString local_40;
  undefined1 local_32;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  puVar1 = *(uint **)(param_2 + 0x10);
  puVar4 = (undefined8 *)(param_2 + 0x10);
  if (1 < *puVar1) {
    FUN_100541d10(puVar4);
    puVar1 = (uint *)*puVar4;
  }
  if (*(long *)(puVar1 + 4) == 0) {
    puVar2 = puVar1 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar1 + 8);
  }
  while( true ) {
    if (1 < *puVar1) {
      FUN_100541d10(puVar4);
      puVar1 = (uint *)*puVar4;
    }
    if (puVar2 == puVar1 + 2) break;
    uVar3 = 0;
    if (*(long *)(puVar2 + 8) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(puVar2 + 8) + 0x10);
    }
    FUN_10053adc0(&local_40,uVar3,param_3);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_32 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_10053eeca;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_10053eeca:
    if (*(int *)(param_1->field0_0x0 + 4) != 0) break;
    puVar2 = (uint *)QMapNodeBase::nextNode();
    puVar1 = (uint *)*puVar4;
  }
  QMutex::unlock();
  return param_1;
}

