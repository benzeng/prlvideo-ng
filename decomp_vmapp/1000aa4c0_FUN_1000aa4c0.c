
QString * FUN_1000aa4c0(QString *param_1,long param_2)

{
  char cVar1;
  QString local_70;
  undefined1 local_68 [56];
  QString local_30;
  undefined1 local_21;
  
  FUN_1006dc740();
  FUN_100637610(&local_70,param_1);
  QString::operator=(param_1,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000aa520;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000aa520:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Start screenshot saving");
  }
  FUN_1000e8fd0(local_68,*(undefined8 *)(param_2 + 0x1a38),param_2);
  cVar1 = FUN_1000e9180(local_68,param_1,0);
  FUN_1000e9140(local_68);
  if (cVar1 == '\0') {
    QString::fromUtf8_helper((char *)&local_30,0xa320a0);
    QString::operator=(param_1,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000aa5cc;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1000aa5cc:
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"Stop screenshot saving");
  }
  return param_1;
}

