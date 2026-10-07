
void FUN_10000bb40(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_100ba7a30;
  param_1[1] = PTR_shared_null_100ba20d8;
  FUN_10049d410(param_1 + 2,param_1);
  param_1[7] = PTR_shared_null_100ba2188;
  param_1[8] = param_1 + 8;
  param_1[9] = param_1 + 8;
  param_1[10] = 0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Remove Office",0xd);
  local_40 = pQVar1;
  FUN_10000c490(param_1 + 7,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000bbed;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10000bbed:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Adobe Flash Player Install Manager",0x22);
  local_48 = pQVar1;
  FUN_10000c490(param_1 + 7,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

