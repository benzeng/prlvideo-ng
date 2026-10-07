
void FUN_1001338f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011c900(param_1,0,param_6);
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_100bab0c0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_shared_item_id",0x12);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10013397b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10013397b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_shared_item_source",0x16);
  local_48 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001339cd;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001339cd:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("srv_shared_item_data",0x14);
  local_50 = pQVar1;
  FUN_10011da30(param_1,param_5,&local_50);
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

