
void FUN_1004e69b0(QObject *param_1,QObject *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  Data *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102219ea0;
  pvVar2 = operator_new(0x98);
  local_40 = (Data *)*param_5;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar1 = *param_5;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_40 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_33 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  FUN_1004e5410(pvVar2,param_1,param_2,param_3,param_4,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1004e6a96;
      local_32 = 0;
    }
    QListData::dispose(local_40);
  }
LAB_1004e6a96:
  *(void **)(param_1 + 0x10) = pvVar2;
  return;
}

