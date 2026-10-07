
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100595fd0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar19;
  int local_4c;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  local_48 = (long *)0x0;
  uVar14 = *(long *)(param_1 + 0x60) + 0xffffffff;
  iVar13 = (int)uVar14;
  plVar9 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                               ((uVar14 & 0xffffffff) + *(long *)(param_1 + 0x58) >> 9) * 8) +
                     ((ulong)(uint)((int)*(long *)(param_1 + 0x58) + iVar13) & 0x1ff) * 8);
  cVar7 = (**(code **)(*plVar9 + 0x108))(plVar9,&local_4c,param_2 + 3);
  if (cVar7 == '\0') {
    FUN_1008e3970("Compact","vdisk",0,"[%p] Something wrong inside image",param_1);
    return 0x80021025;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar14 = (ulong)(local_4c * uVar4) + *(long *)(param_1 + 8);
  param_2[7] = uVar14;
  uVar14 = uVar14 / uVar4;
  plVar2 = (long *)(param_1 + 0x100);
  plVar15 = *(long **)(param_1 + 0x100);
  plVar12 = plVar2;
  if (*(long **)(param_1 + 0x100) == (long *)0x0) {
LAB_1005960da:
    plVar11 = plVar2;
  }
  else {
    do {
      while (plVar11 = plVar15, (ulong)plVar11[4] < uVar14) {
        plVar1 = plVar11 + 1;
        plVar11 = plVar12;
        plVar15 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_1005960cf;
      }
      plVar15 = (long *)*plVar11;
      plVar12 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
LAB_1005960cf:
    if ((plVar11 == plVar2) || (uVar14 < (ulong)plVar11[4])) goto LAB_1005960da;
  }
  if (plVar2 != plVar11) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_AsyncBlockReqs.end() == it","Storage.cpp",CONCAT44(uVar19,0x11d9),
                  "CreateMoveRequest");
  }
  pvVar8 = operator_new(0x1178);
  puVar3 = (undefined8 *)(param_1 + 0xf8);
  FUN_1005934f0(pvVar8,puVar3,0,param_2[7],*(undefined4 *)(param_2 + 3),param_1,plVar9,plVar9,iVar13
                ,iVar13);
  uVar19 = (undefined4)((ulong)plVar9 >> 0x20);
  plVar9 = (long *)FUN_10059a1c0(pvVar8,0);
  local_48 = plVar9;
  if (plVar9 == (long *)0x0) {
    bVar17 = true;
    plVar15 = (long *)0x0;
    local_40 = _DAT_000010e0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar9 + 1;
    lVar6 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_40 = *(undefined8 *)(&DAT_000010e0 + plVar9[2]);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar17 = false;
    plVar15 = plVar9;
  }
  if (!bVar17) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_38 = plVar15;
  auVar18 = FUN_10059a310(puVar3,&local_40);
  uVar14 = auVar18._8_8_;
  plVar12 = auVar18._0_8_;
  if (!bVar17) {
    plVar11 = plVar15 + 1;
    LOCK();
    plVar1 = plVar15 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar15 + 0x10))();
    }
    LOCK();
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar15 + 0x10))();
    }
    LOCK();
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar15 + 0x10))();
    }
    LOCK();
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar15 + 0x10))();
      uVar14 = uVar14 & 0xff;
    }
    else {
      uVar14 = uVar14 & 0xff;
    }
  }
  if ((uVar14 & 1) == 0) {
    FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","ins.second",
                  "Storage.cpp",CONCAT44(uVar19,0x11eb),"CreateMoveRequest");
  }
  plVar15 = (long *)plVar12[5];
  if (plVar15 != (long *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_48 = plVar15;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  *(undefined8 *)(plVar15[2] + 0x10f0) = 0xffffffffffffffff;
  lVar6 = plVar15[2];
  *(undefined4 *)(lVar6 + 0x10d8) = 2;
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x1368);
  if (lVar5 != 0) {
    plVar9 = (long *)(lVar5 + 0xf0);
    *plVar9 = *plVar9 + 1;
  }
  *(int *)(param_2 + 6) = iVar13;
  param_2[5] = *(undefined8 *)(&DAT_000010e0 + lVar6);
  puVar10 = (undefined8 *)FUN_10070ade0();
  param_2[4] = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    FUN_1008e3970("Compact","vdisk",0,"[%p]Error: dio for move allocation failed",*param_2);
  }
  else {
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((long)puVar10 + 0x54) = 0;
    *(undefined4 *)(puVar10 + 1) = 1;
    puVar10[2] = param_2;
    *puVar10 = param_2[7];
    puVar10[9] = FUN_100596b10;
    cVar7 = FUN_1005931e0(param_1,puVar10,&local_48,*(undefined4 *)(param_2 + 6),
                          *(undefined4 *)(param_2 + 6),0xffffffffffffffff);
    uVar16 = 0;
    if (cVar7 != '\0') goto LAB_1005964d0;
  }
  if (plVar12 != plVar2) {
    *(undefined8 *)plVar15[2] = 0;
    plVar9 = plVar12;
    plVar2 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar9[2];
        bVar17 = (long *)*plVar11 != plVar9;
        plVar9 = plVar11;
      } while (bVar17);
    }
    else {
      do {
        plVar11 = plVar2;
        plVar2 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
    if ((long *)*puVar3 == plVar12) {
      *puVar3 = plVar11;
    }
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
    FUN_1000e86c0(*(undefined8 *)(param_1 + 0x100),plVar12);
    plVar9 = (long *)plVar12[5];
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    operator_delete(plVar12);
  }
  FUN_10070aec0(param_2[4]);
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  param_2[5] = 0;
  param_2[7] = 0;
  uVar16 = 0x80021000;
LAB_1005964d0:
  if (plVar15 != (long *)0x0) {
    LOCK();
    plVar9 = plVar15 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  return uVar16;
}

