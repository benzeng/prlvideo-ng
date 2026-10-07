
void FUN_100123c00(undefined8 *param_1)

{
  QArrayData *pQVar1;
  undefined8 in_R8;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_100123a30();
  *param_1 = &PTR_FUN_100baab70;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_cmd_second_str_param",0x17);
  local_30 = pQVar1;
  FUN_10011da30(param_1,in_R8,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

