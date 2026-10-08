
void FUN_1000809e0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    puVar1 = *(undefined8 **)(param_4 + 8);
    local_38 = (QArrayData *)*puVar1;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
    }
    local_30 = (QArrayData *)puVar1[1];
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
    }
    FUN_10007fde0(param_1,&local_38);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100080a84;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100080a84:
    if (*(int *)local_38 == -1) {
      return;
    }
    pQVar5 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 1:
    puVar1 = *(undefined8 **)(param_4 + 8);
    local_48 = (QArrayData *)*puVar1;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
    }
    local_40 = (QArrayData *)puVar1[1];
    if (1 < *(int *)local_40 + 1U) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
    }
    FUN_10007ffa0(param_1,&local_48);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100080b27;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100080b27:
    if (*(int *)local_48 == -1) {
      return;
    }
    pQVar5 = local_48;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    break;
  case 2:
    uVar4 = *(undefined8 *)(param_4 + 8);
    pvVar3 = operator_new(0x18);
    FUN_10008b700(pvVar3,uVar4);
    FUN_10007f510(param_1,pvVar3);
    return;
  case 3:
    FUN_100080310(param_1,*(undefined8 *)(param_4 + 8));
    return;
  case 4:
    FUN_10007fef0(param_1,**(undefined4 **)(param_4 + 8));
    return;
  case 5:
    uVar4 = FUN_10007f750(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_4 + 8));
    FUN_10007f620(param_1,uVar4);
    return;
  case 6:
    iVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x18),PTR_s_sortOrder_102269f30);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100080c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_1021e1c68)(*(undefined8 *)(param_1 + 0x18),PTR_s_sort_102269f50);
      return;
    }
  default:
    goto switchD_100080a11_default;
  }
  QArrayData::deallocate(pQVar5,2,8);
switchD_100080a11_default:
  return;
}

