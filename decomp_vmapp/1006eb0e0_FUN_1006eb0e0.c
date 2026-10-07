
QString * FUN_1006eb0e0(QString *param_1,undefined8 *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  QArrayData *local_30;
  undefined1 local_24;
  undefined1 local_23;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (*(int *)(pQVar1 + 4) == 0) {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","!sBaseDir.isEmpty()",
                  "ParallelsDirs.cpp",0xab1,"getVmScriptsDir");
    pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
    if (*(int *)(pQVar1 + 4) == 0) {
      pQVar1 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
      param_1->field0_0x0 = pQVar1;
      return param_1;
    }
  }
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_24 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xae9979);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_23 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

