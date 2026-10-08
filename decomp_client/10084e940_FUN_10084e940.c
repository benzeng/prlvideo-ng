
void FUN_10084e940(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  QString local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar1 = FUN_1006ac440(param_1);
    break;
  case 1:
    uVar1 = FUN_1006ac510(param_1);
    break;
  case 2:
    uVar1 = FUN_1006ac550(param_1);
    break;
  case 3:
    FUN_1006ac570(&local_20,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_20);
    }
    if (*(int *)local_20.field0_0x0 == -1) {
      return;
    }
    local_30.field0_0x0 = local_20.field0_0x0;
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_10084ea6e;
  case 4:
    FUN_1006ac5c0(&local_28,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_28);
    }
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    local_30.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
    goto LAB_10084ea6e;
  case 5:
    FUN_1006ac670(&local_30,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_30);
    }
    if (*(int *)local_30.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_11 = 0;
    }
LAB_10084ea6e:
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    return;
  case 6:
    uVar1 = FUN_1006ac6c0(param_1);
    break;
  case 7:
    uVar1 = FUN_1006ac700(param_1);
    break;
  case 8:
    uVar1 = FUN_1006ac7d0(param_1);
    break;
  case 9:
    uVar1 = FUN_1006ac7f0(param_1);
    break;
  case 10:
    uVar1 = FUN_1006ac810(param_1);
    break;
  default:
    goto switchD_10084e970_default;
  }
  if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
    *(undefined1 *)*param_4 = uVar1;
  }
switchD_10084e970_default:
  return;
}

