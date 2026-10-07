
void FUN_100123a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011fac0();
  *param_1 = &PTR_FUN_100baab48;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("proto_first_str_param",0x15);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_4,&local_30);
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

