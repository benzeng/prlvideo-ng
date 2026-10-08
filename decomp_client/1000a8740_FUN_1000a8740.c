
undefined8 * FUN_1000a8740(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  int iVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  char *local_30;
  undefined1 local_21;
  
  iVar2 = _PrlEvent_GetDataPtr(*param_3,&local_30);
  pcVar1 = local_30;
  if (iVar2 != 0) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  if (local_30 != (char *)0x0) {
    _strlen(local_30);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar1);
  QString::normalized(&local_38,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a87da;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000a87da:
  _PrlBuffer_Free(local_30);
  *param_1 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

