
int FUN_100d49a40(long param_1,QString *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  QString local_448;
  undefined4 local_440;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_440 = 0x400;
  local_30 = lVar1;
  iVar2 = _PrlVmCfg_GetHomePath(*(undefined8 *)(param_1 + 8),local_438,&local_440);
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.22:\t0x%x",iVar2);
  }
  else {
    sVar3 = _strlen(local_438);
    local_448.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(local_438,(int)sVar3);
    QString::operator=(param_2,&local_448);
    if (*(int *)local_448.field0_0x0 != -1) {
      if (*(int *)local_448.field0_0x0 != 0) {
        LOCK();
        *(int *)local_448.field0_0x0 = *(int *)local_448.field0_0x0 + -1;
        local_439 = *(int *)local_448.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_100d49b19;
      }
      QArrayData::deallocate((QArrayData *)local_448.field0_0x0,2,8);
    }
  }
LAB_100d49b19:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

