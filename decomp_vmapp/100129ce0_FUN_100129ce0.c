
void FUN_100129ce0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011eed0(param_1,0x838,param_2,0,0);
  *param_1 = &PTR_FUN_100baac60;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_cfg_section",0xe);
  local_30 = pQVar1;
  FUN_10011cae0(param_1,param_3,&local_30);
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

