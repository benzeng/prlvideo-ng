
undefined1
FUN_100a70ae0(uint *param_1,long *param_2,void *param_3,long *param_4,undefined8 *param_5,
             char param_6)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long local_78;
  long *local_38;
  
  lVar4 = *param_2;
  lVar11 = 0;
  if (lVar4 != 0) {
    lVar11 = *(long *)(lVar4 + 0x10);
  }
  uVar9 = lVar11 + 0x10;
  if ((uVar9 & 1) == 0) {
    QReadWriteLock::lockForWrite();
    uVar9 = uVar9 | 1;
    lVar4 = *param_2;
  }
  lVar11 = 0;
  if (lVar4 != 0) {
    lVar11 = *(long *)(lVar4 + 0x10);
  }
  puVar5 = *(uint **)(lVar11 + 0x18);
  if (1 < *puVar5) {
    puVar10 = (undefined8 *)(lVar11 + 0x18);
    if ((puVar5[2] & 0x7fffffff) == 0) {
      puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar10 = puVar5;
    }
    else {
      FUN_100a71c90(puVar10,puVar5[1],puVar5[2] & 0x7fffffff,0);
      puVar5 = (uint *)*puVar10;
    }
  }
  plVar15 = (long *)((long)puVar5 + *(long *)(puVar5 + 4));
  iVar14 = -1;
  local_38 = (long *)0x0;
  plVar17 = plVar15;
  while( true ) {
    lVar11 = 0;
    if (*param_2 != 0) {
      lVar11 = *(long *)(*param_2 + 0x10);
    }
    puVar5 = *(uint **)(lVar11 + 0x18);
    if (1 < *puVar5) {
      puVar10 = (undefined8 *)(lVar11 + 0x18);
      if ((puVar5[2] & 0x7fffffff) == 0) {
        puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
        *puVar10 = puVar5;
      }
      else {
        FUN_100a71c90(puVar10,puVar5[1],puVar5[2] & 0x7fffffff,0);
        puVar5 = (uint *)*puVar10;
      }
    }
    if (plVar15 == (long *)((long)puVar5 + (long)(int)puVar5[1] * 8 + *(long *)(puVar5 + 4))) break;
    plVar2 = (long *)*plVar15;
    if ((((*plVar2 == 0) || (*(uint *)(*plVar2 + 8) < 2)) && ((char)plVar2[0xe] == '\0')) &&
       (iVar14 = iVar14 + 1, iVar14 == 0)) {
      iVar14 = 0;
      plVar17 = plVar15;
      local_38 = plVar2;
    }
    plVar15 = plVar15 + 1;
  }
  if (local_38 == (long *)0x0) {
    local_38 = operator_new(0x78);
    FUN_100a700d0(local_38);
    lVar11 = 0;
    if (*param_2 != 0) {
      lVar11 = *(long *)(*param_2 + 0x10);
    }
    puVar5 = *(uint **)(lVar11 + 0x18);
    plVar17 = (long *)(lVar11 + 0x18);
    uVar12 = puVar5[1];
    uVar6 = uVar12 + 1;
    uVar7 = puVar5[2] & 0x7fffffff;
    if ((*puVar5 < 2) && (uVar6 <= uVar7)) {
      *(long **)((long)puVar5 + (long)(int)uVar12 * 8 + *(long *)(puVar5 + 4)) = local_38;
    }
    else {
      uVar3 = uVar7;
      if (uVar7 < uVar6) {
        uVar3 = uVar6;
      }
      FUN_100a71c90(plVar17,(long)(int)uVar12,uVar3,(ulong)(uVar7 < uVar6) << 3);
      lVar11 = *plVar17;
      *(long **)(*(long *)(lVar11 + 0x10) + lVar11 + (long)*(int *)(lVar11 + 4) * 8) = local_38;
    }
    *(int *)(*plVar17 + 4) = *(int *)(*plVar17 + 4) + 1;
  }
  else {
    uVar13 = 0;
    if (*local_38 != 0) {
      uVar13 = *(undefined8 *)(*local_38 + 0x10);
    }
    FUN_100a6f890(uVar13);
    iVar1 = *(int *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x18) + 4);
    if (0x32 < iVar1) {
      uVar12 = 0;
      if (iVar14 == -1) {
        iVar14 = 0;
      }
      if ((uint)(iVar1 - iVar14) < 0x26) {
        do {
          plVar17 = plVar17 + 1;
          while( true ) {
            lVar11 = 0;
            if (*param_2 != 0) {
              lVar11 = *(long *)(*param_2 + 0x10);
            }
            puVar5 = *(uint **)(lVar11 + 0x18);
            if (1 < *puVar5) {
              puVar10 = (undefined8 *)(lVar11 + 0x18);
              if ((puVar5[2] & 0x7fffffff) == 0) {
                puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
                *puVar10 = puVar5;
              }
              else {
                FUN_100a71c90(puVar10,puVar5[1],puVar5[2] & 0x7fffffff,0);
                puVar5 = (uint *)*puVar10;
              }
            }
            if ((iVar1 - 0x32U <= uVar12) ||
               (plVar17 == (long *)((long)puVar5 + (long)(int)puVar5[1] * 8 + *(long *)(puVar5 + 4))
               )) goto LAB_100a70f18;
            plVar15 = (long *)*plVar17;
            if (((*plVar15 != 0) && (1 < *(uint *)(*plVar15 + 8))) || ((char)plVar15[0xe] != '\0'))
            break;
            lVar11 = 0;
            if (*param_2 != 0) {
              lVar11 = *(long *)(*param_2 + 0x10);
            }
            puVar5 = *(uint **)(lVar11 + 0x18);
            lVar4 = *(long *)(puVar5 + 4);
            uVar16 = (long)plVar17 - ((long)puVar5 + lVar4);
            if ((puVar5[2] & 0x7fffffff) == 0) {
              local_78 = (long)(int)(uVar16 >> 3);
            }
            else {
              puVar10 = (undefined8 *)(lVar11 + 0x18);
              if (1 < *puVar5) {
                FUN_100a71c90(puVar10,puVar5[1],puVar5[2] & 0x7fffffff,0);
                puVar5 = (uint *)*puVar10;
                lVar4 = *(long *)(puVar5 + 4);
              }
              uVar6 = (uint)(uVar16 >> 3);
              local_78 = (long)(int)uVar6;
              _memmove((void *)((long)puVar5 + local_78 * 8 + lVar4),
                       (void *)((long)puVar5 + local_78 * 8 + lVar4 + 8),
                       (long)(int)(~uVar6 + puVar5[1]) << 3);
              puVar5 = (uint *)*puVar10;
              puVar5[1] = puVar5[1] - 1;
              lVar4 = *(long *)(puVar5 + 4);
            }
            plVar17 = (long *)plVar15[0xc];
            if (plVar17 != (long *)0x0) {
              LOCK();
              plVar2 = plVar17 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            plVar17 = (long *)*plVar15;
            if (plVar17 != (long *)0x0) {
              LOCK();
              plVar2 = plVar17 + 1;
              lVar11 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)(*plVar17 + 0x10))();
              }
            }
            plVar17 = (long *)((long)puVar5 + local_78 * 8 + lVar4);
            operator_delete(plVar15);
            uVar12 = uVar12 + 1;
          }
        } while( true );
      }
    }
  }
LAB_100a70f18:
  *param_5 = local_38;
  lVar11 = *(long *)(*param_2 + 0x10);
  if ((param_6 == '\0') && (*param_1 <= *(uint *)(lVar11 + 0x20))) {
    uVar8 = 0;
  }
  else {
    if (*(long *)(lVar11 + 0x30) == 0) {
      *(long **)(lVar11 + 0x30) = local_38;
      *(long **)(lVar11 + 0x28) = local_38;
    }
    else {
      *(long **)(*(long *)(lVar11 + 0x30) + 0x68) = local_38;
      *(long **)(lVar11 + 0x30) = local_38;
    }
    *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + 1;
    *(undefined1 *)(local_38 + 0xe) = 1;
    _memcpy(local_38 + 1,param_3,0x52);
    lVar11 = *param_4;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    plVar17 = (long *)local_38[0xc];
    local_38[0xc] = lVar11;
    uVar8 = 1;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar15 = plVar17 + 1;
      lVar11 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)(*plVar17 + 0x10))();
      }
    }
  }
  if ((uVar9 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  return uVar8;
}

