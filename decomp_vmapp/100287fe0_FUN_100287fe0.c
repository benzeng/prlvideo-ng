
void FUN_100287fe0(long *param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = param_1[0x7421];
  while (lVar9 != 0) {
    if (*(long *)(lVar9 + -0xa8) == param_2) {
      lVar9 = lVar9 + -0xa8;
      goto LAB_100288037;
    }
    plVar8 = (long *)(lVar9 + 8);
    if (param_2 - *(long *)(lVar9 + -0xa8) < 0) {
      plVar8 = (long *)(lVar9 + 0x10);
    }
    lVar9 = *plVar8;
  }
  lVar9 = FUN_100285ba0(param_1);
LAB_100288037:
  if (lVar9 == 0) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","dev_req",
                  "../Scsi/Lsi/dev.cpp",0x3b3,"process_req");
    return;
  }
  pbVar2 = *(byte **)(lVar9 + 0x88);
  if (pbVar2[3] != 0) {
    if (pbVar2[3] == 1) {
      if ((*(byte *)(param_1[0x13] + 0x1087) & 8) != 0) {
        *(undefined1 *)(param_1[0x13] + 0x1133) = 1;
      }
      cVar3 = FUN_10028dd00(param_1,lVar9);
      if (cVar3 == '\0') {
        param_1[0x7415] = lVar9;
        return;
      }
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1,lVar9);
    }
    cVar3 = FUN_1002878f0(param_1,lVar9);
    if (cVar3 == '\0') {
      FUN_100287ac0(param_1,lVar9);
      return;
    }
    FUN_100287ba0();
    return;
  }
  if ((((pbVar2[1] != 0) || (0xf < *pbVar2)) || (pbVar2[0xc] != 0)) ||
     (iVar4 = _memcmp(pbVar2 + 0xc,pbVar2 + 0xd,7), iVar4 != 0)) {
    FUN_100288820(param_1,0x43,2,0,lVar9);
    return;
  }
  bVar1 = pbVar2[0x18];
  lVar5 = 1;
  if ((char)bVar1 < '\b') {
    uVar7 = (ulong)(byte)(bVar1 + 0x78);
    if (0x22 < (byte)(bVar1 + 0x78)) goto LAB_10028823b;
    if ((0x400000204U >> (uVar7 & 0x3f) & 1) != 0) goto LAB_1002881cb;
    uVar6 = 0x100000001;
  }
  else {
    uVar7 = (ulong)(uint)bVar1;
    if (0x35 < bVar1) goto LAB_10028823b;
    if ((0x20040000000400U >> (uVar7 & 0x3f) & 1) != 0) goto LAB_1002881cb;
    uVar6 = 0x10000000100;
  }
  if ((uVar6 >> (uVar7 & 0x3f) & 1) != 0) {
    lVar5 = 0;
LAB_1002881cb:
    plVar8 = (long *)param_1[lVar5 * 2 + 0x741b];
    param_1[lVar5 * 2 + 0x741b] = lVar9 + 0x98;
    *(long **)(lVar9 + 0x98) = param_1 + lVar5 * 2 + 0x741a;
    *(long **)(lVar9 + 0xa0) = plVar8;
    *plVar8 = lVar9 + 0x98;
    if (((pbVar2[0x18] != 0x91) && (pbVar2[0x18] != 0x35)) &&
       (lVar9 = param_1[0x14],
       (*(uint *)(lVar9 + 0x1c) & *(int *)(lVar9 + 0xc) - *(int *)(lVar9 + 8)) != 0)) {
      return;
    }
    FUN_1002888e0(param_1);
    return;
  }
LAB_10028823b:
  FUN_1002888e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010028825d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1,lVar9);
  return;
}

