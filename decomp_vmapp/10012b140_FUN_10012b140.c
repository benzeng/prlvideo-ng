
void FUN_10012b140(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10011fac0(param_1,0x83b,param_4,0,0);
  *param_1 = &PTR_FUN_100baacd8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("perfstats_action",0x10);
  local_38 = pQVar1;
  FUN_10011cae0(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012b1c9;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012b1c9:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("perfstats_filter",0x10);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
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

