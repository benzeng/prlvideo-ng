
void FUN_10030bd30(int *param_1,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long local_48;
  undefined4 local_34;
  
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e2,param_1);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e0);
  if ((param_2 & 0x200) != 0) {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb80,param_1 + 2);
  }
  if ((param_2 & 0x4000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xbc1,param_1 + 6);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xbc2,param_1 + 7);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x80c9,param_1 + 8);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x80cb,param_1 + 9);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x80c8,param_1 + 10);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x80ca,param_1 + 0xb);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8009,param_1 + 0xc);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x883d,param_1 + 0xd);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8005,param_1 + 0xe);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xbf0,param_1 + 0x12);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc01,param_1 + 0x13);
    pcVar3 = (code *)DAT_1011c4a88[0x69];
    uVar7 = *DAT_1011c4a88;
    piVar8 = param_1 + 0x14;
    lVar5 = -0x10;
    do {
      (*pcVar3)(uVar7,(int)lVar5 + 0x8835,piVar8);
      pcVar3 = (code *)DAT_1011c4a88[0x69];
      uVar7 = *DAT_1011c4a88;
      piVar8 = piVar8 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
    (*pcVar3)(uVar7,0xc21,param_1 + 0x24);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xc23,param_1 + 0x25);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xc22,param_1 + 0x26);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xc20,param_1 + 0x2a);
  }
  if ((param_2 & 0x6000) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xbc0);
    *(undefined1 *)(param_1 + 0x2b) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xbe2);
    *(undefined1 *)((long)param_1 + 0xad) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xbd0);
    *(undefined1 *)((long)param_1 + 0xae) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xbf1);
    *(undefined1 *)((long)param_1 + 0xaf) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xbf2);
    *(undefined1 *)(param_1 + 0x2c) = uVar2;
  }
  if ((param_2 & 1) != 0) {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb00,param_1 + 0x2d);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8459,param_1 + 0x31);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb03,param_1 + 0x35);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb02,param_1 + 0x39);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8453,param_1 + 0x3c);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb43,param_1 + 0x3d);
    piVar8 = param_1 + 0x3e;
    uVar6 = 0;
    do {
      (*(code *)DAT_1011c4a88[0x204])(*DAT_1011c4a88,uVar6 & 0xffffffff,0x8626,piVar8);
      uVar6 = uVar6 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0x10);
  }
  if ((param_2 & 0x100) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb74,param_1 + 0x7e);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb72,param_1 + 0x7f);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb73,param_1 + 0x80);
  }
  if ((param_2 & 0x2100) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb71);
    *(undefined1 *)(param_1 + 0x81) = uVar2;
  }
  if ((param_2 & 0x12000) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd97);
    *(undefined1 *)((long)param_1 + 0x205) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd98);
    *(undefined1 *)((long)param_1 + 0x206) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd91);
    *(undefined1 *)((long)param_1 + 0x207) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd90);
    *(undefined1 *)(param_1 + 0x82) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd92);
    *(undefined1 *)((long)param_1 + 0x209) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd93);
    *(undefined1 *)((long)param_1 + 0x20a) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd94);
    *(undefined1 *)((long)param_1 + 0x20b) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd95);
    *(undefined1 *)(param_1 + 0x83) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd96);
    *(undefined1 *)((long)param_1 + 0x20d) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb7);
    *(undefined1 *)((long)param_1 + 0x20e) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb8);
    *(undefined1 *)((long)param_1 + 0x20f) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb1);
    *(undefined1 *)(param_1 + 0x84) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb0);
    *(undefined1 *)((long)param_1 + 0x211) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb2);
    *(undefined1 *)((long)param_1 + 0x212) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb3);
    *(undefined1 *)((long)param_1 + 0x213) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb4);
    *(undefined1 *)(param_1 + 0x85) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb5);
    *(undefined1 *)((long)param_1 + 0x215) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xdb6);
    *(undefined1 *)((long)param_1 + 0x216) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xd80);
    *(undefined1 *)((long)param_1 + 0x217) = uVar2;
  }
  if ((param_2 & 0x80) != 0) {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb66,param_1 + 0x86);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb61,param_1 + 0x8a);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb62,param_1 + 0x8b);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb63,param_1 + 0x8c);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb64,param_1 + 0x8d);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb65,param_1 + 0x8e);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8450,param_1 + 0x8f);
  }
  if ((param_2 & 0x2080) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb60);
    *(undefined1 *)(param_1 + 0x90) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8458);
    *(undefined1 *)((long)param_1 + 0x241) = uVar2;
  }
  if ((param_2 & 0x8000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc50,param_1 + 0x91);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc51,param_1 + 0x92);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc52,param_1 + 0x93);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc53,param_1 + 0x94);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc54,param_1 + 0x95);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8192,param_1 + 0x96);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84ef,param_1 + 0x97);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8b8b,param_1 + 0x98);
  }
  if ((param_2 & 0x40) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb54,param_1 + 0x99);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb55,param_1 + 0x9a);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb56,param_1 + 0x9b);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1200,param_1 + 0x9c);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1201,param_1 + 0xa0);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1202,param_1 + 0xa4);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1600,param_1 + 0xa8);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1601,param_1 + 0xac);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x404,0x1603,param_1 + 0xad);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1200,param_1 + 0xb0);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1201,param_1 + 0xb4);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1202,param_1 + 0xb8);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1600,param_1 + 0xbc);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1601,param_1 + 0xc0);
    (*(code *)DAT_1011c4a88[0x6f])(*DAT_1011c4a88,0x405,0x1603,param_1 + 0xc1);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb53,param_1 + 0xc4);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb51,param_1 + 200);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb52,(long)param_1 + 0x321);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x81f8,param_1 + 0xc9);
    lVar5 = -0x80;
    iVar4 = 0x4000;
    lVar9 = 0;
    local_48 = 0x588;
    do {
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1200,(long)param_1 + lVar5 + 0x3a8);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1201,(long)param_1 + lVar5 + 0x428);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1202,(long)param_1 + lVar5 + 0x4a8);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1203,(long)param_1 + lVar5 + 0x528);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1207,(long)param_1 + lVar9 + 0x528);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1208,(long)param_1 + lVar9 + 0x548);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1209,(long)param_1 + lVar9 + 0x568);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1204,(long)param_1 + local_48);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1205,(long)param_1 + lVar9 + 0x5e8);
      (*(code *)DAT_1011c4a88[0x6a])(*DAT_1011c4a88,iVar4,0x1206,(long)param_1 + lVar9 + 0x608);
      lVar5 = lVar5 + 0x10;
      lVar9 = lVar9 + 4;
      local_48 = local_48 + 0xc;
      iVar4 = iVar4 + 1;
    } while (lVar9 != 0x20);
  }
  if ((param_2 & 0x2040) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb50);
    *(undefined1 *)(param_1 + 0x18a) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb57);
    *(undefined1 *)((long)param_1 + 0x629) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4000);
    *(undefined1 *)((long)param_1 + 0x62a) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4001);
    *(undefined1 *)((long)param_1 + 0x62b) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4002);
    *(undefined1 *)(param_1 + 0x18b) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4003);
    *(undefined1 *)((long)param_1 + 0x62d) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4004);
    *(undefined1 *)((long)param_1 + 0x62e) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4005);
    *(undefined1 *)((long)param_1 + 0x62f) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4006);
    *(undefined1 *)(param_1 + 0x18c) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x4007);
    *(undefined1 *)((long)param_1 + 0x631) = uVar2;
  }
  if ((param_2 & 4) != 0) {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb21,param_1 + 0x18d);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb26,param_1 + 0x18e);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb25,param_1 + 399);
  }
  if ((param_2 & 0x2004) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb20);
    *(undefined1 *)(param_1 + 400) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb24);
    *(undefined1 *)((long)param_1 + 0x641) = uVar2;
  }
  if ((param_2 & 0x20000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb32,param_1 + 0x191);
  }
  if ((param_2 & 0x20) != 0) {
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xd10,param_1 + 0x192);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xd11,(long)param_1 + 0x649);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xd12,(long)param_1 + 0x64a);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xd13,(long)param_1 + 0x64b);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd14,param_1 + 0x193);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd18,param_1 + 0x194);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1a,param_1 + 0x195);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1c,param_1 + 0x196);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd15,param_1 + 0x197);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd19,param_1 + 0x198);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1b,param_1 + 0x199);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1d,param_1 + 0x19a);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1e,param_1 + 0x19b);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd1f,param_1 + 0x19c);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d0,0x80d6,param_1 + 0x19d);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d0,0x80d7,param_1 + 0x1a1);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d1,0x80d6,param_1 + 0x1a5);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d1,0x80d7,param_1 + 0x1a9);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d2,0x80d6,param_1 + 0x1ad);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d2,0x80d7,param_1 + 0x1b1);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d3,0x80d6,param_1 + 0x1b5);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d3,0x80d7,param_1 + 0x1b9);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d4,0x80d6,param_1 + 0x1bd);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d4,0x80d7,param_1 + 0x1c1);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d5,0x80d6,param_1 + 0x1c5);
    (*(code *)DAT_1011c4a88[0x19c])(*DAT_1011c4a88,0x80d5,0x80d7,param_1 + 0x1c9);
    (*(code *)DAT_1011c4a88[0x1aa])(*DAT_1011c4a88,0x8010,0x8013,param_1 + 0x1cd);
    (*(code *)DAT_1011c4a88[0x1aa])(*DAT_1011c4a88,0x8011,0x8013,param_1 + 0x1ce);
    (*(code *)DAT_1011c4a88[0x1aa])(*DAT_1011c4a88,0x8012,0x8013,param_1 + 0x1cf);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8010,0x8154,param_1 + 0x1d0);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8011,0x8154,param_1 + 0x1d4);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8012,0x8154,param_1 + 0x1d8);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8010,0x8014,param_1 + 0x1dc);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8011,0x8014,param_1 + 0x1e0);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8012,0x8014,param_1 + 0x1e4);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8010,0x8015,param_1 + 0x1e8);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8011,0x8015,param_1 + 0x1ec);
    (*(code *)DAT_1011c4a88[0x1a9])(*DAT_1011c4a88,0x8012,0x8015,param_1 + 0x1f0);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x801c,param_1 + 500);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x801d,param_1 + 0x1f5);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x801e,param_1 + 0x1f6);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x801f,param_1 + 0x1f7);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8020,param_1 + 0x1f8);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8021,param_1 + 0x1f9);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8022,param_1 + 0x1fa);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8023,param_1 + 0x1fb);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b4,param_1 + 0x1fc);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b5,param_1 + 0x1fd);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b6,param_1 + 0x1fe);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b7,param_1 + 0x1ff);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b8,param_1 + 0x200);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80b9,param_1 + 0x201);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80ba,param_1 + 0x202);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x80bb,param_1 + 0x203);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd16,param_1 + 0x204);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd17,param_1 + 0x205);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc02,param_1 + 0x206);
  }
  if ((param_2 & 0x2020) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x80d0);
    *(undefined1 *)(param_1 + 0x207) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x80d1);
    *(undefined1 *)((long)param_1 + 0x81d) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x80d2);
    *(undefined1 *)((long)param_1 + 0x81e) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8010);
    *(undefined1 *)((long)param_1 + 0x81f) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8011);
    *(undefined1 *)(param_1 + 0x208) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8012);
    *(undefined1 *)((long)param_1 + 0x821) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8024);
    *(undefined1 *)((long)param_1 + 0x822) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x802e);
    *(undefined1 *)((long)param_1 + 0x823) = uVar2;
  }
  if ((param_2 & 2) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e0,&local_34);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb11,param_1 + 0x209);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8126,param_1 + 0x20a);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8127,param_1 + 0x20b);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8128,param_1 + 0x20c);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8129,param_1 + 0x20d);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,36000,param_1 + 0x210);
    pcVar3 = (code *)DAT_1011c4a88[0x157];
    uVar7 = *DAT_1011c4a88;
    piVar8 = param_1 + 0x211;
    uVar6 = 1;
    do {
      (*pcVar3)(uVar7,(int)uVar6 + 0x84bf);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x8861,0x8862,piVar8);
      pcVar3 = (code *)DAT_1011c4a88[0x157];
      uVar7 = *DAT_1011c4a88;
      if (0xf < uVar6) break;
      piVar8 = piVar8 + 1;
      bVar1 = uVar6 <= *param_1 - 1;
      uVar6 = uVar6 + 1;
    } while (bVar1);
    (*pcVar3)(uVar7,local_34);
  }
  if ((param_2 & 0x2002) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb10);
    *(undefined1 *)(param_1 + 0x221) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8861);
    *(undefined1 *)((long)param_1 + 0x885) = uVar2;
  }
  if ((param_2 & 8) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb45,param_1 + 0x222);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb46,param_1 + 0x223);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb40,param_1 + 0x224);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x8038,param_1 + 0x226);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0x2a00,param_1 + 0x227);
  }
  if ((param_2 & 0x2008) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb44);
    *(undefined1 *)(param_1 + 0x228) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb41);
    *(undefined1 *)((long)param_1 + 0x8a1) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x2a01);
    *(undefined1 *)((long)param_1 + 0x8a2) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x2a02);
    *(undefined1 *)((long)param_1 + 0x8a3) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8037);
    *(undefined1 *)(param_1 + 0x229) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb42);
    *(undefined1 *)((long)param_1 + 0x8a5) = uVar2;
  }
  if ((param_2 & 0x80000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xc10,param_1 + 0x22a);
  }
  if ((param_2 & 0x82000) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc11);
    *(undefined1 *)(param_1 + 0x22e) = uVar2;
  }
  if ((param_2 & 0x400) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb92,param_1 + 0x22f);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb97,param_1 + 0x230);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb93,param_1 + 0x231);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8800,param_1 + 0x232);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8ca3,param_1 + 0x233);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8ca4,param_1 + 0x234);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb94,param_1 + 0x235);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb95,param_1 + 0x236);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb96,param_1 + 0x237);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8801,param_1 + 0x238);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8802,param_1 + 0x239);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8803,param_1 + 0x23a);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb98,param_1 + 0x23b);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8ca5,param_1 + 0x23c);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb91,param_1 + 0x23d);
  }
  if ((param_2 & 0x2400) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xb90);
    *(undefined1 *)(param_1 + 0x23e) = uVar2;
  }
  if ((param_2 & 0x40000) != 0) {
    pcVar3 = (code *)DAT_1011c4a88[0x157];
    uVar7 = *DAT_1011c4a88;
    lVar5 = 0;
    lVar9 = 0;
    uVar6 = 1;
    do {
      (*pcVar3)(uVar7,(int)uVar6 + 0x84bf);
      (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8068,(long)param_1 + lVar9 + 0x8fc);
      (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8069,(long)param_1 + lVar9 + 0x93c);
      (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x806a,(long)param_1 + lVar9 + 0x97c);
      (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x8514,(long)param_1 + lVar9 + 0x9bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x1004,(long)param_1 + lVar5 + 0x9fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x1004,(long)param_1 + lVar5 + 0xafc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x1004,(long)param_1 + lVar5 + 0xbfc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x1004,(long)param_1 + lVar5 + 0xcfc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x2801,(long)param_1 + lVar9 + 0xdfc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x2801,(long)param_1 + lVar9 + 0xe3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x2801,(long)param_1 + lVar9 + 0xe7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x2801,(long)param_1 + lVar9 + 0xebc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x2800,(long)param_1 + lVar9 + 0xefc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x2800,(long)param_1 + lVar9 + 0xf3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x2800,(long)param_1 + lVar9 + 0xf7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x2800,(long)param_1 + lVar9 + 0xfbc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x2802,(long)param_1 + lVar9 + 0xffc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x2802,(long)param_1 + lVar9 + 0x103c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x2802,(long)param_1 + lVar9 + 0x107c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x2802,(long)param_1 + lVar9 + 0x10bc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x2803,(long)param_1 + lVar9 + 0x10fc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x2803,(long)param_1 + lVar9 + 0x113c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x2803,(long)param_1 + lVar9 + 0x117c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x2803,(long)param_1 + lVar9 + 0x11bc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x8072,(long)param_1 + lVar9 + 0x11fc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x8072,(long)param_1 + lVar9 + 0x123c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x8072,(long)param_1 + lVar9 + 0x127c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x8072,(long)param_1 + lVar9 + 0x12bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x8066,(long)param_1 + lVar9 + 0x12fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x8066,(long)param_1 + lVar9 + 0x133c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x8066,(long)param_1 + lVar9 + 0x137c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x8066,(long)param_1 + lVar9 + 0x13bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x8067,(long)param_1 + lVar9 + 0x13fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x8067,(long)param_1 + lVar9 + 0x143c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x8067,(long)param_1 + lVar9 + 0x147c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x8067,(long)param_1 + lVar9 + 0x14bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x813a,(long)param_1 + lVar9 + 0x14fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x813a,(long)param_1 + lVar9 + 0x153c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x813a,(long)param_1 + lVar9 + 0x157c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x813a,(long)param_1 + lVar9 + 0x15bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x813b,(long)param_1 + lVar9 + 0x15fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x813b,(long)param_1 + lVar9 + 0x163c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x813b,(long)param_1 + lVar9 + 0x167c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x813b,(long)param_1 + lVar9 + 0x16bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x813c,(long)param_1 + lVar9 + 0x16fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x813c,(long)param_1 + lVar9 + 0x173c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x813c,(long)param_1 + lVar9 + 0x177c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x813c,(long)param_1 + lVar9 + 0x17bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x813d,(long)param_1 + lVar9 + 0x17fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x813d,(long)param_1 + lVar9 + 0x183c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x813d,(long)param_1 + lVar9 + 0x187c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x813d,(long)param_1 + lVar9 + 0x18bc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde0,0x8501,(long)param_1 + lVar9 + 0x18fc);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0xde1,0x8501,(long)param_1 + lVar9 + 0x193c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x806f,0x8501,(long)param_1 + lVar9 + 0x197c);
      (*(code *)DAT_1011c4a88[0x7f])(*DAT_1011c4a88,0x8513,0x8501,(long)param_1 + lVar9 + 0x19bc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x884b,(long)param_1 + lVar9 + 0x19fc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x884b,(long)param_1 + lVar9 + 0x1a3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x884b,(long)param_1 + lVar9 + 0x1a7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x884b,(long)param_1 + lVar9 + 0x1abc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x884c,(long)param_1 + lVar9 + 0x1afc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x884c,(long)param_1 + lVar9 + 0x1b3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x884c,(long)param_1 + lVar9 + 0x1b7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x884c,(long)param_1 + lVar9 + 0x1bbc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x884d,(long)param_1 + lVar9 + 0x1bfc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x884d,(long)param_1 + lVar9 + 0x1c3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x884d,(long)param_1 + lVar9 + 0x1c7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x884d,(long)param_1 + lVar9 + 0x1cbc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde0,0x8191,(long)param_1 + lVar9 + 0x1cfc);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0xde1,0x8191,(long)param_1 + lVar9 + 0x1d3c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x806f,0x8191,(long)param_1 + lVar9 + 0x1d7c);
      (*(code *)DAT_1011c4a88[0x80])(*DAT_1011c4a88,0x8513,0x8191,(long)param_1 + lVar9 + 0x1dbc);
      (*(code *)DAT_1011c4a88[0x77])(*DAT_1011c4a88,0x8500,0x8501,(long)param_1 + lVar9 + 0x1dfc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x2200,(long)param_1 + lVar9 + 0x1e3c);
      (*(code *)DAT_1011c4a88[0x77])(*DAT_1011c4a88,0x2300,0x2201,(long)param_1 + lVar5 + 0x1e7c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2000,0x2502,(long)param_1 + lVar5 + 0x1f7c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2001,0x2502,(long)param_1 + lVar5 + 0x207c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2002,0x2502,(long)param_1 + lVar5 + 0x217c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2003,0x2502,(long)param_1 + lVar5 + 0x227c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2000,0x2501,(long)param_1 + lVar5 + 0x237c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2001,0x2501,(long)param_1 + lVar5 + 0x247c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2002,0x2501,(long)param_1 + lVar5 + 0x257c);
      (*(code *)DAT_1011c4a88[0x7a])(*DAT_1011c4a88,0x2003,0x2501,(long)param_1 + lVar5 + 0x267c);
      (*(code *)DAT_1011c4a88[0x7b])(*DAT_1011c4a88,0x2000,0x2500,(long)param_1 + lVar9 + 0x277c);
      (*(code *)DAT_1011c4a88[0x7b])(*DAT_1011c4a88,0x2001,0x2500,(long)param_1 + lVar9 + 0x27bc);
      (*(code *)DAT_1011c4a88[0x7b])(*DAT_1011c4a88,0x2002,0x2500,(long)param_1 + lVar9 + 0x27fc);
      (*(code *)DAT_1011c4a88[0x7b])(*DAT_1011c4a88,0x2003,0x2500,(long)param_1 + lVar9 + 0x283c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8571,(long)param_1 + lVar9 + 0x287c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8572,(long)param_1 + lVar9 + 0x28bc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8580,(long)param_1 + lVar9 + 0x28fc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8581,(long)param_1 + lVar9 + 0x293c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8582,(long)param_1 + lVar9 + 0x297c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8588,(long)param_1 + lVar9 + 0x29bc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8589,(long)param_1 + lVar9 + 0x29fc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x858a,(long)param_1 + lVar9 + 0x2a3c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8590,(long)param_1 + lVar9 + 0x2a7c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8591,(long)param_1 + lVar9 + 0x2abc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8592,(long)param_1 + lVar9 + 0x2afc);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8598,(long)param_1 + lVar9 + 0x2b3c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x8599,(long)param_1 + lVar9 + 0x2b7c);
      (*(code *)DAT_1011c4a88[0x78])(*DAT_1011c4a88,0x2300,0x859a,(long)param_1 + lVar9 + 0x2bbc);
      (*(code *)DAT_1011c4a88[0x77])(*DAT_1011c4a88,0x2300,0x8573,(long)param_1 + lVar9 + 0x2bfc);
      (*(code *)DAT_1011c4a88[0x77])(*DAT_1011c4a88,0x2300,0xd1c,(long)param_1 + lVar9 + 0x2c3c);
      pcVar3 = (code *)DAT_1011c4a88[0x157];
      uVar7 = *DAT_1011c4a88;
      if (0xf < uVar6) break;
      lVar9 = lVar9 + 4;
      lVar5 = lVar5 + 0x10;
      bVar1 = uVar6 <= *param_1 - 1;
      uVar6 = uVar6 + 1;
    } while (bVar1);
    (*pcVar3)(uVar7,param_1[1]);
  }
  if ((param_2 & 0x42000) != 0) {
    pcVar3 = (code *)DAT_1011c4a88[0x157];
    uVar7 = *DAT_1011c4a88;
    lVar5 = 0x2cec;
    do {
      (*pcVar3)(uVar7,(int)lVar5 + 0x57d4);
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xde0);
      *(undefined1 *)((long)param_1 + lVar5 + -0x70) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xde1);
      *(undefined1 *)((long)param_1 + lVar5 + -0x60) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x806f);
      *(undefined1 *)((long)param_1 + lVar5 + -0x50) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8513);
      *(undefined1 *)((long)param_1 + lVar5 + -0x40) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc60);
      *(undefined1 *)((long)param_1 + lVar5 + -0x30) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc61);
      *(undefined1 *)((long)param_1 + lVar5 + -0x20) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc62);
      *(undefined1 *)((long)param_1 + lVar5 + -0x10) = uVar2;
      uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xc63);
      *(undefined1 *)((long)param_1 + lVar5) = uVar2;
      uVar6 = lVar5 - 0x2ceb;
      pcVar3 = (code *)DAT_1011c4a88[0x157];
      uVar7 = *DAT_1011c4a88;
      if (0xf < uVar6) break;
      lVar5 = lVar5 + 1;
    } while (uVar6 <= *param_1 - 1);
    (*pcVar3)(uVar7,param_1[1]);
  }
  if ((param_2 & 0x1000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xba0,param_1 + 0xb3f);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3000,param_1 + 0xb40);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3001,param_1 + 0xb48);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3002,param_1 + 0xb50);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3003,param_1 + 0xb58);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3004,param_1 + 0xb60);
    (*(code *)DAT_1011c4a88[0x65])(*DAT_1011c4a88,0x3005,param_1 + 0xb68);
  }
  if ((param_2 & 0x3000) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0xba1);
    *(undefined1 *)(param_1 + 0xb70) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x803a);
    *(undefined1 *)((long)param_1 + 0x2dc1) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3000);
    *(undefined1 *)((long)param_1 + 0x2dc2) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3001);
    *(undefined1 *)((long)param_1 + 0x2dc3) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3002);
    *(undefined1 *)(param_1 + 0xb71) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3003);
    *(undefined1 *)((long)param_1 + 0x2dc5) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3004);
    *(undefined1 *)((long)param_1 + 0x2dc6) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x3005);
    *(undefined1 *)((long)param_1 + 0x2dc7) = uVar2;
  }
  if ((param_2 & 0x800) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xba2,param_1 + 0xb72);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb70,param_1 + 0xb76);
  }
  if ((param_2 & 0x2000) != 0) {
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8643);
    *(undefined1 *)(param_1 + 0xb78) = uVar2;
    uVar2 = (*(code *)DAT_1011c4a88[0x90])(*DAT_1011c4a88,0x8642);
    *(undefined1 *)((long)param_1 + 0x2de1) = uVar2;
  }
  return;
}

