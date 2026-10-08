
void FUN_1008341b0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  QString *this;
  undefined4 uVar1;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 == 1) {
    this = (QString *)*param_4;
    if (param_3 == 2) {
      uVar1 = FUN_1003782a0(param_1);
      *(undefined4 *)&this->field0_0x0 = uVar1;
    }
    else {
      if (param_3 == 1) {
        FUN_100379810(&local_30,param_1);
        QString::operator=(this,&local_30);
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
          local_19 = 0;
        }
      }
      else {
        if (param_3 != 0) {
          return;
        }
        FUN_100378250(&local_28,param_1);
        QString::operator=(this,&local_28);
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
          local_19 = 0;
        }
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    FUN_10037a4d0(param_1,*(undefined1 *)param_4[1]);
    return;
  }
  return;
}

