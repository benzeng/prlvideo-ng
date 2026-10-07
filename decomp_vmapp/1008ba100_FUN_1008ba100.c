
undefined8 FUN_1008ba100(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 local_128 [32];
  undefined8 local_108;
  long local_100;
  undefined8 local_e8;
  undefined8 local_88;
  undefined8 *local_48;
  
  iVar2 = *(int *)((long)param_1 + 0xb4);
  iVar1 = FUN_100885600(param_1[0x14]);
  lVar4 = param_1[0x19];
  if (lVar4 == 0) {
    if (iVar2 < iVar1 + -1) {
      lVar4 = FUN_100885620(param_1[0x14],iVar2 + 1);
    }
    else {
      lVar4 = FUN_100885620(param_1[0x14],iVar1 + -1);
      iVar2 = (*(code *)param_1[10])(param_1,lVar4,lVar4);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x21;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
    }
    lVar6 = 0;
    if (lVar4 != 0) goto LAB_1008ba1ab;
  }
  else {
LAB_1008ba1ab:
    if (param_2[8] == 0) {
      if (((*(byte *)(lVar4 + 0x48) & 2) != 0) && ((*(byte *)(lVar4 + 0x50) & 2) == 0)) {
        *(undefined4 *)(param_1 + 0x17) = 0x23;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
      uVar3 = *(uint *)(param_1 + 0x1b);
      if ((uVar3 & 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x2c;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
        uVar3 = *(uint *)(param_1 + 0x1b);
      }
      if ((uVar3 & 8) == 0) {
        if ((param_1[0x1c] == 0) &&
           (iVar2 = FUN_1008b9a40(local_128,*param_1,param_1[0x19],param_1[3]), iVar2 != 0)) {
          local_108 = param_1[4];
          lVar6 = param_1[5];
          if (local_100 != 0) {
            FUN_1008c0f90();
          }
          local_e8 = param_1[8];
          local_100 = lVar6;
          local_48 = param_1;
          uVar3 = FUN_1008b7ff0(local_128);
          if (0 < (int)uVar3) {
            uVar7 = param_1[0x14];
            iVar2 = FUN_100885600(uVar7);
            uVar7 = FUN_100885620(uVar7,iVar2 + -1);
            iVar2 = FUN_100885600(local_88);
            uVar5 = FUN_100885620(local_88,iVar2 + -1);
            iVar2 = FUN_1008b71f0(uVar7,uVar5);
            uVar3 = (uint)(iVar2 == 0);
          }
          FUN_1008b9980(local_128);
          if (0 < (int)uVar3) goto LAB_1008ba3e9;
        }
        *(undefined4 *)(param_1 + 0x17) = 0x36;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
LAB_1008ba3e9:
      if ((*(byte *)(param_2 + 6) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x29;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
    }
    if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
      param_1[0x1a] = param_2;
      uVar8 = param_1[5] + 8 & (*(long *)(param_1[5] + 0x18) << 0x3e) >> 0x3f;
      iVar2 = FUN_1008b9080(*(undefined8 *)(*param_2 + 0x18),uVar8);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0xf;
        iVar2 = (*(code *)param_1[8])(0,param_1);
joined_r0x0001008ba42a:
        lVar6 = 0;
        uVar7 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
      else if (0 < iVar2) {
        *(undefined4 *)(param_1 + 0x17) = 0xb;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        goto joined_r0x0001008ba42a;
      }
      if (*(long *)(*param_2 + 0x20) != 0) {
        iVar2 = FUN_1008b9080(*(long *)(*param_2 + 0x20),uVar8);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x17) = 0x10;
          iVar2 = (*(code *)param_1[8])(0,param_1);
        }
        else {
          if ((-1 < iVar2) || ((*(byte *)(param_1 + 0x1b) & 2) != 0)) goto LAB_1008ba4f5;
          *(undefined4 *)(param_1 + 0x17) = 0xc;
          iVar2 = (*(code *)param_1[8])(0,param_1);
        }
        lVar6 = 0;
        uVar7 = 0;
        if (iVar2 == 0) goto LAB_1008ba566;
      }
LAB_1008ba4f5:
      param_1[0x1a] = 0;
    }
    lVar6 = FUN_1008b7420(lVar4);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x17) = 6;
      lVar6 = 0;
      iVar2 = (*(code *)param_1[8])(0,param_1);
    }
    else {
      iVar2 = FUN_1008a2170(param_2,lVar6);
      if (0 < iVar2) goto LAB_1008ba560;
      *(undefined4 *)(param_1 + 0x17) = 8;
      iVar2 = (*(code *)param_1[8])(0,param_1);
    }
    uVar7 = 0;
    if (iVar2 == 0) goto LAB_1008ba566;
  }
LAB_1008ba560:
  uVar7 = 1;
LAB_1008ba566:
  FUN_1008924e0(lVar6);
  return uVar7;
}

