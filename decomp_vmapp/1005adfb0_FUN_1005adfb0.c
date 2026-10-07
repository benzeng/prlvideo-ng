
void FUN_1005adfb0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  *param_1 = param_2;
  auVar6._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar6._0_8_ = PTR_shared_null_100ba20d0;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar6;
  FUN_1007d6870(param_1 + 3);
  FUN_100707660(param_1 + 5);
  ___bzero(param_1 + 0x14,0x1004);
  *(undefined8 *)((long)param_1 + 0xa4) = 0x686361436c7250;
  *(undefined8 *)((long)param_1 + 0xac) = 0x302e302e30;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x20;
  *(undefined4 *)(param_1 + 0x19) = 0x20000;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x200;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  lVar4 = QArrayData::allocate(4,8,0x401,0);
  param_1[0x215] = lVar4;
  if (lVar4 == 0) {
    qBadAlloc();
    lVar4 = param_1[0x215];
  }
  *(undefined4 *)(lVar4 + 4) = 0x401;
  lVar3 = *(long *)(lVar4 + 0x10);
  lVar1 = lVar4 + lVar3;
  lVar5 = 0x1000;
  do {
    puVar2 = (undefined4 *)(lVar1 + -0xc + lVar5);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = (undefined4 *)(lVar1 + -0x1c + lVar5);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = (undefined4 *)(lVar1 + -0x2c + lVar5);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = (undefined4 *)(lVar1 + -0x3c + lVar5);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != 0);
  *(undefined4 *)(lVar4 + lVar3) = 0xffffffff;
  param_1[0x217] = 0;
  param_1[0x216] = 0;
  param_1[0x218] = 0xffffffffffffffff;
  return;
}

