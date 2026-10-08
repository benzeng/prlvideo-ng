
void FUN_1000de660(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined1 local_5c [4];
  QArrayData *local_58;
  QArrayData *local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  puVar8 = *(uint **)(param_1 + 0x58);
  if ((int)puVar8[2] < (int)puVar8[3]) {
    puVar11 = (undefined8 *)(param_1 + 0x58);
    puVar1 = (undefined8 *)(param_1 + 0x70);
    uVar13 = 0;
    do {
      if (1 < *puVar8) {
        FUN_1000e6e10(puVar11,puVar8[1]);
        puVar8 = (uint *)*puVar11;
      }
      lVar3 = *(long *)(puVar8 + ((long)(int)puVar8[2] + uVar13) * 2 + 4);
      piVar2 = (int *)(lVar3 + 0x30);
      iVar7 = *(int *)(lVar3 + 0x34);
      if ((((iVar7 != 0) || (*piVar2 != 0)) &&
          ((*(int *)(param_1 + 0x21c) != iVar7 || (*(int *)(param_1 + 0x218) != *piVar2)))) &&
         ((*(int *)(param_1 + 0x214) != iVar7 || (*(int *)(param_1 + 0x210) != *piVar2)))) {
        FUN_1000c4970(piVar2,0x6c,0,0);
        pQVar4 = *(QArrayData **)(lVar3 + 8);
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        puVar8 = (uint *)*puVar1;
        if (1 < *puVar8) {
          FUN_1000e7920(puVar1,puVar8[1]);
          puVar8 = (uint *)*puVar1;
        }
        puVar14 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
        while( true ) {
          if (1 < *puVar8) {
            FUN_1000e7920(puVar1,puVar8[1]);
            puVar8 = (uint *)*puVar1;
          }
          if (puVar14 == puVar8 + (long)(int)puVar8[3] * 2 + 4) break;
          piVar9 = (int *)0x0;
          if (**(long **)puVar14 != 0) {
            piVar9 = *(int **)(**(long **)puVar14 + 0x10);
          }
          if ((piVar9[1] == *(int *)(lVar3 + 0x34)) && (*piVar9 == *piVar2)) {
            local_48 = puVar14;
            FUN_1000e5130(&local_40,puVar1,&local_48);
            puVar8 = (uint *)*puVar1;
            puVar14 = local_40;
          }
          else {
            puVar14 = puVar14 + 2;
          }
        }
        FUN_1000ddd20(param_1,uVar13 & 0xffffffff);
        local_50 = *(QArrayData **)(param_1 + 0x10);
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        if (1 < *(int *)local_50 + 1U) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
        }
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        local_58 = pQVar4;
        FUN_1000b0b40(uVar6,&local_50,&local_58,uVar5);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000de876;
          }
          QArrayData::deallocate(local_58,2,8);
        }
LAB_1000de876:
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000de8a6;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1000de8a6:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000de8e0;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
LAB_1000de8e0:
      uVar13 = uVar13 + 1;
      puVar8 = (uint *)*puVar11;
    } while ((long)uVar13 < (long)(int)puVar8[3] - (long)(int)puVar8[2]);
  }
  plVar10 = (long *)(param_1 + 0x70);
  lVar3 = *plVar10;
  if (*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0xc)) {
    puVar11 = (undefined8 *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8);
    do {
      puVar12 = (undefined4 *)0x0;
      if (*(long *)*puVar11 != 0) {
        puVar12 = *(undefined4 **)(*(long *)*puVar11 + 0x10);
      }
      iVar7 = _GetProcessPID(puVar12,local_5c);
      if (iVar7 == 0) {
        FUN_1000ddc60(param_1,puVar12);
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",1,
                        "Warning: helper with psn={%u, %u} is running, bun not registered. Finish him!"
                        ,*puVar12,puVar12[1]);
        }
        FUN_1000c4970(puVar12,0x6c,0,0);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != (undefined8 *)(*plVar10 + 0x10 + (long)*(int *)(*plVar10 + 0xc) * 8));
  }
  FUN_1000e51f0(plVar10);
  QMutex::unlock();
  return;
}

