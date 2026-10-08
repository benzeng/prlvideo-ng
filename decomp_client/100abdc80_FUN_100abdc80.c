
void FUN_100abdc80(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  long lVar8;
  undefined8 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar5 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
  }
  FUN_100abf9f0(uVar5,&local_40);
  local_48 = (QArrayData *)puVar3;
  QByteArray::resize((int)&local_48);
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48);
  }
  pQVar4 = local_48;
  lVar2 = *(long *)(local_48 + 0x10);
  *(undefined4 *)(local_48 + lVar2) = 8;
  *(undefined4 *)(local_48 + lVar2 + 4) = 0;
  if (((long)*(int *)(local_40 + 4) & 0x7ffffffffffffffU) != 0) {
    pQVar7 = local_40 + *(long *)(local_40 + 0x10);
    pQVar6 = local_40;
    do {
      local_50 = CONCAT44((*(int *)(pQVar7 + 0x1c) + *(int *)(pQVar7 + 0x14)) / 2,
                          (*(int *)(pQVar7 + 0x18) + *(int *)(pQVar7 + 0x10)) / 2);
      if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
         (*(long *)(param_1 + 0x28) != 0)) {
        uVar5 = FUN_100319c50();
        uVar5 = FUN_100331080(uVar5,&local_50);
        uVar1 = *(uint *)(pQVar4 + lVar2 + 4);
        lVar8 = (ulong)uVar1 * 0x10;
        *(undefined8 *)(pQVar4 + lVar8 + lVar2 + 8) = *(undefined8 *)pQVar7;
        *(undefined4 *)(pQVar4 + lVar8 + lVar2 + 0x10) = *(undefined4 *)(pQVar7 + 8);
        *(short *)(pQVar4 + lVar8 + lVar2 + 0x14) = (short)uVar5;
        *(short *)(pQVar4 + lVar8 + lVar2 + 0x16) = (short)((ulong)uVar5 >> 0x20);
        *(uint *)(pQVar4 + lVar2 + 4) = uVar1 + 1;
        pQVar6 = local_40;
      }
      pQVar7 = pQVar7 + 0x20;
    } while (pQVar7 != pQVar6 + (long)*(int *)(pQVar6 + 4) * 0x20 + *(long *)(pQVar6 + 0x10));
  }
  FUN_100a4a170(param_1 + 0x10,pQVar4 + lVar2,*(uint *)(local_48 + 4));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100abde31;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100abde31:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,0x20,8);
  }
  return;
}

