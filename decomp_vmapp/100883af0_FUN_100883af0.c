
int FUN_100883af0(int param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  size_t sVar10;
  size_t sVar11;
  ulong local_490;
  sockaddr local_488;
  undefined8 local_478;
  undefined4 local_470;
  char local_468 [32];
  char local_448 [1040];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_490 = 0x1c;
  local_470 = 0;
  local_478 = 0;
  local_488.sa_data[6] = '\0';
  local_488.sa_data[7] = '\0';
  local_488.sa_data[8] = '\0';
  local_488.sa_data[9] = '\0';
  local_488.sa_data[10] = '\0';
  local_488.sa_data[0xb] = '\0';
  local_488.sa_data[0xc] = '\0';
  local_488.sa_data[0xd] = '\0';
  local_488.sa_len = '\0';
  local_488.sa_family = '\0';
  local_488.sa_data[0] = '\0';
  local_488.sa_data[1] = '\0';
  local_488.sa_data[2] = '\0';
  local_488.sa_data[3] = '\0';
  local_488.sa_data[4] = '\0';
  local_488.sa_data[5] = '\0';
  local_38 = lVar1;
  iVar5 = _accept(param_1,&local_488,(socklen_t *)&local_490);
  if (((int)local_490 == 0) && (0x1c < local_490)) {
    FUN_10081d560("b_sock.c",0x350,"sa.len.s <= sizeof(sa.from)");
  }
  if (iVar5 == -1) {
    iVar6 = FUN_10087f2c0(0xffffffff);
    iVar5 = -2;
    if (iVar6 == 0) {
      piVar9 = ___error();
      FUN_100887ce0(2,8,*piVar9,"b_sock.c",0x357);
      FUN_100887ce0(0x20,0x65,100,"b_sock.c",0x358);
      iVar5 = -1;
    }
  }
  else if (param_2 != (long *)0x0) {
    if (DAT_1011c0910 == (code *)0x0) {
      uVar7 = FUN_100879600("getnameinfo");
      DAT_1011c0910 = (code *)(-(ulong)(uVar7 == 0) | uVar7);
    }
    if (DAT_1011c0910 != (code *)0xffffffffffffffff) {
      iVar6 = (*DAT_1011c0910)(&local_488,(long)(int)local_490,local_448,0x401,local_468,0x20,10);
      if (iVar6 == 0) {
        sVar10 = _strlen(local_448);
        sVar11 = _strlen(local_468);
        uVar7 = sVar10 + 2 + sVar11;
        puVar2 = (undefined1 *)*param_2;
        if (puVar2 == (undefined1 *)0x0) {
          lVar8 = FUN_10081ddd0(uVar7 & 0xffffffff,"b_sock.c",0x381);
        }
        else {
          *puVar2 = 0;
          lVar8 = FUN_10081df30(puVar2,uVar7 & 0xffffffff,"b_sock.c",0x37f);
        }
        if (lVar8 == 0) {
          FUN_100887ce0(0x20,0x65,0x41,"b_sock.c",900);
        }
        else {
          *param_2 = lVar8;
          FUN_1008823b0(lVar8,uVar7,"%s:%s",local_448,local_468);
        }
        goto LAB_100883de1;
      }
    }
    if (local_488.sa_family == '\x02') {
      uVar4 = local_488.sa_data._2_4_;
      uVar3 = local_488.sa_data._0_2_;
      lVar8 = *param_2;
      if (lVar8 == 0) {
        lVar8 = FUN_10081ddd0(0x18,"b_sock.c",0x391);
        if (lVar8 == 0) {
          FUN_100887ce0(0x20,0x65,0x41,"b_sock.c",0x392);
          goto LAB_100883de1;
        }
        *param_2 = lVar8;
      }
      FUN_1008823b0(lVar8,0x18,"%d.%d.%d.%d:%d",uVar4 & 0xff,(uVar4 & 0xff00) >> 8,
                    (uVar4 & 0xff0000) >> 0x10,(uint)uVar4 >> 0x18,uVar3 << 8 | (ushort)uVar3 >> 8);
    }
  }
LAB_100883de1:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

