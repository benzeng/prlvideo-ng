
void FUN_10046b3f0(long param_1,uint param_2)

{
  QArrayData *pQVar1;
  double dVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),0));
    CProgressIndicator::showAnimationWidget
              (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),0));
    pQVar1 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressIndicator::setText(*(QString **)(*(long *)(param_1 + 0x68) + 0x68));
    if (*(int *)pQVar1 == -1) {
      return;
    }
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_10046b565;
  }
  dVar2 = (double)param_2 * DAT_100e14d10;
  if (DAT_100e150e8 <= dVar2) {
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_GB_of_disk_space_will_be_free_10226ec50);
    QString::arg(dVar2,&local_28,&local_30,0,0x66,1,0x20);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10046b515;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  else {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  }
LAB_10046b515:
  CProgressIndicator::setText(*(QString **)(*(long *)(param_1 + 0x68) + 0x68));
  CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),0));
  CProgressIndicator::showAnimationWidget
            (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68),0));
  if (*(int *)local_28 == -1) {
    return;
  }
  pQVar1 = local_28;
  if (*(int *)local_28 != 0) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + -1;
    UNLOCK();
    if (*(int *)local_28 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_10046b565:
  QArrayData::deallocate(pQVar1,2,8);
  return;
}

