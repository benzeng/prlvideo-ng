
QString * FUN_100d93280(QString *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int *piVar3;
  QString local_38;
  char local_30;
  undefined7 uStack_2f;
  undefined1 local_21;
  
  FUN_100d806d0(&local_30);
  pQVar2 = (QArrayData *)CONCAT71(uStack_2f,local_30);
  iVar1 = *(int *)(pQVar2 + 4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d932c8;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d932c8:
  if (iVar1 == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","0","ParallelsDirs.cpp",
                  0xa9a,"getDispBinPath");
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    return param_1;
  }
  FUN_100d86380(&local_38);
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_30,0x1efec6a);
  QString::append(param_1);
  piVar3 = (int *)CONCAT71(uStack_2f,local_30);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d93342;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_2f,local_30),2,8);
  }
LAB_100d93342:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_30 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

