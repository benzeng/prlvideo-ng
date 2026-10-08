
undefined1 FUN_10061c680(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  Data_conflict local_20;
  undefined4 local_18;
  
  if ((*(uint *)(param_1 + 0x30) & 0x4086) == 0x4006) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
      uVar3 = *(uint *)((long)puVar1 + 0x24) ^ 0xf;
      for (puVar4 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar4 != puVar1; puVar4 = (undefined8 *)*puVar4) {
        if ((*(uint *)(puVar4 + 1) == uVar3) && (*(int *)((long)puVar4 + 0xc) == 0xf)) {
          if (puVar4 != puVar1) {
            QVariant::QVariant((QVariant *)&local_20,(QVariant *)(puVar4 + 2));
            goto LAB_10061c6fa;
          }
          break;
        }
      }
    }
    local_18 = 0x80000000;
    local_20.field7 = 0;
LAB_10061c6fa:
    uVar2 = QVariant::toBool();
    QVariant::~QVariant((QVariant *)&local_20);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

