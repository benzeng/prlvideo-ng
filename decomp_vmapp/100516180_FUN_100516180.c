
undefined8 FUN_100516180(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSData_100bedb08,PTR_s_dataWithBytes_length__100bed220,
                     pQVar1 + *(long *)(pQVar1 + 0x10),(long)*(int *)(pQVar1 + 4));
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_100ba25f0)(uVar2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
  return uVar2;
}

