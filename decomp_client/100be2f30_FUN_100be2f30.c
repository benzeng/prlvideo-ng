
long FUN_100be2f30(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == (long *)0x0) {
    uVar7 = 0xc3;
    uVar8 = 0x122;
    goto LAB_100be3233;
  }
  if (*param_1 == 0) {
    uVar7 = 0xe4;
    uVar8 = 0x126;
    goto LAB_100be3233;
  }
  lVar5 = FUN_100bf3540(0x328,"ssl_lib.c",0x12a);
  if (lVar5 != 0) {
    ___bzero(lVar5,0x328);
    uVar2 = *(undefined4 *)((long)param_1 + 0x11c);
    lVar6 = param_1[0x24];
    uVar3 = *(undefined4 *)((long)param_1 + 0x124);
    *(int *)(lVar5 + 0x1a8) = (int)param_1[0x23];
    *(undefined4 *)(lVar5 + 0x1ac) = uVar2;
    *(int *)(lVar5 + 0x1b0) = (int)lVar6;
    *(undefined4 *)(lVar5 + 0x1b4) = uVar3;
    *(long *)(lVar5 + 0x1b8) = param_1[0x25];
    *(undefined4 *)(lVar5 + 0x1a0) = 1;
    if (param_1[0x26] == 0) {
      *(undefined8 *)(lVar5 + 0x100) = 0;
LAB_100be3016:
      *(int *)(lVar5 + 0x90) = (int)param_1[0x27];
      uVar2 = *(undefined4 *)((long)param_1 + 0x144);
      lVar6 = param_1[0x29];
      uVar3 = *(undefined4 *)((long)param_1 + 0x14c);
      *(int *)(lVar5 + 0x98) = (int)param_1[0x28];
      *(undefined4 *)(lVar5 + 0x9c) = uVar2;
      *(int *)(lVar5 + 0xa0) = (int)lVar6;
      *(undefined4 *)(lVar5 + 0xa4) = uVar3;
      *(int *)(lVar5 + 0x140) = (int)param_1[0x2a];
      uVar1 = *(uint *)((long)param_1 + 0x154);
      *(uint *)(lVar5 + 0x108) = uVar1;
      if (0x20 < uVar1) {
        FUN_100bf2cd0("ssl_lib.c",0x151,"s->sid_ctx_length <= sizeof s->sid_ctx");
      }
      *(long *)(lVar5 + 0x124) = param_1[0x2e];
      *(long *)(lVar5 + 0x11c) = param_1[0x2d];
      lVar6 = param_1[0x2b];
      *(long *)(lVar5 + 0x114) = param_1[0x2c];
      *(long *)(lVar5 + 0x10c) = lVar6;
      *(long *)(lVar5 + 0x148) = param_1[0x2f];
      *(long *)(lVar5 + 0x138) = param_1[0x30];
      lVar6 = FUN_100c9c450();
      *(long *)(lVar5 + 0xb0) = lVar6;
      if (lVar6 != 0) {
        FUN_100c9c580(lVar6,param_1[0x31]);
        *(int *)(lVar5 + 0x40) = (int)param_1[0x32];
        *(undefined4 *)(lVar5 + 0x1c8) = *(undefined4 *)((long)param_1 + 0x194);
        FUN_100bf2cf0((long)param_1 + 0x94,1,0xc,"ssl_lib.c",0x161);
        *(long **)(lVar5 + 0x170) = param_1;
        *(undefined4 *)(lVar5 + 0x214) = 0;
        *(undefined8 *)(lVar5 + 0x1d8) = 0;
        *(undefined8 *)(lVar5 + 0x1d0) = 0;
        *(undefined8 *)(lVar5 + 0x1ec) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0x208) = 0;
        *(undefined8 *)(lVar5 + 0x200) = 0;
        *(undefined8 *)(lVar5 + 0x1f8) = 0;
        *(undefined4 *)(lVar5 + 0x210) = 0xffffffff;
        FUN_100bf2cf0((long)param_1 + 0x94,1,0xc,"ssl_lib.c",0x16d);
        *(long **)(lVar5 + 0x270) = param_1;
        *(undefined8 *)(lVar5 + 0x278) = 0;
        *(undefined8 *)(lVar5 + 0x180) = 0;
        lVar6 = *param_1;
        *(long *)(lVar5 + 8) = lVar6;
        iVar4 = (**(code **)(lVar6 + 8))(lVar5);
        if (iVar4 != 0) {
          *(uint *)(lVar5 + 0x38) = (uint)(*(code **)(*param_1 + 0x20) != FUN_100be2c20);
          FUN_100be2c50(lVar5);
          FUN_100bf50a0(1,lVar5,lVar5 + 0x188);
          lVar6 = param_1[0x43];
          *(long *)(lVar5 + 0x160) = param_1[0x42];
          *(long *)(lVar5 + 0x168) = lVar6;
          return lVar5;
        }
      }
    }
    else {
      lVar6 = FUN_100be75a0();
      *(long *)(lVar5 + 0x100) = lVar6;
      if (lVar6 != 0) goto LAB_100be3016;
    }
    FUN_100be3250(lVar5);
  }
  uVar7 = 0x41;
  uVar8 = 0x18a;
LAB_100be3233:
  FUN_100c62ee0(0x14,0xba,uVar7,"ssl_lib.c",uVar8);
  return 0;
}

