
bool FUN_1002e7fd0(long param_1,long param_2)

{
  int iVar1;
  long in_RAX;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  long local_38;
  
  local_38 = in_RAX;
  if (2 < DAT_1011c568c) {
    if ((ulong)(long)*(int *)(param_1 + 0x14c) < 10) {
      pcVar5 = (&PTR_s_MSC_UNINITIALISED_100bb51f0)[*(int *)(param_1 + 0x14c)];
    }
    else {
      pcVar5 = "UNKNOWN";
    }
    FUN_1008e3970("","USB",0,"[MSC] Submit: start state is %s",pcVar5);
    if ((((*(int *)(param_2 + 0x44c) == 1) && (2 < DAT_1011c568c)) &&
        (FUN_1008e3970("","USB",0,"[MSC] OUT (dCBWDataTransferLength = %u, dCSWDataResidue = %u)",
                       *(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x147)),
        2 < DAT_1011c568c)) && (*(int *)(param_2 + 0x450) == 0xe1)) {
      FUN_1002da7c0(3,param_2);
    }
  }
  piVar7 = (int *)(param_2 + 0x44c);
  bVar8 = false;
  switch(*(undefined4 *)(param_1 + 0x14c)) {
  case 1:
    if (*piVar7 != 1) break;
    iVar1 = FUN_1002e8430(param_1,param_2);
LAB_1002e83e7:
    *(int *)(param_1 + 0x14c) = iVar1;
    bVar8 = false;
LAB_1002e83f0:
    if (iVar1 != 6) goto LAB_1002e8285;
    goto switchD_1002e80c7_caseD_6;
  case 2:
    if (*piVar7 == 0x82) {
      uVar4 = *(int *)(param_1 + 0x128) - *(uint *)(param_1 + 0x147);
      if (*(uint *)(param_2 + 0x43c) < uVar4) {
        uVar4 = *(uint *)(param_2 + 0x43c);
      }
      _memcpy((void *)(param_2 + 0x4d8),
              (void *)((ulong)*(uint *)(param_1 + 0x147) + *(long *)(param_1 + 0x50)),(ulong)uVar4);
      uVar2 = *(int *)(param_1 + 0x147) + uVar4;
      *(uint *)(param_1 + 0x147) = uVar2;
      *(undefined4 *)(param_2 + 0x468) = 0;
      *(uint *)(param_2 + 0x454) = uVar4;
      iVar1 = 4;
      if (uVar2 < *(uint *)(param_1 + 0x128)) {
        iVar1 = *(int *)(param_1 + 0x14c);
      }
      goto LAB_1002e83e7;
    }
    break;
  case 3:
    if (*piVar7 == 1) {
      iVar1 = FUN_1002e8cb0(param_1,param_2);
      goto LAB_1002e83e7;
    }
    break;
  case 4:
    if (*piVar7 == 0x82) {
      if (*(int *)(param_1 + 0x178) == 0) {
        if (DAT_1011ccc18 != (code *)0x0) {
          uVar3 = 10;
          goto LAB_1002e836a;
        }
      }
      else if ((*(int *)(param_1 + 0x178) == 1) && (DAT_1011ccc18 != (code *)0x0)) {
        uVar3 = 0xb;
LAB_1002e836a:
        (*DAT_1011ccc18)(1,0x22,uVar3);
      }
      *(int *)(param_1 + 0x147) = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x147);
      iVar1 = 6;
      if (0xc < *(uint *)(param_2 + 0x43c)) {
        *(undefined1 *)(param_2 + 0x4e4) = *(undefined1 *)(param_1 + 0x14b);
        *(undefined4 *)(param_2 + 0x4e0) = *(undefined4 *)(param_1 + 0x147);
        *(undefined8 *)(param_2 + 0x4d8) = *(undefined8 *)(param_1 + 0x13f);
        *(undefined4 *)(param_2 + 0x454) = 0xd;
        *(undefined4 *)(param_2 + 0x468) = 0;
        iVar1 = 7;
        if (*(char *)(param_1 + 0x14b) != '\x02') {
          iVar1 = 1;
        }
      }
      goto LAB_1002e83e7;
    }
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x14b) = 1;
    goto LAB_1002e81da;
  case 6:
    goto switchD_1002e80c7_caseD_6;
  case 7:
    *(undefined1 *)(param_1 + 0x14b) = 2;
LAB_1002e81da:
    *(undefined4 *)(param_1 + 0x14c) = 4;
    *(undefined4 *)(param_2 + 0x468) = 7;
    bVar8 = false;
    goto LAB_1002e8285;
  case 8:
    if (*piVar7 == 0x82) {
      local_38 = param_2;
      FUN_1002e94c0(param_1 + 0x9e8,&local_38);
      iVar1 = *(int *)(param_1 + 0x14c);
      bVar8 = iVar1 == 8;
      goto LAB_1002e83f0;
    }
    break;
  case 9:
    if (*piVar7 == 0x82) {
      iVar1 = 6;
      local_38 = param_2;
      if (*(int *)(*(long *)(param_1 + 0x9e8) + 0xc) == *(int *)(*(long *)(param_1 + 0x9e8) + 8)) {
        FUN_1002e94c0(param_1 + 0x9e8,&local_38);
        iVar1 = *(int *)(param_1 + 0x14c);
      }
      *(int *)(param_1 + 0x14c) = iVar1;
      bVar8 = iVar1 == 9;
      goto LAB_1002e83f0;
    }
  }
  *(undefined4 *)(param_1 + 0x14c) = 6;
switchD_1002e80c7_caseD_6:
  *(undefined4 *)(param_2 + 0x468) = 7;
LAB_1002e8285:
  if (*piVar7 == 0x82) {
    if (DAT_1011c568c < 3) {
      return bVar8;
    }
    FUN_1008e3970("","USB",0,"[MSC] IN (status = 0x%x):",*(undefined1 *)(param_1 + 0x14b));
    if (DAT_1011c568c < 3) {
      return bVar8;
    }
    if (*(int *)(param_2 + 0x450) == 0x69) {
      FUN_1002da980(3,param_2);
    }
  }
  if (2 < DAT_1011c568c) {
    if ((ulong)(long)*(int *)(param_1 + 0x14c) < 10) {
      pcVar5 = (&PTR_s_MSC_UNINITIALISED_100bb51f0)[*(int *)(param_1 + 0x14c)];
    }
    else {
      pcVar5 = "UNKNOWN";
    }
    pcVar6 = "completed";
    if (bVar8 != false) {
      pcVar6 = "pending";
    }
    FUN_1008e3970("","USB",0,"[MSC] Submit: end state is %s, packet %s",pcVar5,pcVar6);
  }
  return bVar8;
}

