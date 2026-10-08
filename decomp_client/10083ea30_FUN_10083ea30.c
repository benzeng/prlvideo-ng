
void FUN_10083ea30(QObject *param_1,undefined4 param_2,uint param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  QString *this;
  long lVar3;
  undefined4 uVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  undefined8 uVar6;
  bool bVar7;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  Data *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 *local_30;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar2;
  switch(param_2) {
  case 0:
    switch(param_3) {
    case 0:
      local_40 = *(undefined8 *)param_4[1];
      local_38 = (void *)0x0;
      local_30 = &local_40;
      QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10221df20,0,&local_38);
      break;
    case 1:
      FUN_1005aa820(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1005aa840(param_1,*(undefined8 *)param_4[1]);
      return;
    case 3:
      FUN_1005ac380(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1005acb40(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1005ab080(param_1,param_4[1]);
      return;
    case 6:
      FUN_1005ac350(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1005abbe0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      iVar1 = *(int *)param_4[1];
      uVar6 = 0;
      if (-1 < (long)iVar1) {
        lVar3 = *(long *)(param_1 + 0x38);
        uVar6 = 0;
        if (iVar1 < *(int *)(lVar3 + 0xc) - *(int *)(lVar3 + 8)) {
          uVar6 = *(undefined8 *)(lVar3 + 0x10 + ((long)*(int *)(lVar3 + 8) + (long)iVar1) * 8);
        }
      }
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = uVar6;
      }
      break;
    case 9:
      FUN_1005a8bf0(&local_48,param_1);
      if (*param_4 != 0) {
        FUN_1005e7a00(*param_4,&local_48);
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          local_38 = (void *)CONCAT71(local_38._1_7_,*(int *)local_48 != 0);
          if (*(int *)local_48 != 0) break;
        }
        QListData::dispose(local_48);
      }
    }
    break;
  case 1:
    if (5 < param_3) break;
    this = (QString *)*param_4;
    switch(param_3) {
    case 0:
      this->field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x40);
      goto switchD_10083ea6a_caseD_3;
    case 1:
      pQVar5 = (QTypedArrayData<unsigned_short> *)FUN_1005ab060(param_1);
      this->field0_0x0 = pQVar5;
      goto switchD_10083ea6a_caseD_3;
    case 2:
      FUN_1005a9ed0(&local_50,param_1);
      QString::operator=(this,&local_50);
      if (*(int *)local_50.field0_0x0 == -1) goto switchD_10083ea6a_caseD_3;
      local_68.field0_0x0 = local_50.field0_0x0;
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        bVar7 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
joined_r0x00010083ec15:
        if (bVar7) goto switchD_10083ea6a_caseD_3;
      }
      break;
    case 3:
      FUN_1005aa1e0(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 == -1) goto switchD_10083ea6a_caseD_3;
      local_68.field0_0x0 = local_58.field0_0x0;
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        bVar7 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
        goto joined_r0x00010083ec15;
      }
      break;
    case 4:
      FUN_1005a9e10(&local_60,param_1);
      QString::operator=(this,&local_60);
      if (*(int *)local_60.field0_0x0 == -1) goto switchD_10083ea6a_caseD_3;
      local_68.field0_0x0 = local_60.field0_0x0;
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        bVar7 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
joined_r0x00010083eca2:
        if (bVar7) goto switchD_10083ea6a_caseD_3;
      }
      break;
    case 5:
      FUN_1005aa500(&local_68,param_1);
      QString::operator=(this,&local_68);
      if (*(int *)local_68.field0_0x0 == -1) goto switchD_10083ea6a_caseD_3;
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        bVar7 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        local_38 = (void *)CONCAT71(local_38._1_7_,bVar7);
        goto joined_r0x00010083eca2;
      }
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    break;
  case 2:
    if (param_3 == 0) {
      FUN_1005a8a40(param_1,*(undefined8 *)*param_4);
      return;
    }
    break;
  case 10:
    if ((*(code **)param_4[1] == FUN_10083efe0) && (((long *)param_4[1])[1] == 0)) {
      *(undefined4 *)*param_4 = 0;
    }
    break;
  case 0xb:
    if (param_3 == 0) goto LAB_10083eb68;
    if (param_3 != 1) goto LAB_10083eb5d;
    uVar4 = FUN_10083f2e0();
    goto LAB_10083eb6d;
  case 0xc:
    if ((param_3 != 0) || (*(int *)param_4[1] != 0)) {
LAB_10083eb5d:
      *(undefined4 *)*param_4 = 0xffffffff;
      break;
    }
LAB_10083eb68:
    uVar4 = FUN_10083f160();
LAB_10083eb6d:
    *(undefined4 *)*param_4 = uVar4;
  }
switchD_10083ea6a_caseD_3:
  if (lVar2 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

