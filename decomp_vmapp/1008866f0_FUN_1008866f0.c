
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008866f0(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uVar8;
  pid_t local_9c;
  undefined1 local_98 [48];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  local_9c = _getpid();
  uVar8 = 1;
  if (0 < param_2) {
    FUN_10088a650(local_98);
    if (param_4 != 0) {
      FUN_10081d010(9,0x12,"md_rand.c",0x182);
    }
    FUN_10081d010(9,0x13,"md_rand.c",0x185);
    FUN_10081d470(&DAT_1011c0928);
    FUN_10081d010(10,0x13,"md_rand.c",0x187);
    DAT_1011c0938 = 1;
    if (DAT_1011c0939 == '\0') {
      FUN_100887450();
      DAT_1011c0939 = '\x01';
    }
    dVar1 = DAT_1011c0940;
    if ((DAT_1011c0940 < DAT_100b46198) &&
       (DAT_1011c0940 = DAT_1011c0940 - (double)param_2, DAT_1011c0940 < 0.0)) {
      DAT_1011c0940 = 0.0;
    }
    if (DAT_1011c0920 == 0) {
      iVar7 = 0x413;
      do {
        FUN_100886040(0,"....................",0x14);
        iVar7 = iVar7 + -0x14;
      } while (0x14 < iVar7);
      if (DAT_100b46198 <= dVar1) {
        DAT_1011c0920 = 1;
      }
    }
    iVar2 = DAT_1011c094c;
    iVar7 = DAT_1011c0948;
    local_48 = DAT_1011c0950;
    local_40 = DAT_1011c0958;
    local_58 = DAT_1011c0970;
    local_68 = _DAT_1011c0960;
    uStack_64 = uRam00000001011c0964;
    uStack_60 = uRam00000001011c0968;
    uStack_5c = uRam00000001011c096c;
    DAT_1011c0948 = param_2 + 9 + (((param_2 + -1) / 10) * 10 - (param_2 + -1)) + DAT_1011c0948;
    if (DAT_1011c094c < DAT_1011c0948) {
      DAT_1011c0948 = DAT_1011c0948 % DAT_1011c094c;
    }
    DAT_1011c0950 = DAT_1011c0950 + 1;
    DAT_1011c0938 = 0;
    if (param_4 != 0) {
      FUN_10081d010(10,0x12,"md_rand.c",0x1d2);
    }
    if (0 < param_2) {
      do {
        iVar3 = 10;
        if (param_2 < 0xb) {
          iVar3 = param_2;
        }
        uVar8 = FUN_100891760();
        FUN_10088a720(local_98,uVar8,0);
        if (local_9c != 0) {
          FUN_10088a910(local_98,&local_9c,4);
          local_9c = 0;
        }
        FUN_10088a910(local_98,&local_68,0x14);
        FUN_10088a910(local_98,&local_48,0x10);
        FUN_10088a910(local_98,param_1,(long)iVar3);
        iVar4 = (10 - iVar2) + iVar7;
        puVar6 = &DAT_1011c0980 + iVar7;
        if (iVar4 < 1) {
          lVar5 = 10;
        }
        else {
          FUN_10088a910(local_98,puVar6,(long)(10 - iVar4));
          lVar5 = (long)iVar4;
          puVar6 = &DAT_1011c0980;
        }
        FUN_10088a910(local_98,puVar6,lVar5);
        param_2 = param_2 - iVar3;
        FUN_10088a9c0(local_98,&local_68,0);
        lVar5 = 0;
        do {
          (&DAT_1011c0980)[iVar7] = (&DAT_1011c0980)[iVar7] ^ *(byte *)((long)&local_68 + lVar5);
          iVar7 = iVar7 + 1;
          if (iVar2 <= iVar7) {
            iVar7 = 0;
          }
          if (lVar5 < iVar3) {
            *param_1 = *(undefined1 *)((long)&uStack_60 + lVar5 + 2);
            param_1 = param_1 + 1;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 10);
      } while (0 < param_2);
    }
    uVar8 = FUN_100891760();
    FUN_10088a720(local_98,uVar8,0);
    FUN_10088a910(local_98,&local_48,0x10);
    FUN_10088a910(local_98,&local_68,0x14);
    if (param_4 == 0) {
      FUN_10088a910(local_98,&DAT_1011c0960,0x14);
      FUN_10088a9c0(local_98,&DAT_1011c0960,0);
    }
    else {
      FUN_10081d010(9,0x12,"md_rand.c",0x203);
      FUN_10088a910(local_98,&DAT_1011c0960,0x14);
      FUN_10088a9c0(local_98,&DAT_1011c0960,0);
      FUN_10081d010(10,0x12,"md_rand.c",0x207);
    }
    uVar8 = 1;
    FUN_10088aa50(local_98);
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    if ((dVar1 < DAT_100b46198) && (uVar8 = 0, param_3 == 0)) {
      FUN_100887ce0(0x24,100,100,"md_rand.c",0x20f);
      uVar8 = 0;
      FUN_1008890a0(1,"You need to read the OpenSSL FAQ, http://www.openssl.org/support/faq.html");
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

