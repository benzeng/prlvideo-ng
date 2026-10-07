
undefined8 FUN_100717980(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ushort *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  long local_48 [3];
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48[2] = lVar9;
  iVar2 = FUN_100714a30();
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20);
  puVar3 = (ushort *)FUN_100715710();
  if (puVar3 == (ushort *)0x0) {
LAB_100717aa7:
    if (lVar9 == local_48[2]) {
      uVar7 = FUN_10071e690(0xfffffffe,0);
      return uVar7;
    }
    goto LAB_100717cbf;
  }
  uVar11 = iVar2 - 4;
  plVar4 = (long *)0x0;
  if (uVar11 < 6) {
    plVar4 = (long *)0x0;
    if (*param_1 - 1U < 2) {
      plVar4 = (long *)FUN_100715da0();
      if (plVar4 == (long *)0x0) {
        FUN_100715ce0(puVar3);
        goto LAB_100717aa7;
      }
    }
  }
  if (*(long *)(param_1 + 8) != 0) {
    *puVar3 = *puVar3 & 0xfe3e;
  }
  iVar2 = FUN_100715800(puVar3);
  lVar6 = 0;
  lVar9 = 0;
  if (iVar2 == 0) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      lVar9 = FUN_100717cd0(puVar3,param_1);
    }
    else {
      local_48[1] = 0;
      uVar1 = *(undefined8 *)(puVar3 + 8);
      *(long **)(puVar3 + 8) = local_48;
      local_48[0] = lVar9;
      lVar9 = FUN_100717cd0(puVar3,param_1);
      *(undefined8 *)(puVar3 + 8) = uVar1;
    }
    lVar6 = 0;
    if (uVar11 < 6) {
      lVar6 = 0;
      if (*param_1 == 3) {
        if (*(long *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = **(undefined8 **)(puVar3 + 8);
          lVar6 = FUN_100725aa0();
          param_1[8] = 0;
          param_1[9] = 0;
        }
        else {
          lVar6 = FUN_100725aa0();
        }
      }
      else if (*param_1 - 1U < 2) {
        if (*(long *)(param_1 + 8) == 0) {
          *(undefined8 *)(param_1 + 8) = **(undefined8 **)(puVar3 + 8);
          iVar2 = FUN_100718280(param_1,plVar4);
          param_1[8] = 0;
          param_1[9] = 0;
        }
        else {
          iVar2 = FUN_100718280(param_1,plVar4);
        }
        if (((plVar4 != (long *)0x0) && (iVar2 == 0)) && ((plVar4[2] != 0 || (*param_1 != 2)))) {
          pcVar8 = (char *)*plVar4;
          pcVar10 = (char *)plVar4[1];
          if (pcVar8 == (char *)0x0) {
            pcVar8 = "";
          }
          if (pcVar10 == (char *)0x0) {
            pcVar10 = "";
          }
          lVar5 = FUN_100725de0("ss","productName",pcVar8,"productVersion",pcVar10);
          if (lVar5 != 0) {
            if (*param_1 == 2) {
              lVar6 = FUN_100725de0("vss","targetProductInfo",lVar5,"activationCode",plVar4[2],
                                    "guid",plVar4[3]);
            }
            else {
              lVar6 = FUN_100725de0("vs","targetProductInfo",lVar5,"guid");
            }
            if (lVar6 == 0) {
              FUN_100724b70(lVar5);
              lVar6 = 0;
            }
            goto LAB_100717c20;
          }
        }
        lVar6 = 0;
      }
    }
  }
LAB_100717c20:
  FUN_100715ce0(puVar3);
  FUN_100715de0(plVar4);
  if (lVar9 == 0) {
    uVar7 = FUN_10071e690(0xfffffffe,0);
LAB_100717c67:
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    if (lVar6 != 0) {
      FUN_100724000(uVar7);
      FUN_100724000(uVar7,lVar6);
      uVar7 = 0;
      goto LAB_100717c67;
    }
    lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((uVar11 < 5) && (1 < *param_1 - 5U)) {
      uVar7 = FUN_10071e690(0xfffffffe,0);
    }
    else {
      FUN_100724000(uVar7);
      uVar7 = 0;
    }
  }
  if (lVar9 == local_48[2]) {
    return uVar7;
  }
LAB_100717cbf:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

