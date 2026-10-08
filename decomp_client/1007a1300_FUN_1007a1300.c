
QString * FUN_1007a1300(QString *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [39];
  undefined1 local_21;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar1 = FUN_1007b56d0(param_2);
  if (lVar1 == 0) {
    return param_1;
  }
  FUN_100d3d190(local_48);
  uVar2 = FUN_1007b56d0(param_2);
  FUN_100190650(&local_50,uVar2);
  FUN_1007b5520(&local_58,param_2);
  FUN_100d3e290(local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007a1398;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007a1398:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007a13c8;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007a13c8:
  puVar3 = (undefined8 *)FUN_100d3d800(local_48);
  if (puVar3 != (undefined8 *)0x0) {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*puVar3;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1007a142a;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
LAB_1007a142a:
  FUN_100d3d7f0(local_48);
  return param_1;
}

