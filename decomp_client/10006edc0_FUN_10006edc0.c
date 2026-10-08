
void FUN_10006edc0(QObject *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  Data *local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102219f60;
  pvVar2 = operator_new(0x38);
  local_40 = (Data *)*param_3;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar1 = *param_3;
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
  FUN_10006c510(pvVar2,param_1,param_2,&local_40,param_4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10006ee9b;
      local_32 = 0;
    }
    QListData::dispose(local_40);
  }
LAB_10006ee9b:
  *(void **)(param_1 + 0x10) = pvVar2;
  return;
}

