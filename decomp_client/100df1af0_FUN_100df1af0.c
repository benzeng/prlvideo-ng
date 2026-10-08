
void FUN_100df1af0(undefined8 *param_1,int param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (0 < param_2) {
    lVar2 = 0;
    do {
      pcVar1 = *(char **)(param_3 + lVar2 * 8);
      if (pcVar1 != (char *)0x0) {
        _strlen(pcVar1);
      }
      QString::fromUtf8_helper((char *)&local_48,(int)pcVar1);
      QString::normalized(&local_40,&local_48,1,0);
      FUN_1000341d0(param_1,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100df1ba6;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100df1ba6:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100df1bd6;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100df1bd6:
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_2);
  }
  return;
}

