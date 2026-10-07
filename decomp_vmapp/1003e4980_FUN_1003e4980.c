
undefined8 FUN_1003e4980(long param_1)

{
  QArrayData *pQVar1;
  FILE *pFVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (DAT_101119890 < 1) {
    local_40 = (QArrayData *)QString::fromAscii_helper("hdiutil detach %1",0x11);
    QString::arg(&local_38,&local_40,param_1 + 0x120,0,0x20);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003e4a1f;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1003e4a1f:
    QString::toUtf8();
    pFVar2 = _popen((char *)(local_48 + *(long *)(local_48 + 0x10)),"r");
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003e4a73;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1003e4a73:
    pQVar1 = local_38;
    if (pFVar2 == (FILE *)0x0) {
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1007d8970(local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003e4ae8;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_1003e4ae8:
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_21 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1003e4b18;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
    }
    else {
      _pclose(pFVar2);
    }
LAB_1003e4b18:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003e4b48;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1003e4b48:
  if (((QString *)(param_1 + 0x120))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x120),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_30.field0_0x0 != 0) goto LAB_1003e4b9f;
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1003e4b9f:
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return 0;
}

