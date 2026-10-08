
void FUN_100d16e90(long param_1,QString *param_2,QString *param_3)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 local_48 [8];
  QString QStack_40;
  undefined1 local_31;
  
  puVar2 = *(uint **)(param_1 + 0x18);
  puVar5 = (undefined8 *)(param_1 + 0x18);
  uVar4 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    lVar3 = 0;
    lVar6 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar5 = puVar2;
        }
        else {
          FUN_100d13c20(puVar5,uVar4,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*puVar5;
        }
      }
      iVar1 = QString::compare((long)puVar2 + lVar3 + *(long *)(puVar2 + 4),param_2,1);
      puVar2 = (uint *)*puVar5;
      if (iVar1 == 0) {
        if (1 < *puVar2) {
          if ((puVar2[2] & 0x7fffffff) == 0) {
            puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *puVar5 = puVar2;
          }
          else {
            FUN_100d13c20(puVar5,puVar2[1],puVar2[2] & 0x7fffffff,0);
            puVar2 = (uint *)*puVar5;
          }
        }
        QString::operator=((QString *)((long)puVar2 + lVar6 * 0x10 + 8 + *(long *)(puVar2 + 4)),
                           param_3);
        return;
      }
      lVar6 = lVar6 + 1;
      uVar4 = (ulong)(int)puVar2[1];
      lVar3 = lVar3 + 0x10;
    } while (lVar6 < (long)uVar4);
  }
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_48 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  QString::operator=((QString *)local_48,param_2);
  QString::operator=((QString *)(local_48 + 8),param_3);
  FUN_100d13ff0(puVar5,local_48);
  if (*(int *)QStack_40.field0_0x0 != -1) {
    if (*(int *)QStack_40.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_40.field0_0x0 = *(int *)QStack_40.field0_0x0 + -1;
      local_31 = *(int *)QStack_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d16fa7;
    }
    QArrayData::deallocate((QArrayData *)QStack_40.field0_0x0,2,8);
  }
LAB_100d16fa7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
  return;
}

