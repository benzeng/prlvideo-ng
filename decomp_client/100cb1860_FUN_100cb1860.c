
undefined8
FUN_100cb1860(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint local_1158;
  uint local_1140;
  undefined8 local_1138;
  undefined1 local_1130 [248];
  undefined1 local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_1 == 0) {
    uVar10 = 0x8f;
    uVar11 = 0x107;
  }
  else {
    iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x16) {
      lVar4 = FUN_100cadd30(param_1,2,0,0);
      if ((param_4 == 0) && (lVar4 != 0)) {
        uVar10 = 0x7a;
        uVar11 = 0x112;
      }
      else {
        lVar4 = FUN_100cae7a0(param_1);
        if ((lVar4 != 0) && (iVar1 = FUN_100c60800(lVar4), iVar1 != 0)) {
          lVar5 = FUN_100cb1e50(param_1,param_2,param_6);
          uVar10 = 0;
          if (lVar5 == 0) goto LAB_100cb1ba9;
          if (((param_6 & 0x20) == 0) && (iVar1 = FUN_100c60800(lVar5), 0 < iVar1)) {
            local_1158 = param_6 & 0x2000;
            iVar1 = 0;
            do {
              uVar10 = FUN_100c60820(lVar5,iVar1);
              if ((param_6 & 8) == 0) {
                iVar2 = FUN_100c94fc0(local_1130,param_3,uVar10,
                                      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
                if (iVar2 == 0) {
                  uVar10 = 0x136;
LAB_100cb1dcd:
                  FUN_100c62ee0(0x21,0x75,0xb,"pk7_smime.c",uVar10);
                  FUN_100c5ffd0(lVar5);
                  uVar10 = 0;
                  goto LAB_100cb1ba9;
                }
                FUN_100c95e70(local_1130);
              }
              else {
                iVar2 = FUN_100c94fc0(local_1130,param_3,uVar10,0);
                if (iVar2 == 0) {
                  uVar10 = 0x13c;
                  goto LAB_100cb1dcd;
                }
              }
              if (local_1158 == 0) {
                FUN_100c94d10(local_1130);
              }
              iVar2 = FUN_100c93570(local_1130);
              if (iVar2 < 1) {
                iVar1 = FUN_100c94bd0(local_1130);
                FUN_100c94f00(local_1130);
                FUN_100c62ee0(0x21,0x75,0x75,"pk7_smime.c",0x148);
                uVar11 = FUN_100c9adc0((long)iVar1);
                uVar10 = 0;
                FUN_100c642a0(2,"Verify error:",uVar11);
                goto LAB_100cb1e36;
              }
              FUN_100c94f00(local_1130);
              iVar1 = iVar1 + 1;
              iVar2 = FUN_100c60800(lVar5);
            } while (iVar1 < iVar2);
          }
          lVar6 = 0;
          if ((param_4 != 0) && (iVar1 = FUN_100c58890(param_4), lVar6 = param_4, iVar1 == 0x401)) {
            uVar10 = 0;
            uVar3 = FUN_100c58d60(param_4,3,0,&local_1138);
            lVar6 = FUN_100c59870(local_1138,uVar3);
            if (lVar6 == 0) {
              FUN_100c62ee0(0x21,0x75,0x41,"pk7_smime.c",0x15e);
              goto LAB_100cb1ba9;
            }
          }
          lVar7 = FUN_100caecd0(param_1);
          if (lVar7 == 0) {
            uVar10 = 0;
          }
          else {
            lVar8 = param_5;
            if ((param_6 & 1) != 0) {
              uVar10 = FUN_100c59860();
              lVar8 = FUN_100c58530(uVar10);
              if (lVar8 == 0) {
                FUN_100c62ee0(0x21,0x75,0x41,"pk7_smime.c",0x169);
                uVar10 = 0;
                goto LAB_100cb1e11;
              }
              FUN_100c58d60(lVar8,0x82,0,0);
            }
            local_1140 = param_6 & 1;
            iVar1 = FUN_100c588a0(lVar7,local_1038,0x1000);
            lVar12 = lVar8;
            if (0 < iVar1) {
              lVar12 = 0;
LAB_100cb1b62:
              if (lVar8 == 0) goto code_r0x000100cb1b67;
              do {
                FUN_100c58980(lVar8,local_1038,iVar1);
                iVar1 = FUN_100c588a0(lVar7,local_1038,0x1000);
                lVar12 = lVar8;
              } while (0 < iVar1);
            }
LAB_100cb1c05:
            if (local_1140 != 0) {
              iVar1 = FUN_100c885f0(lVar12,param_5);
              if (iVar1 == 0) {
                FUN_100c62ee0(0x21,0x75,0x81,"pk7_smime.c",0x17b);
                FUN_100c586e0(lVar12);
                uVar10 = 0;
                goto LAB_100cb1e11;
              }
              FUN_100c586e0(lVar12);
            }
            uVar10 = 1;
            if (((param_6 & 4) == 0) && (iVar1 = FUN_100c60800(lVar4), 0 < iVar1)) {
              iVar1 = 0;
              do {
                uVar11 = FUN_100c60820(lVar4,iVar1);
                uVar9 = FUN_100c60820(lVar5,iVar1);
                iVar2 = FUN_100cb0ad0(lVar7,param_1,uVar11,uVar9);
                if (iVar2 < 1) {
                  FUN_100c62ee0(0x21,0x75,0x69,"pk7_smime.c",0x189);
                  uVar10 = 0;
                  break;
                }
                iVar1 = iVar1 + 1;
                iVar2 = FUN_100c60800(lVar4);
              } while (iVar1 < iVar2);
            }
          }
LAB_100cb1e11:
          if ((param_4 != 0) && (lVar6 == param_4)) {
            FUN_100c592a0(lVar7);
          }
          FUN_100c59480(lVar7);
LAB_100cb1e36:
          FUN_100c5ffd0(lVar5);
          goto LAB_100cb1ba9;
        }
        uVar10 = 0x7b;
        uVar11 = 0x125;
      }
    }
    else {
      uVar10 = 0x71;
      uVar11 = 0x10c;
    }
  }
  FUN_100c62ee0(0x21,0x75,uVar10,"pk7_smime.c",uVar11);
  uVar10 = 0;
LAB_100cb1ba9:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
code_r0x000100cb1b67:
  iVar1 = FUN_100c588a0(lVar7,local_1038,0x1000);
  lVar8 = 0;
  if (iVar1 < 1) goto LAB_100cb1c05;
  goto LAB_100cb1b62;
}

