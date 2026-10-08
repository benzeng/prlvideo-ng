
undefined8 * FUN_100a23d60(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar3 = *(long *)(param_2 + 8);
  if (lVar3 != param_2) {
    do {
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        pcVar1 = (char *)(lVar3 + 0x11);
LAB_100a23dd3:
        _strlen(pcVar1);
        pcVar2 = pcVar1;
      }
      else {
        pcVar1 = *(char **)(lVar3 + 0x20);
        pcVar2 = (char *)0x0;
        if (pcVar1 != (char *)0x0) goto LAB_100a23dd3;
      }
      QString::fromUtf8_helper((char *)&local_48,(int)pcVar2);
      QString::normalized(&local_40,&local_48,1,0);
      FUN_1000341d0(param_1,&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a23e37;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a23e37:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a23e67;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100a23e67:
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_2);
  }
  return param_1;
}

