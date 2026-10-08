
void FUN_100585c20(long param_1)

{
  QString *pQVar1;
  long lVar2;
  int iVar3;
  QKeySequence local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x20) != 0) goto LAB_100585d68;
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x70);
  QMetaObject::tr((char *)&local_30,"",0x1dcdc1f);
  FUN_1005867d0(local_40,param_1);
  lVar2 = *(long *)(param_1 + 0x40);
  iVar3 = QString::compare_helper
                    (*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4),
                     PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
  FUN_1007170a0(&local_38,local_40,(iVar3 != 0) * '\x02');
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100585cff;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100585cff:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100585d2f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100585d2f:
  QKeySequence::~QKeySequence(local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100585d68;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100585d68:
  FUN_100586430(param_1);
  return;
}

