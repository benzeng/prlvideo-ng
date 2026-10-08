
undefined1 FUN_10072c6f0(undefined8 *param_1,code *param_2,QString *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  int local_30;
  undefined1 local_29;
  
  local_30 = 0;
  iVar2 = (*param_2)(*param_1,0,&local_30);
  if (iVar2 < 0) {
    return 0;
  }
  QByteArray::QByteArray((QByteArray *)&local_38,local_30,'\0');
  uVar1 = *param_1;
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  iVar2 = (*param_2)(uVar1,local_38 + *(long *)(local_38 + 0x10),&local_30);
  uVar3 = 0;
  if (iVar2 < 0) goto LAB_10072c83e;
  pQVar5 = local_38 + *(long *)(local_38 + 0x10);
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_38 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_38 + 4));
    if ((int)lVar4 == -1) {
      _strlen((char *)pQVar5);
    }
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pQVar5);
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072c80c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10072c80c:
  uVar3 = 1;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10072c83e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10072c83e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar3;
}

