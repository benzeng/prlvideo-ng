
undefined8 FUN_1005f2270(undefined8 param_1,long *param_2,QString *param_3)

{
  long lVar1;
  int iVar2;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  lVar1 = *param_2;
  iVar2 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"CompatLevel",
                     0xffffffff,1);
  if (iVar2 == 0) {
    QString::fromUtf8_helper((char *)&local_30,0x9e14d8);
    QString::operator=(param_3,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return 0;
    }
    local_28.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return 0;
      }
      local_19 = 0;
    }
  }
  else {
    lVar1 = *param_2;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"Bootable",
                       0xffffffff,1);
    if (iVar2 != 0) {
      return 0x80023000;
    }
    QString::fromUtf8_helper((char *)&local_28,0xa071ea);
    QString::operator=(param_3,&local_28);
    if (*(int *)local_28.field0_0x0 == -1) {
      return 0;
    }
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return 0;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  return 0;
}

