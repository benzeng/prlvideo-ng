
bool FUN_100d97e70(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  bool bVar5;
  QArrayData *local_c0;
  undefined1 local_b8 [16];
  int local_a8;
  undefined1 local_21;
  
  if (*(int *)(*param_1 + 4) == 0) {
    puVar4 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar4 = "isDefaultAppUser()";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,PTR_typeinfo_1021e1778,0);
  }
  QString::toUtf8();
  iVar2 = _stat_INODE64(local_c0 + *(long *)(local_c0 + 0x10),local_b8);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_21 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d97ef1;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100d97ef1:
  if (iVar2 == 0) {
    bVar5 = true;
    if ((local_a8 != 99) && (cVar1 = FUN_100da0f80(param_2), cVar1 == '\0')) {
      iVar2 = FUN_100daf090(param_1[3]);
      bVar5 = local_a8 == iVar2;
    }
    return bVar5;
  }
  piVar3 = ___error();
  FUN_100df99c0("","cmn_utils",0,"stat() cal returned an error: %d",*piVar3);
  puVar4 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar4 = "stat() system call failed";
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar4,PTR_typeinfo_1021e1778,0);
}

