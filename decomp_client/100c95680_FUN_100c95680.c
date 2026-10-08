
undefined8 FUN_100c95680(undefined8 *param_1,long *param_2)

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
  iVar1 = FUN_100c60800(param_1[0x14]);
  lVar4 = param_1[0x19];
  if (lVar4 == 0) {
    if (iVar2 < iVar1 + -1) {
      lVar4 = FUN_100c60820(param_1[0x14],iVar2 + 1);
    }
    else {
      lVar4 = FUN_100c60820(param_1[0x14],iVar1 + -1);
      iVar2 = (*(code *)param_1[10])(param_1,lVar4,lVar4);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x21;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
    }
    lVar6 = 0;
    if (lVar4 != 0) goto LAB_100c9572b;
  }
  else {
LAB_100c9572b:
    if (param_2[8] == 0) {
      if (((*(byte *)(lVar4 + 0x48) & 2) != 0) && ((*(byte *)(lVar4 + 0x50) & 2) == 0)) {
        *(undefined4 *)(param_1 + 0x17) = 0x23;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
      uVar3 = *(uint *)(param_1 + 0x1b);
      if ((uVar3 & 0x80) == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x2c;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
        uVar3 = *(uint *)(param_1 + 0x1b);
      }
      if ((uVar3 & 8) == 0) {
        if ((param_1[0x1c] == 0) &&
           (iVar2 = FUN_100c94fc0(local_128,*param_1,param_1[0x19],param_1[3]), iVar2 != 0)) {
          local_108 = param_1[4];
          lVar6 = param_1[5];
          if (local_100 != 0) {
            FUN_100c9c510();
          }
          local_e8 = param_1[8];
          local_100 = lVar6;
          local_48 = param_1;
          uVar3 = FUN_100c93570(local_128);
          if (0 < (int)uVar3) {
            uVar7 = param_1[0x14];
            iVar2 = FUN_100c60800(uVar7);
            uVar7 = FUN_100c60820(uVar7,iVar2 + -1);
            iVar2 = FUN_100c60800(local_88);
            uVar5 = FUN_100c60820(local_88,iVar2 + -1);
            iVar2 = FUN_100c92770(uVar7,uVar5);
            uVar3 = (uint)(iVar2 == 0);
          }
          FUN_100c94f00(local_128);
          if (0 < (int)uVar3) goto LAB_100c95969;
        }
        *(undefined4 *)(param_1 + 0x17) = 0x36;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
LAB_100c95969:
      if ((*(byte *)(param_2 + 6) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x17) = 0x29;
        uVar7 = 0;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        lVar6 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
    }
    if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
      param_1[0x1a] = param_2;
      uVar8 = param_1[5] + 8 & (*(long *)(param_1[5] + 0x18) << 0x3e) >> 0x3f;
      iVar2 = FUN_100c94600(*(undefined8 *)(*param_2 + 0x18),uVar8);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x17) = 0xf;
        iVar2 = (*(code *)param_1[8])(0,param_1);
joined_r0x000100c959aa:
        lVar6 = 0;
        uVar7 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
      else if (0 < iVar2) {
        *(undefined4 *)(param_1 + 0x17) = 0xb;
        iVar2 = (*(code *)param_1[8])(0,param_1);
        goto joined_r0x000100c959aa;
      }
      if (*(long *)(*param_2 + 0x20) != 0) {
        iVar2 = FUN_100c94600(*(long *)(*param_2 + 0x20),uVar8);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x17) = 0x10;
          iVar2 = (*(code *)param_1[8])(0,param_1);
        }
        else {
          if ((-1 < iVar2) || ((*(byte *)(param_1 + 0x1b) & 2) != 0)) goto LAB_100c95a75;
          *(undefined4 *)(param_1 + 0x17) = 0xc;
          iVar2 = (*(code *)param_1[8])(0,param_1);
        }
        lVar6 = 0;
        uVar7 = 0;
        if (iVar2 == 0) goto LAB_100c95ae6;
      }
LAB_100c95a75:
      param_1[0x1a] = 0;
    }
    lVar6 = FUN_100c929a0(lVar4);
    if (lVar6 == 0) {
      *(undefined4 *)(param_1 + 0x17) = 6;
      lVar6 = 0;
      iVar2 = (*(code *)param_1[8])(0,param_1);
    }
    else {
      iVar2 = FUN_100c7d6f0(param_2,lVar6);
      if (0 < iVar2) goto LAB_100c95ae0;
      *(undefined4 *)(param_1 + 0x17) = 8;
      iVar2 = (*(code *)param_1[8])(0,param_1);
    }
    uVar7 = 0;
    if (iVar2 == 0) goto LAB_100c95ae6;
  }
LAB_100c95ae0:
  uVar7 = 1;
LAB_100c95ae6:
  FUN_100c6d8c0(lVar6);
  return uVar7;
}

