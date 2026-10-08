
QByteArray * FUN_1009c7cb0(QByteArray *param_1,long param_2)

{
  char *pcVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
  if (((*(long *)(param_2 + 0x10) != 0) && (pcVar1 = *(char **)(param_2 + 8), pcVar1 != (char *)0x0)
      ) && (*(int *)(param_2 + 0x20) != -1)) {
    QByteArray::QByteArray
              ((QByteArray *)&local_28,pcVar1,(int)*(long *)(param_2 + 0x10) - (int)pcVar1);
    QByteArray::operator=(param_1,(QByteArray *)&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
  return param_1;
}

