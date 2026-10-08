
void FUN_10083b3d0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  QString local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  if (param_2 == 10) {
    puVar2 = (undefined4 *)*param_4;
    plVar3 = (long *)param_4[1];
    pcVar4 = (code *)*plVar3;
    lVar6 = plVar3[1];
    if ((pcVar4 == FUN_10083b620) && (lVar6 == 0)) {
      *puVar2 = 0;
      pcVar4 = (code *)*plVar3;
      lVar6 = plVar3[1];
    }
    if ((pcVar4 == FUN_10083b680) && (lVar6 == 0)) {
      *puVar2 = 1;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) {
      this = (QString *)*param_4;
      FUN_1004de680(&local_58,param_1);
      QString::operator=(this,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          UNLOCK();
          local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58.field0_0x0 != 0);
          if (*(int *)local_58.field0_0x0 != 0) goto switchD_10083b4e3_default;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_4c = *(undefined4 *)param_4[1];
      local_50 = *(undefined4 *)param_4[2];
      local_38 = &local_50;
      iVar5 = 0;
      break;
    case 1:
      local_4c = *(undefined4 *)param_4[1];
      iVar5 = 1;
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010083b576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x210))(param_1);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00010083b5a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x218))
                (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                 (undefined4 *)param_4[2],*(code **)(*(long *)param_1 + 0x218));
      return;
    case 4:
      FUN_1004de660(param_1);
      return;
    default:
      goto switchD_10083b4e3_default;
    }
    local_40 = &local_4c;
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022187a0,iVar5,&local_48);
  }
switchD_10083b4e3_default:
  if (lVar1 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

