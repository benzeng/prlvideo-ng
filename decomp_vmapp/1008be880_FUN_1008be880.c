
undefined8 FUN_1008be880(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int local_178 [2];
  undefined8 local_170;
  undefined1 local_168 [40];
  undefined8 local_140;
  undefined4 local_100 [2];
  undefined1 **local_f8;
  undefined1 *local_f0 [23];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  uVar3 = FUN_1008b6ee0(param_3);
  iVar1 = FUN_1008bdb30(param_2,1,uVar3,local_178);
  if (iVar1 == 1) {
    iVar1 = (*(code *)param_2[10])(param_2,param_3,local_170);
    if (iVar1 == 0) {
      if (local_178[0] == 2) {
        FUN_1008a20a0(local_170);
      }
      else if (local_178[0] == 1) {
        FUN_1008a17f0(local_170);
      }
      FUN_10081d010(9,0xb,"x509_lu.c",0x272);
      local_100[0] = 1;
      local_f8 = local_f0;
      local_f0[0] = local_168;
      local_140 = uVar3;
      iVar1 = FUN_100885160(*(undefined8 *)(*param_2 + 8),local_100);
      if (iVar1 == -1) {
        uVar3 = 0;
      }
      else {
        iVar2 = FUN_100885600(*(undefined8 *)(*param_2 + 8));
        if (iVar1 < iVar2) {
          do {
            piVar4 = (int *)FUN_100885620(*(undefined8 *)(*param_2 + 8),iVar1);
            if (*piVar4 != 1) {
              uVar3 = 0;
              goto LAB_1008beb18;
            }
            uVar5 = FUN_1008b7110(*(undefined8 *)(piVar4 + 2));
            iVar2 = FUN_1008b6ba0(uVar3,uVar5);
            if (iVar2 != 0) {
              uVar3 = 0;
              goto LAB_1008beb18;
            }
            iVar2 = (*(code *)param_2[10])(param_2,param_3,*(undefined8 *)(piVar4 + 2));
            if (iVar2 != 0) {
              *param_1 = *(undefined8 *)(piVar4 + 2);
              if (*piVar4 == 2) {
                lVar6 = *(long *)(piVar4 + 2) + 0x18;
                uVar5 = 6;
                uVar7 = 0x18d;
              }
              else {
                uVar3 = 1;
                if (*piVar4 != 1) goto LAB_1008beb18;
                lVar6 = *(long *)(piVar4 + 2) + 0x1c;
                uVar5 = 3;
                uVar7 = 0x18a;
              }
              uVar3 = 1;
              FUN_10081d580(lVar6,1,uVar5,"x509_lu.c",uVar7);
              goto LAB_1008beb18;
            }
            iVar1 = iVar1 + 1;
            iVar2 = FUN_100885600(*(undefined8 *)(*param_2 + 8));
          } while (iVar1 < iVar2);
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
        }
      }
LAB_1008beb18:
      FUN_10081d010(10,0xb,"x509_lu.c",0x286);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      *param_1 = local_170;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        if (local_178[0] == 2) {
          FUN_1008a20a0(local_170);
        }
        else if (local_178[0] == 1) {
          FUN_1008a17f0(local_170);
        }
        FUN_100887ce0(0xb,0x92,0x6a,"x509_lu.c",0x260);
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 0xffffffff;
        if (local_178[0] == 2) {
          FUN_1008a20a0(local_170);
        }
        else if (local_178[0] == 1) {
          FUN_1008a17f0(local_170);
        }
      }
    }
  }
  if (lVar6 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

