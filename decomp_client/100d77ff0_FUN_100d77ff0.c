
void FUN_100d77ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  QArrayData *local_20;
  
  uVar1 = *param_1;
  QString::toUtf8();
  iVar2 = _PrlCVSrc_SetLocalizedName(uVar1,local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100d78047;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100d78047:
  if (iVar2 < 0) {
    piVar3 = (int *)___cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(piVar3,PTR_typeinfo_1021e1790,0);
  }
  return;
}

