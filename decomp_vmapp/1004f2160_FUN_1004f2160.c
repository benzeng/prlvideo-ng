
undefined8 * FUN_1004f2160(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::lastIndexOf(param_2,0x2f,0xffffffff,1);
  QString::mid((int)&local_30,(int)param_2);
  iVar1 = QString::lastIndexOf(&local_30,0x2e,0xffffffff,1);
  if (0 < iVar1) {
    QString::mid((int)param_1,(int)&local_30);
    QString::toUtf8_helper(&local_38);
    iVar1 = *(int *)(local_38.field0_0x0 + 4);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004f221a;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
    }
LAB_1004f221a:
    if (iVar1 == 4) goto LAB_1004f2257;
    pQVar2 = (QArrayData *)*param_1;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_21 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1004f224d;
        pQVar2 = (QArrayData *)*param_1;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1004f224d:
  *param_1 = PTR_shared_null_100ba20d0;
LAB_1004f2257:
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

