
void FUN_1000cce60(long param_1,QString *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  undefined4 in_R9D;
  long lVar6;
  undefined8 *puVar7;
  ushort in_stack_00000008;
  ushort in_stack_00000010;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x105) == '\0') {
    return;
  }
  QMutex::lock();
  local_40 = 0;
  puVar5 = *(uint **)(param_1 + 0x58);
  uVar1 = puVar5[3];
  uVar2 = puVar5[2];
  if (0 < (int)((long)(int)uVar1 - (long)(int)uVar2)) {
    puVar7 = (undefined8 *)(param_1 + 0x58);
    lVar6 = 0;
    while( true ) {
      if (1 < *puVar5) {
        FUN_1000e6e10(puVar7,puVar5[1]);
        puVar5 = (uint *)*puVar7;
      }
      lVar3 = *(long *)(puVar5 + ((int)puVar5[2] + lVar6) * 2 + 4);
      cVar4 = operator==((QString *)(lVar3 + 8),param_2);
      if (cVar4 != '\0') break;
      lVar6 = lVar6 + 1;
      if ((long)(int)uVar1 - (long)(int)uVar2 <= lVar6) goto LAB_1000ccf19;
      puVar5 = (uint *)*puVar7;
    }
    if (lVar3 != 0) {
      local_40 = *(undefined8 *)(lVar3 + 0x30);
    }
  }
LAB_1000ccf19:
  if ((local_40._4_4_ == 0) && ((int)local_40 == 0)) goto LAB_1000cd0d6;
  QString::toUtf8();
  QString::toUtf8();
  QString::toUtf8();
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_60);
  QByteArray::append((char *)&local_60,(int)*(undefined8 *)(local_48 + 0x10) + (int)local_48);
  QByteArray::append((char *)&local_60,(int)*(undefined8 *)(local_58 + 0x10) + (int)local_58);
  QByteArray::append((char *)&local_60,(int)*(undefined8 *)(local_50 + 0x10) + (int)local_50);
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  lVar6 = *(long *)(local_60 + 0x10);
  *(undefined4 *)(local_60 + lVar6) = in_R9D;
  local_60[lVar6 + 4] = (QArrayData)((byte)local_60[lVar6 + 4] | 1);
  *(uint *)(local_60 + lVar6 + 8) = (uint)in_stack_00000008;
  *(uint *)(local_60 + lVar6 + 0xc) = (uint)in_stack_00000010;
  FUN_1000c4970(&local_40,0x87,local_60 + lVar6,*(uint *)(local_60 + 4));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cd046;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000cd046:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cd076;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000cd076:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cd0a6;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000cd0a6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000cd0d6;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000cd0d6:
  QMutex::unlock();
  return;
}

