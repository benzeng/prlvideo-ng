
void FUN_1005ac050(long *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,long param_4,
                  undefined4 param_5,long param_6)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  bool bVar9;
  long *local_40;
  long *local_38;
  
  lVar6 = param_2[4];
  bVar9 = true;
  if (param_2[1] == 0) {
    if (*param_2 == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = *(int *)((long)param_1 + 0x34) == -1;
    }
  }
  plVar4 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar4 == (long *)0x0) goto LAB_1005ac10d;
  plVar4[2] = (long)UNRECOVERED_JUMPTABLE;
  plVar4[3] = param_4;
  *(undefined4 *)(plVar4 + 4) = param_5;
  plVar4[5] = param_6;
  *plVar4 = (long)plVar4;
  plVar4[1] = (long)plVar4;
  lVar3 = *param_1;
  if (lVar6 != 0) {
    if (*(long *)(lVar3 + 5000) != 0) {
      plVar1 = (long *)(*(long *)(lVar3 + 5000) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    lVar3 = *(long *)(lVar6 + 0x40);
    *(long **)(lVar3 + 8) = plVar4;
    *plVar4 = lVar3;
    plVar4[1] = lVar6 + 0x40;
    *(long **)(lVar6 + 0x40) = plVar4;
    return;
  }
  if (bVar9) {
    if (*(long *)(lVar3 + 0x1380) != 0) {
      plVar1 = (long *)(*(long *)(lVar3 + 0x1380) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
    *plVar4 = (long)&local_40;
    plVar4[1] = (long)&local_40;
    local_40 = plVar4;
    local_38 = plVar4;
    FUN_1005aca50(param_1,param_2,&local_40,0);
    return;
  }
  if (*(long *)(lVar3 + 0x1378) != 0) {
    plVar1 = (long *)(*(long *)(lVar3 + 0x1378) + 0xf0);
    *plVar1 = *plVar1 + 1;
  }
  QMutex::lock();
  puVar5 = operator_new(0x50,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar5 == (undefined8 *)0x0) {
    param_2[4] = 0;
    pcVar7 = "Error: out of memory";
  }
  else {
    *puVar5 = param_1;
    puVar5[1] = param_2;
    *(undefined1 *)((long)puVar5 + 0x3c) = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar5[6] = 0;
    puVar5[8] = puVar5 + 8;
    puVar5[9] = puVar5 + 8;
    param_2[4] = (long)puVar5;
    if (*param_2 == 0) {
      puVar5 = operator_new__(0x20000,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar5 != (undefined8 *)0x0) {
        puVar8 = puVar5;
        do {
          puVar8[1] = 0xffffffffffffffff;
          *puVar8 = 0xffffffffffffffff;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0xffffffffffffffff;
          puVar8[4] = 0xffffffffffffffff;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0xffffffffffffffff;
          puVar8[8] = 0xffffffffffffffff;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0xffffffffffffffff;
          puVar8[0xc] = 0xffffffffffffffff;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x11] = 0xffffffffffffffff;
          puVar8[0x10] = 0xffffffffffffffff;
          puVar8[0x13] = 0;
          puVar8[0x12] = 0;
          puVar8[0x15] = 0xffffffffffffffff;
          puVar8[0x14] = 0xffffffffffffffff;
          puVar8[0x17] = 0;
          puVar8[0x16] = 0;
          puVar8[0x19] = 0xffffffffffffffff;
          puVar8[0x18] = 0xffffffffffffffff;
          puVar8[0x1b] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x1d] = 0xffffffffffffffff;
          puVar8[0x1c] = 0xffffffffffffffff;
          puVar8[0x1f] = 0;
          puVar8[0x1e] = 0;
          puVar8 = puVar8 + 0x20;
        } while (puVar8 != puVar5 + 0x4000);
        *param_2 = (long)puVar5;
        FUN_1005ace00(param_1,param_2,puVar5);
        lVar6 = param_2[4];
        *(long *)(lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x30) * 0x10) = *param_2;
        uVar2 = *(uint *)(lVar6 + 0x30);
        *(undefined4 *)(lVar6 + 0x18 + (ulong)uVar2 * 0x10) = 0xffffffff;
        *(uint *)(lVar6 + 0x30) = uVar2 + 1;
        bVar9 = true;
        goto LAB_1005ac3c2;
      }
    }
    else {
      bVar9 = false;
LAB_1005ac3c2:
      if ((*(int *)((long)param_1 + 0x34) == -1) || (param_2[1] != 0)) {
LAB_1005ac579:
        if (!bVar9) {
          lVar6 = param_2[5];
          plVar1 = (long *)param_2[6];
          *(long **)(lVar6 + 8) = plVar1;
          *plVar1 = lVar6;
          param_2[5] = (long)(param_2 + 5);
          param_2[6] = (long)(param_2 + 5);
          *(int *)(param_1 + 6) = (int)param_1[6] + -1;
          if (*(long *)(*param_1 + 0x1390) != 0) {
            plVar1 = (long *)(*(long *)(*param_1 + 0x1390) + 0xf0);
            *plVar1 = *plVar1 + -1;
          }
        }
        QMutex::unlock();
        lVar6 = param_2[4];
        lVar3 = *(long *)(lVar6 + 0x40);
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
        plVar4[1] = lVar6 + 0x40;
        *(long **)(lVar6 + 0x40) = plVar4;
        if (((int)param_1[0xf] != -1) && (lVar6 = param_1[0x220], lVar6 != 0)) {
          uVar2 = *(uint *)(param_2 + 7);
          if (*(uint *)(param_1 + 0x21f) <= uVar2) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                          "BlockGroup.cpp",0x3f6,"isSet");
            lVar6 = param_1[0x220];
          }
          if ((*(uint *)(lVar6 + (ulong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
            FUN_1005ad010(param_1 + 9,param_2);
            return;
          }
        }
        FUN_1005ad0f0(param_1,param_2);
        lVar6 = param_2[4];
        if ((lVar6 != 0) && (*(int *)(lVar6 + 0x34) == 0)) {
          FUN_1005aca50(param_1,param_2,lVar6 + 0x40,*(undefined4 *)(lVar6 + 0x38));
          return;
        }
        return;
      }
      puVar5 = operator_new__(0x20000,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar5 != (undefined8 *)0x0) {
        puVar8 = puVar5;
        do {
          puVar8[1] = 0xffffffffffffffff;
          *puVar8 = 0xffffffffffffffff;
          puVar8[3] = 0;
          puVar8[2] = 0;
          puVar8[5] = 0xffffffffffffffff;
          puVar8[4] = 0xffffffffffffffff;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0xffffffffffffffff;
          puVar8[8] = 0xffffffffffffffff;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0xffffffffffffffff;
          puVar8[0xc] = 0xffffffffffffffff;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x11] = 0xffffffffffffffff;
          puVar8[0x10] = 0xffffffffffffffff;
          puVar8[0x13] = 0;
          puVar8[0x12] = 0;
          puVar8[0x15] = 0xffffffffffffffff;
          puVar8[0x14] = 0xffffffffffffffff;
          puVar8[0x17] = 0;
          puVar8[0x16] = 0;
          puVar8[0x19] = 0xffffffffffffffff;
          puVar8[0x18] = 0xffffffffffffffff;
          puVar8[0x1b] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x1d] = 0xffffffffffffffff;
          puVar8[0x1c] = 0xffffffffffffffff;
          puVar8[0x1f] = 0;
          puVar8[0x1e] = 0;
          puVar8 = puVar8 + 0x20;
        } while (puVar8 != puVar5 + 0x4000);
        param_2[1] = (long)puVar5;
        lVar6 = param_2[4];
        *(undefined8 **)(lVar6 + 0x10 + (ulong)*(uint *)(lVar6 + 0x30) * 0x10) = puVar5;
        uVar2 = *(uint *)(lVar6 + 0x30);
        *(undefined4 *)(lVar6 + 0x18 + (ulong)uVar2 * 0x10) = *(undefined4 *)((long)param_1 + 0x34);
        *(uint *)(lVar6 + 0x30) = uVar2 + 1;
        goto LAB_1005ac579;
      }
    }
    FUN_1008e3970("","vdisk",0,"Table memory allocation failed. Error code");
    pcVar7 = "Error: allocating table";
  }
  FUN_1008e3970("","vdisk",0,pcVar7);
  if ((void *)*param_2 != (void *)0x0) {
    operator_delete__((void *)*param_2);
    *param_2 = 0;
  }
  if ((void *)param_2[1] != (void *)0x0) {
    operator_delete__((void *)param_2[1]);
    param_2[1] = 0;
  }
  if ((void *)param_2[4] != (void *)0x0) {
    operator_delete((void *)param_2[4]);
    param_2[4] = 0;
  }
  operator_delete(plVar4);
  QMutex::unlock();
LAB_1005ac10d:
                    /* WARNING: Could not recover jumptable at 0x0001005ac11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,0x80000002,0);
  return;
}

