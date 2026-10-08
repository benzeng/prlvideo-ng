
bool FUN_10061c4a0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  Data_conflict local_38;
  undefined4 local_30;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  if (DAT_102310958 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100612710(pvVar3);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar3;
  }
  cVar2 = FUN_100612960();
  if (((uVar4 & 0x80) == 0 || (uVar4 & 0x20) != 0) && cVar2 == '\x01') {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
      uVar4 = *(uint *)((long)puVar1 + 0x24) ^ 0xf;
      for (puVar5 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar5 != puVar1; puVar5 = (undefined8 *)*puVar5) {
        if ((*(uint *)(puVar5 + 1) == uVar4) && (*(int *)((long)puVar5 + 0xc) == 0xf)) {
          if (puVar5 != puVar1) {
            QVariant::QVariant((QVariant *)&local_38,(QVariant *)(puVar5 + 2));
            goto LAB_10061c566;
          }
          break;
        }
      }
    }
    local_30 = 0x80000000;
    local_38.field7 = 0;
LAB_10061c566:
    cVar2 = QVariant::toBool();
    bVar6 = true;
    if (cVar2 == '\0') {
      bVar6 = (*(byte *)(param_1 + 0x32) & 2) == 0;
    }
    QVariant::~QVariant((QVariant *)&local_38);
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

