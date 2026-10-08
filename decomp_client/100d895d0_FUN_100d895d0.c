
QString * FUN_100d895d0(QString *param_1,long param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_21;
  
  if (param_2 == 0) {
    FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","pUserInfo",
                  "ParallelsDirs.cpp",0x4c2,"getCrashReportUserLogPath");
  }
  if ((*(int *)(*(long *)(param_2 + 8) + 4) == 0) &&
     (FUN_100df99c0("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "!pUserInfo->m_homePath.isEmpty()","ParallelsDirs.cpp",0x4c3,
                    "getCrashReportUserLogPath"), *(int *)(*(long *)(param_2 + 8) + 4) == 0)) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    return param_1;
  }
  FUN_100d89360(&local_30);
  pQVar1 = *(QTypedArrayData<unsigned_short> **)(param_2 + 8);
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_23 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

