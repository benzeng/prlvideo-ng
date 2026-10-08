
undefined1 FUN_100d79240(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 uVar6;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(long *)(param_1 + 8),PTR_s_infoDictionary_10226a5e8);
  puVar2 = PTR__OBJC_CLASS___NSString_10226a7c8;
  QString::toUtf8();
  uVar4 = (*(code *)puVar1)(puVar2,PTR_s_stringWithUTF8String__1022697c0,
                            local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d792d3;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d792d3:
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_objectForKey__1022699d0,uVar4);
  pcVar5 = (char *)(*(code *)puVar1)(uVar3,PTR_s_cStringUsingEncoding__10226a5e0,4);
  if (pcVar5 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    _strlen(pcVar5);
    QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
    QString::operator=(param_3,&local_48);
    uVar6 = 1;
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return 1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  return uVar6;
}

