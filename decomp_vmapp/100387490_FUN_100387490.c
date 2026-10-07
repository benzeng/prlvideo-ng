
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100387490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = &PTR_FUN_100bbd068;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xb4) = 0xffffffff00000000;
  local_30 = lVar2;
  (*DAT_1011c5e48)(1,param_1 + 4);
  (*DAT_1011c5e48)(1,(long)param_1 + 0x24);
  (*DAT_1011c5e98)(1,(undefined4 *)((long)param_1 + 0x44));
  (*DAT_1011c5770)(*(undefined4 *)((long)param_1 + 0x44));
  (*DAT_1011c5e38)(1,param_1 + 9);
  (*DAT_1011c5708)(0x8892,*(undefined4 *)(param_1 + 9));
  local_48 = _DAT_100b3e2a0;
  uStack_40 = _UNK_100b3e2a8;
  local_58 = _DAT_100b3e290;
  uStack_54 = _UNK_100b3e294;
  uStack_50 = _UNK_100b3e298;
  uStack_4c = _UNK_100b3e29c;
  (*DAT_1011c57d8)(0x8892,0x20,&local_58,0x88e4);
  (*DAT_1011c72b0)(0,2,0x1406,0,8,0);
  (*DAT_1011c5c90)(0);
  (*DAT_1011c5770)(0);
  if (*(char *)(DAT_1011c8478 + 0x84) != '\0') {
    puVar1 = (undefined4 *)((long)param_1 + 0xbc);
    (*DAT_1011c5e88)(4,puVar1);
    (*DAT_1011c69a8)(*puVar1,0x8072,0x812f);
    (*DAT_1011c69a8)(*puVar1,0x2802,0x812f);
    (*DAT_1011c69a8)(*puVar1,0x2803,0x812f);
    (*DAT_1011c69a8)(*puVar1,0x8a48,0x8a4a);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x8072,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x2802,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x2803,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x8a48,0x8a4a);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x8072,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x2802,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x2803,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x8a48,0x8a4a);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x8072,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x2802,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x2803,0x812f);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x8a48,0x8a4a);
    (*DAT_1011c69a8)(*puVar1,0x2800,0x2601);
    (*DAT_1011c69a8)(*puVar1,0x2801,0x2601);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x2800,0x2600);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x18),0x2801,0x2600);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x2800,0x2601);
    (*DAT_1011c69a8)(*(undefined4 *)((long)param_1 + 0xc4),0x2801,0x2702);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x2800,0x2600);
    (*DAT_1011c69a8)(*(undefined4 *)(param_1 + 0x19),0x2801,0x2700);
  }
  if (lVar2 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

