
bool FUN_1001de400(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  Data_conflict local_30;
  undefined4 local_28;
  Data_conflict local_20;
  undefined4 local_18;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = *(uint *)((long)puVar1 + 0x24) ^ 0xb;
    for (puVar4 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar4 != puVar1; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar3) && (*(int *)((long)puVar4 + 0xc) == 0xb)) {
        if (puVar4 != puVar1) {
          QVariant::QVariant((QVariant *)&local_20,(QVariant *)(puVar4 + 2));
          goto LAB_1001de476;
        }
        break;
      }
    }
  }
  local_18 = 0x80000000;
  local_20.field7 = 0;
LAB_1001de476:
  iVar2 = QVariant::toInt((bool *)&local_20.field0);
  if (iVar2 == 0xb) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
      for (puVar4 = *(undefined8 **)
                     (puVar1[1] +
                     ((ulong)*(uint *)((long)puVar1 + 0x24) % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar4 != puVar1; puVar4 = (undefined8 *)*puVar4) {
        if ((*(uint *)(puVar4 + 1) == *(uint *)((long)puVar1 + 0x24)) &&
           (*(int *)((long)puVar4 + 0xc) == 0)) {
          if (puVar4 != puVar1) {
            QVariant::QVariant((QVariant *)&local_30,(QVariant *)(puVar4 + 2));
            goto LAB_1001de4ea;
          }
          break;
        }
      }
    }
    local_28 = 0x80000000;
    local_30.field7 = 0;
LAB_1001de4ea:
    iVar2 = QVariant::toInt((bool *)&local_30.field0);
    bVar5 = iVar2 != -0x7ffee8f0;
    QVariant::~QVariant((QVariant *)&local_30);
  }
  else {
    bVar5 = false;
  }
  QVariant::~QVariant((QVariant *)&local_20);
  return bVar5;
}

