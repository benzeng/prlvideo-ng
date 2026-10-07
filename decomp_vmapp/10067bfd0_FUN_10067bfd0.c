
undefined8
FUN_10067bfd0(long param_1,uint param_2,int param_3,QString *param_4,undefined4 *param_5,
             long param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0x8158002;
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    return 0x8158002;
  }
  puVar4 = (uint *)*puVar2;
  if ((1 < *puVar4) || (*(long *)(puVar4 + 4) != 0x18)) {
    QByteArray::reallocData(puVar2,puVar4[1] + 1,puVar4[2] >> 0x1f);
    puVar4 = (uint *)*puVar2;
  }
  lVar8 = *(long *)(puVar4 + 4);
  if ((long)puVar4 + lVar8 == 0) {
    return 0x8158002;
  }
  if (param_2 == 0xffffffff) {
    iVar3 = FUN_10067c2a0(*(undefined8 *)(param_1 + 8));
    param_2 = iVar3 + 0x1004;
  }
  lVar5 = (ulong)param_2 + lVar8;
  if (*(short *)((long)puVar4 + lVar5) != 0x6b6e) {
    return 0x8158009;
  }
  if (param_6 != 0) {
    return 0x815801a;
  }
  if (param_7 != 0) {
    return 0x815801a;
  }
  uVar1 = *(uint *)((long)puVar4 + lVar5 + 0x24);
  if (uVar1 == 0) {
    return 0x8158017;
  }
  lVar7 = 0;
  while( true ) {
    lVar6 = (ulong)(*(int *)((long)puVar4 +
                            lVar7 * 4 +
                            (ulong)(*(int *)((long)puVar4 + lVar5 + 0x28) + 0x1004) + lVar8) +
                   0x1004) + lVar8;
    if (*(short *)((long)puVar4 + lVar6) != 0x6b76) {
      return 0x815800b;
    }
    if (param_3 == (int)lVar7) break;
    lVar7 = lVar7 + 1;
    if (uVar1 <= (uint)lVar7) {
      return 0x8158017;
    }
  }
  if (param_4 == (QString *)0x0) goto LAB_10067c1ff;
  QByteArray::QByteArray
            ((QByteArray *)&local_48,(char *)((long)puVar4 + lVar6 + 0x14),
             (uint)*(ushort *)((long)puVar4 + lVar6 + 2));
  lVar8 = 0;
  pQVar9 = local_48 + *(long *)(local_48 + 0x10);
  if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_48 + 4) != 0)) {
    lVar8 = 0;
    do {
      if (pQVar9[lVar8] == (QArrayData)0x0) break;
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(local_48 + 4));
  }
  local_40.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper((char *)pQVar9,(int)lVar8);
  QString::operator=(param_4,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10067c1c1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10067c1c1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10067c1ff;
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10067c1ff:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)((long)puVar4 + lVar6 + 0xc);
  }
  return 0x8000000;
}

