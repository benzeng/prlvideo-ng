
undefined8 FUN_100515e90(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined *puVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_100bedb00;
  QString::toUtf8();
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (puVar2,PTR_s_stringWithUTF8String__100bed208,
                     local_28 + *(long *)(local_28 + 0x10));
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_100515f18;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100515f18:
  (*(code *)PTR__objc_release_100ba25f0)(uVar3);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return uVar3;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return uVar3;
}

