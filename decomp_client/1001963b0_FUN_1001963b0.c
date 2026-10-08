
undefined8 FUN_1001963b0(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Data_conflict local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  local_58 = (Data *)*param_2;
  if (*(int *)(local_58 + 0xc) == *(int *)(local_58 + 8)) {
    return 0;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar1 = *param_2;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  uVar8 = 0;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    uVar8 = 0;
    do {
      local_40 = 1;
      uVar2 = CVmClusteredDevice::getStackIndex();
      uVar3 = CVmClusteredDevice::getInterfaceType();
      uVar4 = SdkUtils::getHddOffsetMask(uVar2,uVar3);
      uVar8 = uVar4 | uVar8;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001964d7;
    }
    QListData::dispose(local_58);
  }
LAB_1001964d7:
  uVar5 = _PrlVm_ConvertDisks(*(undefined8 *)(param_1 + 0x40),uVar8,param_3);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  uVar5 = FUN_100191960(param_1,uVar5,0x422,&local_68);
  QVariant::~QVariant((QVariant *)&local_68);
  return uVar5;
}

