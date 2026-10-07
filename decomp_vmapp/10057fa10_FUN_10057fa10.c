
undefined4 FUN_10057fa10(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1[0x236] == 0) {
    FUN_1008e3970("","vdisk",0,"Can\'t create encrypted data without encryption initialized");
    return 0x80000003;
  }
  uVar2 = rdtsc();
  qsrand((uint)uVar2);
  uVar3 = qrand();
  puVar6 = _malloc(0x400);
  uVar7 = 0;
  if (puVar6 == (uint *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error allocating memory");
    return 0x80000002;
  }
  uVar3 = (uVar3 & 0x1ff) + 4;
  do {
    uVar4 = qrand();
    puVar6[uVar7] = uVar4;
    if ((uVar7 & 0x1f) == 0) {
      uVar2 = rdtsc();
      qsrand((uint)uVar2);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x100);
  *puVar6 = uVar3;
  uVar8 = (ulong)uVar3;
  pcVar1 = (char *)((long)puVar6 + uVar8 + 8);
  pcVar1[0] = 'M';
  pcVar1[1] = 'a';
  pcVar1[2] = 'r';
  pcVar1[3] = 't';
  pcVar1[4] = 'a';
  pcVar1[5] = '1';
  pcVar1[6] = '\x03';
  pcVar1[7] = -0x7c;
  builtin_strncpy((char *)((long)puVar6 + uVar8),"Murovna ",8);
  uVar7 = qrand();
  uVar3 = qrand();
  QByteArray::QByteArray
            ((QByteArray *)&local_40,(char *)((long)puVar6 + (uVar7 & 0x1ff)),uVar3 & 0x1ff);
  QCryptographicHash::hash(&local_48,(QByteArray *)&local_40,1);
  uVar2 = *(undefined8 *)(local_48 + *(long *)(local_48 + 0x10));
  *(undefined8 *)(uVar8 + 0x18 + (long)puVar6) =
       *(undefined8 *)(local_48 + *(long *)(local_48 + 0x10) + 8);
  *(undefined8 *)(uVar8 + 0x10 + (long)puVar6) = uVar2;
  (**(code **)(*param_1 + 0x178))(&local_58,param_1);
  QString::toUtf8();
  QByteArray::append((QByteArray *)&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057fb7f;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10057fb7f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057fbaf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10057fbaf:
  QCryptographicHash::hash(&local_60,&local_40,1);
  QByteArray::operator=((QByteArray *)&local_48,(QByteArray *)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057fbfe;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10057fbfe:
  uVar2 = *(undefined8 *)(local_48 + *(long *)(local_48 + 0x10));
  *(undefined8 *)(uVar8 + 0x28 + (long)puVar6) =
       *(undefined8 *)(local_48 + *(long *)(local_48 + 0x10) + 8);
  *(undefined8 *)(uVar8 + 0x20 + (long)puVar6) = uVar2;
  QByteArray::clear();
  QByteArray::clear();
  QByteArray::QByteArray((QByteArray *)&local_68,(char *)puVar6,0x400);
  _free(puVar6);
  uVar5 = (**(code **)(*param_1 + 0x378))(param_1,param_2,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057fc8d;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10057fc8d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057fcbd;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10057fcbd:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar5;
}

