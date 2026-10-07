
int FUN_1008bdb30(long *param_1,int param_2,undefined8 param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int local_240 [4];
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined1 local_1e0 [40];
  undefined8 local_1b8;
  int local_178 [2];
  undefined1 **local_170;
  undefined1 *local_168 [15];
  undefined1 *local_f0 [23];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = *param_1;
  FUN_10081d010(9,0xb,"x509_lu.c",0x124);
  uVar5 = *(undefined8 *)(lVar8 + 8);
  local_178[0] = param_2;
  if (param_2 == 2) {
    local_170 = local_168;
    local_168[0] = local_230;
    local_220 = param_3;
LAB_1008bdbf0:
    iVar2 = FUN_100885160(uVar5,local_178);
  }
  else {
    iVar2 = -1;
    if (param_2 == 1) {
      local_170 = local_f0;
      local_f0[0] = local_1e0;
      local_1b8 = param_3;
      goto LAB_1008bdbf0;
    }
  }
  piVar4 = (int *)0x0;
  if (iVar2 != -1) {
    piVar4 = (int *)FUN_100885620(uVar5,iVar2);
  }
  FUN_10081d010(10,0xb,"x509_lu.c",0x126);
  if ((param_2 == 2) || (piVar4 == (int *)0x0)) {
    iVar2 = (int)param_1[1];
    while( true ) {
      iVar3 = FUN_100885600(*(undefined8 *)(lVar8 + 0x10));
      if (iVar3 <= iVar2) break;
      lVar6 = FUN_100885620(*(undefined8 *)(lVar8 + 0x10),iVar2);
      if (((*(long *)(lVar6 + 8) != 0) &&
          (pcVar1 = *(code **)(*(long *)(lVar6 + 8) + 0x30), pcVar1 != (code *)0x0)) &&
         (*(int *)(lVar6 + 4) == 0)) {
        iVar3 = (*pcVar1)(lVar6,param_2,param_3,local_240);
        if (iVar3 < 0) {
          *(int *)(param_1 + 1) = iVar3;
          lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_1008bdd62;
        }
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 1) = 0;
          piVar4 = local_240;
          lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
          goto LAB_1008bdcf6;
        }
      }
      iVar2 = iVar2 + 1;
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (piVar4 == (int *)0x0) goto LAB_1008bdd62;
  }
  else {
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_1008bdcf6:
  iVar2 = *piVar4;
  *param_4 = iVar2;
  lVar6 = *(long *)(piVar4 + 2);
  *(long *)(param_4 + 2) = lVar6;
  if (iVar2 == 2) {
    lVar6 = lVar6 + 0x18;
    uVar5 = 6;
    uVar7 = 0x18d;
  }
  else {
    iVar3 = 1;
    if (iVar2 != 1) goto LAB_1008bdd62;
    lVar6 = lVar6 + 0x1c;
    uVar5 = 3;
    uVar7 = 0x18a;
  }
  iVar3 = 1;
  FUN_10081d580(lVar6,1,uVar5,"x509_lu.c",uVar7);
LAB_1008bdd62:
  if (lVar8 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

