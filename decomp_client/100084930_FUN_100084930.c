
void FUN_100084930(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *self;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  _func_void_Node_ptr *p_Var5;
  undefined8 uVar6;
  undefined4 uVar7;
  _func_void_Node_ptr *local_90;
  _func_void_Node_ptr *local_88;
  undefined **local_80 [3];
  int *local_68;
  QHostAddress local_58 [8];
  QString local_50;
  QHostAddress local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_vmUuid_102269b10);
  if (self == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)self,PTR_s_QStringWithString__1022696d0,uVar2);
  }
  lVar3 = FUN_10007f750(uVar6,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000849ec;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000849ec:
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_10008b940(lVar3);
  if (lVar4 == 0) {
    return;
  }
  if ((param_2 & 0xfffffffe) != 8) {
    uVar6 = FUN_1006915d0();
    FUN_100084410(&local_90);
    uVar7 = 0;
    if ((*(int *)(local_90 + 0x14) != 0) && (uVar7 = 0, *(uint *)(local_90 + 0x20) != 0)) {
      uVar7 = 0;
      for (p_Var5 = *(_func_void_Node_ptr **)
                     (*(long *)(local_90 + 8) +
                     ((ulong)(*(uint *)(local_90 + 0x24) ^ param_2) %
                     (ulong)*(uint *)(local_90 + 0x20)) * 8); p_Var5 != local_90;
          p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
        if ((*(uint *)(p_Var5 + 8) == (*(uint *)(local_90 + 0x24) ^ param_2)) &&
           (*(uint *)(p_Var5 + 0xc) == param_2)) {
          if (p_Var5 != local_90) {
            uVar7 = *(undefined4 *)(p_Var5 + 0x10);
          }
          break;
        }
      }
    }
    uVar2 = FUN_10008b940(lVar3);
    lVar3 = FUN_100691620(uVar6,uVar7,uVar2);
    if (*(int *)(local_90 + 0x10) != -1) {
      if (*(int *)(local_90 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_90 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100084adf;
      }
      QHashData::free_helper(local_90);
    }
LAB_100084adf:
    if (lVar3 == 0) {
      return;
    }
    QAction::activate(lVar3,0);
    return;
  }
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_50,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,param_4);
  }
  QHostAddress::QHostAddress(local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100084b3c;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100084b3c:
  FUN_100084410(&local_88);
  uVar7 = 0;
  if ((*(int *)(local_88 + 0x14) != 0) && (uVar7 = 0, *(uint *)(local_88 + 0x20) != 0)) {
    uVar7 = 0;
    for (p_Var5 = *(_func_void_Node_ptr **)
                   (*(long *)(local_88 + 8) +
                   ((ulong)(*(uint *)(local_88 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_88 + 0x20)) * 8); p_Var5 != local_88;
        p_Var5 = *(_func_void_Node_ptr **)p_Var5) {
      if ((*(uint *)(p_Var5 + 8) == (*(uint *)(local_88 + 0x24) ^ param_2)) &&
         (*(uint *)(p_Var5 + 0xc) == param_2)) {
        if (p_Var5 != local_88) {
          uVar7 = *(undefined4 *)(p_Var5 + 0x10);
        }
        break;
      }
    }
  }
  uVar6 = FUN_10008b940(lVar3);
  FUN_1006b3be0(local_80,uVar7,uVar6,local_48,0);
  if (*(int *)(local_88 + 0x10) != -1) {
    if (*(int *)(local_88 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100084be4;
    }
    QHashData::free_helper(local_88);
  }
LAB_100084be4:
  QAction::activate(local_80,0);
  local_80[0] = &PTR_FUN_102225590;
  QHostAddress::~QHostAddress(local_58);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    local_31 = *local_68 != 0;
    UNLOCK();
    if ((!(bool)local_31) && (local_68 != (int *)0x0)) {
      operator_delete(local_68);
    }
  }
  QAction::~QAction((QAction *)local_80);
  QHostAddress::~QHostAddress(local_48);
  return;
}

