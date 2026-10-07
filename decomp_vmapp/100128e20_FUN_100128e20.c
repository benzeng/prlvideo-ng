
void FUN_100128e20(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10011c900(param_1,param_4 != 0,0);
  *(undefined4 *)(param_1 + 2) = 0x855;
  *param_1 = &PTR_FUN_100baac10;
  local_30 = (QArrayData *)QString::fromAscii_helper("usb_assoc_list",0xe);
  FUN_10011dbc0(param_1,param_2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100128eab;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100128eab:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("usb_assoc_list_ver",0x12);
  local_38 = pQVar1;
  FUN_10011cae0(param_1,param_3,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

