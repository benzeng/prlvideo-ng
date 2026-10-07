
void FUN_1002f2b90(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  QString QVar4;
  QString QVar5;
  CVmEventParameter *pCVar6;
  long *plVar7;
  _Unwind_Exception *exception_object;
  undefined8 extraout_RAX;
  void *unaff_R14;
  long *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  CVmEventParameter *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QVar4.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       ___dynamic_cast(param_2,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
  if (QVar4.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
    QVar5.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         ___dynamic_cast(param_3,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    unaff_R14 = (void *)0x0;
    if (QVar5.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
      local_48 = *(undefined8 *)(*param_1 + 0xa5);
      local_40 = *(undefined8 *)(*param_1 + 0xad);
      FUN_1007d6a90(&local_58,&local_48);
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      if ((DAT_101117228 == 0) && (DAT_1011b9e68 != 0)) {
        FUN_1006b6dd0(&local_68,*param_1 + 0x1bc);
        QString::operator=(&local_60,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_49 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1002f2ce5;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
      else {
        CVmGenericNetworkAdapter::getMacAddress();
        QString::operator=(&local_60,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_49 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1002f2ce5;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
LAB_1002f2ce5:
      local_78 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
      }
      CVmGenericNetworkAdapter::setVMNetUuid(QVar4);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_49 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2d3a;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1002f2d3a:
      local_80 = (QArrayData *)local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_49 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      CVmGenericNetworkAdapter::setMacAddress(QVar4);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_49 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2d8f;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1002f2d8f:
      local_88 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_49 = *(int *)local_58 != 0;
        UNLOCK();
      }
      CVmGenericNetworkAdapter::setVMNetUuid(QVar5);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_49 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2de4;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1002f2de4:
      local_90 = (QArrayData *)local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_49 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      CVmGenericNetworkAdapter::setMacAddress(QVar5);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_49 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2e45;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1002f2e45:
      local_a8 = (undefined8 *)0x0;
      puStack_a0 = (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      pCVar6 = operator_new(0xd0);
      CBaseNode::toString(SUB81(&local_b8,0),(bool)((char)QVar4.field0_0x0 + '\x10'));
      local_c0 = (QArrayData *)QString::fromAscii_helper("vmcfg_vm_net_applevisor_vmnet",0x1d);
      CVmEventParameter::CVmEventParameter(pCVar6,1,&local_b8);
      local_b0 = pCVar6;
      if (puStack_a0 == local_98) {
        FUN_10002da50(&local_a8,&local_b0);
      }
      else {
        *puStack_a0 = pCVar6;
        puStack_a0 = puStack_a0 + 1;
      }
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_49 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2f26;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1002f2f26:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_49 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f2f5c;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1002f2f5c:
      uVar3 = DAT_1011c3650;
      plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
      local_c8 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        *(undefined4 *)(plVar7 + 1) = 1;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_100bef0d0;
        local_c8 = plVar7;
      }
      FUN_100063770(uVar3,0x186bc,0,&local_a8,0xbbb,&local_c8);
      if (local_c8 != (long *)0x0) {
        LOCK();
        plVar7 = local_c8 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_c8 + 0x10))();
        }
      }
      if (local_a8 != (undefined8 *)0x0) {
        if (puStack_a0 != local_a8) {
          puStack_a0 = (undefined8 *)
                       ((~((long)puStack_a0 + (-8 - (long)local_a8)) & 0xfffffffffffffff8U) +
                       (long)puStack_a0);
        }
        operator_delete(local_a8);
      }
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_49 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f304d;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1002f304d:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_49 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002f307d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_1002f307d:
      if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  }
  exception_object = (_Unwind_Exception *)___cxa_bad_cast();
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_49 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002f30e4;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1002f30e4:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_49 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002f311a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002f311a:
  if ((char)param_3 != '\0') {
    operator_delete(unaff_R14);
  }
  if (local_a8 != (undefined8 *)0x0) {
    if (puStack_a0 != local_a8) {
      puStack_a0 = (undefined8 *)
                   ((~((long)puStack_a0 + (-8 - (long)local_a8)) & 0xfffffffffffffff8U) +
                   (long)puStack_a0);
    }
    operator_delete(local_a8);
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_49 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002f335a;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1002f335a:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1002f338a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002f338a:
  __Unwind_Resume(exception_object);
                    /* WARNING: Subroutine does not return */
  FUN_10000c540(extraout_RAX);
}

