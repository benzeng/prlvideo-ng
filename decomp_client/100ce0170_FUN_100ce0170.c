
undefined8 * FUN_100ce0170(undefined8 *param_1,undefined4 param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  switch(param_2) {
  case 1:
    pQVar1 = (QArrayData *)QString::fromAscii_helper("hdd",3);
    local_38 = pQVar1;
    FUN_1000341d0(param_1,&local_38);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 2:
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vhd",3);
    local_40 = pQVar1;
    FUN_1000341d0(param_1,&local_40);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 3:
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vmdk",4);
    local_48 = pQVar1;
    FUN_1000341d0(param_1,&local_48);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
    break;
  case 4:
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vdi",3);
    local_50 = pQVar1;
    FUN_1000341d0(param_1,&local_50);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return param_1;
}

