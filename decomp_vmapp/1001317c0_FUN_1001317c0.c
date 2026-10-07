
void FUN_1001317c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0(param_1,0x853,param_2,0);
  *param_1 = &PTR_FUN_100baafd0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("storage_cmd_key",0xf);
  local_38 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100131846;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100131846:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("storage_cmd_value",0x11);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

