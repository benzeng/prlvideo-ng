
void FUN_10030e520(int *param_1,ulong param_2)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long local_48;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((param_2 & 0x200) != 0) {
    (*(code *)DAT_1011c4a88[0xc])(param_1[2],param_1[3],param_1[4],param_1[5],*DAT_1011c4a88);
  }
  if ((param_2 & 0x4000) != 0) {
    (*(code *)DAT_1011c4a88[2])(param_1[7],*DAT_1011c4a88,param_1[6]);
    (*(code *)DAT_1011c4a88[0x151])(*DAT_1011c4a88,param_1[8],param_1[10],param_1[9],param_1[0xb]);
    (*(code *)DAT_1011c4a88[0x1cb])(*DAT_1011c4a88,param_1[0xc],param_1[0xd]);
    (*(code *)DAT_1011c4a88[0x152])
              (param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0xa2])(*DAT_1011c4a88,param_1[0x12]);
    (*(code *)DAT_1011c4a88[0x43])(*DAT_1011c4a88,param_1[0x13]);
    (*(code *)DAT_1011c4a88[0x28f])(*DAT_1011c4a88,0x10,param_1 + 0x14);
    (*(code *)DAT_1011c4a88[0x82])(*DAT_1011c4a88,param_1[0x24]);
    (*(code *)DAT_1011c4a88[0x32])
              (*DAT_1011c4a88,(char)param_1[0x25],*(undefined1 *)((long)param_1 + 0x95),
               *(undefined1 *)((long)param_1 + 0x96),*(undefined1 *)((long)param_1 + 0x97));
    (*(code *)DAT_1011c4a88[0xd])
              (param_1[0x26],param_1[0x27],param_1[0x28],param_1[0x29],*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0xf])(param_1[0x2a],*DAT_1011c4a88);
  }
  if ((param_2 & 0x6000) != 0) {
    if ((char)param_1[0x2b] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbc0);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0xad) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbe2);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0xae) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbd0);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0xaf) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbf1);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x2c] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xbf2);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 1) != 0) {
    (*(code *)DAT_1011c4a88[0x27])(*DAT_1011c4a88,param_1 + 0x2d);
    (*(code *)DAT_1011c4a88[0x188])(*DAT_1011c4a88,param_1 + 0x31);
    (*(code *)DAT_1011c4a88[0x11d])(*DAT_1011c4a88,param_1 + 0x35);
    (*(code *)DAT_1011c4a88[0xb8])(*DAT_1011c4a88,param_1 + 0x39);
    (*(code *)DAT_1011c4a88[0x222])(*DAT_1011c4a88,param_1 + 0x3c);
    (*(code *)DAT_1011c4a88[0x46])(*DAT_1011c4a88,(char)param_1[0x3d]);
    piVar5 = param_1 + 0x41;
    uVar7 = 0;
    do {
      (*(code *)DAT_1011c4a88[0x1e6])
                (piVar5[-3],piVar5[-2],piVar5[-1],*piVar5,*DAT_1011c4a88,uVar7 & 0xffffffff);
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar7 != 0x10);
  }
  if ((param_2 & 0x100) != 0) {
    (*(code *)DAT_1011c4a88[0x3d])(*DAT_1011c4a88,param_1[0x7e]);
    (*(code *)DAT_1011c4a88[0x3e])(*DAT_1011c4a88,(char)param_1[0x7f]);
    (*(code *)DAT_1011c4a88[0xe])((double)(float)param_1[0x80],*DAT_1011c4a88);
  }
  if ((param_2 & 0x2100) != 0) {
    if ((char)param_1[0x81] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb71);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x12000) != 0) {
    if (*(char *)((long)param_1 + 0x205) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd97);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x206) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd98);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x207) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd91);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x82] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd90);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x209) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd92);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x20a) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd93);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x20b) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd94);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x83] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd95);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x20d) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd96);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x20e) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb7);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x20f) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb8);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x84] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb1);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x211) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb0);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x212) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb2);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x213) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb3);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x85] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb4);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x215) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb5);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x216) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xdb6);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x217) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xd80);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x80) != 0) {
    (*(code *)DAT_1011c4a88[0x5d])(*DAT_1011c4a88,0xb66,param_1 + 0x86);
    (*(code *)DAT_1011c4a88[0x5d])(*DAT_1011c4a88,0xb61,param_1 + 0x8a);
    (*(code *)DAT_1011c4a88[0x5d])(*DAT_1011c4a88,0xb62,param_1 + 0x8b);
    (*(code *)DAT_1011c4a88[0x5d])(*DAT_1011c4a88,0xb63,param_1 + 0x8c);
    (*(code *)DAT_1011c4a88[0x5d])(*DAT_1011c4a88,0xb64,param_1 + 0x8d);
    (*(code *)DAT_1011c4a88[0x5f])(*DAT_1011c4a88,0xb65,param_1 + 0x8e);
    (*(code *)DAT_1011c4a88[0x5f])(*DAT_1011c4a88,0x8450,param_1 + 0x8f);
  }
  if ((param_2 & 0x2080) != 0) {
    if ((char)param_1[0x90] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb60);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x241) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8458);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x8000) != 0) {
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0xc50,param_1[0x91]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0xc51,param_1[0x92]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0xc52,param_1[0x93]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0xc53,param_1[0x94]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0xc54,param_1[0x95]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0x8192,param_1[0x96]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0x84ef,param_1[0x97]);
    (*(code *)DAT_1011c4a88[0x81])(*DAT_1011c4a88,0x8b8b,param_1[0x98]);
  }
  if ((param_2 & 0x40) != 0) {
    (*(code *)DAT_1011c4a88[0xfe])(*DAT_1011c4a88,param_1[0x99]);
    (*(code *)DAT_1011c4a88[0x33])(*DAT_1011c4a88,param_1[0x9a],param_1[0x9b]);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1200,param_1 + 0x9c);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1201,param_1 + 0xa0);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1202,param_1 + 0xa4);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1600,param_1 + 0xa8);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1601,param_1 + 0xac);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x404,0x1603,param_1 + 0xad);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1200,param_1 + 0xb0);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1201,param_1 + 0xb4);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1202,param_1 + 0xb8);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1600,param_1 + 0xbc);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1601,param_1 + 0xc0);
    (*(code *)DAT_1011c4a88[0xac])(*DAT_1011c4a88,0x405,0x1603,param_1 + 0xc1);
    (*(code *)DAT_1011c4a88[0x94])(*DAT_1011c4a88,0xb53,param_1 + 0xc4);
    (*(code *)DAT_1011c4a88[0x95])(*DAT_1011c4a88,0xb51,(char)param_1[200]);
    (*(code *)DAT_1011c4a88[0x95])(*DAT_1011c4a88,0xb52,*(undefined1 *)((long)param_1 + 0x321));
    (*(code *)DAT_1011c4a88[0x95])(*DAT_1011c4a88,0x81f8,param_1[0xc9]);
    lVar3 = -0x80;
    iVar4 = 0x4000;
    lVar8 = 0;
    local_48 = 0x588;
    do {
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1200,(long)param_1 + lVar3 + 0x3a8);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1201,(long)param_1 + lVar3 + 0x428);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1202,(long)param_1 + lVar3 + 0x4a8);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1203,(long)param_1 + lVar3 + 0x528);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1207,(long)param_1 + lVar8 + 0x528);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1208,(long)param_1 + lVar8 + 0x548);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1209,(long)param_1 + lVar8 + 0x568);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1204,(long)param_1 + local_48);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1205,(long)param_1 + lVar8 + 0x5e8);
      (*(code *)DAT_1011c4a88[0x98])(*DAT_1011c4a88,iVar4,0x1206,(long)param_1 + lVar8 + 0x608);
      lVar3 = lVar3 + 0x10;
      lVar8 = lVar8 + 4;
      local_48 = local_48 + 0xc;
      iVar4 = iVar4 + 1;
    } while (lVar8 != 0x20);
  }
  if ((param_2 & 0x2040) != 0) {
    if ((char)param_1[0x18a] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb50);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x629) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb57);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    lVar3 = 0;
    do {
      if (*(char *)((long)param_1 + lVar3 + 0x62a) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,(int)lVar3 + 0x4000);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
  }
  if ((param_2 & 4) != 0) {
    (*(code *)DAT_1011c4a88[0x9c])(param_1[0x18d],*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0x9b])(*DAT_1011c4a88,param_1[0x18e],(short)param_1[399]);
  }
  if ((param_2 & 0x2004) != 0) {
    if ((char)param_1[400] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb20);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x641) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb24);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x20000) != 0) {
    (*(code *)DAT_1011c4a88[0x9d])(*DAT_1011c4a88,param_1[0x191]);
  }
  if ((param_2 & 0x20) != 0) {
    (*(code *)DAT_1011c4a88[0xc6])(*DAT_1011c4a88,0xd10,(char)param_1[0x192]);
    (*(code *)DAT_1011c4a88[0xc6])(*DAT_1011c4a88,0xd11,*(undefined1 *)((long)param_1 + 0x649));
    (*(code *)DAT_1011c4a88[0xc6])(*DAT_1011c4a88,0xd12,*(undefined1 *)((long)param_1 + 0x64a));
    (*(code *)DAT_1011c4a88[0xc6])(*DAT_1011c4a88,0xd13,*(undefined1 *)((long)param_1 + 0x64b));
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x193],*DAT_1011c4a88,0xd14);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x194],*DAT_1011c4a88,0xd18);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x195],*DAT_1011c4a88,0xd1a);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x196],*DAT_1011c4a88,0xd1c);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x197],*DAT_1011c4a88,0xd15);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x198],*DAT_1011c4a88,0xd19);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x199],*DAT_1011c4a88,0xd1b);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x19a],*DAT_1011c4a88,0xd1d);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x19b],*DAT_1011c4a88,0xd1e);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x19c],*DAT_1011c4a88,0xd1f);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d0,0x80d6,param_1 + 0x19d);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d0,0x80d7,param_1 + 0x1a1);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d1,0x80d6,param_1 + 0x1a5);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d1,0x80d7,param_1 + 0x1a9);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d2,0x80d6,param_1 + 0x1ad);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d2,0x80d7,param_1 + 0x1b1);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d3,0x80d6,param_1 + 0x1b5);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d3,0x80d7,param_1 + 0x1b9);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d4,0x80d6,param_1 + 0x1bd);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d4,0x80d7,param_1 + 0x1c1);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d5,0x80d6,param_1 + 0x1c5);
    (*(code *)DAT_1011c4a88[0x198])(*DAT_1011c4a88,0x80d5,0x80d7,param_1 + 0x1c9);
    (*(code *)DAT_1011c4a88[0x1a5])(*DAT_1011c4a88,0x8010,0x8013,param_1 + 0x1cd);
    (*(code *)DAT_1011c4a88[0x1a5])(*DAT_1011c4a88,0x8011,0x8013,param_1 + 0x1ce);
    (*(code *)DAT_1011c4a88[0x1a5])(*DAT_1011c4a88,0x8012,0x8013,param_1 + 0x1cf);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8010,0x8154,param_1 + 0x1d0);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8011,0x8154,param_1 + 0x1d4);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8012,0x8154,param_1 + 0x1d8);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8010,0x8014,param_1 + 0x1dc);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8011,0x8014,param_1 + 0x1e0);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8012,0x8014,param_1 + 0x1e4);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8010,0x8015,param_1 + 0x1e8);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8011,0x8015,param_1 + 0x1ec);
    (*(code *)DAT_1011c4a88[0x1a3])(*DAT_1011c4a88,0x8012,0x8015,param_1 + 0x1f0);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[500],*DAT_1011c4a88,0x801c);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1f5],*DAT_1011c4a88,0x801d);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1f6],*DAT_1011c4a88,0x801e);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1f7],*DAT_1011c4a88,0x801f);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1f8],*DAT_1011c4a88,0x8020);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1f9],*DAT_1011c4a88,0x8021);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1fa],*DAT_1011c4a88,0x8022);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1fb],*DAT_1011c4a88,0x8023);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1fc],*DAT_1011c4a88,0x80b4);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1fd],*DAT_1011c4a88,0x80b5);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1fe],*DAT_1011c4a88,0x80b6);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x1ff],*DAT_1011c4a88,0x80b7);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x200],*DAT_1011c4a88,0x80b8);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x201],*DAT_1011c4a88,0x80b9);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x202],*DAT_1011c4a88,0x80ba);
    (*(code *)DAT_1011c4a88[0xc5])(param_1[0x203],*DAT_1011c4a88,0x80bb);
    (*(code *)DAT_1011c4a88[199])(param_1[0x204],param_1[0x205],*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0xed])(*DAT_1011c4a88,param_1[0x206]);
  }
  if ((param_2 & 0x2020) != 0) {
    if ((char)param_1[0x207] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x80d0);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x81d) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x80d1);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x81e) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x80d2);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x81f) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8010);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x208] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8011);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x821) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8012);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x822) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8024);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x823) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x802e);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 2) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e0,&local_34);
    (*(code *)DAT_1011c4a88[200])(param_1[0x209],*DAT_1011c4a88);
    (*(code *)DAT_1011c4a88[0x21e])(*DAT_1011c4a88,0x8126,param_1 + 0x20a);
    (*(code *)DAT_1011c4a88[0x21e])(*DAT_1011c4a88,0x8127,param_1 + 0x20b);
    (*(code *)DAT_1011c4a88[0x21e])(*DAT_1011c4a88,0x8128,param_1 + 0x20c);
    (*(code *)DAT_1011c4a88[0x21e])(*DAT_1011c4a88,0x8129,param_1 + 0x20d);
    (*(code *)DAT_1011c4a88[0x220])(*DAT_1011c4a88,36000,param_1 + 0x210);
    pcVar2 = (code *)DAT_1011c4a88[0x157];
    uVar6 = *DAT_1011c4a88;
    piVar5 = param_1 + 0x211;
    uVar7 = 1;
    do {
      (*pcVar2)(uVar6,(int)uVar7 + 0x84bf);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x8861,0x8862,piVar5);
      pcVar2 = (code *)DAT_1011c4a88[0x157];
      uVar6 = *DAT_1011c4a88;
      if (0xf < uVar7) break;
      piVar5 = piVar5 + 1;
      bVar1 = uVar7 <= *param_1 - 1;
      uVar7 = uVar7 + 1;
    } while (bVar1);
    (*pcVar2)(uVar6,local_34);
  }
  if ((param_2 & 0x2002) != 0) {
    if ((char)param_1[0x221] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb10);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x885) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8861);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 8) != 0) {
    (*(code *)DAT_1011c4a88[0x3a])(*DAT_1011c4a88,param_1[0x222]);
    (*(code *)DAT_1011c4a88[0x60])(*DAT_1011c4a88,param_1[0x223]);
    (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x404,param_1[0x224]);
    (*(code *)DAT_1011c4a88[0xc9])(*DAT_1011c4a88,0x405,param_1[0x225]);
    (*(code *)DAT_1011c4a88[0xca])(param_1[0x226],param_1[0x227],*DAT_1011c4a88);
  }
  if ((param_2 & 0x2008) != 0) {
    if ((char)param_1[0x228] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb44);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x8a1) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb41);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x8a2) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x2a01);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x8a3) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x2a02);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0x229] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8037);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x8a5) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb42);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x80000) != 0) {
    (*(code *)DAT_1011c4a88[0xfc])
              (*DAT_1011c4a88,param_1[0x22a],param_1[0x22b],param_1[0x22c],param_1[0x22d]);
  }
  if ((param_2 & 0x82000) != 0) {
    if ((char)param_1[0x22e] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc11);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x400) != 0) {
    (*(code *)DAT_1011c4a88[0x296])
              (*DAT_1011c4a88,0x404,param_1[0x22f],param_1[0x230],param_1[0x231]);
    (*(code *)DAT_1011c4a88[0x296])
              (*DAT_1011c4a88,0x405,param_1[0x232],param_1[0x233],param_1[0x234]);
    (*(code *)DAT_1011c4a88[0x24b])
              (*DAT_1011c4a88,0x404,param_1[0x235],param_1[0x236],param_1[0x237]);
    (*(code *)DAT_1011c4a88[0x24b])
              (*DAT_1011c4a88,0x405,param_1[0x238],param_1[0x239],param_1[0x23a]);
    (*(code *)DAT_1011c4a88[0x297])(*DAT_1011c4a88,0x404,param_1[0x23b]);
    (*(code *)DAT_1011c4a88[0x297])(*DAT_1011c4a88,0x405,param_1[0x23c]);
    (*(code *)DAT_1011c4a88[0x10])(*DAT_1011c4a88,param_1[0x23d]);
  }
  if ((param_2 & 0x2400) != 0) {
    if ((char)param_1[0x23e] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xb90);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x40000) != 0) {
    pcVar2 = (code *)DAT_1011c4a88[0x157];
    uVar6 = *DAT_1011c4a88;
    lVar9 = 0;
    lVar8 = 0x23f;
    lVar3 = 0;
    do {
      (*pcVar2)(uVar6,(int)lVar8 + 0x8281);
      (*(code *)DAT_1011c4a88[6])
                (*DAT_1011c4a88,0x8068,*(undefined4 *)((long)param_1 + lVar3 + 0x8fc));
      (*(code *)DAT_1011c4a88[6])
                (*DAT_1011c4a88,0x8069,*(undefined4 *)((long)param_1 + lVar3 + 0x93c));
      (*(code *)DAT_1011c4a88[6])
                (*DAT_1011c4a88,0x806a,*(undefined4 *)((long)param_1 + lVar3 + 0x97c));
      (*(code *)DAT_1011c4a88[6])
                (*DAT_1011c4a88,0x8514,*(undefined4 *)((long)param_1 + lVar3 + 0x9bc));
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x1004,(long)param_1 + lVar9 + 0x9fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x1004,(long)param_1 + lVar9 + 0xafc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x1004,(long)param_1 + lVar9 + 0xbfc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x1004,(long)param_1 + lVar9 + 0xcfc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x2801,(long)param_1 + lVar3 + 0xdfc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x2801,(long)param_1 + lVar3 + 0xe3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x2801,(long)param_1 + lVar3 + 0xe7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x2801,(long)param_1 + lVar3 + 0xebc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x2800,(long)param_1 + lVar3 + 0xefc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x2800,(long)param_1 + lVar3 + 0xf3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x2800,(long)param_1 + lVar3 + 0xf7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x2800,(long)param_1 + lVar3 + 0xfbc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x2802,(long)param_1 + lVar3 + 0xffc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x2802,(long)param_1 + lVar3 + 0x103c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x2802,(long)param_1 + lVar3 + 0x107c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x2802,(long)param_1 + lVar3 + 0x10bc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x2803,(long)param_1 + lVar3 + 0x10fc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x2803,(long)param_1 + lVar3 + 0x113c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x2803,(long)param_1 + lVar3 + 0x117c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x2803,(long)param_1 + lVar3 + 0x11bc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x8072,(long)param_1 + lVar3 + 0x11fc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x8072,(long)param_1 + lVar3 + 0x123c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x8072,(long)param_1 + lVar3 + 0x127c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x8072,(long)param_1 + lVar3 + 0x12bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x8066,(long)param_1 + lVar3 + 0x12fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x8066,(long)param_1 + lVar3 + 0x133c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x8066,(long)param_1 + lVar3 + 0x137c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x8066,(long)param_1 + lVar3 + 0x13bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x8067,(long)param_1 + lVar3 + 0x13fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x8067,(long)param_1 + lVar3 + 0x143c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x8067,(long)param_1 + lVar3 + 0x147c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x8067,(long)param_1 + lVar3 + 0x14bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x813a,(long)param_1 + lVar3 + 0x14fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x813a,(long)param_1 + lVar3 + 0x153c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x813a,(long)param_1 + lVar3 + 0x157c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x813a,(long)param_1 + lVar3 + 0x15bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x813b,(long)param_1 + lVar3 + 0x15fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x813b,(long)param_1 + lVar3 + 0x163c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x813b,(long)param_1 + lVar3 + 0x167c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x813b,(long)param_1 + lVar3 + 0x16bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x813c,(long)param_1 + lVar3 + 0x16fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x813c,(long)param_1 + lVar3 + 0x173c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x813c,(long)param_1 + lVar3 + 0x177c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x813c,(long)param_1 + lVar3 + 0x17bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x813d,(long)param_1 + lVar3 + 0x17fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x813d,(long)param_1 + lVar3 + 0x183c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x813d,(long)param_1 + lVar3 + 0x187c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x813d,(long)param_1 + lVar3 + 0x18bc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde0,0x8501,(long)param_1 + lVar3 + 0x18fc);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0xde1,0x8501,(long)param_1 + lVar3 + 0x193c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x806f,0x8501,(long)param_1 + lVar3 + 0x197c);
      (*(code *)DAT_1011c4a88[0x130])(*DAT_1011c4a88,0x8513,0x8501,(long)param_1 + lVar3 + 0x19bc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x884b,(long)param_1 + lVar3 + 0x19fc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x884b,(long)param_1 + lVar3 + 0x1a3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x884b,(long)param_1 + lVar3 + 0x1a7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x884b,(long)param_1 + lVar3 + 0x1abc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x884c,(long)param_1 + lVar3 + 0x1afc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x884c,(long)param_1 + lVar3 + 0x1b3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x884c,(long)param_1 + lVar3 + 0x1b7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x884c,(long)param_1 + lVar3 + 0x1bbc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x884d,(long)param_1 + lVar3 + 0x1bfc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x884d,(long)param_1 + lVar3 + 0x1c3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x884d,(long)param_1 + lVar3 + 0x1c7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x884d,(long)param_1 + lVar3 + 0x1cbc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde0,0x8191,(long)param_1 + lVar3 + 0x1cfc);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0xde1,0x8191,(long)param_1 + lVar3 + 0x1d3c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x806f,0x8191,(long)param_1 + lVar3 + 0x1d7c);
      (*(code *)DAT_1011c4a88[0x132])(*DAT_1011c4a88,0x8513,0x8191,(long)param_1 + lVar3 + 0x1dbc);
      (*(code *)DAT_1011c4a88[0x124])(*DAT_1011c4a88,0x8500,0x8501,(long)param_1 + lVar3 + 0x1dfc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x2200,(long)param_1 + lVar3 + 0x1e3c);
      (*(code *)DAT_1011c4a88[0x124])(*DAT_1011c4a88,0x2300,0x2201,(long)param_1 + lVar9 + 0x1e7c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2000,0x2502,(long)param_1 + lVar9 + 0x1f7c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2001,0x2502,(long)param_1 + lVar9 + 0x207c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2002,0x2502,(long)param_1 + lVar9 + 0x217c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2003,0x2502,(long)param_1 + lVar9 + 0x227c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2000,0x2501,(long)param_1 + lVar9 + 0x237c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2001,0x2501,(long)param_1 + lVar9 + 0x247c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2002,0x2501,(long)param_1 + lVar9 + 0x257c);
      (*(code *)DAT_1011c4a88[0x12a])(*DAT_1011c4a88,0x2003,0x2501,(long)param_1 + lVar9 + 0x267c);
      (*(code *)DAT_1011c4a88[300])(*DAT_1011c4a88,0x2000,0x2500,(long)param_1 + lVar3 + 0x277c);
      (*(code *)DAT_1011c4a88[300])(*DAT_1011c4a88,0x2001,0x2500,(long)param_1 + lVar3 + 0x27bc);
      (*(code *)DAT_1011c4a88[300])(*DAT_1011c4a88,0x2002,0x2500,(long)param_1 + lVar3 + 0x27fc);
      (*(code *)DAT_1011c4a88[300])(*DAT_1011c4a88,0x2003,0x2500,(long)param_1 + lVar3 + 0x283c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8571,(long)param_1 + lVar3 + 0x287c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8572,(long)param_1 + lVar3 + 0x28bc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8580,(long)param_1 + lVar3 + 0x28fc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8581,(long)param_1 + lVar3 + 0x293c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8582,(long)param_1 + lVar3 + 0x297c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8588,(long)param_1 + lVar3 + 0x29bc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8589,(long)param_1 + lVar3 + 0x29fc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x858a,(long)param_1 + lVar3 + 0x2a3c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8590,(long)param_1 + lVar3 + 0x2a7c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8591,(long)param_1 + lVar3 + 0x2abc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8592,(long)param_1 + lVar3 + 0x2afc);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8598,(long)param_1 + lVar3 + 0x2b3c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x8599,(long)param_1 + lVar3 + 0x2b7c);
      (*(code *)DAT_1011c4a88[0x126])(*DAT_1011c4a88,0x2300,0x859a,(long)param_1 + lVar3 + 0x2bbc);
      (*(code *)DAT_1011c4a88[0x124])(*DAT_1011c4a88,0x2300,0x8573,(long)param_1 + lVar3 + 0x2bfc);
      (*(code *)DAT_1011c4a88[0x124])(*DAT_1011c4a88,0x2300,0xd1c,(long)param_1 + lVar3 + 0x2c3c);
      uVar7 = lVar8 - 0x23e;
      pcVar2 = (code *)DAT_1011c4a88[0x157];
      uVar6 = *DAT_1011c4a88;
      if (0xf < uVar7) break;
      lVar3 = lVar3 + 4;
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 1;
    } while (uVar7 <= *param_1 - 1);
    (*pcVar2)(uVar6,param_1[1]);
  }
  if ((param_2 & 0x42000) != 0) {
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e0,&local_38);
    pcVar2 = (code *)DAT_1011c4a88[0x157];
    uVar6 = *DAT_1011c4a88;
    lVar3 = 0x2cec;
    do {
      (*pcVar2)(uVar6,(int)lVar3 + 0x57d4);
      if (*(char *)((long)param_1 + lVar3 + -0x70) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xde0);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x60) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xde1);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x50) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x806f);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x40) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8513);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x30) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc60);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x20) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc61);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3 + -0x10) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc62);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      if (*(char *)((long)param_1 + lVar3) == '\0') {
        (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xc63);
      }
      else {
        (*(code *)DAT_1011c4a88[0x49])();
      }
      uVar7 = lVar3 - 0x2ceb;
      pcVar2 = (code *)DAT_1011c4a88[0x157];
      uVar6 = *DAT_1011c4a88;
    } while ((uVar7 < 0x10) && (lVar3 = lVar3 + 1, uVar7 <= *param_1 - 1));
    (*pcVar2)(uVar6,local_38);
  }
  if ((param_2 & 0x1000) != 0) {
    (*(code *)DAT_1011c4a88[0xaf])(*DAT_1011c4a88,param_1[0xb3f]);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3000,param_1 + 0xb40);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3001,param_1 + 0xb48);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3002,param_1 + 0xb50);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3003,param_1 + 0xb58);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3004,param_1 + 0xb60);
    (*(code *)DAT_1011c4a88[0x11])(*DAT_1011c4a88,0x3005,param_1 + 0xb68);
  }
  if ((param_2 & 0x3000) != 0) {
    if ((char)param_1[0xb70] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0xba1);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc1) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x803a);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc2) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3000);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc3) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3001);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if ((char)param_1[0xb71] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3002);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc5) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3003);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc6) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3004);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2dc7) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x3005);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  if ((param_2 & 0x800) != 0) {
    (*(code *)DAT_1011c4a88[0x150])
              (*DAT_1011c4a88,param_1[0xb72],param_1[0xb73],param_1[0xb74],param_1[0xb75]);
    (*(code *)DAT_1011c4a88[0x3f])
              ((double)(float)param_1[0xb76],(double)(float)param_1[0xb77],*DAT_1011c4a88);
  }
  if ((param_2 & 0x2000) != 0) {
    if ((char)param_1[0xb78] == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8643);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
    if (*(char *)((long)param_1 + 0x2de1) == '\0') {
      (*(code *)DAT_1011c4a88[0x40])(*DAT_1011c4a88,0x8642);
    }
    else {
      (*(code *)DAT_1011c4a88[0x49])();
    }
  }
  return;
}

