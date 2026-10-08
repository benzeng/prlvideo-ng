
void FUN_10099c0f0(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData **ppQVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar8 = (uint)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  iVar2 = FUN_1009b7870(*(undefined8 *)(param_1 + 0x58));
  if (iVar2 == 0x8000000) {
    bVar5 = true;
    goto LAB_10099c64d;
  }
  uVar4 = FUN_100998580(param_1);
  if (iVar2 == 0x8b57009) {
    FUN_100998560(&local_38,param_1);
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s__1_cannot_find_the_files_necessa_10227e0d0);
    FUN_100998560(&local_50,param_1);
    QString::arg(&local_40,&local_48,&local_50,0,0x20);
    QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Make_sure_that_the_path_to_insta_10227e0d8);
    QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,(int)PTR_s_Yes_10227de98);
    QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)PTR_s_No_10227dea0);
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    ppQVar6 = &local_70;
    iVar2 = FUN_100a084e0(3,uVar4,&local_38,&local_40,&local_58,&local_60,&local_68,ppQVar6,
                          (ulong)uVar8 << 0x20);
    uVar7 = (undefined4)((ulong)ppQVar6 >> 0x20);
    bVar5 = iVar2 == 0;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c267;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10099c267:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c297;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10099c297:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c2c7;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10099c2c7:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c2f7;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10099c2f7:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c327;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10099c327:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c357;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10099c357:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c387;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10099c387:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        iVar2 = *(int *)local_38;
        UNLOCK();
joined_r0x00010099c5bf:
        local_29 = iVar2 != 0;
        if ((bool)local_29) goto LAB_10099c5d4;
      }
LAB_10099c5c5:
      QArrayData::deallocate(local_38,2,8);
    }
  }
  else {
    FUN_100998560(&local_78,param_1);
    QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_operating_system_could_not_b_10227e0e0);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_required_installation_files_c_10227e0e8);
    QMetaObject::tr((char *)&local_90,PTR_staticMetaObject_1021e1520,(int)PTR_s_Yes_10227de98);
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,(int)PTR_s_No_10227dea0);
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    ppQVar6 = &local_a0;
    iVar2 = FUN_100a084e0(3,uVar4,&local_78,&local_80,&local_88,&local_90,&local_98,ppQVar6,
                          (ulong)uVar8 << 0x20);
    uVar7 = (undefined4)((ulong)ppQVar6 >> 0x20);
    bVar5 = iVar2 == 0;
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c4d8;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_10099c4d8:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c50e;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10099c50e:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c544;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10099c544:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c574;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10099c574:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10099c5a4;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10099c5a4:
    if (*(int *)local_78 != -1) {
      local_38 = local_78;
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        iVar2 = *(int *)local_78;
        UNLOCK();
        goto joined_r0x00010099c5bf;
      }
      goto LAB_10099c5c5;
    }
  }
LAB_10099c5d4:
  pcVar1 = DAT_102310d40;
  if (bVar5) {
    lVar3 = FUN_1009983c0(param_1);
    iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x30),1);
    if (iVar2 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                    "PrlPTAMigration_SetMigrateAsData",
                    "(getPTLogic()->GetMigrationHandle(), PRL_TRUE)","Pages/WPInstallDisk.cpp",
                    CONCAT44(uVar7,0x105),"OnCopyTaskFinished");
    }
  }
  else {
    bVar5 = false;
  }
LAB_10099c64d:
  uVar4 = FUN_1009983a0(param_1);
  uVar4 = FUN_100990b30(uVar4);
  FUN_100997970(uVar4,0);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x48),0));
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x58),0));
  QAbstractButton::isChecked();
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x70),0));
  CProgressIndicator::hide();
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (bVar5) {
    FUN_1009990c0(param_1);
  }
  return;
}

