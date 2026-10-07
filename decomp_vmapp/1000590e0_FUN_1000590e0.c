
void FUN_1000590e0(long param_1)

{
  void *pvVar1;
  long *plVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  undefined8 auStack_33f8 [274];
  undefined4 local_2b68;
  undefined8 local_2b58 [274];
  undefined4 local_22c8;
  long *local_22c0;
  undefined8 local_22b8 [274];
  undefined4 local_1a28;
  long *local_1a20;
  undefined8 local_1a18 [274];
  undefined4 local_1188;
  long *local_1180;
  long *local_1178;
  undefined *local_1170;
  QArrayData *local_1168;
  undefined1 local_1159;
  undefined1 local_1158 [8];
  undefined4 local_1150;
  undefined8 local_114c;
  undefined1 local_8c0 [8];
  undefined4 local_8b8;
  undefined8 local_8b4;
  
  bVar12 = 0;
  pvVar1 = (void *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 < 0x115) {
    if (iVar6 == 0x102) {
LAB_1000591a9:
      plVar7 = operator_new(0x78);
      lVar9 = *(long *)(param_1 + 0x10);
      pQVar4 = *(QArrayData **)(lVar9 + 0x70);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_1159 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_1170 = PTR_shared_null_100ba2188;
      local_1168 = pQVar4;
      FUN_1000539a0(plVar7,lVar9,&local_1168,0,&local_1170);
      FUN_100013180(&local_1170);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_1159 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_1159) goto LAB_100059244;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_100059244:
      lVar9 = *(long *)(param_1 + 0x10);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_1180 = plVar7;
      FUN_100050e10(&local_1178,lVar9 + 0x78,&local_1180);
      if (local_1178 != (long *)0x0) {
        LOCK();
        plVar2 = local_1178 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*local_1178 + 0x10))();
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x8b0);
      _memcpy(local_1a18,pvVar1,0x894);
      puVar10 = local_1a18;
      puVar11 = auStack_33f8;
      for (lVar9 = 0x112; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      local_2b68 = local_1188;
      FUN_100054dc0(plVar7,uVar3);
      LOCK();
      plVar2 = plVar7 + 1;
      iVar6 = (int)*plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      goto LAB_100059379;
    }
    if (iVar6 != 0x104) {
LAB_100059302:
      FUN_100050e90(&local_22c0,*(long *)(param_1 + 0x10) + 0x78,*(undefined8 *)(param_1 + 0x24));
      if (local_22c0 == (long *)0x0) {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        local_8b4 = *(undefined8 *)(param_1 + 0x24);
        uVar5 = *(undefined8 *)(param_1 + 0x8b0);
        local_8b8 = 9;
        uVar8 = FUN_1002a6120(uVar5,1,1);
        FUN_1002a5a50(uVar8,0,local_8c0,0x894);
        FUN_1004c07d0(uVar3,uVar5,0);
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x8b0);
      _memcpy(local_2b58,pvVar1,0x894);
      puVar10 = local_2b58;
      puVar11 = auStack_33f8;
      for (lVar9 = 0x112; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
        puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
      }
      local_2b68 = local_22c8;
      FUN_100054dc0(local_22c0,uVar3);
      LOCK();
      plVar7 = local_22c0 + 1;
      iVar6 = (int)*plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      plVar7 = local_22c0;
      goto LAB_100059379;
    }
  }
  else if (iVar6 != 0x115) {
    if (iVar6 != 0x300) goto LAB_100059302;
    goto LAB_1000591a9;
  }
  FUN_100051010(&local_1a20,*(long *)(param_1 + 0x10) + 0x78,*(undefined8 *)(param_1 + 0x24));
  if (local_1a20 == (long *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    local_114c = *(undefined8 *)(param_1 + 0x24);
    uVar5 = *(undefined8 *)(param_1 + 0x8b0);
    local_1150 = 9;
    uVar8 = FUN_1002a6120(uVar5,1,1);
    FUN_1002a5a50(uVar8,0,local_1158,0x894);
    FUN_1004c07d0(uVar3,uVar5,0);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x8b0);
  _memcpy(local_22b8,pvVar1,0x894);
  puVar10 = local_22b8;
  puVar11 = auStack_33f8;
  for (lVar9 = 0x112; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
    puVar11 = puVar11 + (ulong)bVar12 * -2 + 1;
  }
  local_2b68 = local_1a28;
  FUN_100054dc0(local_1a20,uVar3);
  LOCK();
  plVar7 = local_1a20 + 1;
  iVar6 = (int)*plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  plVar7 = local_1a20;
LAB_100059379:
  if (iVar6 == 1) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}

