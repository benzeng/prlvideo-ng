
void FUN_100263240(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 in_R9;
  QMutex *pQVar6;
  long *plVar7;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  
  uVar2 = CVmDevice::getIndex();
  FUN_1002578b0(param_1,6,uVar2,0);
  plVar7 = param_1 + 0xd;
  FUN_10025ae40(plVar7,param_2);
  *param_1 = (long)&PTR_FUN_100baefd0;
  param_1[1] = (long)&PTR_metaObject_100baf058;
  param_1[0xd] = (long)&PTR_FUN_100baf0d0;
  uVar2 = CVmDevice::getIndex();
  *(undefined4 *)((long)param_1 + 0x8c) = uVar2;
  pQVar6 = (QMutex *)(param_1 + 0x14);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  QMutex::QMutex(pQVar6,1);
  FUN_1002699d0(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar2 = CVmDevice::getIndex();
  FUN_1008e3970("","LocalDevices",0,"[Parallel%d] Initializing",uVar2,in_R9,pQVar6,plVar7);
  iVar3 = CVmParallelPort::getPrinterInterfaceType();
  if (iVar3 == 0) {
    uVar1 = *(uint *)((long)param_1 + 0x8c);
    lVar4 = FUN_100257d80(param_1);
    lVar5 = (ulong)uVar1 * 0x1030;
    param_1[0x12] = lVar4 + 0x39e30 + lVar5;
    DAT_100bfae8d = DAT_100bfae8d | 1;
    DAT_100bfae74 = param_1;
    *(undefined4 *)(lVar4 + 0x3ae5c + lVar5) = 0;
    *(undefined1 *)(param_1 + 0x17) = 1;
    FUN_100257c20(param_1);
    iVar3 = CVmDevice::getConnected();
    if (iVar3 != 1) {
      return;
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar3 < 0) {
    FUN_10006a060(local_48);
    uVar2 = CVmDevice::getIndex();
    FUN_10006a860(local_48,uVar2,0);
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    local_58 = 0;
    FUN_1000648b0(DAT_1011c3650,iVar3,&local_68,local_48);
    if (local_68 != (void *)0x0) {
      if (pvStack_60 != local_68) {
        pvStack_60 = (void *)((~((long)pvStack_60 + (-4 - (long)local_68)) & 0xfffffffffffffffcU) +
                             (long)pvStack_60);
      }
      operator_delete(local_68);
    }
    FUN_10006a680(local_48);
  }
  return;
}

