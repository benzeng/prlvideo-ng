
undefined8 FUN_100bcc5c0(uint *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [46];
  undefined1 auStack_aa [66];
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_dc = 0;
  local_38 = lVar8;
  FUN_100c65850(local_d8);
  lVar6 = 0;
  if (param_1[0x12] == 0x1190) {
    puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
    piVar2 = *(int **)(**(long **)(param_1 + 0x40) + 8);
    lVar6 = FUN_100c71540(piVar2,0);
    if ((lVar6 == 0) || (iVar4 = FUN_100c71dd0(lVar6), iVar4 < 1)) {
      FUN_100c62ee0(0x14,0x99,0x44,"s3_clnt.c",0xc2b);
    }
    else {
      uVar7 = FUN_100c6ca00();
      iVar4 = FUN_100c71a40(lVar6,0xffffffff,0xf8,1,0,uVar7);
      if (iVar4 < 1) {
        FUN_100c63270();
      }
      else if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
        (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x38))(param_1,0x40,local_58);
      }
      if (((int)*param_1 < 0x303) || ((*param_1 & 0xffffff00) != 0x300)) {
        iVar4 = *piVar2;
        lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (iVar4 < 0x74) {
          if (iVar4 == 6) {
            (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x38))(param_1,4,local_68);
            iVar4 = FUN_100c47970(0x72,local_68,0x24,puVar1 + 6,&local_dc,
                                  *(undefined8 *)(piVar2 + 8));
            if (0 < iVar4) {
              puVar1[4] = local_dc._1_1_;
              puVar1[5] = (undefined1)local_dc;
              iVar4 = local_dc;
LAB_100bcca50:
              iVar4 = iVar4 + 2;
              goto LAB_100bcca53;
            }
            FUN_100c62ee0(0x14,0x99,4,"s3_clnt.c",0xc5a);
          }
          else {
LAB_100bccaa0:
            FUN_100c62ee0(0x14,0x99,0x44,"s3_clnt.c",0xc8c);
          }
        }
        else if (iVar4 - 0x32bU < 2) {
          local_f0 = 0x40;
          (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x38))(param_1,0x329,local_68);
          iVar4 = FUN_100c71e50(lVar6,auStack_aa + 2,&local_f0,local_68,0x20);
          if (0 < iVar4) {
            local_e0 = 0;
            lVar9 = 0x40;
            do {
              iVar4 = local_e0;
              puVar1[(long)local_e0 + 6] = auStack_aa[lVar9 + 1];
              puVar1[(long)local_e0 + 7] = auStack_aa[lVar9];
              local_e0 = local_e0 + 2;
              lVar10 = lVar9 + -2;
              bVar3 = 1 < lVar9;
              lVar9 = lVar10;
            } while (lVar10 != 0 && bVar3);
            puVar1[4] = (char)((uint)local_e0 >> 8);
            puVar1[5] = (undefined1)local_e0;
            iVar4 = iVar4 + 4;
            goto LAB_100bcca53;
          }
          FUN_100c62ee0(0x14,0x99,0x44,"s3_clnt.c",0xc83);
        }
        else if (iVar4 == 0x74) {
          iVar4 = FUN_100c4d9a0(piVar2[1],local_58,0x14,puVar1 + 6,&local_e0,
                                *(undefined8 *)(piVar2 + 8));
          if (iVar4 != 0) {
LAB_100bcca2f:
            puVar1[4] = local_e0._1_1_;
            puVar1[5] = (undefined1)local_e0;
            iVar4 = local_e0;
            goto LAB_100bcca50;
          }
          FUN_100c62ee0(0x14,0x99,10,"s3_clnt.c",0xc67);
        }
        else {
          if (iVar4 != 0x198) goto LAB_100bccaa0;
          iVar4 = FUN_100c50fe0(piVar2[1],local_58,0x14,puVar1 + 6,&local_e0,
                                *(undefined8 *)(piVar2 + 8));
          if (iVar4 != 0) goto LAB_100bcca2f;
          FUN_100c62ee0(0x14,0x99,0x2a,"s3_clnt.c",0xc74);
        }
      }
      else {
        uVar7 = *(undefined8 *)(**(long **)(param_1 + 0x40) + 0x10);
        lVar8 = FUN_100c58d60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1b8),3,0,&local_e8);
        if ((lVar8 < 1) || (iVar4 = FUN_100bda2d0(puVar1 + 4,piVar2,uVar7), iVar4 == 0)) {
          uVar7 = 0x44;
          uVar11 = 0xc41;
        }
        else {
          iVar4 = FUN_100c65920(local_d8,uVar7,0);
          if (((iVar4 != 0) && (iVar4 = FUN_100c65b10(local_d8,local_e8,lVar8), iVar4 != 0)) &&
             (iVar4 = FUN_100c6cd10(local_d8,puVar1 + 8,&local_dc,piVar2), iVar4 != 0)) {
            puVar1[6] = local_dc._1_1_;
            puVar1[7] = (undefined1)local_dc;
            iVar4 = local_dc + 4;
            iVar5 = FUN_100bcfe80(param_1);
            lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
            if (iVar5 == 0) goto LAB_100bccb2a;
LAB_100bcca53:
            *puVar1 = 0xf;
            puVar1[1] = (char)((uint)iVar4 >> 0x10);
            puVar1[2] = (char)((uint)iVar4 >> 8);
            puVar1[3] = (char)iVar4;
            param_1[0x12] = 0x1191;
            param_1[0x18] = iVar4 + 4;
            param_1[0x19] = 0;
            goto LAB_100bcca7a;
          }
          uVar7 = 6;
          uVar11 = 0xc4c;
        }
        FUN_100c62ee0(0x14,0x99,uVar7,"s3_clnt.c",uVar11);
        lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
    }
LAB_100bccb2a:
    FUN_100c65c50(local_d8);
    FUN_100c71960(lVar6);
    param_1[0x12] = 5;
    uVar7 = 0xffffffff;
  }
  else {
LAB_100bcca7a:
    FUN_100c65c50(local_d8);
    FUN_100c71960(lVar6);
    uVar7 = FUN_100bd30a0(param_1,0x16);
  }
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

