
QString * FUN_100753ca0(QString *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  bool bVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_3 + 4) != 0) {
    lVar2 = 0;
    do {
      bVar4 = (int)lVar2 == 0;
      if (bVar4) {
        local_40 = (QArrayData *)QString::fromAscii_helper("",0);
      }
      else {
        local_48 = (QArrayData *)QString::fromAscii_helper(" (%1)",5);
        QString::arg(&local_40,&local_48,lVar2,0,10,0x20);
      }
      pQVar3 = (QTypedArrayData<unsigned_short> *)*param_3;
      param_1->field0_0x0 = pQVar3;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      QString::append(param_1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100753d79;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100753d79:
      if ((!bVar4) && (*(int *)local_48 != -1)) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100753db0;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100753db0:
      lVar1 = FUN_1007537f0(param_2);
      if (lVar1 == 0) {
        return param_1;
      }
      pQVar3 = param_1->field0_0x0;
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100753df0;
          pQVar3 = param_1->field0_0x0;
        }
        QArrayData::deallocate((QArrayData *)pQVar3,2,8);
      }
LAB_100753df0:
      lVar2 = lVar2 + 1;
    } while (lVar2 < 10000);
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  return param_1;
}

