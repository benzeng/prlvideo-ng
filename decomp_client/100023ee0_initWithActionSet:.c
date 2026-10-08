
/* Function Stack Size: 0x18 bytes */

ID PDDeviceBarButtonItem::initWithActionSet_(ID param_1,SEL param_2,CDeviceActionSet *param_3)

{
  undefined8 uVar1;
  ID IVar2;
  objc_super local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_100152280();
  local_30 = *(QArrayData **)((long)&(param_3->field6_0x2a).field0_0x0 + 6);
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  uVar1 = FUN_1001548f0(uVar1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100023f50;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100023f50:
  local_40.super_class = (class_t *)PTR_PDDeviceBarButtonItem_10226ab78;
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,PTR_s_initWithVm__102268e40,uVar1);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)(IVar2,PTR_s_setActionSet__102268e78,param_3);
  }
  return IVar2;
}

