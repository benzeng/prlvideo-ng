
void FUN_100853bb0(undefined8 param_1,int param_2,uint param_3,undefined8 *param_4)

{
  QString *this;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if ((param_2 == 1) && (param_3 < 6)) {
    this = (QString *)*param_4;
    switch(param_3) {
    case 0:
      FUN_10072c9e0(&local_28,param_1);
      QString::operator=(this,&local_28);
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
        local_19 = 0;
      }
      break;
    case 1:
      FUN_10072ca10(&local_30,param_1);
      QString::operator=(this,&local_30);
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
        local_19 = 0;
      }
      break;
    case 2:
      FUN_10072ca40(&local_38,param_1);
      QString::operator=(this,&local_38);
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
        local_19 = 0;
      }
      break;
    case 3:
      FUN_10072ca70(&local_40,param_1);
      QString::operator=(this,&local_40);
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
        local_19 = 0;
      }
      break;
    case 4:
      FUN_10072caa0(&local_48,param_1);
      QString::operator=(this,&local_48);
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
        local_19 = 0;
      }
      break;
    case 5:
      FUN_10072cad0(&local_50,param_1);
      QString::operator=(this,&local_50);
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
        local_19 = 0;
      }
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return;
}

