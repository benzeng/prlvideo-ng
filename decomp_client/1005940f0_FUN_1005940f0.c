
void FUN_1005940f0(void)

{
  code *pcVar1;
  long lVar2;
  QVariant local_40;
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bd30);
  if (lVar2 == 0) {
    return;
  }
  MappingHelpers::getFirstValue((QHash *)&local_40);
  FUN_100598c60(&local_30,(QHash *)&local_40);
  FUN_100565b50(lVar2,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059416a;
    }
    QHashData::free_helper(local_30);
  }
LAB_10059416a:
  QVariant::~QVariant(&local_40);
  return;
}

