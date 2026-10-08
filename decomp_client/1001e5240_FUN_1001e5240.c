
undefined4 FUN_1001e5240(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_d8 [68];
  uint local_94;
  undefined1 local_88 [68];
  uint local_44;
  QString local_38;
  undefined1 local_29;
  
  MacUtils::getBundlePath();
  cVar1 = MacUtils::canRunFromLocation(&local_38);
  uVar2 = 0x80015384;
  if (cVar1 != '\0') {
    FUN_1001cda40(local_88,DAT_102310918);
    uVar2 = 0x80015384;
    if ((local_44 & 0x40) == 0) {
      uVar2 = 0;
    }
    FUN_1001091d0(local_88);
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e52cf;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001e52cf:
  FUN_1001cda40(local_d8,DAT_102310918);
  FUN_1001091d0(local_d8);
  if ((local_94 & 0x40) != 0) {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,"SBA Upgrade mode");
  }
  FUN_1001e50a0(param_1,4,uVar2);
  return uVar2;
}

