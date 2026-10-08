
uint FUN_100cb2200(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_1 == 0) {
    uVar5 = 0x8f;
    uVar9 = 0x20d;
  }
  else {
    iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x17) {
      if ((param_3 == 0) || (iVar1 = FUN_100c929e0(param_3,param_2), iVar1 != 0)) {
        uVar3 = 0;
        lVar4 = FUN_100caf540(param_1,param_2,0,param_3);
        if (lVar4 == 0) {
          FUN_100c62ee0(0x21,0x72,0x77,"pk7_smime.c",0x21d);
          lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
        }
        else {
          lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
          if ((param_5 & 1) == 0) {
            do {
              iVar1 = FUN_100c588a0(lVar4,local_1038,0x1000);
              if (iVar1 < 1) {
                iVar1 = FUN_100c58890(lVar4);
                uVar3 = 1;
                if (iVar1 == 0x20a) {
                  lVar7 = FUN_100c58d60(lVar4,0x71,0,0);
                  uVar3 = (uint)(lVar7 != 0);
                }
                break;
              }
              iVar2 = FUN_100c58980(param_4,local_1038,iVar1);
              uVar3 = 0;
            } while (iVar2 == iVar1);
            FUN_100c59480(lVar4);
          }
          else {
            uVar5 = FUN_100c5b5e0();
            lVar7 = FUN_100c58530(uVar5);
            if (lVar7 == 0) {
              FUN_100c62ee0(0x21,0x72,0x41,"pk7_smime.c",0x225);
            }
            else {
              lVar6 = FUN_100c591b0(lVar7,lVar4);
              if (lVar6 != 0) {
                uVar3 = FUN_100c885f0(lVar6,param_4);
                if (((0 < (int)uVar3) && (iVar1 = FUN_100c58890(lVar4), iVar1 == 0x20a)) &&
                   (lVar4 = FUN_100c58d60(lVar4,0x71,0,0), lVar4 == 0)) {
                  uVar3 = 0;
                }
                FUN_100c59480(lVar6);
                goto LAB_100cb2405;
              }
              FUN_100c62ee0(0x21,0x72,0x41,"pk7_smime.c",0x22a);
              FUN_100c59480(lVar7);
            }
            FUN_100c59480(lVar4);
            uVar3 = 0;
          }
        }
        goto LAB_100cb2405;
      }
      uVar5 = 0x7f;
      uVar9 = 0x218;
    }
    else {
      uVar5 = 0x71;
      uVar9 = 0x212;
    }
  }
  FUN_100c62ee0(0x21,0x72,uVar5,"pk7_smime.c",uVar9);
  uVar3 = 0;
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100cb2405:
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

