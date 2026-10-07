
undefined8 FUN_1005066a0(long param_1,long *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(uint *)(param_2 + 1) < 2) {
    return 1;
  }
  puVar3 = (ushort *)*param_2;
  uVar6 = *(uint *)(param_2 + 1) - 2;
  *(uint *)(param_2 + 1) = uVar6;
  puVar1 = puVar3 + 1;
  *param_2 = (long)puVar1;
  uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x34) & 0x80;
  uVar2 = *puVar3;
  lVar9 = (ulong)uVar2 << (sbyte)(uVar7 >> 7);
  uVar8 = (uint)lVar9;
  if (uVar6 < uVar8) {
    return 1;
  }
  if (uVar7 == 0) {
    uVar5 = QString::fromLatin1_helper((char *)puVar1,(uint)uVar2);
    local_48 = (QArrayData *)*param_3;
    *param_3 = uVar5;
    if (*(int *)local_48 == -1) goto LAB_1005067c3;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1005067c3;
      local_31 = 0;
    }
  }
  else {
    QString::fromUtf16((ushort *)&local_48,(int)puVar1);
    QString::normalized(&local_40,&local_48,1,0);
    pQVar4 = (QArrayData *)*param_3;
    *param_3 = local_40;
    local_40 = pQVar4;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100506793;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100506793:
    if (*(int *)local_48 == -1) goto LAB_1005067c3;
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_1005067c3;
      local_31 = 0;
    }
  }
  QArrayData::deallocate(local_48,2,8);
LAB_1005067c3:
  *(uint *)(param_2 + 1) = (int)param_2[1] - uVar8;
  *param_2 = *param_2 + lVar9;
  return 0;
}

