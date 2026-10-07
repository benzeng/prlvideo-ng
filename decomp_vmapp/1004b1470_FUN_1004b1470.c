
void FUN_1004b1470(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  QArrayData *local_60;
  QArrayData *local_58;
  undefined8 local_50;
  undefined1 local_48 [23];
  undefined1 local_31;
  
  uVar2 = FUN_10052a260(param_3);
  switch(uVar2) {
  case 0:
    QMutex::lock();
    local_58 = (QArrayData *)*param_2;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    FUN_1004b0100(param_1,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_58,2,8);
    }
    break;
  case 1:
    puVar4 = (undefined8 *)FUN_10052a290(param_3);
    iVar3 = FUN_10052a2c0(param_3);
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",3,"ChrControl_StartCoherence: baseX=%d; baseY=%d",
                    *(undefined4 *)puVar4,*(undefined4 *)((long)puVar4 + 4));
    }
    FUN_1004b79c0((double)*(uint *)(puVar4 + 1),*(undefined8 *)(param_1 + 0xf0));
    FUN_10052a9a0(local_48,puVar4 + 2,iVar3 + -0x10);
    local_50 = *puVar4;
    FUN_1004af850(param_1,param_2,&local_50,local_48);
    puVar11 = local_48;
    goto LAB_1004b18b2;
  case 2:
    puVar5 = (undefined4 *)FUN_10052a290(param_3);
    iVar3 = FUN_10052a2c0(param_3);
    if (1 < DAT_1011b55f8) {
      uVar2 = *puVar5;
      uVar1 = puVar5[1];
      uVar9 = puVar5[2];
      uVar8 = FUN_1004b7a50(*(undefined8 *)(param_1 + 0xf0));
      FUN_1008e3970((double)uVar9,uVar8,"CHRSERVER","ChrToolSrv",2,
                    "ChrControl_ChangeResolution: baseX=%d; baseY=%d. New scale = %f (old = %f)",
                    uVar2,uVar1);
    }
    FUN_1004b79e0((double)(uint)puVar5[2],*(undefined8 *)(param_1 + 0xf0));
    FUN_10052a9a0(local_70,puVar5 + 4,iVar3 + -0x10);
    local_78 = *puVar5;
    local_74 = puVar5[1];
    FUN_1004b0570(param_1,local_70,&local_78);
    puVar11 = local_70;
LAB_1004b18b2:
    FUN_10052a6d0(puVar11);
    return;
  case 3:
    iVar3 = FUN_10052a2c0(param_3);
    if (iVar3 != 0x10) {
      return;
    }
    puVar5 = (undefined4 *)FUN_10052a290(param_3);
    if (puVar5 == (undefined4 *)0x0) {
      return;
    }
    FUN_1004b1a30(param_1,*puVar5,puVar5[1],puVar5 + 2);
    return;
  case 4:
    uVar9 = FUN_10052a2c0(param_3);
    uVar2 = 0;
    if (0xf < uVar9) {
      puVar5 = (undefined4 *)FUN_10052a290(param_3,0);
      uVar2 = *puVar5;
    }
    FUN_1004b1ae0(param_1,uVar2);
    return;
  default:
    goto switchD_1004b14ab_caseD_5;
  case 6:
    QMutex::lock();
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",1,
                    "ChrControl_ForcedStopCoherence: started=%d inProgress=%d",
                    (*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2,*(undefined1 *)(param_1 + 0x8c));
    }
    if (*(char *)(param_1 + 0x8c) == '\0') {
      local_60 = (QArrayData *)*param_2;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
      FUN_1004b0100(param_1,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_60,2,8);
      }
    }
    else {
      pvVar6 = operator_new(0x18);
      *(undefined4 *)((long)pvVar6 + 4) = 0;
      FUN_1004ae8a0(param_1,pvVar6,param_1 + 0x98,0);
      FUN_10052acc0(param_1 + 0xf8);
      if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
        FUN_10052acc0(param_1 + 0x108);
      }
      *(undefined1 *)(param_1 + 0x8d) = 1;
      *(undefined1 *)(param_1 + 0x8c) = 0;
    }
    break;
  case 0x10:
    iVar3 = FUN_10052a2c0(param_3);
    if (iVar3 != 0x24) {
      return;
    }
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20);
    uVar10 = FUN_10052a290(param_3);
    FUN_1004b8f00(uVar8,uVar10);
    goto LAB_1004b17ae;
  case 0x11:
    puVar7 = (uint *)FUN_10052a290(param_3);
    if (*puVar7 != 0) {
      puVar12 = puVar7 + 1;
      uVar9 = 0;
      do {
        FUN_1004b8f00(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20),puVar12);
        uVar9 = uVar9 + 1;
        puVar12 = puVar12 + 9;
      } while (uVar9 < *puVar7);
    }
LAB_1004b17ae:
    uVar8 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
    uVar10 = 1;
LAB_1004b17e8:
    FUN_1002af2c0(uVar8,uVar10);
    return;
  case 0x12:
    if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) != 2) {
      return;
    }
    FUN_1004b7a70(*(undefined8 *)(param_1 + 0xf0));
    uVar8 = FUN_100097250(*(undefined8 *)(param_1 + 0x78));
    uVar10 = 0;
    goto LAB_1004b17e8;
  }
  QMutex::unlock();
switchD_1004b14ab_caseD_5:
  return;
}

