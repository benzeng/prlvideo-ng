
char FUN_10041c130(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_2;
  if (6 < puVar5[1]) {
    if ((1 < *puVar5) || (*(long *)(puVar5 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,puVar5[1] + 1,puVar5[2] >> 0x1f);
      puVar5 = (uint *)*param_2;
    }
    iVar3 = _strncmp((char *)((long)puVar5 + *(long *)(puVar5 + 4)),"vAttach",7);
    if (iVar3 == 0) {
      QMutex::lock();
      iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))();
      cVar2 = '\0';
      if (iVar3 != 0) {
        cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
      }
      QMutex::unlock();
      cVar4 = '\0';
      if (cVar2 != '\0') {
        FUN_100416e70(param_1);
        cVar4 = cVar2;
      }
      goto LAB_10041c195;
    }
  }
  FUN_10041a500(param_1);
  cVar4 = '\x01';
LAB_10041c195:
  puVar1 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return cVar4;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,1,8);
  }
  return cVar4;
}

