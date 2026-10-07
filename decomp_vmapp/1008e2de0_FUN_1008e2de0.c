
void * FUN_1008e2de0(void)

{
  void *pvVar1;
  long lVar2;
  QArrayData *local_38;
  
  QString::toUtf8();
  lVar2 = (long)*(int *)(local_38 + 4);
  if (lVar2 < 0x400) {
    pvVar1 = _malloc(lVar2 + 3U);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      FUN_1008e3970("","SocketUtils",0,"Failed to allocate memory");
    }
    else {
      ___bzero(pvVar1,lVar2 + 3U);
      *(undefined1 *)((long)pvVar1 + 1) = 1;
      _strncpy((char *)((long)pvVar1 + 2),(char *)(local_38 + *(long *)(local_38 + 0x10)),lVar2 + 1)
      ;
    }
  }
  else {
    pvVar1 = (void *)0x0;
    FUN_1008e3970("","SocketUtils",0,"Too long unix socket path.");
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return pvVar1;
      }
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return pvVar1;
}

