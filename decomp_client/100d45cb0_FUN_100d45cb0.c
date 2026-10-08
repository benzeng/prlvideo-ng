
int FUN_100d45cb0(long param_1,QString *param_2)

{
  long lVar1;
  int iVar2;
  QArrayData *local_450;
  QString local_448;
  undefined4 local_440;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_440 = 0x400;
  local_38 = lVar1;
  iVar2 = _PrlVmCfg_GetName(*(undefined8 *)(param_1 + 8),local_438,&local_440);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.22:\t0x%x",iVar2);
    goto LAB_100d45de6;
  }
  _strlen(local_438);
  QString::fromUtf8_helper((char *)&local_450,(int)local_438);
  QString::normalized(&local_448,&local_450,1,0);
  QString::operator=(param_2,&local_448);
  if (*(int *)local_448.field0_0x0 != -1) {
    if (*(int *)local_448.field0_0x0 != 0) {
      LOCK();
      *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
      local_439 = *(int *)local_448.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d45d87;
    }
    QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
  }
LAB_100d45d87:
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_439 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d45de6;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_100d45de6:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

