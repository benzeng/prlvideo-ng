
QString * FUN_1007b0730(QString *param_1,long param_2)

{
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_2 + 0x118) == 0) || (*(int *)(*(long *)(param_2 + 0x118) + 4) == 0)) ||
     (*(long *)(param_2 + 0x120) == 0)) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(&local_28);
    QString::fromUtf8_helper((char *)param_1,0x1e17cbb);
    QString::append(param_1);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return param_1;
}

