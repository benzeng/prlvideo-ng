
void FUN_1000df690(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  uint *local_50;
  uint *local_48;
  QArrayData *local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x70);
  puVar5 = *(uint **)(param_1 + 0x70);
  if (1 < *puVar5) {
    FUN_1000e7920(puVar1,puVar5[1]);
    puVar5 = (uint *)*puVar1;
  }
  plVar2 = (long *)(param_1 + 0x58);
  puVar6 = puVar5 + (long)(int)puVar5[2] * 2 + 4;
  do {
    while( true ) {
      if (1 < *puVar5) {
        FUN_1000e7920(puVar1,puVar5[1]);
        puVar5 = (uint *)*puVar1;
      }
      if (puVar6 == puVar5 + (long)(int)puVar5[3] * 2 + 4) {
        QMutex::unlock();
        return;
      }
      piVar8 = (int *)0x0;
      if (**(long **)puVar6 != 0) {
        piVar8 = *(int **)(**(long **)puVar6 + 0x10);
      }
      iVar4 = _GetProcessPID(piVar8,local_38);
      if (iVar4 != 0) break;
      puVar6 = puVar6 + 2;
      puVar5 = (uint *)*puVar1;
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"Helper with psn={%u, %u} not running anymore",*piVar8
                    ,piVar8[1]);
    }
    puVar5 = (uint *)*plVar2;
    if ((int)puVar5[2] < (int)puVar5[3]) {
      uVar7 = 0;
      do {
        if (1 < *puVar5) {
          FUN_1000e6e10(plVar2,puVar5[1]);
          puVar5 = (uint *)*plVar2;
        }
        if ((*(int *)(*(long *)(puVar5 + (uVar7 + (long)(int)puVar5[2]) * 2 + 4) + 0x30) == *piVar8)
           && (*(int *)(*(long *)(puVar5 + (uVar7 + (long)(int)puVar5[2]) * 2 + 4) + 0x34) ==
               piVar8[1])) {
          if (-1 < (int)uVar7) {
            if (1 < *puVar5) {
              FUN_1000e6e10(plVar2,puVar5[1]);
            }
            if (0 < DAT_10230ffd0) {
              iVar4 = *piVar8;
              iVar3 = piVar8[1];
              QString::toUtf8();
              FUN_100df99c0("SGAC","prl_client_app",1,
                            "Warning: helper with psn={%u, %u} (bundlePath=\"%s\") registered but not running anymore"
                            ,iVar4,iVar3,local_40 + *(long *)(local_40 + 0x10));
              if (*(int *)local_40 != -1) {
                if (*(int *)local_40 != 0) {
                  LOCK();
                  *(int *)local_40 = *(int *)local_40 + -1;
                  local_31 = *(int *)local_40 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000df8b3;
                }
                QArrayData::deallocate(local_40,1,8);
              }
            }
LAB_1000df8b3:
            if ((int)uVar7 < *(int *)(*plVar2 + 0xc) - *(int *)(*plVar2 + 8)) {
              FUN_1000e53a0(plVar2,uVar7 & 0xffffffff);
              FUN_1000df020(param_1);
              FUN_1000df110(param_1);
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
    }
    local_50 = puVar6;
    FUN_1000e5130(&local_48,puVar1,&local_50);
    puVar5 = (uint *)*puVar1;
    puVar6 = local_48;
  } while( true );
}

