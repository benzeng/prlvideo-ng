
ulong FUN_1007fbb10(uint *param_1,ulong param_2,void *param_3,uint param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  int local_4c;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar1 + 0x11c) != 0) goto LAB_1007fbf90;
  iVar11 = (int)param_2;
  if (*(int *)(lVar1 + 0x1d4) != 0) {
    uVar4 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
    if ((int)uVar4 < 1) {
      return (ulong)uVar4;
    }
  }
  if ((*(long *)(lVar1 + 0x108) == 0) && (iVar5 = FUN_1007fe760(param_1), iVar5 == 0)) {
    return 0xffffffff;
  }
  if (param_5 == 0 && param_4 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (((*(long *)(param_1 + 0x4c) == 0) || (*(long *)(param_1 + 0x3a) == 0)) ||
     (lVar8 = FUN_100894720(*(undefined8 *)(param_1 + 0x3c)), lVar8 == 0)) {
    bVar13 = *(long *)(param_1 + 0x3a) == 0;
    local_4c = 0;
  }
  else {
    uVar9 = FUN_100894720(*(undefined8 *)(param_1 + 0x3c));
    local_4c = FUN_1008946d0(uVar9);
    if (local_4c < 0) {
      return 0xffffffff;
    }
    bVar13 = false;
  }
  iVar5 = 0;
  if ((!bVar13 && param_5 == 0) && (lVar8 = *(long *)(param_1 + 0x20), *(int *)(lVar8 + 0xe8) == 0))
  {
    iVar5 = 0;
    if ((iVar11 == 0x17) && (*(int *)(lVar8 + 0xe4) != 0)) {
      iVar5 = FUN_1007fbb10(param_1,0x17,param_3,0,1);
      if (iVar5 < 1) {
        return 0xffffffff;
      }
      if (0x55 < iVar5) {
        FUN_100887ce0(0x14,0x68,0x44,"s3_pkt.c",0x2fa);
        return 0xffffffff;
      }
      lVar8 = *(long *)(param_1 + 0x20);
    }
    *(undefined4 *)(lVar8 + 0xe8) = 1;
  }
  if (param_5 == 0) {
    lVar8 = *(long *)(lVar1 + 0x108);
    if (iVar5 == 0) {
      iVar7 = -5;
      goto LAB_1007fbd1c;
    }
    puVar12 = (undefined1 *)(lVar8 + (long)iVar5 + (long)*(int *)(lVar1 + 0x118));
  }
  else {
    lVar8 = *(long *)(lVar1 + 0x108);
    iVar7 = -10;
LAB_1007fbd1c:
    uVar10 = (ulong)(uint)(iVar7 - (int)lVar8) & 7;
    puVar12 = (undefined1 *)(lVar8 + uVar10);
    *(int *)(lVar1 + 0x118) = (int)uVar10;
  }
  *puVar12 = (char)param_2;
  *(int *)(lVar2 + 0x158) = iVar11;
  puVar12[1] = *(undefined1 *)((long)param_1 + 1);
  if (((param_1[0x12] != 0x1111) || (param_1[0xa9] != 0)) ||
     (((int)*param_1 < 0x302 || (uVar3 = 1, (*param_1 & 0xffffff00) != 0x300)))) {
    uVar3 = (undefined1)*param_1;
  }
  puVar12[2] = uVar3;
  iVar7 = 0;
  if ((*(long *)(param_1 + 0x3a) != 0) && (0x301 < (int)*param_1)) {
    uVar4 = FUN_100894310();
    iVar7 = 8;
    if ((uVar4 & 0xf0007) != 6) {
      if ((uVar4 & 0xf0007) == 2) {
        iVar6 = FUN_1008944d0(*(undefined8 *)(param_1 + 0x3a));
        iVar7 = 0;
        if (1 < iVar6) {
          iVar7 = iVar6;
        }
      }
      else {
        iVar7 = 0;
      }
    }
  }
  *(undefined1 **)(lVar2 + 0x168) = puVar12 + (long)iVar7 + 5;
  *(uint *)(lVar2 + 0x15c) = param_4;
  *(void **)(lVar2 + 0x170) = param_3;
  if (*(long *)(param_1 + 0x3e) == 0) {
    _memcpy(puVar12 + (long)iVar7 + 5,param_3,(ulong)param_4);
    *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(lVar2 + 0x168);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    iVar6 = FUN_1008d7a80(*(long *)(param_1 + 0x3e),*(undefined8 *)(lVar8 + 0x168),0x4400,
                          *(undefined8 *)(lVar8 + 0x170),*(undefined4 *)(lVar8 + 0x15c));
    if (iVar6 < 0) {
      FUN_100887ce0(0x14,0x68,0x8d,"s3_pkt.c",0x348);
      return 0xffffffff;
    }
    *(int *)(lVar8 + 0x15c) = iVar6;
    *(undefined8 *)(lVar8 + 0x170) = *(undefined8 *)(lVar8 + 0x168);
  }
  if (local_4c != 0) {
    iVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 8))
                      (param_1,puVar12 + (ulong)(uint)(*(int *)(lVar2 + 0x15c) + iVar7) + 5,1);
    if (iVar6 < 0) {
      return 0xffffffff;
    }
    *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + local_4c;
  }
  *(undefined1 **)(lVar2 + 0x170) = puVar12 + 5;
  *(undefined1 **)(lVar2 + 0x168) = puVar12 + 5;
  if (iVar7 != 0) {
    *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + iVar7;
  }
  iVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 200))(param_1,1);
  uVar10 = 0xffffffff;
  if (0 < iVar7) {
    puVar12[3] = *(undefined1 *)(lVar2 + 0x15d);
    puVar12[4] = *(undefined1 *)(lVar2 + 0x15c);
    param_2 = param_2 & 0xffffffff;
    *(int *)(lVar2 + 0x158) = iVar11;
    uVar4 = *(int *)(lVar2 + 0x15c) + 5;
    uVar10 = (ulong)uVar4;
    *(uint *)(lVar2 + 0x15c) = uVar4;
    if (param_5 == 0) {
      *(uint *)(lVar1 + 0x11c) = uVar4 + iVar5;
      lVar1 = *(long *)(param_1 + 0x20);
      *(uint *)(lVar1 + 0x1a4) = param_4;
      *(void **)(lVar1 + 0x1b0) = param_3;
      *(int *)(lVar1 + 0x1a8) = iVar11;
      *(uint *)(lVar1 + 0x1ac) = param_4;
LAB_1007fbf90:
      uVar10 = FUN_1007fbff0(param_1,param_2,param_3,param_4);
      return uVar10;
    }
  }
  return uVar10;
}

