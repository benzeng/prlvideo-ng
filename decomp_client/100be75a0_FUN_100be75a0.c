
long * FUN_100be75a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  plVar5 = (long *)FUN_100bf3540(0x128,"ssl_cert.c",0xc9);
  if (plVar5 == (long *)0x0) {
    FUN_100c62ee0(0x14,0xdd,0x41,"ssl_cert.c",0xcb);
    return (long *)0x0;
  }
  ___bzero(plVar5,0x128);
  *(undefined4 *)(plVar5 + 0x24) = 1;
  *plVar5 = (long)plVar5 + (*param_1 - (long)(param_1 + 0xc) & 0xfffffffffffffff8U) + 0x60;
  *(int *)(plVar5 + 1) = (int)param_1[1];
  lVar6 = param_1[3];
  plVar5[2] = param_1[2];
  plVar5[3] = lVar6;
  uVar3 = *(undefined4 *)((long)param_1 + 0x24);
  lVar6 = param_1[5];
  uVar4 = *(undefined4 *)((long)param_1 + 0x2c);
  *(int *)(plVar5 + 4) = (int)param_1[4];
  *(undefined4 *)((long)plVar5 + 0x24) = uVar3;
  *(int *)(plVar5 + 5) = (int)lVar6;
  *(undefined4 *)((long)plVar5 + 0x2c) = uVar4;
  if (param_1[6] != 0) {
    FUN_100c47750();
    plVar5[6] = param_1[6];
  }
  plVar5[7] = param_1[7];
  if (param_1[8] == 0) {
LAB_100be76a7:
    plVar5[9] = param_1[9];
    if (param_1[10] != 0) {
      lVar6 = FUN_100c3f3c0();
      plVar5[10] = lVar6;
      if (lVar6 == 0) {
        uVar7 = 0x10;
        uVar8 = 0x105;
        goto LAB_100be7814;
      }
    }
    plVar5[0xb] = param_1[0xb];
    lVar6 = 0;
    do {
      lVar2 = *(long *)((long)param_1 + lVar6 + 0x60);
      if (lVar2 != 0) {
        *(long *)((long)plVar5 + lVar6 + 0x60) = lVar2;
        FUN_100bf2cf0(lVar2 + 0x1c,1,3,"ssl_cert.c",0x10f);
      }
      lVar2 = *(long *)((long)param_1 + lVar6 + 0x68);
      if (lVar2 != 0) {
        *(long *)((long)plVar5 + lVar6 + 0x68) = lVar2;
        FUN_100bf2cf0(lVar2 + 8,1,10,"ssl_cert.c",0x115);
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0xc0);
    lVar6 = FUN_100c6ca00();
    plVar5[0x14] = lVar6;
    lVar6 = FUN_100c6ca00();
    plVar5[0x11] = lVar6;
    lVar6 = FUN_100c6ca00();
    plVar5[0xe] = lVar6;
    lVar6 = FUN_100c6ca00();
    plVar5[0x1d] = lVar6;
  }
  else {
    lVar6 = FUN_100c51320();
    plVar5[8] = lVar6;
    if (lVar6 != 0) {
      lVar6 = param_1[8];
      if (*(long *)(lVar6 + 0x28) != 0) {
        lVar6 = FUN_100c26a40();
        if (lVar6 == 0) {
          uVar7 = 3;
          uVar8 = 0xf0;
          goto LAB_100be7814;
        }
        *(long *)(plVar5[8] + 0x28) = lVar6;
        lVar6 = param_1[8];
      }
      if (*(long *)(lVar6 + 0x20) != 0) {
        lVar6 = FUN_100c26a40();
        if (lVar6 == 0) {
          uVar7 = 3;
          uVar8 = 0xf8;
          goto LAB_100be7814;
        }
        *(long *)(plVar5[8] + 0x20) = lVar6;
      }
      goto LAB_100be76a7;
    }
    uVar7 = 5;
    uVar8 = 0xea;
LAB_100be7814:
    FUN_100c62ee0(0x14,0xdd,uVar7,"ssl_cert.c",uVar8);
    if (plVar5[6] != 0) {
      FUN_100c47630();
    }
    if (plVar5[8] != 0) {
      FUN_100c51d00();
    }
    if (plVar5[10] != 0) {
      FUN_100c3f180();
    }
    if (plVar5[0xc] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0xd] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0xf] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x10] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x12] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x13] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x15] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x16] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x18] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x19] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x1b] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x1c] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x1e] != 0) {
      FUN_100c7cd70();
    }
    if (plVar5[0x1f] != 0) {
      FUN_100c6d8c0();
    }
    if (plVar5[0x21] != 0) {
      FUN_100c7cd70();
    }
    plVar1 = plVar5 + 0x22;
    plVar5 = (long *)0x0;
    if (*plVar1 != 0) {
      FUN_100c6d8c0();
      plVar5 = (long *)0x0;
    }
  }
  return plVar5;
}

