
undefined1
FUN_100760be0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 uVar8;
  long local_1048;
  long local_1040;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  lVar3 = FUN_1007616e0(param_2,param_3,0);
  if (lVar3 == param_3) {
    uVar4 = FUN_1007616e0(param_2,0,1);
    FUN_1008e3970("","dbgdump",0,"Start writing pages at 0x%llx",uVar4);
    if (param_5 != (ulong *)0x0) {
      do {
        uVar5 = *param_5;
        if (uVar5 < param_5[1]) {
          do {
            iVar2 = FUN_10075ffe0();
            if (iVar2 != 0) {
              uVar8 = 0;
              FUN_1008e3970("","dbgdump",0,"Unexpected translation failure");
              lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
              goto LAB_100760e96;
            }
            uVar5 = uVar5 + local_1048;
            if (2 < DAT_1011b55f8) {
              uVar4 = FUN_1007616e0(param_2,0,1);
              FUN_1008e3970("","dbgdump",3,"Writing memory va 0x%llx pa 0x%llx at 0x%llx",uVar5,
                            local_1040,uVar4);
            }
            if (local_1048 != 0) {
              lVar6 = local_1048 + -0x1000;
              do {
                local_1048 = lVar6;
                cVar1 = (**(code **)(param_4 + 8))(local_1038,0x1000,local_1040);
                if (cVar1 == '\0') {
                  pcVar7 = "Read failed at paddr 0x%llx";
LAB_100760e84:
                  uVar8 = 0;
                  FUN_1008e3970("","dbgdump",0,pcVar7,local_1040);
                  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
                  goto LAB_100760e96;
                }
                local_1040 = local_1040 + 0x1000;
                lVar6 = FUN_100761880(param_2,FUN_100761810,0,local_1038,0x1000);
                if (lVar6 != 0x1000) {
                  FUN_1008e3970("","dbgdump",0,"Write to dump file failed");
                  pcVar7 = "Write failed at paddr 0x%llx";
                  goto LAB_100760e84;
                }
                lVar6 = local_1048 + -0x1000;
              } while (local_1048 + -0x1000 != -0x1000);
            }
          } while ((uVar5 < param_5[1]) && (*param_5 <= uVar5));
        }
        param_5 = (ulong *)param_5[2];
      } while (param_5 != (ulong *)0x0);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    FUN_1008e3970("","dbgdump",0,"Failed to seek file");
  }
LAB_100760e96:
  if (lVar6 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

