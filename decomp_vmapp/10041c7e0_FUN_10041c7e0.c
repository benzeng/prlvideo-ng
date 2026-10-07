
undefined1 FUN_10041c7e0(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_c8 [128];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  puVar6 = (uint *)*param_2;
  uVar1 = puVar6[1];
  if (5 < uVar1) {
    if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
      QByteArray::reallocData(param_2,uVar1 + 1,puVar6[2] >> 0x1f);
      puVar6 = (uint *)*param_2;
    }
    iVar4 = _strncmp((char *)((long)puVar6 + *(long *)(puVar6 + 4)),"vCont",5);
    if (iVar4 == 0) {
      if (*(char *)(*(long *)(puVar6 + 4) + 5 + (long)puVar6) == '?') {
        QByteArray::operator=((QByteArray *)&local_40,"vCont;c;C;s;S");
        uVar2 = 1;
        FUN_100419170(param_1,&local_40);
      }
      else {
        if (6 < uVar1) {
          if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
            QByteArray::reallocData(param_2,puVar6[1] + 1,puVar6[2] >> 0x1f);
            puVar6 = (uint *)*param_2;
          }
          iVar4 = _strcmp((char *)((long)puVar6 + *(long *)(puVar6 + 4)),"vCont;c");
          if (iVar4 == 0) {
            QMutex::lock();
            iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
            if (iVar4 == 0) {
              uVar2 = 0;
              QMutex::unlock();
            }
            else {
              cVar3 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
              QMutex::unlock();
              uVar2 = 0;
              if (cVar3 != '\0') {
                *param_3 = 1;
                uVar2 = 1;
              }
            }
            goto LAB_10041c861;
          }
        }
        QByteArray::mid((int)&local_48,(int)param_2);
        _memset_pattern16(local_c8,&DAT_100b41d70,0x80);
        iVar4 = FUN_10041c4c0(param_1,&local_48,local_c8);
        uVar2 = 0;
        if (iVar4 != 0) {
          QMutex::lock();
          iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x78))
                            (*(long **)(param_1 + 0x10),0,local_c8);
          iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
          if (iVar5 == 2) {
            *param_3 = 1;
          }
          uVar2 = 0;
          if (iVar4 != 0) {
            uVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
          }
          QMutex::unlock();
        }
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10041c861;
          }
          QArrayData::deallocate(local_48,1,8);
        }
      }
      goto LAB_10041c861;
    }
  }
  uVar2 = 1;
  FUN_10041a500(param_1);
LAB_10041c861:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar2;
}

