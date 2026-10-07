
int FUN_1004dfcc0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  QString local_d0;
  undefined1 local_c8 [4];
  ushort local_c4;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_68;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined1 local_29;
  
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  QString::normalized(&local_38,param_2,0,0);
  QString::toUtf8_helper(&local_d0);
  piVar3 = (int *)CONCAT71(uStack_37,local_38);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004dfd5c;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_37,local_38),2,8);
  }
LAB_1004dfd5c:
  iVar2 = _lstat_INODE64((QArrayData *)(local_d0.field0_0x0 + *(long *)(local_d0.field0_0x0 + 0x10))
                         ,local_c8);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_38 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_38) goto LAB_1004dfdac;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,1,8);
  }
LAB_1004dfdac:
  if (iVar2 != 0) {
    piVar3 = ___error();
    if (*piVar3 == 0xd) {
      return -0xffffff9;
    }
    return (uint)(*piVar3 != 2) * 8 + -0xfffffec;
  }
  uVar5 = local_c4 & 0xf000;
  if (uVar5 < 0x8000) {
    if (uVar5 < 0x4000) {
      if (uVar5 == 0x1000) {
        uVar5 = 0x1000;
      }
      else {
        if (uVar5 != 0x2000) {
LAB_1004dfe8d:
          uVar5 = *(uint *)(param_3 + 4);
          goto LAB_1004dfe97;
        }
        uVar5 = 0x2000;
      }
    }
    else if (uVar5 == 0x4000) {
      uVar5 = 0x4000;
    }
    else {
      if (uVar5 != 0x6000) goto LAB_1004dfe8d;
      uVar5 = 0x6000;
    }
  }
  else if (uVar5 == 0x8000) {
    uVar5 = 0x8000;
  }
  else if (uVar5 == 0xa000) {
    uVar5 = 0xa000;
  }
  else {
    if (uVar5 != 0xc000) goto LAB_1004dfe8d;
    uVar5 = 0xc000;
  }
  uVar5 = uVar5 | *(uint *)(param_3 + 4);
  *(uint *)(param_3 + 4) = uVar5;
LAB_1004dfe97:
  uVar5 = local_c4 & 0x1ff | uVar5;
  *(uint *)(param_3 + 4) = uVar5;
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(uint *)(param_3 + 4) = uVar5 & 0xffffff6d;
  }
  uVar5 = *(uint *)((long)param_3 + 0x2c);
  *(uint *)((long)param_3 + 0x2c) = uVar5 | 0x10;
  *(int *)((long)param_3 + 0x24) = (int)local_b8;
  uVar7 = (uint)((ulong)local_b8 >> 0x20);
  *(uint *)(param_3 + 5) = uVar7;
  if (*(int *)(param_1 + 0x68) != 0) {
    if (*(int *)(param_1 + 0x68) != (int)local_b8) {
      *(undefined4 *)((long)param_3 + 0x24) = 0xffffffff;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (*(uint *)(puVar1 + 4) != 0) {
      uVar6 = *(uint *)((long)puVar1 + 0x24) ^ uVar7;
      for (puVar4 = *(undefined8 **)(puVar1[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          puVar4 != puVar1; puVar4 = (undefined8 *)*puVar4) {
        if ((*(uint *)(puVar4 + 1) == uVar6) && (uVar7 == *(uint *)((long)puVar4 + 0xc))) {
          if (puVar4 != puVar1) goto LAB_1004dff30;
          break;
        }
      }
    }
    *(undefined4 *)(param_3 + 5) = 0xffffffff;
  }
LAB_1004dff30:
  *param_3 = local_68;
  param_3[1] = local_a8;
  param_3[2] = local_98;
  param_3[3] = local_88;
  *(uint *)((long)param_3 + 0x2c) = uVar5 | 0x7f;
  return 0;
}

