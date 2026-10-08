
void FUN_10006ac60(QObject *param_1,char param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  QObject *local_38;
  int *local_30;
  QObject *local_28;
  undefined1 local_19;
  
  if (param_2 == '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_removeMonitor__102269878,
               *(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else if (*(long *)(param_1 + 0x50) == 0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    puVar1 = PTR__OBJC_CLASS___NSEvent_10226a8b0;
    local_58 = PTR___NSConcreteStackBlock_1021e1280;
    local_50 = 0xc6000000;
    local_4c = 0;
    local_48 = FUN_10006adb0;
    local_40 = &DAT_1021ed7e0;
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_19 = *piVar2 != 0;
      UNLOCK();
    }
    local_38 = param_1;
    local_30 = piVar2;
    local_28 = param_1;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (puVar1,PTR_s_addLocalMonitorForEventsMatching_102269860,0x3de,&local_58);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    if (local_30 != (int *)0x0) {
      LOCK();
      *local_30 = *local_30 + -1;
      local_19 = *local_30 != 0;
      UNLOCK();
      if ((!(bool)local_19) && (local_30 != (int *)0x0)) {
        operator_delete(local_30);
      }
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_19 = *piVar2 != 0;
      UNLOCK();
      if (!(bool)local_19) {
        operator_delete(piVar2);
      }
    }
  }
  return;
}

