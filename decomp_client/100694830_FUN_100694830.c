
int FUN_100694830(void)

{
  int iVar1;
  int iVar2;
  QArrayData *local_38;
  undefined1 local_30 [12];
  undefined1 local_19;
  
  QMetaObject::indexOfEnumerator("");
  local_30 = QMetaObject::enumerator(0x2224a58);
  QString::toLatin1();
  iVar1 = QMetaEnum::keyToValue(local_30,(bool *)(local_38 + *(long *)(local_38 + 0x10)));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006948b6;
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1006948b6:
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

