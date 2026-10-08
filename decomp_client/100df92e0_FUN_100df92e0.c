
undefined8 FUN_100df92e0(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSData_10226a968,PTR_s_dataWithBytes_length__102269a90,
                     pQVar1 + *(long *)(pQVar1 + 0x10),(long)*(int *)(pQVar1 + 4));
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
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

