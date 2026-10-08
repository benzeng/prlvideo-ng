
void FUN_100593840(void)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  QVariant local_48;
  Data *local_38;
  undefined1 local_29;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221b890);
  if (lVar2 == 0) {
    return;
  }
  MappingHelpers::getFirstValue((QHash *)&local_48);
  FUN_100597be0(&local_38,(QHash *)&local_48);
  FUN_10055bac0(lVar2,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005938ff;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar2 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
    QListData::dispose(local_38);
  }
LAB_1005938ff:
  QVariant::~QVariant(&local_48);
  return;
}

