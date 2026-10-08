
bool FUN_10019cd90(long *param_1)

{
  bool bVar1;
  QArrayData *local_20;
  
  if ((char)param_1[6] == '\0') {
    if (*param_1 == 0) {
      bVar1 = false;
    }
    else if (*(int *)(*param_1 + 4) == 0) {
      bVar1 = false;
    }
    else if (param_1[1] == 0) {
      bVar1 = false;
    }
    else {
      QMetaMethod::methodSignature();
      bVar1 = *(int *)(local_20 + 4) != 0;
      if (*(int *)local_20 != -1) {
        if (*(int *)local_20 != 0) {
          LOCK();
          *(int *)local_20 = *(int *)local_20 + -1;
          UNLOCK();
          if (*(int *)local_20 != 0) {
            return bVar1;
          }
        }
        QArrayData::deallocate(local_20,1,8);
      }
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

