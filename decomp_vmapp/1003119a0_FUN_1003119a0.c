
void FUN_1003119a0(long param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                  int param_12,int param_13,int param_14,int param_15,int param_16,int param_17,
                  uint param_18,undefined4 param_19)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char local_71;
  undefined4 local_70;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  char local_64;
  char local_63;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x38;
  uVar3 = FUN_100304fc0(lVar1,1);
  uVar4 = FUN_100304f60(lVar1,0x8620,1);
  uVar5 = FUN_100304f60(lVar1,0x8804,1);
  uVar6 = FUN_100304560(lVar1,1);
  uVar7 = FUN_1003040c0(lVar1,0x8892,1);
  uVar8 = FUN_1003040c0(lVar1,0x8893,1);
  local_59 = '\0';
  local_5a = '\0';
  local_5b = '\0';
  local_5c = '\0';
  local_5d = '\0';
  local_5e = '\0';
  iVar9 = FUN_100301220(lVar1,0,1);
  FUN_100303740(lVar1);
  iVar2 = *(int *)(param_1 + 0x450);
  uVar10 = FUN_100301630(lVar1,0,param_4,1);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xba2,&local_48);
  (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb40,&local_50);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb71,&local_59);
  if (*(ushort *)(param_1 + 0xa6ac) < 300) {
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xbc0,&local_5a);
  }
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb90,&local_5b);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xbe2,&local_5c);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb44,&local_5d);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3000,&local_64);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3001,&local_63);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3002,&local_62);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3003,&local_61);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3004,&local_60);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x3005,&local_5f);
  (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xbf2,&local_5e);
  uVar11 = param_18 & 0x4000;
  if (uVar11 != 0) {
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xc23,&local_68);
  }
  param_18 = param_18 & 0x100;
  if (param_18 != 0) {
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0xb72,&local_69);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb70,&local_58);
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0xb74,&local_70);
    (*(code *)DAT_1011c4a88[100])(*DAT_1011c4a88,0x8037,&local_71);
  }
  (*(code *)DAT_1011c4a88[0x150])(*DAT_1011c4a88,param_6,param_7,param_8,param_9);
  (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x408,0x1b02);
  if (*(ushort *)(param_1 + 0xa6ac) < 300) {
    (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbc0);
  }
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb90);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbe2);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb44);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3000);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3001);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3002);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3003);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3004);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3005);
  (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbf2);
  if (uVar11 != 0) {
    (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb71);
    (*(code *)DAT_1011c4a88[0x32])(*DAT_1011c4a88,1,1,1,1);
  }
  if (param_18 != 0) {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xb71);
    (*(code *)DAT_1011c4a88[0x3e])(*DAT_1011c4a88,1);
    (*(code *)DAT_1011c4a88[0x3d])(*DAT_1011c4a88,0x207);
    (*(code *)DAT_1011c4a88[0x3f])(0,DAT_100b44c90,*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8037);
  }
  if (*(ushort *)(param_1 + 0xa6ac) < 300) {
    (*(code *)DAT_1011c4a88[0x1d8])(*DAT_1011c4a88,0x8620,0);
    (*(code *)DAT_1011c4a88[0x1d8])(*DAT_1011c4a88,0x8804,0);
  }
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,param_2);
  if (*(int *)(param_1 + 0x2c) == 0) {
    (**(code **)(param_1 + 0x50))(1,param_1 + 0x2c);
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x2c));
    (*(code *)DAT_1011c4a88[0x283])
              (*DAT_1011c4a88,0x8892,*(undefined4 *)(*(long *)(param_1 + 0x30) + 8));
    (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x8893,0);
    (*(code *)DAT_1011c4a88[0x200])(*DAT_1011c4a88,0,2,0x1406,0,8,0);
    (*(code *)DAT_1011c4a88[0x201])(*DAT_1011c4a88,0);
  }
  else {
    (**(code **)(param_1 + 0x40))();
  }
  if (iVar9 != 0) {
    (*DAT_1011c5760)(0,0);
  }
  (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,0x84c0);
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,param_4,param_3);
  (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,param_4,0x2800,param_19);
  (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,param_4,0x2801,param_19);
  fVar14 = DAT_100b39678;
  if (param_4 != 0x84f5) {
    fVar14 = (float)(param_8 - param_6);
  }
  fVar13 = (float)(param_8 - param_6) * DAT_100b39670;
  fVar12 = DAT_100b39670 * (float)(param_9 - param_7);
  fVar15 = DAT_100b39678;
  if (param_4 != 0x84f5) {
    fVar15 = (float)(param_9 - param_7);
  }
  (*(code *)DAT_1011c4a88[0x1e6])
            ((float)param_10 / fVar14,(float)param_11 / fVar15,(float)(param_12 - param_10) / fVar14
             ,(float)(param_13 - param_11) / fVar15,*DAT_1011c4a88,1);
  (*(code *)DAT_1011c4a88[0x1e6])
            ((float)param_14 / fVar13 + DAT_100b39674,(float)param_15 / fVar12 + DAT_100b39674,
             (float)(param_16 - param_14) / fVar13,(float)(param_17 - param_15) / fVar12,
             *DAT_1011c4a88,2);
  if (param_5 != -1) {
    (*(code *)DAT_1011c4a88[0x1e6])((float)param_5,0,0,0,*DAT_1011c4a88,3);
  }
  (*(code *)DAT_1011c4a88[0x42])(*DAT_1011c4a88,6,0,4);
  if (iVar9 != 0) {
    (*DAT_1011c5760)(0);
  }
  (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,param_4,0x2800,0x2600);
  (*(code *)DAT_1011c4a88[0x131])(*DAT_1011c4a88,param_4,0x2801,0x2600);
  (*(code *)DAT_1011c4a88[6])(*DAT_1011c4a88,param_4,uVar10);
  (*(code *)DAT_1011c4a88[0x157])(*DAT_1011c4a88,iVar2 + 0x84c0);
  (**(code **)(param_1 + 0x40))(uVar6);
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x8892,uVar7);
  (*(code *)DAT_1011c4a88[0x283])(*DAT_1011c4a88,0x8893,uVar8);
  (*(code *)DAT_1011c4a88[0x259])(*DAT_1011c4a88,uVar3);
  if (*(ushort *)(param_1 + 0xa6ac) < 300) {
    (*(code *)DAT_1011c4a88[0x1d8])(*DAT_1011c4a88,0x8620,uVar4);
    (*(code *)DAT_1011c4a88[0x1d8])(*DAT_1011c4a88,0x8804,uVar5);
  }
  if (uVar11 != 0) {
    (*(code *)DAT_1011c4a88[0x32])(*DAT_1011c4a88,local_68,local_67,local_66,local_65);
  }
  if (param_18 != 0) {
    (*(code *)DAT_1011c4a88[0x3e])(*DAT_1011c4a88,local_69);
    (*(code *)DAT_1011c4a88[0x3d])(*DAT_1011c4a88,local_70);
    (*(code *)DAT_1011c4a88[0x3f])((double)local_58,(double)local_54,*DAT_1011c4a88);
    if (local_71 != '\0') {
      (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x8037);
    }
  }
  if (local_59 == '\0') {
    (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb71);
  }
  else {
    (*(code *)DAT_1011c4a88[0x49])();
  }
  if (local_5a != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xbc0);
  }
  if (local_5b != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xb90);
  }
  if (local_5c != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xbe2);
  }
  if (local_5d != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xb44);
  }
  if (local_64 != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3000);
  }
  if (local_63 != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3001);
  }
  if (local_62 != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3002);
  }
  if (local_61 != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3003);
  }
  if (local_60 != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3004);
  }
  if (local_5f != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0x3005);
  }
  if (local_5e != '\0') {
    (*(code *)DAT_1011c4a88[0x49])(*DAT_1011c4a88,0xbf2);
  }
  if (*(ushort *)(param_1 + 0xa6ac) < 300) {
    (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x404);
    (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x405,local_4c);
  }
  else {
    (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x408,local_50);
  }
  (*(code *)DAT_1011c4a88[0x150])
            (*DAT_1011c4a88,local_48,local_48 >> 0x20,local_40,local_40 >> 0x20);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

