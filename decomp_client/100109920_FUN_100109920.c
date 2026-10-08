
QString * FUN_100109920(QString *param_1,undefined8 *param_2)

{
  int iVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  uint uVar3;
  int iVar4;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar2 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
    pQVar2 = param_1->field0_0x0;
  }
  iVar4 = *(int *)(pQVar2 + 4);
  iVar1 = QString::indexOf(param_1,0x2d,0,1);
  if ((iVar4 == 0x1e) && (iVar1 == -1)) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    iVar4 = 0;
    do {
      QString::mid((int)&local_50,(int)param_1);
      local_48 = local_50;
      if (1 < *(uint *)local_50 + 1) {
        LOCK();
        *(uint *)local_50 = *(uint *)local_50 + 1;
        local_31 = *(uint *)local_50 != 0;
        UNLOCK();
      }
      uVar3 = *(uint *)(local_50 + 4);
      if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < uVar3 + 2)) {
        QString::reallocData((uint)&local_48,SUB41(uVar3 + 2,0));
        uVar3 = *(uint *)(local_48 + 4);
      }
      *(uint *)(local_48 + 4) = uVar3 + 1;
      *(undefined2 *)(local_48 + (long)(int)uVar3 * 2 + *(long *)(local_48 + 0x10)) = 0x2d;
      *(undefined2 *)
       (local_48 + (long)(int)*(uint *)(local_48 + 4) * 2 + *(long *)(local_48 + 0x10)) = 0;
      QString::append(&local_40);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100109a4b;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100109a4b:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100109a7b;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100109a7b:
      iVar4 = iVar4 + 6;
    } while (iVar4 < 0x1e);
    QString::chop((int)&local_40);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return param_1;
}

