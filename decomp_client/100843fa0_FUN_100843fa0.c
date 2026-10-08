
void FUN_100843fa0(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  QString *this;
  undefined1 uVar1;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 != 1) {
    return;
  }
  if (8 < param_3) {
    return;
  }
  this = (QString *)*param_4;
  switch(param_3) {
  case 0:
    FUN_1005fdd20(&local_28,param_1);
    QString::operator=(this,&local_28);
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 1:
    FUN_1005fde70(&local_30,param_1);
    QString::operator=(this,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 2:
    FUN_1005fe020(&local_38,param_1);
    QString::operator=(this,&local_38);
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_38.field0_0x0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 3:
    FUN_1005fe1a0(&local_40,param_1);
    QString::operator=(this,&local_40);
    if (*(int *)local_40.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_40.field0_0x0;
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 4:
    FUN_1005fe2b0(&local_48,param_1);
    QString::operator=(this,&local_48);
    if (*(int *)local_48.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_48.field0_0x0;
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 5:
    uVar1 = *(undefined1 *)(param_1 + 0x88);
    goto LAB_1008441ed;
  case 6:
    FUN_1005fe400(&local_50,param_1);
    QString::operator=(this,&local_50);
    if (*(int *)local_50.field0_0x0 == -1) {
      return;
    }
    local_58.field0_0x0 = local_50.field0_0x0;
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 7:
    FUN_1005fde90(&local_58,param_1);
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    break;
  case 8:
    uVar1 = FUN_1006005b0(param_1);
LAB_1008441ed:
    *(undefined1 *)&this->field0_0x0 = uVar1;
    return;
  }
  QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  return;
}

