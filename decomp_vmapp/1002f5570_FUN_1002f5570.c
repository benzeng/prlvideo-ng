
undefined8 FUN_1002f5570(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  byte bVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint local_3c;
  short local_38;
  byte local_35 [5];
  
  uVar10 = 1;
  if (*(char *)(*(long *)(param_1 + 0x10) + 0xca) != '\0') {
    plVar7 = (long *)FUN_1002d7140(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 2));
    uVar10 = 0;
    if (plVar7 != (long *)0x0) {
      local_35[4] = 0;
      iVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,local_35 + 4);
      if (iVar5 != 0) {
        local_35[4] = 0x10;
      }
      bVar8 = 0;
      do {
        local_35[3] = '\0';
        local_35[2] = 0;
        local_35[1] = 0;
        local_35[0] = 0;
        local_38 = 0;
        pbVar11 = local_35;
        iVar5 = (**(code **)(*plVar7 + 0xd0))
                          (plVar7,bVar8,local_35 + 3,local_35 + 2,local_35 + 1,&local_38,pbVar11);
        uVar13 = (undefined4)((ulong)pbVar11 >> 0x20);
        if (iVar5 == 0) {
          bVar4 = local_35[2];
          if (local_35[3] == '\x01') {
            bVar4 = local_35[2] | 0x80;
          }
          lVar2 = *(long *)(param_1 + 0x10);
          if (bVar4 == *(byte *)(lVar2 + 0xca)) {
            *(byte *)(param_1 + 0x18) = bVar8;
            *(long **)(param_1 + 0x20) = plVar7;
            if ((((local_38 == 0) || (local_35[0] == 0)) &&
                ((bVar8 = *(byte *)(lVar2 + 0xcb) & 3, bVar8 == 1 || (bVar8 == 3)))) &&
               (-1 < DAT_1011c568c)) {
              uVar10 = CONCAT44(uVar13,(uint)local_35[0]);
              FUN_1008e3970("","USB",0,"[%s] Problems with bandwidth allocation MPS=%u Int=%u",
                            lVar2 + 0xcf,local_38,uVar10);
              uVar13 = (undefined4)((ulong)uVar10 >> 0x20);
            }
            break;
          }
        }
        bVar8 = bVar8 + 1;
      } while (bVar8 <= local_35[4]);
      plVar9 = (long *)(param_1 + 0x20);
      plVar7 = (long *)*plVar9;
      uVar10 = 0;
      if (plVar7 != (long *)0x0) {
        uVar10 = 1;
        if ((*(byte *)(*(long *)(param_1 + 0x10) + 0xcb) & 3) == 1) {
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x104);
          uVar10 = 1;
          iVar5 = (**(code **)(*plVar7 + 0x170))
                            (plVar7,*(undefined1 *)(param_1 + 0x18),uVar1 & 0xffff,1);
          if (iVar5 != 0) {
            local_3c = 0;
            iVar5 = (**(code **)(*(long *)*plVar9 + 0x178))((long *)*plVar9,&local_3c);
            if (-1 < DAT_1011c568c) {
              uVar12 = CONCAT44(uVar13,uVar1);
              FUN_1008e3970("","USB",0,"[%s] Failed to allocate bandwidth: BW=%u MPS=%u ret=0x%x\n",
                            *(long *)(param_1 + 0x10) + 0xcf,local_3c,uVar12,iVar5);
              uVar13 = (undefined4)((ulong)uVar12 >> 0x20);
            }
            if (iVar5 == 0) {
              uVar3 = local_3c;
              if (uVar1 < local_3c) {
                uVar3 = uVar1;
              }
              uVar10 = 1;
              uVar6 = (**(code **)(*(long *)*plVar9 + 0x170))
                                ((long *)*plVar9,*(undefined1 *)(param_1 + 0x18),uVar3 & 0xffff,1);
              if (-1 < DAT_1011c568c) {
                FUN_1008e3970("","USB",0,"[%s] Taking available bandwidth %u ret=0x%x\n",
                              *(long *)(param_1 + 0x10) + 0xcf,uVar3,CONCAT44(uVar13,uVar6));
              }
            }
          }
        }
      }
    }
  }
  return uVar10;
}

