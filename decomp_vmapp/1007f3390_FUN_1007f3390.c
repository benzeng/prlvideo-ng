
ulong FUN_1007f3390(long param_1)

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
  if (local_34 == 0) goto LAB_1007f360f;
  lVar4 = *(long *)(param_1 + 0x80);
  iVar1 = *(int *)(lVar4 + 0x3a0);
  if ((iVar1 == 0xc) ||
     ((iVar1 == 0xe && ((*(ulong *)(*(long *)(lVar4 + 0x3a8) + 0x20) & 0x20) != 0)))) {
    *(undefined4 *)(lVar4 + 0x3c4) = 1;
    uVar3 = 1;
    goto LAB_1007f360f;
  }
  if (iVar1 != 0xb) {
    FUN_100887ce0(0x14,0x90,0x72,"s3_clnt.c",0x469);
    uVar2 = 10;
    lVar4 = 0;
    goto LAB_1007f35d1;
  }
  pbVar12 = *(byte **)(param_1 + 0x58);
  lVar4 = FUN_100884e10();
  if (lVar4 == 0) {
    FUN_100887ce0(0x14,0x90,0x41,"s3_clnt.c",0x46f);
    lVar5 = 0;
LAB_1007f35a3:
    lVar7 = 0;
LAB_1007f35e3:
    *(undefined4 *)(param_1 + 0x48) = 5;
    uVar3 = 0xffffffff;
  }
  else {
    uVar8 = (ulong)pbVar12[2] | (ulong)pbVar12[1] << 8 | (ulong)*pbVar12 << 0x10;
    if (uVar8 + 3 != uVar3) {
      FUN_100887ce0(0x14,0x90,0x9f,"s3_clnt.c",0x476);
      uVar2 = 0x32;
LAB_1007f35d1:
      lVar5 = 0;
      lVar7 = 0;
LAB_1007f35d4:
      FUN_1007fd650(param_1,2,uVar2);
      goto LAB_1007f35e3;
    }
    if (uVar8 != 0) {
      uVar3 = 0;
      pbVar12 = pbVar12 + 3;
      do {
        uVar10 = (ulong)pbVar12[2] | (ulong)pbVar12[1] << 8 | (ulong)*pbVar12 << 0x10;
        if (uVar8 < uVar3 + 3 + uVar10) {
          FUN_100887ce0(0x14,0x90,0x87,"s3_clnt.c",0x47e);
          uVar2 = 0x32;
LAB_1007f372d:
          lVar5 = 0;
LAB_1007f3758:
          lVar7 = 0;
          goto LAB_1007f35d4;
        }
        local_40 = pbVar12 + 3;
        lVar5 = FUN_1008a1790(0,&local_40,uVar10);
        if (lVar5 == 0) {
          FUN_100887ce0(0x14,0x90,0xd,"s3_clnt.c",0x486);
          uVar2 = 0x2a;
          goto LAB_1007f372d;
        }
        if (local_40 != pbVar12 + uVar10 + 3) {
          FUN_100887ce0(0x14,0x90,0x87,"s3_clnt.c",0x48c);
          uVar2 = 0x32;
          goto LAB_1007f3758;
        }
        iVar1 = FUN_1008852e0(lVar4,lVar5);
        if (iVar1 == 0) {
          FUN_100887ce0(0x14,0x90,0x41,"s3_clnt.c",0x490);
          goto LAB_1007f35a3;
        }
        uVar3 = uVar3 + uVar10 + 3;
        pbVar12 = local_40;
      } while (uVar3 < uVar8);
    }
    iVar1 = FUN_100812590(param_1,lVar4);
    if ((iVar1 < 1) && (*(int *)(param_1 + 0x140) != 0)) {
      uVar2 = FUN_1007fe5b0(*(undefined8 *)(param_1 + 0x180));
      FUN_100887ce0(0x14,0x90,0x86,"s3_clnt.c",0x4a1);
      goto LAB_1007f35d1;
    }
    FUN_100888070();
    plVar6 = (long *)FUN_1008123f0();
    lVar7 = 0;
    if (plVar6 == (long *)0x0) {
      lVar5 = 0;
      goto LAB_1007f35e3;
    }
    lVar5 = *(long *)(param_1 + 0x130);
    if (*(long *)(lVar5 + 0xa8) != 0) {
      FUN_100812470();
      lVar5 = *(long *)(param_1 + 0x130);
    }
    *(long **)(lVar5 + 0xa8) = plVar6;
    *plVar6 = lVar4;
    lVar5 = FUN_100885620(lVar4,0);
    lVar7 = FUN_1008b7420(lVar5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x3a8);
    if (((*(byte *)(lVar4 + 0x18) & 0x10) == 0) || ((*(byte *)(lVar4 + 0x20) & 0x20) == 0)) {
      if (lVar7 == 0) {
LAB_1007f36ae:
        uVar9 = 0xef;
        uVar11 = 0x4cd;
      }
      else {
        iVar1 = FUN_100891e80(lVar7);
        if (iVar1 != 0) goto LAB_1007f36ae;
        iVar1 = FUN_1007fe520(lVar5,lVar7);
        if (-1 < iVar1) {
          *(int *)(plVar6 + 1) = iVar1;
          FUN_10081d580(lVar5 + 0x1c,1,3,"s3_clnt.c",0x4dc);
          if (plVar6[(long)iVar1 * 3 + 3] != 0) {
            FUN_1008a17f0();
          }
          plVar6[(long)iVar1 * 3 + 3] = lVar5;
          plVar6[2] = (long)(plVar6 + (long)iVar1 * 3 + 3);
          if (*(long *)(*(long *)(param_1 + 0x130) + 0xb0) != 0) {
            FUN_1008a17f0();
          }
          FUN_10081d580(lVar5 + 0x1c,1,3,"s3_clnt.c",0x4e8);
          lVar4 = *(long *)(param_1 + 0x130);
          *(long *)(lVar4 + 0xb0) = lVar5;
          goto LAB_1007f3888;
        }
        uVar9 = 0xf7;
        uVar11 = 0x4d6;
      }
      FUN_100887ce0(0x14,0x90,uVar9,"s3_clnt.c",uVar11);
      uVar2 = 2;
      lVar5 = 0;
      lVar4 = 0;
      goto LAB_1007f35d4;
    }
    uVar2 = FUN_1007fe520(lVar5,lVar7);
    *(undefined4 *)(plVar6 + 1) = uVar2;
    plVar6[2] = 0;
    lVar4 = *(long *)(param_1 + 0x130);
    if (*(long *)(lVar4 + 0xb0) != 0) {
      FUN_1008a17f0();
      lVar4 = *(long *)(param_1 + 0x130);
    }
    *(undefined8 *)(lVar4 + 0xb0) = 0;
LAB_1007f3888:
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(param_1 + 0x180);
    uVar3 = 1;
    lVar5 = 0;
    lVar4 = 0;
  }
  FUN_1008924e0(lVar7);
  FUN_1008a17f0(lVar5);
  FUN_100885590(lVar4,FUN_1008a17f0);
LAB_1007f360f:
  return uVar3 & 0xffffffff;
}

