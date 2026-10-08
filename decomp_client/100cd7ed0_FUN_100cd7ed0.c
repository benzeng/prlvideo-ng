
void FUN_100cd7ed0(undefined8 param_1,long param_2)

{
  undefined8 in_R9;
  QArrayData *local_d0;
  QString local_c8;
  char local_ba;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_ba = '\0';
  local_d0 = *(QArrayData **)(param_2 + 0x60);
  if (1 < *(int *)local_d0 + 1U) {
    LOCK();
    *(int *)local_d0 = *(int *)local_d0 + 1;
    local_b9 = *(int *)local_d0 != 0;
    UNLOCK();
  }
  FUN_100cd7c70(&local_c8,&local_d0,&local_ba);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_b9 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100cd7f5b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100cd7f5b:
  if (local_ba != '\0') {
    QString::operator=((QString *)(param_2 + 0x60),&local_c8);
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","hid",2,"Keyboard layout was changed");
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    QMetaObject::invokeMethod
              (param_2,"onKeyboardInputSourceChanged",0,0,0,in_R9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
               0,0,0);
  }
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_c8.field0_0x0 != 0) {
        return;
      }
      local_b9 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
  return;
}

