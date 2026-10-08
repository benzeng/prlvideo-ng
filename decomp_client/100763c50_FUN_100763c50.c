
void FUN_100763c50(QObject *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  QArrayData *local_58;
  QRegExp local_50 [8];
  QArrayData *local_48;
  int local_40;
  undefined1 local_39;
  void *local_38;
  int *local_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_20 = lVar1;
  if (param_2 != 0) goto LAB_100763d68;
  CSdkRequest::getResultAsString((int)&local_48);
  local_58 = (QArrayData *)QString::fromAscii_helper("guid=\"{?*?}\"",0xc);
  QRegExp::QRegExp(local_50,&local_58,1,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_39 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100763cf2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100763cf2:
  iVar2 = QString::count((QRegExp *)&local_48);
  if (*(int *)(param_1 + 0x30) != iVar2) {
    *(int *)(param_1 + 0x30) = iVar2;
    local_38 = (void *)0x0;
    local_30 = &local_40;
    local_40 = iVar2;
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6640,0,&local_38);
  }
  QRegExp::~QRegExp(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_39 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_39) goto LAB_100763d68;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100763d68:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

