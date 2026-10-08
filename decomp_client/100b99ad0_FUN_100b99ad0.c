
ulong FUN_100b99ad0(int *param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  if (1 < (uint)param_1[2]) {
    uVar5 = FUN_100b9d470(0xfffffff4,"unsupported version of license");
    return uVar5;
  }
  if (param_1[7] == 0) {
    *param_3 = 2;
    ___snprintf_chk(param_2 + 0x20,0x50,0,0xffffffffffffffff,"%s","VZGROUP");
    iVar4 = param_1[2];
  }
  else {
    *param_3 = 1;
    if (*param_1 == 2) {
      pcVar7 = "PRLSRV";
    }
    else {
      pcVar7 = "VZSRV";
    }
    ___snprintf_chk(param_2 + 0x20,0x50,0,0xffffffffffffffff,"%s",pcVar7);
    iVar4 = param_1[2];
    if (iVar4 == 1) {
      *(undefined4 *)(param_2 + 200) = 0;
      *(undefined4 *)(param_2 + 0xcc) = 6;
      goto LAB_100b99c06;
    }
    if (param_1[10] != 0) {
      param_1[10] = 0xffff;
    }
    if (param_1[0xb] != 0) {
      param_1[0xb] = 0xffff;
    }
  }
  *(undefined4 *)(param_2 + 200) = 0;
  if (iVar4 == 0) {
    *(undefined4 *)(param_2 + 0xcc) = 4;
  }
  else if (iVar4 == 1) {
    *(undefined4 *)(param_2 + 0xcc) = 6;
  }
LAB_100b99c06:
  *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 4;
  uVar3 = FUN_100b9a250(param_1 + 1,param_2,*param_3,1);
  uVar5 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar3 = param_1[6];
    if (uVar3 == 0xffffffff) {
      *(undefined8 *)(param_2 + 0xf8) = 0xffff;
      ___snprintf_chk(param_2 + 0x100,0x20,0,0xffffffffffffffff,"unlimited");
    }
    else {
      iVar4 = param_1[4];
      iVar2 = param_1[5];
      iVar6 = iVar2 + -1;
      *(long *)(param_2 + 0xf8) =
           (long)(int)((uVar3 * 0x16d + iVar4 + *(int *)(&DAT_101da23e0 + (long)iVar6 * 4) +
                        ((int)((uVar3 - 0x7d9) + ((uint)((int)(uVar3 - 0x7d9) >> 0x1f) >> 0x1e)) >>
                        2) + (uint)(1 < iVar6 && (uVar3 & 3) == 0)) * 0x15180 + -0x76f12001);
      ___snprintf_chk(param_2 + 0x100,0x20,0,0xffffffffffffffff,"%02d/%02d/%04d %02d:%02d:%02d",
                      iVar2,CONCAT44(uVar8,iVar4),uVar3,0x17,0x3b,0x3b);
    }
    *(ulong *)(param_2 + 0x280) = (ulong)(uint)param_1[3];
    *(undefined4 *)(param_2 + 0x288) = 0;
    *(ulong *)(param_2 + 0x18) = *(ulong *)(param_2 + 0x18) | 0x1840;
    iVar4 = FUN_100b93810();
    if (iVar4 - 4U < 6) {
      pcVar7 = (&PTR_s_PSBM_10223fb80)[(int)(iVar4 - 4U)];
    }
    else {
      pcVar7 = "VZ";
    }
    uVar5 = 0;
    ___snprintf_chk(param_2 + 0x268,0x11,0,0xffffffffffffffff,"%s%08lu%04u",pcVar7,
                    *(undefined8 *)(param_2 + 0x280),*(undefined4 *)(param_2 + 0x288));
    if (*param_3 == 1) {
      uVar3 = param_1[0xd];
      lVar1 = param_2 + 0x290;
      if ((uVar3 & 1) != 0) {
        FUN_100ba1d80(lVar1,"arch",PTR_s_x86_1022cfff0);
      }
      if ((uVar3 & 2) != 0) {
        FUN_100ba1d80(lVar1,"arch",PTR_s_x86_64_1022cfff8);
      }
      if ((uVar3 & 4) != 0) {
        FUN_100ba1d80(lVar1,"arch",PTR_s_ia64_1022d0000);
      }
      *(int *)(param_2 + 0x180) = param_1[0xc] * 0x3c;
      *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) | 2;
    }
  }
  return uVar5;
}

