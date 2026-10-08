
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c618f0(undefined1 *param_1,int param_2,int param_3,int param_4)

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
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar5;
  local_9c = _getpid();
  uVar8 = 1;
  if (0 < param_2) {
    FUN_100c65850(local_98);
    if (param_4 != 0) {
      FUN_100bf2780(9,0x12,"md_rand.c",0x182);
    }
    FUN_100bf2780(9,0x13,"md_rand.c",0x185);
    FUN_100bf2be0(&DAT_102316368);
    FUN_100bf2780(10,0x13,"md_rand.c",0x187);
    DAT_102316378 = 1;
    if (DAT_102316379 == '\0') {
      FUN_100c62650();
      DAT_102316379 = '\x01';
    }
    dVar1 = DAT_102316380;
    if ((DAT_102316380 < DAT_100e11070) &&
       (DAT_102316380 = DAT_102316380 - (double)param_2, DAT_102316380 < 0.0)) {
      DAT_102316380 = 0.0;
    }
    if (DAT_102316360 == 0) {
      iVar7 = 0x413;
      do {
        FUN_100c61240(0,"....................",0x14);
        iVar7 = iVar7 + -0x14;
      } while (0x14 < iVar7);
      if (DAT_100e11070 <= dVar1) {
        DAT_102316360 = 1;
      }
    }
    iVar2 = DAT_10231638c;
    iVar7 = DAT_102316388;
    local_48 = DAT_102316390;
    local_40 = DAT_102316398;
    local_58 = DAT_1023163b0;
    local_68 = _DAT_1023163a0;
    uStack_64 = uRam00000001023163a4;
    uStack_60 = uRam00000001023163a8;
    uStack_5c = uRam00000001023163ac;
    DAT_102316388 = param_2 + 9 + (((param_2 + -1) / 10) * 10 - (param_2 + -1)) + DAT_102316388;
    if (DAT_10231638c < DAT_102316388) {
      DAT_102316388 = DAT_102316388 % DAT_10231638c;
    }
    DAT_102316390 = DAT_102316390 + 1;
    DAT_102316378 = 0;
    if (param_4 != 0) {
      FUN_100bf2780(10,0x12,"md_rand.c",0x1d2);
    }
    if (0 < param_2) {
      do {
        iVar3 = 10;
        if (param_2 < 0xb) {
          iVar3 = param_2;
        }
        uVar8 = FUN_100c6ca00();
        FUN_100c65920(local_98,uVar8,0);
        if (local_9c != 0) {
          FUN_100c65b10(local_98,&local_9c,4);
          local_9c = 0;
        }
        FUN_100c65b10(local_98,&local_68,0x14);
        FUN_100c65b10(local_98,&local_48,0x10);
        FUN_100c65b10(local_98,param_1,(long)iVar3);
        iVar4 = (10 - iVar2) + iVar7;
        puVar6 = &DAT_1023163c0 + iVar7;
        if (iVar4 < 1) {
          lVar5 = 10;
        }
        else {
          FUN_100c65b10(local_98,puVar6,(long)(10 - iVar4));
          lVar5 = (long)iVar4;
          puVar6 = &DAT_1023163c0;
        }
        FUN_100c65b10(local_98,puVar6,lVar5);
        param_2 = param_2 - iVar3;
        FUN_100c65bc0(local_98,&local_68,0);
        lVar5 = 0;
        do {
          (&DAT_1023163c0)[iVar7] = (&DAT_1023163c0)[iVar7] ^ *(byte *)((long)&local_68 + lVar5);
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
    uVar8 = FUN_100c6ca00();
    FUN_100c65920(local_98,uVar8,0);
    FUN_100c65b10(local_98,&local_48,0x10);
    FUN_100c65b10(local_98,&local_68,0x14);
    if (param_4 == 0) {
      FUN_100c65b10(local_98,&DAT_1023163a0,0x14);
      FUN_100c65bc0(local_98,&DAT_1023163a0,0);
    }
    else {
      FUN_100bf2780(9,0x12,"md_rand.c",0x203);
      FUN_100c65b10(local_98,&DAT_1023163a0,0x14);
      FUN_100c65bc0(local_98,&DAT_1023163a0,0);
      FUN_100bf2780(10,0x12,"md_rand.c",0x207);
    }
    uVar8 = 1;
    FUN_100c65c50(local_98);
    lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
    if ((dVar1 < DAT_100e11070) && (uVar8 = 0, param_3 == 0)) {
      FUN_100c62ee0(0x24,100,100,"md_rand.c",0x20f);
      uVar8 = 0;
      FUN_100c642a0(1,"You need to read the OpenSSL FAQ, http://www.openssl.org/support/faq.html");
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

