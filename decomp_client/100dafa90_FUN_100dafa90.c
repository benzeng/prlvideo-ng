
undefined1 FUN_100dafa90(undefined8 param_1,ulong *param_2,ulong *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  uint uVar5;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c8 [4];
  ushort local_c4;
  undefined1 local_31;
  
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  QString::toUtf8();
  iVar1 = _stat_INODE64(local_d0 + *(long *)(local_d0 + 0x10),local_c8);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dafb21;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_100dafb21:
  if (iVar1 == 0) {
    uVar5 = (local_c4 & 7) << 6;
    *param_4 = ((uint)local_c4 * 8 & 0x1c0) != uVar5;
    uVar2 = local_c4 & 0x1c0;
    *param_2 = (ulong)(uVar2 >> 3 & 8 | uVar2 >> 5 & 4 | uVar2 >> 7 & 2);
    uVar5 = uVar5 & (uint)local_c4 * 8;
    *param_3 = (ulong)(uVar5 >> 3 & 8 | uVar5 >> 5 & 4 | uVar5 >> 7 & 2);
    return 1;
  }
  QString::toUtf8();
  pQVar4 = local_d8 + *(long *)(local_d8 + 0x10);
  uVar3 = FUN_100ddb7c0();
  FUN_100ddb790(&local_e8);
  QString::toUtf8();
  FUN_100df99c0("","CAuth",0,"GetSimplePermissionsToFile(): stat( \'%s\' ) return error %ld (%s)",
                pQVar4,uVar3,local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dafbd6;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100dafbd6:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dafc0c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100dafc0c:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      UNLOCK();
      if (*(int *)local_d8 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
  return 0;
}

