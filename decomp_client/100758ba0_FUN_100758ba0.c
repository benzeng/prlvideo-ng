
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

QString * FUN_100758ba0(QString *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  uVar1 = FUN_100757f00(param_2);
  auVar3._8_4_ = (int)((ulong)uVar1 >> 0x20);
  auVar3._0_8_ = uVar1;
  auVar3._12_4_ = _UNK_100e11114;
  dVar2 = (double)CONCAT44(_DAT_100e11110,(int)uVar1) - _DAT_100e11120;
  dVar4 = auVar3._8_8_ - _UNK_100e11128;
  dVar5 = dVar2 + dVar4;
  dVar2 = (dVar2 + dVar4) * DAT_100e14d10 * DAT_100e14d10;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (dVar2 <= DAT_100e16cb0) {
    if (dVar2 <= DAT_100e150e8) {
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e14ee9);
      QString::arg(dVar2 * DAT_100e1e238,&local_48,&local_50,0,0x66,1,0x20,dVar2,dVar5);
      QString::operator=(param_1,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_19 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_100758e15;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100758e15:
      if (*(int *)local_50 == -1) {
        return param_1;
      }
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_50,2,8);
      return param_1;
    }
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e14ee3);
    QString::arg(dVar2,&local_38,&local_40,0,0x66,1,0x20,dVar2,dVar5);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100758d51;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_100758d51:
    if (*(int *)local_40 == -1) {
      return param_1;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
    return param_1;
  }
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1dc0ece);
  QString::arg(dVar2 * DAT_100e14d10,&local_28,&local_30,0,0x66,1,0x20,dVar2,dVar5);
  QString::operator=(param_1,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100758c82;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100758c82:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

