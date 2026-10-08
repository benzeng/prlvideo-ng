
undefined8 * FUN_100116430(undefined8 *param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,(int)PTR_s_Default_10226eb90);
  cVar2 = operator==(param_2,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001164a5;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1001164a5:
  if (cVar2 != '\0') {
    pcVar5 = "Default";
    iVar4 = 7;
    goto LAB_100116617;
  }
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,(int)PTR_s_Mute_10226eb98);
  cVar2 = operator==(param_2,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10011651c;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10011651c:
  if (cVar2 != '\0') {
    pcVar5 = "Mute";
    iVar4 = 4;
    goto LAB_100116617;
  }
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Default_printer_10226eba0);
  cVar2 = operator==(param_2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100116593;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100116593:
  if (cVar2 != '\0') {
    pcVar5 = "Default printer";
    iVar4 = 0xf;
    goto LAB_100116617;
  }
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Default_CD_DVD_10226eba8);
  cVar2 = operator==(param_2,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100116607;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100116607:
  if (cVar2 == '\0') {
    pQVar1 = param_2->field0_0x0;
    *param_1 = pQVar1;
    if (*(int *)pQVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    return param_1;
  }
  pcVar5 = "Default CD/DVD-ROM";
  iVar4 = 0x12;
LAB_100116617:
  uVar3 = QString::fromAscii_helper(pcVar5,iVar4);
  *param_1 = uVar3;
  return param_1;
}

