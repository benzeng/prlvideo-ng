
undefined8 FUN_100d02720(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  QString local_90;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  QString local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QArrayData *local_50;
  undefined *local_48;
  int *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  local_40 = (int *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("*.vhd",5);
  local_48 = puVar3;
  local_50 = pQVar4;
  FUN_1000341d0(&local_48,&local_50);
  FUN_100ce4ce0(param_2,&local_48,&local_40);
  FUN_100039a80(&local_48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d027b3;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d027b3:
  local_70 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_70);
      iVar10 = local_70[2];
      if (iVar10 != local_70[3]) {
        piVar8 = local_40 + (long)local_40[2] * 2 + 4;
        piVar9 = local_70 + (long)iVar10 * 2 + 4;
        lVar5 = (long)local_70[3] * 8 + (long)iVar10 * -8;
        do {
          piVar2 = *(int **)piVar8;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          piVar8 = piVar8 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_31 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  if (local_70[2] != local_70[3]) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
    iVar10 = 0;
    do {
      local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_68;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        if (iVar10 < 4) {
          puVar6 = (uint *)*puVar1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          lVar5 = (long)iVar10;
          *(undefined1 *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4)) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          *(undefined1 *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 1) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          *(undefined1 *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 2) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          QString::operator=((QString *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 0x10)
                             ,&local_78);
          puVar6 = (uint *)*puVar1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          *(undefined4 *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 0x18) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          *(int *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 0x1c) = iVar10 / 2;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *puVar1 = puVar6;
            }
            else {
              FUN_100d063c0(puVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*puVar1;
            }
          }
          *(int *)((long)puVar6 + lVar5 * 0x28 + *(long *)(puVar6 + 4) + 0x20) = iVar10 % 2;
        }
        else {
          FUN_100d14eb0(&local_a0);
          local_a0 = 1;
          local_9f = 1;
          local_9e = 1;
          local_88 = 2;
          local_84 = 0;
          local_80 = iVar10 + -4;
          QString::operator=(&local_90,&local_78);
          FUN_100d05600(param_1 + 0x2d0,&local_a0);
          if (*(int *)local_90.field0_0x0 != -1) {
            if (*(int *)local_90.field0_0x0 != 0) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d02ba3;
            }
            QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
          }
        }
LAB_100d02ba3:
        local_58 = 0;
        iVar10 = iVar10 + 1;
      }
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d02bdd;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_100d02bdd:
      local_68 = local_68 + 2;
      uVar7 = local_58 ^ 1;
      bVar11 = local_58 != 1;
      local_58 = uVar7;
    } while ((bVar11) && (local_68 != local_60));
  }
  FUN_100039a80(&local_70);
  FUN_100039a80(&local_40);
  return 0x8000000;
}

