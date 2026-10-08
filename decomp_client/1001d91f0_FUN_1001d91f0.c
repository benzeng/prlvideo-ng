
void FUN_1001d91f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if (param_3 != 1) goto LAB_1001d9401;
  local_20.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper
                 ("tell application \"System Preferences\"\nset the current pane to pane id \"com.apple.preference.security\"\ntell pane id \"com.apple.preference.security\" to reveal anchor \"General\"\n"
                  ,0xae);
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    local_40 = (QArrayData *)QString::fromAscii_helper("try\n%1activate\nend tell\nend try\n",0x20);
    QString::arg(&local_38,&local_40,&local_20,0,0x20);
    QString::operator=(&local_20,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_11 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001d933c;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1001d933c:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_11 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001d936c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  else {
    local_30 = (QArrayData *)QString::fromAscii_helper("%1end tell\n",0xb);
    QString::arg(&local_28,&local_30,&local_20,0,0x20);
    QString::operator=(&local_20,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_11 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001d9294;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
LAB_1001d9294:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_11 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001d936c;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1001d936c:
  FUN_100d700c0(&local_20);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    local_48.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("com.apple.systempreferences",0x1b);
    MacUtils::activateApplication(&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_11 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001d93d1;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1001d93d1:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001d9401;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_1001d9401:
  FUN_100df99c0("[AppController]","prl_client_app",0,"(!)Error: login failed.");
  uVar2 = FUN_1001d50a0();
  FUN_1001d51e0(uVar2,0x80000249,1,0xffff);
  return;
}

