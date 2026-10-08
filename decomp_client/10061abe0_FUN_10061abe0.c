
QVariant * FUN_10061abe0(QVariant *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar3 = *(uint *)((long)puVar1 + 0x24) ^ param_3;
    for (puVar2 = *(undefined8 **)(puVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (*(uint *)((long)puVar2 + 0xc) == param_3)) {
        if (puVar2 != puVar1) {
          QVariant::QVariant(param_1,(QVariant *)(puVar2 + 2));
          return param_1;
        }
        break;
      }
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

