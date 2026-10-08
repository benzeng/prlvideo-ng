
undefined8 FUN_1009d8840(undefined8 param_1,int *param_2,long param_3,char param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  long local_1120;
  undefined1 local_1118 [32];
  long local_10f8;
  undefined1 local_10f0 [32];
  undefined1 local_10d0 [36];
  uint local_10ac;
  uint local_10a8;
  undefined4 uStack_10a4;
  uint local_10a0;
  char local_1098;
  char local_1090;
  undefined1 local_1080 [48];
  uint local_1050;
  uint local_1040;
  undefined1 local_1038 [4096];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar2 = 1;
  local_38 = lVar4;
  if (*param_2 == 0x19) {
    cVar1 = FUN_1009d96a0(param_1,local_1080,0x48,param_3);
    if (cVar1 != '\0') {
      if (param_4 != '\0') {
        FUN_1009d8da0(local_1080);
      }
      cVar1 = FUN_1009d9710(param_1,local_1118,&local_1120);
      if (cVar1 != '\0') {
        if (local_1040 != 0) {
          uVar7 = 0;
          do {
            cVar1 = FUN_1009d96a0(param_1,local_10d0,0x50);
            if (cVar1 == '\0') {
              uVar2 = 0;
              lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
              goto LAB_1009d8c07;
            }
            if (param_4 != '\0') {
              FUN_1009d8f50(local_10d0,1);
            }
            if (((local_1090 != '\x01') && ((ulong)local_10a0 != 0)) &&
               ((uVar6 = CONCAT44(uStack_10a4,local_10a8), uVar6 != 0 &&
                (*(long *)(param_5 + 0x470) != 0)))) {
              lVar4 = (ulong)local_10a0 + local_1120;
              do {
                uVar8 = uVar6;
                if (0x1000 < uVar6) {
                  uVar8 = 0x1000;
                }
                cVar1 = FUN_1009d96a0(param_1,local_1038,uVar8,lVar4);
                if (cVar1 == '\0') break;
                pcVar3 = *(code **)(param_5 + 0x470);
                plVar5 = (long *)(*(long *)(param_5 + 0x478) + param_5);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar3 = *(code **)(pcVar3 + *plVar5 + -1);
                }
                (*pcVar3)(plVar5,local_1038,uVar8);
                bVar9 = 0x1000 < uVar6;
                if (uVar6 == 0x1000) break;
                uVar6 = uVar6 - 0x1000;
                lVar4 = lVar4 + uVar8;
              } while (bVar9);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_1040);
        }
        lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
        uVar2 = 1;
        goto LAB_1009d8c07;
      }
    }
  }
  else {
    if (*param_2 != 1) goto LAB_1009d8c07;
    cVar1 = FUN_1009d96a0(param_1,local_1080,0x38,param_3);
    if (cVar1 != '\0') {
      if (param_4 != '\0') {
        FUN_1009d8d40(local_1080);
      }
      cVar1 = FUN_1009d9710(param_1,local_10f0,&local_10f8);
      if (cVar1 != '\0') {
        if (local_1050 != 0) {
          param_3 = param_3 + 0x38;
          uVar7 = 0;
          do {
            cVar1 = FUN_1009d96a0(param_1,local_10d0,0x44,param_3);
            if (cVar1 == '\0') goto LAB_1009d8c05;
            if (param_4 != '\0') {
              FUN_1009d8ef0(local_10d0,1);
            }
            if ((((local_1098 != '\x01') && ((ulong)local_10a8 != 0)) &&
                (uVar6 = (ulong)local_10ac, uVar6 != 0)) && (*(long *)(param_5 + 0x470) != 0)) {
              lVar4 = (ulong)local_10a8 + local_10f8;
              do {
                uVar8 = uVar6;
                if (0x1000 < uVar6) {
                  uVar8 = 0x1000;
                }
                cVar1 = FUN_1009d96a0(param_1,local_1038,uVar8,lVar4);
                if (cVar1 == '\0') break;
                pcVar3 = *(code **)(param_5 + 0x470);
                plVar5 = (long *)(*(long *)(param_5 + 0x478) + param_5);
                if (((ulong)pcVar3 & 1) != 0) {
                  pcVar3 = *(code **)(pcVar3 + *plVar5 + -1);
                }
                (*pcVar3)(plVar5,local_1038,uVar8);
                bVar9 = 0x1000 < uVar6;
                if (uVar6 == 0x1000) break;
                uVar6 = uVar6 - 0x1000;
                lVar4 = lVar4 + uVar8;
              } while (bVar9);
            }
            param_3 = param_3 + 0x44;
            uVar7 = uVar7 + 1;
            lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
          } while (uVar7 < local_1050);
        }
        uVar2 = 1;
        goto LAB_1009d8c07;
      }
    }
  }
LAB_1009d8c05:
  uVar2 = 0;
LAB_1009d8c07:
  if (lVar4 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

