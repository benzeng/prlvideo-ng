
ulong FUN_100809d30(undefined1 *param_1,undefined4 param_2,void *param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (*(int *)(*(long *)(param_1 + 0x80) + 0x11c) != 0) {
    FUN_10081d560("d1_pkt.c",0x5dd,"0");
LAB_100809d7c:
    uVar7 = FUN_1007fbff0(param_1,param_2,param_3,param_4);
    return uVar7;
  }
  if ((*(int *)(*(long *)(param_1 + 0x80) + 0x1d4) != 0) &&
     (uVar7 = (**(code **)(*(long *)(param_1 + 8) + 0x78))(param_1), (int)uVar7 < 1)) {
    return uVar7;
  }
  uVar7 = 0;
  if (param_5 != 0 || param_4 != 0) {
    lVar2 = *(long *)(param_1 + 0x80);
    iVar4 = 0;
    if ((*(long *)(param_1 + 0x130) != 0) && (iVar4 = 0, *(long *)(param_1 + 0xe8) != 0)) {
      lVar8 = FUN_100894720(*(undefined8 *)(param_1 + 0xf0));
      iVar4 = 0;
      if (lVar8 != 0) {
        uVar9 = FUN_100894720(*(undefined8 *)(param_1 + 0xf0));
        iVar4 = FUN_1008946d0(uVar9);
        if (iVar4 < 0) {
          return 0xffffffff;
        }
      }
    }
    puVar3 = *(undefined1 **)(lVar2 + 0x108);
    *puVar3 = (char)param_2;
    *(undefined4 *)(lVar2 + 0x158) = param_2;
    puVar3[1] = param_1[1];
    puVar3[2] = *param_1;
    if (*(undefined8 **)(param_1 + 0xe8) == (undefined8 *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar7 = FUN_100894630(**(undefined8 **)(param_1 + 0xe8));
      iVar5 = 0;
      if ((uVar7 & 2) != 0) {
        iVar5 = FUN_1008945f0(**(undefined8 **)(param_1 + 0xe8));
      }
    }
    *(undefined1 **)(lVar2 + 0x168) = puVar3 + (long)iVar5 + 0xd;
    *(uint *)(lVar2 + 0x15c) = param_4;
    *(void **)(lVar2 + 0x170) = param_3;
    if (*(long *)(param_1 + 0xf8) == 0) {
      _memcpy(puVar3 + (long)iVar5 + 0xd,param_3,(ulong)param_4);
      *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)(lVar2 + 0x168);
    }
    else {
      iVar6 = FUN_1007fb8f0(param_1);
      if (iVar6 == 0) {
        FUN_100887ce0(0x14,0xf5,0x8d,"d1_pkt.c",0x644);
        return 0xffffffff;
      }
    }
    if (iVar4 != 0) {
      iVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 8))
                        (param_1,puVar3 + (ulong)(uint)(*(int *)(lVar2 + 0x15c) + iVar5) + 0xd,1);
      if (iVar6 < 0) {
        return 0xffffffff;
      }
      *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + iVar4;
    }
    puVar1 = puVar3 + 0xd;
    *(undefined1 **)(lVar2 + 0x170) = puVar1;
    *(undefined1 **)(lVar2 + 0x168) = puVar1;
    if (iVar5 != 0) {
      FUN_100886f90(puVar1,iVar5);
      *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + iVar5;
    }
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 200))(param_1,1);
    uVar7 = 0xffffffff;
    if (0 < iVar4) {
      puVar3[3] = *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x20b);
      puVar3[4] = *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x20a);
      lVar8 = *(long *)(param_1 + 0x80);
      *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(lVar8 + 0x5e);
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(lVar8 + 0x5a);
      puVar3[0xb] = *(undefined1 *)(lVar2 + 0x15d);
      puVar3[0xc] = *(undefined1 *)(lVar2 + 0x15c);
      *(undefined4 *)(lVar2 + 0x158) = param_2;
      *(int *)(lVar2 + 0x15c) = *(int *)(lVar2 + 0x15c) + 0xd;
      FUN_1007fb1a0(*(long *)(param_1 + 0x80) + 0x58);
      uVar7 = (ulong)*(uint *)(lVar2 + 0x15c);
      if (param_5 == 0) {
        *(uint *)(lVar2 + 0x11c) = *(uint *)(lVar2 + 0x15c);
        *(undefined4 *)(lVar2 + 0x118) = 0;
        lVar2 = *(long *)(param_1 + 0x80);
        *(uint *)(lVar2 + 0x1a4) = param_4;
        *(void **)(lVar2 + 0x1b0) = param_3;
        *(undefined4 *)(lVar2 + 0x1a8) = param_2;
        *(uint *)(lVar2 + 0x1ac) = param_4;
        goto LAB_100809d7c;
      }
    }
  }
  return uVar7;
}

