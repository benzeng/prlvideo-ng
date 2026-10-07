
int FUN_100563960(long *param_1,char *param_2,QString *param_3)

{
  code *pcVar1;
  int iVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  if (param_1 == (long *)0x0) {
    FUN_1008e3970("","StatesUtils",0,"ASSERT( %s ) occured in %s:%d [%s]","pDisk",
                  "BootCampStatesHelper.cpp",0x1e6,"DiskHasStateStringParam");
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  pcVar1 = *(code **)(*param_1 + 0x140);
  local_40 = (QArrayData *)QString::fromAscii_helper("BcSuspendState",0xe);
  iVar2 = (*pcVar1)(param_1,&local_40,&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100563a29;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100563a29:
  if (iVar2 < 0) {
    if (iVar2 == -0x7ffdd000) {
      *param_2 = '\0';
      iVar2 = 0;
    }
    goto LAB_100563ac4;
  }
  if (*(int *)(local_38.field0_0x0 + 4) == 0) {
    *param_2 = '\0';
  }
  else {
    local_48 = (QArrayData *)QString::fromAscii_helper("0",1);
    iVar2 = QString::compare(&local_38,&local_48,1);
    *param_2 = iVar2 != 0;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100563aaa;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100563aaa:
  iVar2 = 0;
  if ((param_3 != (QString *)0x0) && (*param_2 != '\0')) {
    QString::operator=(param_3,&local_38);
  }
LAB_100563ac4:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return iVar2;
}

