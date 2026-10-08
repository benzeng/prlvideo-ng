
void FUN_100ac50f0(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  iVar4 = (int)((ulong)param_2 >> 0x20);
  if (((iVar4 != *(int *)(param_1 + 0xab0)) || ((int)param_2 != *(int *)(param_1 + 0xaac))) &&
     ((iVar4 != *(int *)(param_1 + 0xab8) || ((int)param_2 != *(int *)(param_1 + 0xab4))))) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_28 = 0;
    puVar1 = (uint *)(param_3 + 0x28);
    if (*(int *)(param_3 + 0x2c) == 1) {
      local_48 = 7;
    }
    else {
      if (*(int *)(param_3 + 0x2c) != 0) {
        if (DAT_10230ffd0 < 1) {
          return;
        }
        FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                      "CoherenceEvents::ChrEvent_MetroVmApp - unknown event %d");
        return;
      }
      local_48 = 5;
      uVar3 = *puVar1;
      *(uint *)(param_1 + 0xacc) = uVar3;
      if (uVar3 != 0) {
        if (-1 < *(int *)(param_1 + 0xb38)) {
          QTimer::start((int)param_1 + 0xb28);
        }
        FUN_100adbaf0(param_1 + 0x100,0,1);
      }
    }
    uVar3 = *puVar1;
    uVar6 = 0;
    if ((uVar3 != 0) && (iVar4 = *(int *)(param_3 + 0x30), uVar6 = uVar3, 0 < iVar4)) {
      lVar8 = *(long *)(*(long *)(param_1 + 0xb00) + 0x10);
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          while (uVar9 = *(uint *)(lVar8 + 0x18), uVar9 < uVar3) {
            plVar2 = (long *)(lVar8 + 0x10);
            lVar8 = *plVar2;
            if (*plVar2 == 0) {
              if (lVar7 == 0) goto LAB_100ac5257;
              uVar9 = *(uint *)(lVar7 + 0x18);
              goto LAB_100ac523b;
            }
          }
          plVar2 = (long *)(lVar8 + 8);
          lVar7 = lVar8;
          lVar8 = *plVar2;
        } while (*plVar2 != 0);
LAB_100ac523b:
        if (uVar9 <= uVar3) {
          piVar5 = (int *)FUN_100ac80c0(param_1 + 0xb00,puVar1);
          *piVar5 = iVar4;
          uVar6 = *puVar1;
        }
      }
    }
LAB_100ac5257:
    local_48 = CONCAT44(1,(undefined4)local_48);
    local_38 = CONCAT44(local_38._4_4_,uVar6);
    FUN_100acb230(*(undefined8 *)(param_1 + 0x10),0x10,&local_48,0x24);
  }
  return;
}

