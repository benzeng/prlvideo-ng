
bool FUN_100120220(undefined8 param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("create_image_cmd_recreate_sign",0x1e);
  local_30 = pQVar2;
  iVar1 = FUN_10011d510(param_1,&local_30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_22 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100120284;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100120284:
  return iVar1 != 0;
}

