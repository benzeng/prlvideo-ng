
long * FUN_100a70890(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar8 = *param_3;
  lVar6 = 0;
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  uVar5 = lVar6 + 0x10;
  if ((uVar5 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar5 = uVar5 | 1;
    lVar8 = *param_3;
  }
  lVar6 = 0;
  if (lVar8 != 0) {
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  puVar4 = *(uint **)(lVar6 + 0x18);
  if (1 < *puVar4) {
    puVar9 = (undefined8 *)(lVar6 + 0x18);
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar9 = puVar4;
    }
    else {
      FUN_100a71c90(puVar9,puVar4[1],puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*puVar9;
    }
  }
  puVar9 = (undefined8 *)((long)puVar4 + *(long *)(puVar4 + 4));
  while( true ) {
    lVar6 = 0;
    if (*param_3 != 0) {
      lVar6 = *(long *)(*param_3 + 0x10);
    }
    puVar4 = *(uint **)(lVar6 + 0x18);
    if (1 < *puVar4) {
      puVar7 = (undefined8 *)(lVar6 + 0x18);
      if ((puVar4[2] & 0x7fffffff) == 0) {
        puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
        *puVar7 = puVar4;
      }
      else {
        FUN_100a71c90(puVar7,puVar4[1],puVar4[2] & 0x7fffffff,0);
        puVar4 = (uint *)*puVar7;
      }
    }
    if (puVar9 == (undefined8 *)((long)puVar4 + (long)(int)puVar4[1] * 8 + *(long *)(puVar4 + 4)))
    break;
    plVar1 = (long *)*puVar9;
    lVar6 = *plVar1;
    if ((lVar6 != 0) && (1 < *(uint *)(lVar6 + 8))) {
      lVar6 = *(long *)(lVar6 + 0x10);
      lVar8 = 0;
      if (*param_4 != 0) {
        lVar8 = *(long *)(*param_4 + 0x10);
      }
      FUN_100dda450(local_48,lVar8 + 0x10);
      lVar6 = lVar6 + 0x40;
      cVar2 = FUN_100deade0(lVar6);
      if (((cVar2 == '\0') && (cVar2 = FUN_100deade0(local_48), cVar2 == '\0')) &&
         (iVar3 = FUN_100deb2c0(lVar6,local_48), iVar3 == 0)) {
        lVar6 = *plVar1;
        *param_1 = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
LAB_100a70a74:
        if ((uVar5 & 1) != 0) {
          QReadWriteLock::unlock();
        }
        if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return param_1;
      }
    }
    puVar9 = puVar9 + 1;
  }
  *param_1 = 0;
  goto LAB_100a70a74;
}

