
void FUN_10011fac0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_10011c900(param_1,param_4,param_5);
  *(undefined4 *)(param_1 + 2) = param_2;
  *param_1 = &PTR_FUN_100baaad0;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("basic_vm_cmd_vm_uuid",0x14);
  local_30 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_30);
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

