
void FUN_100085050(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  _func_void_Node_ptr *p_Var8;
  undefined4 uVar9;
  QArrayData *local_50;
  _func_void_Node_ptr *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_vmUuid_102269b10);
  if (puVar2 == (undefined *)0x0) {
    local_40 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_40,(ID)puVar2,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  lVar5 = FUN_10007f750(uVar7,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008510c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10008510c:
  if ((lVar5 == 0) || (lVar6 = FUN_10008b940(lVar5), lVar6 == 0)) goto LAB_1000851f0;
  uVar7 = FUN_1006915d0();
  FUN_100084410(&local_48);
  uVar9 = 0;
  if ((*(int *)(local_48 + 0x14) != 0) && (uVar9 = 0, *(uint *)(local_48 + 0x20) != 0)) {
    uVar9 = 0;
    for (p_Var8 = *(_func_void_Node_ptr **)
                   (*(long *)(local_48 + 8) +
                   ((ulong)(*(uint *)(local_48 + 0x24) ^ param_2) %
                   (ulong)*(uint *)(local_48 + 0x20)) * 8); p_Var8 != local_48;
        p_Var8 = *(_func_void_Node_ptr **)p_Var8) {
      if ((*(uint *)(p_Var8 + 8) == (*(uint *)(local_48 + 0x24) ^ param_2)) &&
         (*(uint *)(p_Var8 + 0xc) == param_2)) {
        if (p_Var8 != local_48) {
          uVar9 = *(undefined4 *)(p_Var8 + 0x10);
        }
        break;
      }
    }
  }
  uVar4 = FUN_10008b940(lVar5);
  lVar5 = FUN_100691620(uVar7,uVar9,uVar4);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000851d0;
    }
    QHashData::free_helper(local_48);
  }
LAB_1000851d0:
  if (lVar5 != 0) {
    uVar3 = QAction::isEnabled();
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_setEnabled__102268dc8,uVar3);
  }
LAB_1000851f0:
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (param_2 == 1) {
    QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Install_Antivirus_1022707e0);
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar2,PTR_s_stringWithQString__102268d00,&local_50);
    (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_setTitle__102268ee8,uVar7);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  return;
}

