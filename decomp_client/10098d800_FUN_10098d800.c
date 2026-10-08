
QString * FUN_10098d800(QString *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::toUtf8();
  local_38 = (QArrayData *)puVar1;
  iVar2 = FUN_10098dac0(param_2,&local_30,&local_38,0);
  if (iVar2 == 0) {
    pQVar4 = local_38 + *(long *)(local_38 + 0x10);
    if ((pQVar4 != (QArrayData *)0x0) && (*(uint *)(local_38 + 4) != 0)) {
      lVar3 = 0;
      do {
        if (pQVar4[lVar3] == (QArrayData)0x0) break;
        lVar3 = lVar3 + 1;
      } while ((uint)lVar3 < *(uint *)(local_38 + 4));
      if ((int)lVar3 == -1) {
        _strlen((char *)pQVar4);
      }
    }
    QString::fromUtf8_helper((char *)&local_48,(int)pQVar4);
    QString::normalized(&local_40,&local_48,1,0);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10098d8e9;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_10098d8e9:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10098d919;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  else {
    FUN_10098dbc0(iVar2);
  }
LAB_10098d919:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10098d949;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10098d949:
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
    QArrayData::deallocate(local_30,1,8);
  }
  return param_1;
}

