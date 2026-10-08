
undefined1 FUN_100d79080(long param_1,QString *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 uVar4;
  QString local_30;
  undefined1 local_22;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (*(long *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(long *)(param_1 + 8),PTR_s_bundleIdentifier_102269eb8);
    pcVar3 = (char *)(*(code *)puVar1)(uVar2,PTR_s_cStringUsingEncoding__10226a5e0,4);
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      _strlen(pcVar3);
      QString::fromUtf8_helper((char *)&local_30,(int)pcVar3);
      QString::operator=(param_2,&local_30);
      uVar4 = 1;
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_30.field0_0x0 != 0) {
            return 1;
          }
          local_22 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
  }
  return uVar4;
}

