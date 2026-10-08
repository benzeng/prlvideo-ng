
void FUN_10085deb0(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  QString local_68;
  QString local_60;
  QString local_58;
  undefined1 local_49;
  void *local_48;
  undefined1 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 < 5) {
        switch(param_3) {
        case 0:
          FUN_100785050(param_1,*(undefined1 *)*param_4);
          return;
        case 1:
          FUN_1007851a0(param_1);
          return;
        case 2:
          FUN_100785220(param_1);
          return;
        case 3:
          FUN_100785070(param_1);
          return;
        case 4:
          FUN_1007852a0(param_1);
          return;
        }
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar5 = (code *)*plVar3;
      lVar7 = plVar3[1];
      if ((pcVar5 == FUN_10085e390) && (lVar7 == 0)) {
        *puVar2 = 0;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10085e3e0) && (lVar7 == 0)) {
        *puVar2 = 1;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10085e430) && (lVar7 == 0)) {
        *puVar2 = 2;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10085e480) && (lVar7 == 0)) {
        *puVar2 = 3;
        pcVar5 = (code *)*plVar3;
        lVar7 = plVar3[1];
      }
      if ((pcVar5 == FUN_10085e4e0) && (lVar7 == 0)) {
        *puVar2 = 4;
      }
    }
    goto switchD_10085def7_default;
  }
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      local_40 = (undefined1 *)param_4[1];
      iVar6 = 0;
      break;
    case 1:
      local_40 = (undefined1 *)param_4[1];
      iVar6 = 1;
      break;
    case 2:
      local_40 = (undefined1 *)param_4[1];
      iVar6 = 2;
      break;
    case 3:
      local_49 = *(undefined1 *)param_4[1];
      local_40 = &local_49;
      iVar6 = 3;
      break;
    case 4:
      local_49 = *(undefined1 *)param_4[1];
      local_40 = &local_49;
      iVar6 = 4;
      break;
    default:
      goto switchD_10085def7_default;
    }
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222ae50,iVar6,&local_48);
    goto switchD_10085def7_default;
  }
  if ((param_2 != 1) || (4 < param_3)) goto switchD_10085def7_default;
  this = (QString *)*param_4;
  switch(param_3) {
  case 0:
    uVar4 = FUN_100785160(param_1);
    goto LAB_10085e230;
  case 1:
    FUN_100785170(&local_58,param_1);
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 == -1) goto switchD_10085def7_default;
    local_68.field0_0x0 = local_58.field0_0x0;
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) goto switchD_10085def7_default;
    }
    break;
  case 2:
    FUN_1007851f0(&local_60,param_1);
    QString::operator=(this,&local_60);
    if (*(int *)local_60.field0_0x0 == -1) goto switchD_10085def7_default;
    local_68.field0_0x0 = local_60.field0_0x0;
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      bVar8 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar8);
joined_r0x00010085e26a:
      if (bVar8) goto switchD_10085def7_default;
    }
    break;
  case 3:
    uVar4 = FUN_1007852f0(param_1);
LAB_10085e230:
    *(undefined1 *)&this->field0_0x0 = uVar4;
    goto switchD_10085def7_default;
  case 4:
    FUN_100785270(&local_68,param_1);
    QString::operator=(this,&local_68);
    if (*(int *)local_68.field0_0x0 == -1) goto switchD_10085def7_default;
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      bVar8 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar8);
      goto joined_r0x00010085e26a;
    }
  }
  QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
switchD_10085def7_default:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

