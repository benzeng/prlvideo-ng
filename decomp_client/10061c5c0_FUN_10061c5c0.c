
bool FUN_10061c5c0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  Data_conflict local_20;
  undefined4 local_18;
  
  bVar4 = true;
  if ((*(uint *)(param_1 + 0x30) & 0x6616) != 0x4406) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
      for (puVar3 = *(undefined8 **)
                     (puVar1[1] +
                     ((ulong)*(uint *)((long)puVar1 + 0x24) % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
        if ((*(uint *)(puVar3 + 1) == *(uint *)((long)puVar1 + 0x24)) &&
           (*(int *)((long)puVar3 + 0xc) == 0)) {
          if (puVar3 != puVar1) {
            QVariant::QVariant((QVariant *)&local_20,(QVariant *)(puVar3 + 2));
            goto LAB_10061c636;
          }
          break;
        }
      }
    }
    local_18 = 0x80000000;
    local_20.field7 = 0;
LAB_10061c636:
    iVar2 = QVariant::toInt((bool *)&local_20.field0);
    bVar4 = iVar2 == -0x7ffee8e9;
    QVariant::~QVariant((QVariant *)&local_20);
  }
  return bVar4;
}

