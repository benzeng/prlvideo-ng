
void FUN_1008403c0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_2 == 1) {
    if (param_3 != 0) {
      return;
    }
    puVar1 = (undefined8 *)*param_4;
    uVar4 = FUN_1005c1fc0(param_1);
    *puVar1 = uVar4;
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar2 = FUN_1005c1200(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 1:
    uVar2 = FUN_1005c1210(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 2:
    uVar2 = FUN_1005c1220(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 3:
    uVar2 = FUN_1005c1230(param_1,param_4[1]);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 4:
    uVar2 = FUN_1005c1380(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 5:
    uVar2 = FUN_1005c1390(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 6:
    uVar3 = FUN_1005c13a0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 7:
    FUN_1005c1400(&local_20,param_1,*(undefined4 *)param_4[1]);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_20);
    }
    if (*(int *)local_20.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_20.field0_0x0;
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 8:
    FUN_1005c14e0(&local_28,param_1,*(undefined4 *)param_4[1]);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_28);
    }
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 9:
    uVar3 = FUN_1005c15c0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar3;
    }
    break;
  case 10:
    FUN_1005c1610(&local_30,param_1,*(undefined4 *)param_4[1]);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_30);
    }
    if (*(int *)local_30.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 0xb:
    FUN_1005c17a0(&local_38,param_1,*(undefined4 *)param_4[1]);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_38);
    }
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_38.field0_0x0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 0xc:
    FUN_1005c1a20(&local_40,param_1,param_4[1]);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_40);
    }
    if (*(int *)local_40.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_40.field0_0x0;
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 0xd:
    uVar2 = FUN_1005c1f20(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0xe:
    uVar2 = FUN_1005c1f70(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0xf:
    uVar2 = FUN_1005c1f80(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0x10:
    uVar2 = FUN_1005c1f90(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0x11:
    uVar2 = FUN_1005c1fa0(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0x12:
    uVar2 = FUN_1005c1fb0(param_1);
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar2;
    }
    break;
  case 0x13:
    FUN_1005c1f30(&local_48,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_48);
    }
    if (*(int *)local_48.field0_0x0 == -1) {
      return;
    }
    local_50.field0_0x0 = local_48.field0_0x0;
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_1008407b5;
  case 0x14:
    FUN_1005c1f50(&local_50,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_50);
    }
    if (*(int *)local_50.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
LAB_1008407b5:
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

