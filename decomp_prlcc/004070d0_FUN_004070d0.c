
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004070d0(long *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar14;
  timeval local_58;
  int local_40;
  undefined2 local_3a [5];
  
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  lVar3 = *param_1;
  iVar5 = FUN_00408ce0(lVar3);
  puVar4 = PTR_prl_xfunctions_0061bd60;
  (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x118))(lVar3);
  if (iVar5 == 0) {
    FUN_0040c1e0(param_1,param_2[3],param_2[4]);
    if (param_3 != 0) {
      if (1 < *(int *)PTR___log_level_0061bd30) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution: send request with new heads config {extend=%dx%d, heads_count=%d}..."
                     ,param_2[3],param_2[4],CONCAT44(uVar14,*param_2));
      }
      FUN_0040ca90(param_1,param_2);
    }
    iVar5 = param_2[4];
    iVar2 = param_2[3];
    auVar13 = (**(code **)(puVar4 + 0x38))(lVar3,*(undefined8 *)(*(long *)(lVar3 + 0xe8) + 0x10));
    lVar7 = auVar13._0_8_;
    pcVar9 = "Error: Dynamic Resolution: could not get screen information";
    if (lVar7 != 0) {
      (**(code **)(puVar4 + 0x40))
                (lVar7,local_3a,auVar13._8_8_,
                 "Error: Dynamic Resolution: could not get screen information");
      lVar8 = (**(code **)(puVar4 + 0x48))(lVar7,&local_40);
      if (0 < local_40) {
        uVar11 = 0;
        uVar10 = 0;
        do {
          piVar1 = (int *)(lVar8 + (uVar11 & 0xffff) * 0x10);
          if ((iVar2 == *piVar1) && (iVar5 == piVar1[1])) {
            iVar6 = (**(code **)(puVar4 + 0x50))
                              (lVar3,lVar7,
                               *(undefined8 *)
                                ((long)*(int *)(lVar3 + 0xe0) * 0x80 + 0x10 +
                                *(long *)(lVar3 + 0xe8)),uVar10,local_3a[0],0);
            uVar12 = ~-(uint)(iVar6 == 0);
            goto LAB_004072d5;
          }
          uVar11 = (ulong)((int)uVar11 + 1);
          uVar10 = uVar11 & 0xffff;
        } while ((int)uVar10 < local_40);
      }
      pcVar9 = "Error: Dynamic Resolution: there is no new screen resolution in the driver\'s list";
    }
    uVar12 = 0xffffffff;
    FUN_0040fffa(&DAT_0041913e,"prlcc",0,pcVar9);
LAB_004072d5:
    if (1 < *(int *)PTR___log_level_0061bd30) {
      pcVar9 = "OK";
      if (uVar12 != 0) {
        pcVar9 = "FAILED";
      }
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                   "Dynamic Resolution: RandR set new screen resolution {%dx%d} %s",iVar2,iVar5,
                   pcVar9);
    }
    if (lVar7 != 0) {
      (**(code **)(puVar4 + 0x58))(lVar7);
    }
  }
  else {
    uVar12 = FUN_00408d20(param_1,param_2,param_3);
  }
  (**(code **)(puVar4 + 0x120))(lVar3);
  (**(code **)(puVar4 + 0x170))(lVar3);
  if (uVar12 == 0) {
    memcpy(&DAT_0061d660,param_2,0x114);
    gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    DAT_0061d778 = (double)local_58.tv_sec + (double)local_58.tv_usec * _DAT_004169e0;
  }
  return uVar12;
}

