
undefined1 FUN_100758cc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long lVar15;
  code *pcVar16;
  undefined1 local_70 [64];
  long local_30;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar3;
  ___bzero(*(undefined8 *)(param_3 + 0x10),0xed00);
  cVar8 = FUN_100756cd0();
  if (cVar8 == '\0') {
    pcVar10 = "Failed to parse ELF header";
  }
  else {
    cVar8 = FUN_100757570();
    if (cVar8 == '\0') {
      pcVar10 = "Failed to read kcore sheaders";
    }
    else {
      cVar8 = FUN_100757370(param_1,param_2,param_3,local_70);
      if (cVar8 == '\0') {
        pcVar10 = "Failed to read kcore pheaders";
      }
      else {
        uVar2 = *(uint *)(param_3 + 0x18);
        uVar12 = 0;
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(param_3 + 0x10) + 0x270);
          uVar12 = 0;
          do {
            if (*piVar9 != 0) break;
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulong)uVar11;
            piVar9 = piVar9 + 0x1da;
          } while (uVar11 < uVar2);
        }
        if ((uint)uVar12 != uVar2) {
          lVar4 = *(long *)(param_3 + 0x10);
          lVar15 = uVar12 * 0x768;
          if ((*(byte *)(lVar4 + 0x233 + lVar15) & 0x80) == 0) {
            *(undefined4 *)(param_3 + 0x38) = 4;
            pcVar16 = FUN_10078bf20;
          }
          else {
            sVar1 = *(short *)(lVar4 + 0x220 + lVar15);
            if (sVar1 == 0x40) {
              *(undefined4 *)(param_3 + 0x38) = 3;
              pcVar16 = FUN_10078c280;
            }
            else if (sVar1 == 0x20) {
              if ((*(byte *)(lVar4 + 0x98 + lVar15) & 0x20) == 0) {
                *(undefined4 *)(param_3 + 0x38) = 1;
                pcVar16 = FUN_10078bf40;
              }
              else {
                *(undefined4 *)(param_3 + 0x38) = 2;
                pcVar16 = FUN_10078c0a0;
              }
            }
            else {
              *(undefined4 *)(param_3 + 0x38) = 0;
              pcVar16 = FUN_10078bf30;
            }
          }
          *(code **)(param_3 + 0x40) = pcVar16;
          *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(DAT_1011ccb80 + 0x10);
          *(code **)(param_3 + 0x28) = FUN_100758f90;
          *(code **)(param_3 + 0x30) = FUN_100759020;
          if (uVar2 != 0) {
            puVar13 = (undefined8 *)(lVar4 + 0x760);
            uVar11 = 0;
            do {
              if ((puVar13[-0xa6] & 0x80000000) == 0) {
                *(undefined4 *)(puVar13 + -1) = 4;
                *puVar13 = FUN_10078bf20;
              }
              else if (*(short *)(puVar13 + -0xa8) == 0x40) {
                *(undefined4 *)(puVar13 + -1) = 3;
                *puVar13 = FUN_10078c280;
              }
              else if (*(short *)(puVar13 + -0xa8) == 0x20) {
                if ((*(byte *)(puVar13 + -0xd9) & 0x20) == 0) {
                  *(undefined4 *)(puVar13 + -1) = 1;
                  *puVar13 = FUN_10078bf40;
                }
                else {
                  *(undefined4 *)(puVar13 + -1) = 2;
                  *puVar13 = FUN_10078c0a0;
                }
              }
              else {
                *(undefined4 *)(puVar13 + -1) = 0;
                *puVar13 = FUN_10078bf30;
              }
              uVar5 = *(undefined4 *)(param_3 + 0x24);
              uVar6 = *(undefined4 *)(param_3 + 0x28);
              uVar7 = *(undefined4 *)(param_3 + 0x2c);
              *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(param_3 + 0x20);
              *(undefined4 *)((long)puVar13 + -0x1c) = uVar5;
              *(undefined4 *)(puVar13 + -3) = uVar6;
              *(undefined4 *)((long)puVar13 + -0x14) = uVar7;
              puVar13[-2] = *(undefined8 *)(param_3 + 0x30);
              uVar11 = uVar11 + 1;
              puVar13 = puVar13 + 0xed;
            } while (uVar11 < uVar2);
          }
          FUN_1008e3970("","dbgdump",0,"Memory initialized");
          uVar14 = 1;
          goto LAB_100758dcb;
        }
        pcVar10 = "No valid VCPU context found!";
      }
    }
  }
  uVar14 = 0;
  FUN_1008e3970("","dbgdump",0,pcVar10);
LAB_100758dcb:
  if (lVar3 == local_30) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

