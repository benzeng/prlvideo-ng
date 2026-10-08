
undefined8 * FUN_100ce04d0(undefined8 *param_1,int param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_38;
  undefined1 local_2c;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_2 == 1) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("hdd",3);
    local_38 = pQVar1;
    FUN_1000341d0(param_1,&local_38);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_2c = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_2c) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return param_1;
}

