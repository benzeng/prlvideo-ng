
undefined4 FUN_100581ab0(undefined8 param_1,long param_2)

{
  QArrayData *pQVar1;
  undefined4 uVar2;
  long *plVar3;
  QArrayData *local_38;
  QString local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_28 = 0;
  local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x18);
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  plVar3 = (long *)FUN_100684400((undefined8 *)(param_2 + 0x18),0x4003,
                                 *(undefined4 *)(param_2 + 0x10),&local_28,0);
  if (plVar3 != (long *)0x0) {
    local_28 = (**(code **)(*plVar3 + 0xd8))(plVar3,&local_30,FUN_100581d40,param_2);
    (**(code **)(*plVar3 + 0x28))(plVar3);
    (**(code **)(*plVar3 + 0x20))(plVar3);
    goto LAB_100581c03;
  }
  pQVar1 = *(QArrayData **)(param_2 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_21 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Error opening image %s with code 0x%x",
                local_38 + *(long *)(local_38 + 0x10),local_28);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100581bd3;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100581bd3:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100581c03;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100581c03:
  uVar2 = local_28;
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return local_28;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar2;
}

