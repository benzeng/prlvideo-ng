
void FUN_100133650(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011fac0(param_1,0x84a,param_3,0,param_4);
  *param_1 = &PTR_FUN_100bab098;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("problemreport_data",0x12);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_2,&local_30);
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

