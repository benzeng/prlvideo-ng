
int FUN_1007161a0(long param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  bool bVar8;
  long ***local_b8;
  void *local_a8;
  undefined4 local_a0 [2];
  long ***local_98;
  long ***local_90;
  char local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98 = (long ***)&local_98;
  local_90 = local_98;
  local_38 = lVar1;
  if (((param_1 == 0) || (param_2 == (int *)0x0)) || (param_2[1] != 1)) {
    uVar6 = 0xfffffffd;
  }
  else {
    if (*(long *)(param_2 + 0x12) != 0) {
      iVar3 = FUN_10071ec60(param_1,&local_a8,local_a0);
      if (iVar3 != 0) goto LAB_10071637f;
      iVar3 = FUN_10071bf90(&local_98,local_a8,local_a0[0]);
      _free(local_a8);
      if (iVar3 != 0) goto LAB_10071637f;
      if ((long ****)local_98 == &local_98) {
LAB_1007163a4:
        uVar6 = FUN_10071e550(0xfffffff3);
        pcVar5 = "%s, file does not contain HW or VZWIN license to upgrade";
LAB_1007163e3:
        iVar3 = FUN_10071e690(0xfffffff3,pcVar5,uVar6);
      }
      else {
        local_b8 = (long ***)0x0;
        pppplVar7 = (long ****)local_98;
        do {
          if (3 < *(uint *)((long)pppplVar7 + 0xcc)) {
            iVar3 = FUN_10071e690(0xfffffff3,"Upgrade does not required");
            goto LAB_1007163fb;
          }
          uVar4 = FUN_100722880(pppplVar7 + 4);
          if (((uVar4 < 6) && ((0x2aU >> (uVar4 & 0x1f) & 1) != 0)) &&
             (bVar8 = (long ****)local_b8 != (long ****)0x0, local_b8 = (long ***)pppplVar7, bVar8))
          {
            uVar6 = FUN_10071e550(0xfffffff3);
            iVar3 = FUN_10071e690(0xfffffff3,"%s, file hold few HW licenses",uVar6);
            goto LAB_1007163fb;
          }
          pppplVar7 = (long ****)*pppplVar7;
        } while (pppplVar7 != &local_98);
        if ((long ****)local_b8 == (long ****)0x0) goto LAB_1007163a4;
        if (((ulong)local_b8[3] & 0x10) == 0) {
LAB_1007163cf:
          uVar6 = FUN_10071e550(0xfffffff3);
          pcVar5 = "%s, license is not upgradable";
          goto LAB_1007163e3;
        }
        iVar3 = _memcmp(local_b8 + 0x2e,&DAT_100b4a6e0,0x10);
        if (iVar3 == 0) goto LAB_1007163cf;
        *param_2 = (uint)(param_5 != 0) * 3 + 1;
        FUN_1007204b0(local_b8 + 0x2e,local_88,0x50);
        pcVar5 = _strdup(local_88);
        *(char **)(param_2 + 8) = pcVar5;
        iVar3 = 0;
        if (pcVar5 == (char *)0x0) {
          iVar3 = FUN_10071e690(0xfffffffe,0);
        }
      }
LAB_1007163fb:
      FUN_100719320(&local_98);
      if (iVar3 == 0) {
        lVar2 = *(long *)(param_2 + 0x12);
        *(undefined4 *)(lVar2 + 8) = param_4;
        *(undefined4 *)(lVar2 + 0xc) = param_3;
        if (DAT_1011ccb40 == 0) {
          FUN_100715e50();
        }
        iVar3 = FUN_100716480(param_2);
      }
      goto LAB_10071637f;
    }
    uVar6 = 0xfffffffe;
  }
  iVar3 = FUN_10071e690(uVar6,0);
LAB_10071637f:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

