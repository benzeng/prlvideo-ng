
undefined8 FUN_1000551a0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar1 = *param_2;
  pcVar3 = (char *)(*(long *)(lVar1 + 0x10) + lVar1);
  if ((pcVar3 != (char *)0x0) && (*(uint *)(lVar1 + 4) != 0)) {
    lVar2 = 0;
    do {
      if (pcVar3[lVar2] == '\0') break;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(lVar1 + 4));
    if ((int)lVar2 == -1) {
      _strlen(pcVar3);
    }
  }
  QString::fromUtf8_helper((char *)&local_30,(int)pcVar3);
  QString::normalized(param_1,&local_30,1,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

