
void FUN_100ca5210(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong in_RAX;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined8 local_38;
  
  if ((*(byte *)((long)param_1 + 0x49) & 1) == 0) {
    local_38 = in_RAX;
    uVar5 = FUN_100c6ca00();
    FUN_100c9aa00(param_1,uVar5,param_1 + 0x13);
    uVar5 = FUN_100c92690(param_1);
    uVar6 = FUN_100c92460(param_1);
    iVar3 = FUN_100c92120(uVar5,uVar6);
    if (iVar3 == 0) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x20;
    }
    lVar7 = FUN_100c76990(*(undefined8 *)*param_1);
    if (lVar7 == 0) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x40;
    }
    piVar8 = (int *)FUN_100c97d30(param_1,0x57,0);
    if (piVar8 != (int *)0x0) {
      iVar3 = *piVar8;
      if (iVar3 != 0) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x10;
      }
      if (*(long *)(piVar8 + 2) == 0) {
        param_1[7] = 0xffffffffffffffff;
      }
      else if ((*(int *)(*(long *)(piVar8 + 2) + 4) == 0x102) || (iVar3 == 0)) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
        param_1[7] = 0;
      }
      else {
        uVar5 = FUN_100c76990();
        param_1[7] = uVar5;
      }
      FUN_100c9cc80(piVar8);
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
    }
    plVar9 = (long *)FUN_100c97d30(param_1,0x297,0);
    if (plVar9 != (long *)0x0) {
      if ((((*(byte *)(param_1 + 9) & 0x10) != 0) ||
          (iVar3 = FUN_100c97c70(param_1,0x55,0xffffffff), -1 < iVar3)) ||
         (iVar3 = FUN_100c97c70(param_1,0x56,0xffffffff), -1 < iVar3)) {
        *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
      }
      uVar5 = 0xffffffffffffffff;
      if (*plVar9 != 0) {
        uVar5 = FUN_100c76990();
      }
      param_1[8] = uVar5;
      FUN_100ca7ed0(plVar9);
      *(byte *)((long)param_1 + 0x49) = *(byte *)((long)param_1 + 0x49) | 4;
    }
    piVar8 = (int *)FUN_100c97d30(param_1,0x53,0);
    if (piVar8 != (int *)0x0) {
      iVar3 = *piVar8;
      if (iVar3 < 1) {
        param_1[10] = 0;
      }
      else {
        pbVar2 = *(byte **)(piVar8 + 2);
        bVar1 = *pbVar2;
        param_1[10] = (ulong)bVar1;
        if (1 < iVar3) {
          param_1[10] = (ulong)CONCAT11(pbVar2[1],bVar1);
        }
      }
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
      FUN_100c838a0(piVar8);
    }
    param_1[0xb] = 0;
    iVar3 = 0;
    lVar7 = FUN_100c97d30(param_1,0x7e,0);
    if (lVar7 != 0) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 4;
      local_38 = local_38 & 0xffffffff00000000;
      iVar4 = FUN_100c60800(lVar7);
      if (0 < iVar4) {
        do {
          uVar5 = FUN_100c60820(lVar7,iVar3);
          iVar4 = FUN_100bf7220(uVar5);
          if (iVar4 < 0xb4) {
            switch(iVar4) {
            case 0x81:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
              break;
            case 0x82:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 2;
              break;
            case 0x83:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
              break;
            case 0x84:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
              break;
            case 0x85:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x40;
              break;
            case 0x89:
            case 0x8b:
              *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
            }
          }
          else if (iVar4 == 0xb4) {
            *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
          }
          else if (iVar4 == 0x129) {
            *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x80;
          }
          iVar3 = iVar3 + 1;
          iVar4 = FUN_100c60800(lVar7);
        } while (iVar3 < iVar4);
        local_38 = CONCAT44(local_38._4_4_,iVar3);
      }
      FUN_100c60790(lVar7,FUN_100c74e10);
    }
    piVar8 = (int *)FUN_100c97d30(param_1,0x47,0);
    if (piVar8 != (int *)0x0) {
      uVar11 = 0;
      if (0 < *piVar8) {
        uVar11 = (ulong)**(byte **)(piVar8 + 2);
      }
      param_1[0xc] = uVar11;
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
      FUN_100c838a0(piVar8);
    }
    iVar3 = 0;
    uVar5 = FUN_100c97d30(param_1,0x52,0,0);
    param_1[0xd] = uVar5;
    uVar5 = FUN_100c97d30(param_1,0x5a,0,0);
    param_1[0xe] = uVar5;
    uVar5 = FUN_100c97d30(param_1,0x55,0,0);
    param_1[0x11] = uVar5;
    lVar7 = FUN_100c97d30(param_1,0x29a,&local_38,0);
    param_1[0x12] = lVar7;
    if ((lVar7 == 0) && ((int)local_38 != -1)) {
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
    }
    uVar5 = FUN_100c97d30(param_1,0x67,0,0);
    param_1[0x10] = uVar5;
    iVar4 = FUN_100c60800(uVar5);
    if (0 < iVar4) {
      do {
        puVar10 = (undefined8 *)FUN_100c60820(param_1[0x10],iVar3);
        piVar8 = (int *)puVar10[1];
        if (piVar8 == (int *)0x0) {
          *(undefined4 *)(puVar10 + 3) = 0x807f;
        }
        else {
          iVar4 = *piVar8;
          if (iVar4 < 1) {
            uVar12 = *(uint *)(puVar10 + 3);
          }
          else {
            pbVar2 = *(byte **)(piVar8 + 2);
            bVar1 = *pbVar2;
            uVar12 = (uint)bVar1;
            *(uint *)(puVar10 + 3) = (uint)bVar1;
            if (1 < iVar4) {
              uVar12 = (uint)CONCAT11(pbVar2[1],bVar1);
              *(uint *)(puVar10 + 3) = uVar12;
            }
          }
          *(uint *)(puVar10 + 3) = uVar12 & 0x807f;
        }
        if (((int *)*puVar10 != (int *)0x0) && (*(int *)*puVar10 == 1)) {
          iVar4 = FUN_100c60800(puVar10[2]);
          iVar13 = 0;
          if (0 < iVar4) {
            do {
              piVar8 = (int *)FUN_100c60820(puVar10[2],iVar13);
              if (*piVar8 == 4) {
                lVar7 = *(long *)(piVar8 + 2);
                if (lVar7 != 0) goto LAB_100ca564b;
                break;
              }
              iVar13 = iVar13 + 1;
              iVar4 = FUN_100c60800(puVar10[2]);
            } while (iVar13 < iVar4);
          }
          lVar7 = FUN_100c92460(param_1);
LAB_100ca564b:
          FUN_100ca4a90(*puVar10,lVar7);
        }
        iVar3 = iVar3 + 1;
        iVar4 = FUN_100c60800(param_1[0x10]);
      } while (iVar3 < iVar4);
    }
    local_38 = local_38 & 0xffffffff00000000;
    iVar3 = FUN_100c97c50(param_1);
    if (0 < iVar3) {
      do {
        uVar5 = FUN_100c97cd0(param_1,local_38 & 0xffffffff);
        uVar6 = FUN_100c97ae0(uVar5);
        iVar3 = FUN_100bf7220(uVar6);
        if (iVar3 == 0x359) {
          *(byte *)((long)param_1 + 0x49) = *(byte *)((long)param_1 + 0x49) | 0x10;
        }
        iVar3 = FUN_100c97b10(uVar5);
        if (iVar3 != 0) {
          uVar5 = FUN_100c97ae0(uVar5);
          iVar3 = FUN_100bf7220(uVar5);
          local_38 = CONCAT44(iVar3,(int)local_38);
          if ((iVar3 == 0) ||
             (lVar7 = FUN_100bf7eb0((long)&local_38 + 4,&DAT_101daef30,0xb,4,FUN_100ca64e0),
             lVar7 == 0)) {
            uVar11 = param_1[9] | 0x200;
            param_1[9] = uVar11;
            goto LAB_100ca5731;
          }
        }
        iVar4 = (int)local_38 + 1;
        local_38 = CONCAT44(local_38._4_4_,iVar4);
        iVar3 = FUN_100c97c50(param_1);
      } while (iVar4 < iVar3);
    }
    uVar11 = param_1[9];
LAB_100ca5731:
    param_1[9] = uVar11 | 0x100;
  }
  return;
}

