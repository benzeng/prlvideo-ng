
undefined1 FUN_1006f3780(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  
  QString::toUtf8();
  lVar1 = *(long *)(local_38 + 0x10);
  QString::toUtf8();
  iVar2 = _rename((char *)(local_38 + lVar1),(char *)(local_40 + *(long *)(local_40 + 0x10)));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1006f37fa;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1006f37fa:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006f382a;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1006f382a:
  if (iVar2 == 0) {
    return 1;
  }
  piVar3 = ___error();
  iVar2 = *piVar3;
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","cmn_utils",0,"Unable to move file by error %#x. sFrom==>sTo:\'%s\' ==>\'%s\'",
                iVar2,local_48 + lVar1,local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) goto LAB_1006f38c2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1006f38c2:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return 0;
}

