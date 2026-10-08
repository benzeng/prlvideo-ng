
int FUN_10099dc60(code *param_1,undefined8 *param_2,QString *param_3)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  local_30 = 0;
  iVar2 = (*param_1)(*param_2,0,&local_30);
  if ((iVar2 == -0x7ffffffa) || (iVar2 == 0)) {
    QByteArray::resize((int)&local_38);
    uVar1 = *param_2;
    if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f)
      ;
    }
    iVar2 = (*param_1)(uVar1,local_38 + *(long *)(local_38 + 0x10),&local_30);
  }
  if (iVar2 < 0) goto LAB_10099dda1;
  pQVar3 = local_38 + *(long *)(local_38 + 0x10);
  if (pQVar3 != (QArrayData *)0x0) {
    _strlen((char *)pQVar3);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pQVar3);
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10099dd6f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10099dd6f:
  iVar2 = 0;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10099dda1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10099dda1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return iVar2;
}

