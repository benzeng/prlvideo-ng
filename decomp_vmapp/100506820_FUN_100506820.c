
undefined8 FUN_100506820(long param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  QString local_38;
  undefined1 local_29;
  
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 < 2) {
    return 1;
  }
  puVar2 = (undefined2 *)*param_2;
  uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x34) & 0x80;
  uVar5 = *(uint *)(*param_3 + 4);
  *puVar2 = (short)uVar5;
  uVar5 = (uVar5 & 0xffff) << (sbyte)(uVar4 >> 7);
  uVar3 = uVar3 - 2;
  *(uint *)(param_2 + 1) = uVar3;
  puVar2 = puVar2 + 1;
  *param_2 = (long)puVar2;
  if (uVar3 < uVar5) {
    return 1;
  }
  if (uVar4 == 0) {
    QString::toLatin1_helper(&local_38);
    _memcpy(puVar2,(QArrayData *)(local_38.field0_0x0 + *(long *)(local_38.field0_0x0 + 0x10)),
            (ulong)uVar5);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) goto LAB_1005068ec;
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,1,8);
    }
  }
  else {
    pvVar1 = (void *)QString::utf16();
    _memcpy(puVar2,pvVar1,(ulong)uVar5);
  }
LAB_1005068ec:
  *(uint *)(param_2 + 1) = (int)param_2[1] - uVar5;
  *param_2 = *param_2 + (ulong)uVar5;
  return 0;
}

