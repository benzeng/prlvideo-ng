
void FUN_100b24b10(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar8 = param_2 % 0x10;
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] === UsedBlocksMap info",*param_1);
  }
  if ((0 < iVar8) && (DAT_10230ffd0 < iVar8)) goto LAB_100b24c44;
  plVar1 = (long *)*param_1;
  (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0xd0))
            (&local_48,(long)plVar1 + *(long *)(*plVar1 + -0x18));
  QString::toUtf8();
  FUN_100df99c0("Compact","dimg",param_2,"[%p] Path: %s",plVar1,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b24c0a;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b24c0a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b24c44;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b24c44:
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] State: %d",*param_1,
                  *(undefined4 *)((long)param_1 + 0x14));
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] Blocks used: %u",*param_1,(int)param_1[2]);
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    lVar2 = *(long *)(*param_1 + 0x20);
    FUN_100df99c0("Compact","dimg",param_2,"[%p] Compact limit offset:: %u",*param_1,
                  *(int *)(lVar2 + 0x10) * (int)param_1[2] +
                  (int)(*(ulong *)(lVar2 + 0x20) /
                       *(ulong *)(*(long *)(**(long **)(lVar2 + 0x38) + -0x18) + 0x38 +
                                 (long)*(long **)(lVar2 + 0x38))));
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] Not aligned: %u",*param_1,(int)param_1[3]);
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] Out of disk: %u",*param_1,
                  *(undefined4 *)((long)param_1 + 0x1c));
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] Duplucated: %u",*param_1,(int)param_1[4]);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
      FUN_100df99c0("Compact","dimg",param_2,"[%p] Blocks total: %u",*param_1,
                    *(undefined4 *)param_1[1]);
    }
    if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
      FUN_100df99c0("Compact","dimg",param_2,"[%p] Map of the allocated blocks:",*param_1);
    }
    puVar9 = (uint *)param_1[1];
    if (*puVar9 == 0) {
      local_50 = 0xffffffff;
      bVar11 = false;
      uVar10 = 0xffffffff;
    }
    else {
      local_50 = 0xffffffff;
      uVar12 = 0;
      bVar11 = false;
      uVar10 = 0xffffffff;
      do {
        iVar6 = FUN_100ddc970(puVar9,uVar12);
        if (iVar6 < 0) {
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
          plVar1 = (long *)*param_1;
          (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
                    ((long)plVar1 + *(long *)(*plVar1 + -0x18));
        }
        uVar3 = uVar12;
        uVar4 = uVar12;
        bVar5 = 0 < iVar6;
        if (uVar10 != 0xffffffff) {
          if (0 < iVar6 == bVar11) {
            uVar3 = uVar10;
            uVar4 = local_50 + 1;
            bVar5 = bVar11;
          }
          else {
            if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
              pcVar7 = "Unused";
              if (bVar11) {
                pcVar7 = "Used";
              }
              FUN_100df99c0("Compact","dimg",param_2,"[%p] range[%u, %u] - %s",*param_1,uVar10,
                            local_50,pcVar7);
            }
            iVar6 = FUN_100ddc970(param_1[1],uVar12);
            if (iVar6 < 0) {
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
              plVar1 = (long *)*param_1;
              (**(code **)(*(long *)((long)plVar1 + *(long *)(*plVar1 + -0x18)) + 0x1a0))
                        ((long)plVar1 + *(long *)(*plVar1 + -0x18));
            }
            bVar5 = 0 < iVar6;
          }
        }
        bVar11 = bVar5;
        local_50 = uVar4;
        uVar10 = uVar3;
        uVar12 = uVar12 + 1;
        puVar9 = (uint *)param_1[1];
      } while (uVar12 < *puVar9);
    }
    if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
      pcVar7 = "Unused";
      if (bVar11 != false) {
        pcVar7 = "Used";
      }
      FUN_100df99c0("Compact","dimg",param_2,"[%p] range[%u, %u] - %s",*param_1,uVar10,local_50,
                    pcVar7);
    }
  }
  if ((iVar8 < 1) || (iVar8 <= DAT_10230ffd0)) {
    FUN_100df99c0("Compact","dimg",param_2,"[%p] ==============",*param_1);
  }
  return;
}

