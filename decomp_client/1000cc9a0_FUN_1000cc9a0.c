
void FUN_1000cc9a0(long param_1,QString *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
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
      if ((long)(int)uVar1 - (long)(int)uVar2 <= lVar6) goto LAB_1000cca59;
      puVar5 = (uint *)*puVar7;
    }
    if (lVar3 != 0) {
      local_40 = *(undefined8 *)(lVar3 + 0x30);
    }
  }
LAB_1000cca59:
  if ((local_40._4_4_ == 0) && ((int)local_40 == 0)) goto LAB_1000ccba5;
  QString::toUtf8();
  QString::toUtf8();
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::resize((int)&local_58);
  QByteArray::append((char *)&local_58,(int)*(undefined8 *)(local_48 + 0x10) + (int)local_48);
  QByteArray::append((char *)&local_58,(int)*(undefined8 *)(local_50 + 0x10) + (int)local_50);
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  lVar6 = *(long *)(local_58 + 0x10);
  *(undefined4 *)(local_58 + lVar6) = param_5;
  FUN_1000c4970(&local_40,0x87,local_58 + lVar6,*(uint *)(local_58 + 4));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ccb45;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000ccb45:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ccb75;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000ccb75:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000ccba5;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_1000ccba5:
  QMutex::unlock();
  return;
}

