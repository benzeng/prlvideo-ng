
undefined1 FUN_100048510(undefined8 param_1,QString *param_2,char param_3,char *param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  long lVar6;
  uint uVar7;
  QArrayData *pQVar8;
  char local_52;
  char local_51;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  lVar1 = DAT_1011cc828;
  if (DAT_1011cc828 != 0) {
    DAT_1011cc830 = DAT_1011cc830 + 1;
  }
  QMutex::unlock();
  if (lVar1 != 0) {
    FUN_1004d2110(&local_50,lVar1 + 0x48,param_1);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000485bb;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1000485bb:
    uVar7 = *(uint *)(local_48.field0_0x0 + 4);
    if (uVar7 != 0) {
      if ((1 < *(uint *)local_48.field0_0x0) || (*(long *)(local_48.field0_0x0 + 0x10) != 0x18)) {
        QString::reallocData((uint)&local_48,(bool)((char)uVar7 + '\x01'));
        uVar7 = *(uint *)(local_48.field0_0x0 + 4);
      }
      lVar6 = (long)(int)uVar7 * 2;
      if (lVar6 != 0) {
        pQVar8 = (QArrayData *)(local_48.field0_0x0 + *(long *)(local_48.field0_0x0 + 0x10));
        do {
          uVar4 = FUN_100541f50(*(undefined2 *)pQVar8);
          *(undefined2 *)pQVar8 = uVar4;
          pQVar8 = pQVar8 + 2;
          lVar6 = lVar6 + -2;
        } while (lVar6 != 0);
      }
      uVar5 = 1;
      QString::operator=(param_2,&local_48);
      goto LAB_100048748;
    }
  }
  QMutex::lock();
  plVar2 = DAT_1011cc9a8;
  if (DAT_1011cc9a8 != (long *)0x0) {
    DAT_1011cc9b0 = DAT_1011cc9b0 + 1;
  }
  QMutex::unlock();
  if (plVar2 == (long *)0x0) {
LAB_1000486e2:
    if (param_2->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
      local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      QString::operator=(param_2,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100048735;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
LAB_100048735:
    uVar5 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_51,&local_52);
    if (param_4 != (char *)0x0) {
      cVar3 = '\0';
      if (local_51 != '\0') {
        cVar3 = local_52;
      }
      *param_4 = cVar3;
    }
    if ((local_51 == '\0') || (local_52 == '\0')) goto LAB_1000486e2;
    if (param_3 == '\0') {
      cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1,&local_48);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,&local_48);
    }
    if ((cVar3 == '\0') || (*(uint *)(local_48.field0_0x0 + 4) == 0)) goto LAB_1000486e2;
    uVar5 = 1;
    QString::operator=(param_2,&local_48);
  }
  if (plVar2 != (long *)0x0) {
    FUN_10004e400(&DAT_1011cc998);
  }
LAB_100048748:
  if (lVar1 != 0) {
    FUN_10004e380(&DAT_1011cc818);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar5;
}

