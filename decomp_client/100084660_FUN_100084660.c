
void FUN_100084660(long param_1,uint param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  _func_void_Node_ptr *p_Var9;
  undefined4 uVar10;
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
  lVar8 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
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
      if ((bool)local_31) goto LAB_10008471c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10008471c:
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_10008b940(lVar5);
  if (lVar6 == 0) {
    return;
  }
  if (param_2 == 3) {
    uVar7 = FUN_10008b940(lVar5);
    iVar3 = FUN_10018a9d0(uVar7);
    puVar2 = PTR__objc_msgSend_1021e1c68;
    if (iVar3 == 0x30000004) {
      uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (*(undefined8 *)(lVar8 + 0x18),PTR_s_vmList_102269ef0);
      lVar8 = (*(code *)puVar2)(uVar7,PTR_s_vmOpenHandler_102269f88);
      (**(code **)(lVar8 + 0x10))(lVar8,param_3);
      return;
    }
  }
  else if (param_2 != 2) {
    uVar7 = FUN_1006915d0();
    FUN_100084410(&local_48);
    uVar10 = 0;
    if ((*(int *)(local_48 + 0x14) != 0) && (uVar10 = 0, *(uint *)(local_48 + 0x20) != 0)) {
      uVar10 = 0;
      for (p_Var9 = *(_func_void_Node_ptr **)
                     (*(long *)(local_48 + 8) +
                     ((ulong)(*(uint *)(local_48 + 0x24) ^ param_2) %
                     (ulong)*(uint *)(local_48 + 0x20)) * 8); p_Var9 != local_48;
          p_Var9 = *(_func_void_Node_ptr **)p_Var9) {
        if ((*(uint *)(p_Var9 + 8) == (*(uint *)(local_48 + 0x24) ^ param_2)) &&
           (*(uint *)(p_Var9 + 0xc) == param_2)) {
          if (p_Var9 != local_48) {
            uVar10 = *(undefined4 *)(p_Var9 + 0x10);
          }
          break;
        }
      }
    }
    uVar4 = FUN_10008b940(lVar5);
    lVar8 = FUN_100691620(uVar7,uVar10,uVar4);
    if (*(int *)(local_48 + 0x10) != -1) {
      if (*(int *)(local_48 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_48 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100084831;
      }
      QHashData::free_helper(local_48);
    }
LAB_100084831:
    if (lVar8 == 0) {
      return;
    }
    QAction::activate(lVar8,0);
    return;
  }
  FUN_10008bae0(lVar5);
  return;
}

