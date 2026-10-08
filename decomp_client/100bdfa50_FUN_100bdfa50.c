
undefined8 FUN_100bdfa50(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar4 = FUN_100bdff30();
  if (iVar4 != 0) {
    uVar7 = *(uint *)(*(long *)(param_1 + 0x22) + 0x288);
    uVar8 = FUN_100be3a00(param_1);
    iVar4 = FUN_100c58d60(uVar8,0x31,0,0);
    if (uVar7 < 0x100U - iVar4) {
      FUN_100bf2cd0("d1_both.c",0x112,"s->d1->mtu >= dtls1_min_mtu(s)");
    }
    if (((param_2 == 0x16) && (param_1[0x19] == 0)) &&
       (param_1[0x18] != *(int *)(*(long *)(param_1 + 0x22) + 0x298) + 0xc)) {
      FUN_100bf2cd0("d1_both.c",0x118,
                    "s->init_num == (int)s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH");
    }
    iVar4 = 0xd;
    if (*(long *)(param_1 + 0x3c) != 0) {
      uVar8 = FUN_100c6fca0();
      iVar4 = FUN_100c6fc50(uVar8);
      iVar4 = iVar4 + 0xd;
    }
    uVar13 = 0;
    iVar5 = 0;
    if (*(undefined8 **)(param_1 + 0x3a) != (undefined8 *)0x0) {
      uVar9 = FUN_100c6fbb0(**(undefined8 **)(param_1 + 0x3a));
      iVar5 = 0;
      if ((uVar9 & 2) != 0) {
        iVar5 = FUN_100c6fb70(**(undefined8 **)(param_1 + 0x3a));
        iVar5 = iVar5 * 2;
      }
    }
    param_1[10] = 1;
    bVar3 = true;
    do {
      iVar6 = param_1[0x18];
      while( true ) {
        if (iVar6 < 1) {
          return 0;
        }
        if ((param_2 == 0x16) && (iVar1 = param_1[0x19], iVar1 != 0)) {
          if ((int)uVar13 == 0) {
            uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0x22) + 0x2a8);
          }
          else {
            if (iVar1 < 0xd) {
              return 0xffffffff;
            }
            param_1[0x19] = iVar1 + -0xc;
            param_1[0x18] = iVar6 + 0xc;
          }
        }
        uVar8 = FUN_100be3a00(param_1);
        iVar6 = FUN_100c58d60(uVar8,0xd,0,0);
        uVar7 = iVar6 + iVar4 + iVar5;
        lVar11 = *(long *)(param_1 + 0x22);
        uVar12 = *(uint *)(lVar11 + 0x288) - uVar7;
        if ((*(uint *)(lVar11 + 0x288) < uVar7 || uVar12 == 0) || (uVar12 < 0xd)) {
          uVar8 = FUN_100be3a00(param_1);
          uVar8 = FUN_100c58d60(uVar8,0xb,0,0);
          if ((int)uVar8 < 1) {
            param_1[10] = 2;
            return uVar8;
          }
          lVar11 = *(long *)(param_1 + 0x22);
          if (*(uint *)(lVar11 + 0x288) <= (uint)(iVar4 + 0xc + iVar5)) {
            return 0xffffffff;
          }
          uVar12 = *(uint *)(lVar11 + 0x288) - (iVar4 + iVar5);
        }
        uVar7 = param_1[0x18];
        if (uVar12 < (uint)param_1[0x18]) {
          uVar7 = uVar12;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 0x7fffffff;
        }
        if (param_2 == 0x16) {
          if (uVar7 < 0xc) {
            return 0xffffffff;
          }
          *(ulong *)(lVar11 + 0x2a8) = uVar13;
          *(ulong *)(lVar11 + 0x2b0) = (ulong)(uVar7 - 0xc);
          lVar10 = (long)param_1[0x19];
          lVar2 = *(long *)(*(long *)(param_1 + 0x14) + 8);
          *(undefined1 *)(lVar2 + lVar10) = *(undefined1 *)(lVar11 + 0x290);
          *(undefined1 *)(lVar2 + 1 + lVar10) = *(undefined1 *)(lVar11 + 0x29a);
          *(undefined1 *)(lVar2 + 2 + lVar10) = *(undefined1 *)(lVar11 + 0x299);
          *(undefined1 *)(lVar2 + 3 + lVar10) = *(undefined1 *)(lVar11 + 0x298);
          *(undefined1 *)(lVar2 + 4 + lVar10) = *(undefined1 *)(lVar11 + 0x2a1);
          *(undefined1 *)(lVar2 + 5 + lVar10) = *(undefined1 *)(lVar11 + 0x2a0);
          *(undefined1 *)(lVar2 + 6 + lVar10) = *(undefined1 *)(lVar11 + 0x2aa);
          *(undefined1 *)(lVar2 + 7 + lVar10) = *(undefined1 *)(lVar11 + 0x2a9);
          *(undefined1 *)(lVar2 + 8 + lVar10) = *(undefined1 *)(lVar11 + 0x2a8);
          *(undefined1 *)(lVar2 + 9 + lVar10) = *(undefined1 *)(lVar11 + 0x2b2);
          *(undefined1 *)(lVar2 + 10 + lVar10) = *(undefined1 *)(lVar11 + 0x2b1);
          *(undefined1 *)(lVar2 + 0xb + lVar10) = *(undefined1 *)(lVar11 + 0x2b0);
        }
        uVar12 = FUN_100bdf440(param_1,param_2,
                               (long)param_1[0x19] + *(long *)(*(long *)(param_1 + 0x14) + 8));
        if ((int)uVar12 < 0) break;
        if (uVar7 != uVar12) {
          FUN_100bf2cd0("d1_both.c",0x19f,"len == (unsigned int)ret");
        }
        if ((param_2 == 0x16) && (lVar11 = *(long *)(param_1 + 0x22), *(int *)(lVar11 + 0x378) == 0)
           ) {
          lVar10 = (long)param_1[0x19];
          lVar2 = *(long *)(*(long *)(param_1 + 0x14) + 8);
          if (((int)uVar13 == 0) && (*param_1 != 0x100)) {
            *(undefined1 *)(lVar2 + lVar10) = *(undefined1 *)(lVar11 + 0x290);
            *(undefined1 *)(lVar2 + 1 + lVar10) = *(undefined1 *)(lVar11 + 0x29a);
            *(undefined1 *)(lVar2 + 2 + lVar10) = *(undefined1 *)(lVar11 + 0x299);
            *(undefined1 *)(lVar2 + 3 + lVar10) = *(undefined1 *)(lVar11 + 0x298);
            *(undefined1 *)(lVar2 + 4 + lVar10) = *(undefined1 *)(lVar11 + 0x2a1);
            *(undefined1 *)(lVar2 + 5 + lVar10) = *(undefined1 *)(lVar11 + 0x2a0);
            *(undefined1 *)(lVar2 + 6 + lVar10) = 0;
            *(undefined1 *)(lVar2 + 7 + lVar10) = 0;
            *(undefined1 *)(lVar2 + 8 + lVar10) = 0;
            *(undefined1 *)(lVar2 + 9 + lVar10) = *(undefined1 *)(lVar11 + 0x29a);
            *(undefined1 *)(lVar2 + 10 + lVar10) = *(undefined1 *)(lVar11 + 0x299);
            *(undefined1 *)(lVar2 + 0xb + lVar10) = *(undefined1 *)(lVar11 + 0x298);
            uVar7 = uVar12;
          }
          else {
            lVar10 = lVar10 + 0xc;
            uVar7 = uVar12 - 0xc;
          }
          FUN_100bcfd60(param_1,lVar2 + lVar10,uVar7);
        }
        iVar6 = param_1[0x18] - uVar12;
        if (iVar6 == 0) {
          if (*(code **)(param_1 + 0x26) != (code *)0x0) {
            (**(code **)(param_1 + 0x26))
                      (1,*param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x14) + 8),
                       (long)(int)uVar12 + (long)param_1[0x19],param_1,
                       *(undefined8 *)(param_1 + 0x28));
          }
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          return 1;
        }
        param_1[0x19] = param_1[0x19] + uVar12;
        param_1[0x18] = iVar6;
        uVar13 = (ulong)((int)uVar13 + -0xc + uVar12);
        lVar11 = *(long *)(param_1 + 0x22);
        *(ulong *)(lVar11 + 0x2a8) = uVar13;
        *(undefined8 *)(lVar11 + 0x2b0) = 0;
      }
      if (!bVar3) {
        return 0xffffffff;
      }
      uVar8 = FUN_100be3a00(param_1);
      lVar11 = FUN_100c58d60(uVar8,0x2b,0);
      if (lVar11 < 1) {
        return 0xffffffff;
      }
      uVar9 = FUN_100be4680(param_1,0x20,0);
      if ((uVar9 & 0x1000) != 0) {
        return 0xffffffff;
      }
      iVar6 = FUN_100bdff30(param_1);
      bVar3 = false;
    } while (iVar6 != 0);
  }
  return 0xffffffff;
}

