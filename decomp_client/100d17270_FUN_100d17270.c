
void FUN_100d17270(long param_1,QString *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 local_58 [8];
  QString aQStack_50 [2];
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_4 == 10) {
    QString::sprintf((char *)&local_40,"%d");
  }
  else {
    QString::sprintf((char *)&local_40,"0x%08x");
  }
  puVar2 = *(uint **)(param_1 + 0x18);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar4 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar6 = puVar2;
        }
        else {
          FUN_100d13c20(puVar6,uVar4,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*puVar6;
        }
      }
      iVar1 = QString::compare((long)puVar2 + lVar3 + *(long *)(puVar2 + 4),param_2,1);
      puVar2 = (uint *)*puVar6;
      if (iVar1 == 0) {
        if (1 < *puVar2) {
          if ((puVar2[2] & 0x7fffffff) == 0) {
            puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *puVar6 = puVar2;
          }
          else {
            FUN_100d13c20(puVar6,puVar2[1],puVar2[2] & 0x7fffffff,0);
            puVar2 = (uint *)*puVar6;
          }
        }
        QString::operator=((QString *)((long)puVar2 + lVar5 * 0x10 + 8 + *(long *)(puVar2 + 4)),
                           &local_40);
        goto LAB_100d1743b;
      }
      lVar5 = lVar5 + 1;
      uVar4 = (ulong)(int)puVar2[1];
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < (long)uVar4);
  }
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_58 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  QString::operator=((QString *)local_58,param_2);
  QString::operator=((QString *)(local_58 + 8),&local_40);
  FUN_100d13ff0(puVar6,local_58);
  if (*(int *)aQStack_50[0].field0_0x0 != -1) {
    if (*(int *)aQStack_50[0].field0_0x0 != 0) {
      LOCK();
      *(int *)aQStack_50[0].field0_0x0 = *(int *)aQStack_50[0].field0_0x0 + -1;
      local_31 = *(int *)aQStack_50[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d173b6;
    }
    QArrayData::deallocate((QArrayData *)aQStack_50[0].field0_0x0,2,8);
  }
LAB_100d173b6:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d1743b;
    }
    QArrayData::deallocate((QArrayData *)local_58,2,8);
  }
LAB_100d1743b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

