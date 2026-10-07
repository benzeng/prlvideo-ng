
undefined8 FUN_1003913b0(undefined8 *param_1,uint param_2)

{
  uint5 uVar1;
  uint6 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 local_38;
  
  plVar9 = (long *)param_1[2];
  if ((plVar9[1] == *plVar9) || (uVar5 = 5, *(ushort *)(plVar9[1] + -8) <= param_2)) {
    puVar7 = (uint *)*param_1;
    puVar8 = (uint *)param_1[1];
    uVar5 = 0;
    if (puVar7 < puVar8) {
      iVar10 = 0;
      do {
        uVar4 = *puVar7;
        if (uVar4 >> 0x1d != 0) {
          if (uVar4 >> 0x1d != 2) break;
          if ((uVar4 & 0x10000000) == 0) {
            uVar6 = uVar4 & 0x1f;
            if (0x10 < uVar6) {
              return 1;
            }
            local_38._0_4_ = CONCAT22((short)iVar10,(short)param_2);
            local_38._0_5_ = CONCAT14((char)(uVar4 >> 0x10),(undefined4)local_38) & 0xfffffffff;
            uVar1 = (uint5)local_38;
            local_38 = (ulong)(uint5)local_38;
            uVar3 = local_38;
            local_38._0_6_ = (uint6)uVar1;
            uVar2 = (uint6)local_38;
            if (uVar6 < 0x11) {
              local_38._0_6_ = (uint6)uVar1;
              switch(uVar6) {
              case 0:
                goto switchD_100391453_caseD_0;
              case 1:
                local_38._0_7_ = CONCAT16(1,uVar2);
                local_38 = (ulong)(uint7)local_38;
                break;
              case 2:
                local_38._0_7_ = CONCAT16(2,(uint6)local_38);
                local_38 = (ulong)(uint7)local_38;
                break;
              case 3:
                local_38._0_7_ = CONCAT16(3,(uint6)local_38);
                local_38 = (ulong)(uint7)local_38;
                break;
              case 4:
                local_38._0_7_ = CONCAT16(4,(uint6)local_38);
                local_38 = (ulong)(uint7)local_38;
                break;
              case 5:
                local_38._0_7_ = CONCAT16(10,(uint6)local_38);
                local_38 = (ulong)(uint7)local_38;
                break;
              case 6:
                local_38._0_7_ = CONCAT16(10,(uint6)local_38);
                local_38 = CONCAT17(1,(uint7)local_38);
                break;
              default:
                local_38._0_7_ = CONCAT16(5,(uint6)local_38);
                local_38 = CONCAT17((char)uVar6 + -7,(uint7)local_38);
                break;
              case 0xf:
                local_38._0_7_ = (uint7)uVar1;
                local_38 = CONCAT17(1,(uint7)local_38);
                break;
              case 0x10:
                local_38._0_7_ = CONCAT16(3,(uint6)local_38);
                local_38 = CONCAT17(1,(uint7)local_38);
              }
            }
            else {
switchD_100391453_caseD_0:
              local_38 = uVar3;
            }
            if ((ulong *)plVar9[1] == (ulong *)plVar9[2]) {
              FUN_100340410(plVar9,&local_38);
            }
            else {
              *(ulong *)plVar9[1] = local_38;
              plVar9[1] = plVar9[1] + 8;
            }
            plVar9 = (long *)param_1[2];
            uVar4 = 0;
            if ((ulong)*(byte *)(plVar9[1] + -4) < 0x11) {
              uVar4 = (uint)*(ushort *)(&DAT_100b3ed60 + (ulong)*(byte *)(plVar9[1] + -4) * 2);
            }
            iVar10 = iVar10 + uVar4;
            puVar7 = (uint *)*param_1;
            puVar8 = (uint *)param_1[1];
          }
          else {
            iVar10 = iVar10 + (uVar4 >> 0xe & 0x3c);
          }
        }
        puVar7 = puVar7 + 1;
        *param_1 = puVar7;
      } while (puVar7 < puVar8);
      uVar5 = 0;
    }
  }
  return uVar5;
}

