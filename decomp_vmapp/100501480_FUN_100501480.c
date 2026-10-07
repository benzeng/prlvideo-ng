
undefined1 FUN_100501480(long *param_1,QString *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  undefined1 uVar4;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_1 + 4) < 0x11) {
    return 0;
  }
  QString::left((int)&local_40);
  if (*(short *)(local_40 + *(long *)(local_40 + 0x10) + 0x10) != 0x2d) {
    uVar4 = 0;
    goto LAB_1005015fb;
  }
  if (*(short *)(*(long *)(*param_1 + 0x10) + 0x1e + *param_1) != 0x2d) {
    uVar4 = 0;
    goto LAB_1005015fb;
  }
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::insert((int)&local_48,(QChar *)0xb,(int)*(long *)(local_40 + 0x10) + (int)local_40);
  pQVar3 = local_40;
  lVar1 = *(long *)(local_40 + 0x10);
  if ((1 < *(uint *)local_48.field0_0x0) || (*(long *)(local_48.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_48,(bool)((char)*(uint *)(local_48.field0_0x0 + 4) + '\x01'));
  }
  lVar2 = *(long *)(local_48.field0_0x0 + 0x10);
  *(undefined8 *)(local_48.field0_0x0 + lVar2) = *(undefined8 *)(pQVar3 + lVar1);
  *(undefined2 *)(local_48.field0_0x0 + lVar2 + 8) = 0x2f;
  *(undefined4 *)(local_48.field0_0x0 + lVar2 + 10) = *(undefined4 *)(pQVar3 + lVar1 + 8);
  *(undefined2 *)(local_48.field0_0x0 + lVar2 + 0xe) = 0x2f;
  *(undefined4 *)(local_48.field0_0x0 + lVar2 + 0x10) = *(undefined4 *)(pQVar3 + lVar1 + 0xc);
  *(undefined2 *)(local_48.field0_0x0 + lVar2 + 0x14) = 0x2f;
  QString::operator=(param_2,&local_48);
  QString::mid((int)&local_50,(int)param_1);
  pQVar3 = (QArrayData *)*param_3;
  *param_3 = local_50;
  local_50 = pQVar3;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005015c1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005015c1:
  uVar4 = 1;
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005015fb;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005015fb:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar4;
}

