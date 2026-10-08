
ulong FUN_100bc8b00(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *local_40;
  int local_34;
  
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x60))
                    (param_1,0x1130,0x1131,0xffffffff,*(undefined8 *)(param_1 + 0x1b8),&local_34);
  if (local_34 == 0) goto LAB_100bc8d7f;
  lVar4 = *(long *)(param_1 + 0x80);
  iVar1 = *(int *)(lVar4 + 0x3a0);
  if ((iVar1 == 0xc) ||
     ((iVar1 == 0xe && ((*(ulong *)(*(long *)(lVar4 + 0x3a8) + 0x20) & 0x20) != 0)))) {
    *(undefined4 *)(lVar4 + 0x3c4) = 1;
    uVar3 = 1;
    goto LAB_100bc8d7f;
  }
  if (iVar1 != 0xb) {
    FUN_100c62ee0(0x14,0x90,0x72,"s3_clnt.c",0x469);
    uVar2 = 10;
    lVar4 = 0;
    goto LAB_100bc8d41;
  }
  pbVar12 = *(byte **)(param_1 + 0x58);
  lVar4 = FUN_100c60010();
  if (lVar4 == 0) {
    FUN_100c62ee0(0x14,0x90,0x41,"s3_clnt.c",0x46f);
    lVar5 = 0;
LAB_100bc8d13:
    lVar7 = 0;
LAB_100bc8d53:
    *(undefined4 *)(param_1 + 0x48) = 5;
    uVar3 = 0xffffffff;
  }
  else {
    uVar8 = (ulong)pbVar12[2] | (ulong)pbVar12[1] << 8 | (ulong)*pbVar12 << 0x10;
    if (uVar8 + 3 != uVar3) {
      FUN_100c62ee0(0x14,0x90,0x9f,"s3_clnt.c",0x476);
      uVar2 = 0x32;
LAB_100bc8d41:
      lVar5 = 0;
      lVar7 = 0;
LAB_100bc8d44:
      FUN_100bd2dc0(param_1,2,uVar2);
      goto LAB_100bc8d53;
    }
    if (uVar8 != 0) {
      uVar3 = 0;
      pbVar12 = pbVar12 + 3;
      do {
        uVar10 = (ulong)pbVar12[2] | (ulong)pbVar12[1] << 8 | (ulong)*pbVar12 << 0x10;
        if (uVar8 < uVar3 + 3 + uVar10) {
          FUN_100c62ee0(0x14,0x90,0x87,"s3_clnt.c",0x47e);
          uVar2 = 0x32;
LAB_100bc8e9d:
          lVar5 = 0;
LAB_100bc8ec8:
          lVar7 = 0;
          goto LAB_100bc8d44;
        }
        local_40 = pbVar12 + 3;
        lVar5 = FUN_100c7cd10(0,&local_40,uVar10);
        if (lVar5 == 0) {
          FUN_100c62ee0(0x14,0x90,0xd,"s3_clnt.c",0x486);
          uVar2 = 0x2a;
          goto LAB_100bc8e9d;
        }
        if (local_40 != pbVar12 + uVar10 + 3) {
          FUN_100c62ee0(0x14,0x90,0x87,"s3_clnt.c",0x48c);
          uVar2 = 0x32;
          goto LAB_100bc8ec8;
        }
        iVar1 = FUN_100c604e0(lVar4,lVar5);
        if (iVar1 == 0) {
          FUN_100c62ee0(0x14,0x90,0x41,"s3_clnt.c",0x490);
          goto LAB_100bc8d13;
        }
        uVar3 = uVar3 + uVar10 + 3;
        pbVar12 = local_40;
      } while (uVar3 < uVar8);
    }
    iVar1 = FUN_100be7d00(param_1,lVar4);
    if ((iVar1 < 1) && (*(int *)(param_1 + 0x140) != 0)) {
      uVar2 = FUN_100bd3d20(*(undefined8 *)(param_1 + 0x180));
      FUN_100c62ee0(0x14,0x90,0x86,"s3_clnt.c",0x4a1);
      goto LAB_100bc8d41;
    }
    FUN_100c63270();
    plVar6 = (long *)FUN_100be7b60();
    lVar7 = 0;
    if (plVar6 == (long *)0x0) {
      lVar5 = 0;
      goto LAB_100bc8d53;
    }
    lVar5 = *(long *)(param_1 + 0x130);
    if (*(long *)(lVar5 + 0xa8) != 0) {
      FUN_100be7be0();
      lVar5 = *(long *)(param_1 + 0x130);
    }
    *(long **)(lVar5 + 0xa8) = plVar6;
    *plVar6 = lVar4;
    lVar5 = FUN_100c60820(lVar4,0);
    lVar7 = FUN_100c929a0(lVar5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
    if (((*(byte *)(lVar4 + 0x18) & 0x10) == 0) || ((*(byte *)(lVar4 + 0x20) & 0x20) == 0)) {
      if (lVar7 == 0) {
LAB_100bc8e1e:
        uVar9 = 0xef;
        uVar11 = 0x4cd;
      }
      else {
        iVar1 = FUN_100c6d260(lVar7);
        if (iVar1 != 0) goto LAB_100bc8e1e;
        iVar1 = FUN_100bd3c90(lVar5,lVar7);
        if (-1 < iVar1) {
          *(int *)(plVar6 + 1) = iVar1;
          FUN_100bf2cf0(lVar5 + 0x1c,1,3,"s3_clnt.c",0x4dc);
          if (plVar6[(long)iVar1 * 3 + 3] != 0) {
            FUN_100c7cd70();
          }
          plVar6[(long)iVar1 * 3 + 3] = lVar5;
          plVar6[2] = (long)(plVar6 + (long)iVar1 * 3 + 3);
          if (*(long *)(*(long *)(param_1 + 0x130) + 0xb0) != 0) {
            FUN_100c7cd70();
          }
          FUN_100bf2cf0(lVar5 + 0x1c,1,3,"s3_clnt.c",0x4e8);
          lVar4 = *(long *)(param_1 + 0x130);
          *(long *)(lVar4 + 0xb0) = lVar5;
          goto LAB_100bc8ff8;
        }
        uVar9 = 0xf7;
        uVar11 = 0x4d6;
      }
      FUN_100c62ee0(0x14,0x90,uVar9,"s3_clnt.c",uVar11);
      uVar2 = 2;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_100bc8d44;
    }
    uVar2 = FUN_100bd3c90(lVar5,lVar7);
    *(undefined4 *)(plVar6 + 1) = uVar2;
    plVar6[2] = 0;
    lVar4 = *(long *)(param_1 + 0x130);
    if (*(long *)(lVar4 + 0xb0) != 0) {
      FUN_100c7cd70();
      lVar4 = *(long *)(param_1 + 0x130);
    }
    *(undefined8 *)(lVar4 + 0xb0) = 0;
LAB_100bc8ff8:
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(param_1 + 0x180);
    uVar3 = 1;
    lVar5 = 0;
    lVar4 = 0;
  }
  FUN_100c6d8c0(lVar7);
  FUN_100c7cd70(lVar5);
  FUN_100c60790(lVar4,FUN_100c7cd70);
LAB_100bc8d7f:
  return uVar3 & 0xffffffff;
}

