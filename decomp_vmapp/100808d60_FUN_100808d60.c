
ulong FUN_100808d60(int *param_1,uint param_2,void *param_3,ulong param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *pcVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  long lVar19;
  size_t sVar20;
  code *local_d0;
  char local_a8 [88];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  long local_38;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar19;
  if (*(long *)(*(long *)(param_1 + 0x20) + 0xf0) == 0) {
    iVar6 = FUN_1007fe8e0(param_1);
    sVar20 = 0xffffffff;
    if (iVar6 == 0) goto LAB_100808e05;
  }
  if (((0x17 < param_2) || ((0xc00001U >> (param_2 & 0x1f) & 1) == 0)) ||
     ((param_2 != 0x17 && (param_5 != 0)))) {
    FUN_100887ce0(0x14,0x102,0x44,"d1_pkt.c",0x30e);
LAB_100808dff:
    sVar20 = 0xffffffff;
LAB_100808e05:
    if (lVar19 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return sVar20 & 0xffffffff;
  }
  uVar12 = (uint)param_4;
  if (param_2 == 0x16) {
    lVar8 = *(long *)(param_1 + 0x22);
    iVar6 = *(int *)(lVar8 + 0x374);
    if (iVar6 != 0) {
      if ((int)uVar12 < 1) {
        lVar10 = lVar8 + 0x368;
        uVar9 = 0;
LAB_100808ebe:
        uVar16 = 0;
        do {
          *(undefined1 *)(lVar8 + 0x368 + uVar16) = *(undefined1 *)(lVar10 + uVar16);
          uVar16 = uVar16 + 1;
          lVar8 = *(long *)(param_1 + 0x22);
        } while (uVar16 < *(uint *)(lVar8 + 0x374));
      }
      else {
        iVar15 = uVar12 + 1;
        uVar9 = 0;
        do {
          sVar20 = uVar9;
          if (iVar6 == 0) goto LAB_100808ee3;
          *(undefined1 *)((long)param_3 + sVar20) = *(undefined1 *)(lVar8 + 0x368 + sVar20);
          lVar11 = *(long *)(param_1 + 0x22);
          iVar6 = *(int *)(lVar11 + 0x374) + -1;
          *(int *)(lVar11 + 0x374) = iVar6;
          uVar9 = sVar20 + 1;
          iVar15 = iVar15 + -1;
        } while (1 < iVar15);
        if (iVar6 != 0) {
          lVar10 = lVar8 + 0x369 + sVar20;
          lVar8 = lVar11;
          goto LAB_100808ebe;
        }
      }
      sVar20 = uVar9 & 0xffffffff;
LAB_100808ee3:
      if ((int)sVar20 != 0) goto LAB_100808e05;
    }
  }
  if ((param_1[0xb] == 0) && (uVar9 = FUN_10080ee80(param_1), (uVar9 & 0x3000) != 0)) {
    uVar9 = (**(code **)(param_1 + 0xc))(param_1);
    sVar20 = uVar9 & 0xffffffff;
    if ((int)uVar9 < 0) goto LAB_100808e05;
    if ((int)uVar9 == 0) {
      FUN_100887ce0(0x14,0x102,0xe5,"d1_pkt.c",0x32f);
      goto LAB_100808dff;
    }
  }
  local_d0 = (code *)0x0;
LAB_100808f40:
  do {
    param_1[10] = 1;
    lVar8 = *(long *)(param_1 + 0x20);
    if (((param_1[0x12] == 3) && (*(int *)(lVar8 + 0x124) == 0)) &&
       (lVar10 = FUN_1008dfda0(*(undefined8 *)(*(long *)(param_1 + 0x22) + 0x278)), lVar10 != 0)) {
      plVar4 = *(long **)(lVar10 + 8);
      lVar11 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar11 + 0xf0) != 0) {
        FUN_10081e1a0();
        lVar11 = *(long *)(param_1 + 0x20);
      }
      *(long *)(param_1 + 0x1a) = *plVar4;
      param_1[0x1c] = (int)plVar4[1];
      *(long *)(lVar11 + 0x100) = plVar4[4];
      lVar5 = plVar4[2];
      *(long *)(lVar11 + 0xf8) = plVar4[3];
      *(long *)(lVar11 + 0xf0) = lVar5;
      lVar11 = *(long *)(param_1 + 0x20);
      *(long *)(lVar11 + 0x150) = plVar4[0xb];
      *(long *)(lVar11 + 0x148) = plVar4[10];
      *(long *)(lVar11 + 0x140) = plVar4[9];
      *(long *)(lVar11 + 0x138) = plVar4[8];
      *(long *)(lVar11 + 0x130) = plVar4[7];
      lVar5 = plVar4[5];
      *(long *)(lVar11 + 0x128) = plVar4[6];
      *(long *)(lVar11 + 0x120) = lVar5;
      lVar11 = *(long *)(param_1 + 0x20);
      lVar5 = *plVar4;
      *(undefined2 *)(lVar11 + 0x12) = *(undefined2 *)(lVar5 + 9);
      *(undefined4 *)(lVar11 + 0xe) = *(undefined4 *)(lVar5 + 5);
      FUN_10081e1a0(*(undefined8 *)(lVar10 + 8));
      FUN_1008dfc80(lVar10);
    }
    iVar6 = FUN_100807c90();
  } while (0 < iVar6);
  if (((*(int *)(lVar8 + 0x124) == 0) || (param_1[0x13] == 0xf1)) &&
     (iVar6 = FUN_100808150(), iVar6 < 1)) {
    uVar7 = FUN_10080bbd0(param_1,iVar6);
    sVar20 = (size_t)uVar7;
    if ((int)uVar7 < 1) goto LAB_100808e05;
    goto LAB_100808f40;
  }
  lVar10 = *(long *)(param_1 + 0x22);
  if ((*(int *)(lVar10 + 0x280) != 0) && (*(int *)(lVar8 + 0x120) != 0x16)) {
    *(undefined4 *)(lVar8 + 0x124) = 0;
    goto LAB_100808f40;
  }
  if ((*(int *)(*(long *)(param_1 + 0x20) + 0x1c8) != 0) && (*(int *)(lVar8 + 0x120) != 0x16)) {
    iVar6 = FUN_1008087a0(param_1,lVar10 + 0x270,lVar8 + 0x150);
    if (iVar6 < 0) {
      FUN_100887ce0(0x14,0x102,0x44,"d1_pkt.c",0x379);
      goto LAB_100808dff;
    }
    *(undefined4 *)(lVar8 + 0x124) = 0;
    goto LAB_100808f40;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    *(undefined4 *)(lVar8 + 0x124) = 0;
    param_1[10] = 1;
    sVar20 = 0;
    goto LAB_100808e05;
  }
  if (*(uint *)(lVar8 + 0x120) == param_2) {
    uVar7 = FUN_10080ee80(param_1);
    if (((param_2 != 0x17) || ((uVar7 & 0x3000) == 0)) || (*(long *)(param_1 + 0x34) != 0)) {
      if ((int)uVar12 < 1) {
        sVar20 = param_4 & 0xffffffff;
      }
      else {
        sVar20 = param_4 & 0xffffffff;
        if (*(uint *)(lVar8 + 0x124) < uVar12) {
          sVar20 = (size_t)*(uint *)(lVar8 + 0x124);
        }
        _memcpy(param_3,(void *)((ulong)*(uint *)(lVar8 + 0x128) + *(long *)(lVar8 + 0x130)),sVar20)
        ;
        iVar6 = (int)sVar20;
        if (param_5 == 0) {
          iVar15 = *(int *)(lVar8 + 0x124);
          *(int *)(lVar8 + 0x124) = iVar15 - iVar6;
          *(int *)(lVar8 + 0x128) = *(int *)(lVar8 + 0x128) + iVar6;
          if (iVar15 == iVar6) {
            param_1[0x13] = 0xf0;
            *(undefined4 *)(lVar8 + 0x128) = 0;
          }
        }
      }
      goto LAB_100808e05;
    }
    uVar14 = 100;
    uVar18 = 0x393;
  }
  else {
    switch(*(uint *)(lVar8 + 0x120)) {
    case 0x14:
      goto switchD_100809108_caseD_14;
    case 0x15:
      lVar11 = lVar10 + 0x362;
      puVar17 = (uint *)(lVar10 + 0x364);
      uVar7 = 2;
      break;
    case 0x16:
      lVar11 = lVar10 + 0x368;
      puVar17 = (uint *)(lVar10 + 0x374);
      uVar7 = 0xc;
      break;
    case 0x17:
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1e8) = 2;
      uVar14 = FUN_10080e280(param_1);
      param_1[10] = 3;
      goto LAB_1008098ae;
    case 0x18:
      FUN_10080c1a0(param_1);
      *(undefined4 *)(lVar8 + 0x124) = 0;
      param_1[10] = 3;
      uVar14 = FUN_10080e280(param_1);
      FUN_10087d610(uVar14,0xf);
      uVar14 = FUN_10080e280(param_1);
      FUN_10087d630(uVar14,9);
      goto LAB_100808dff;
    default:
      uVar14 = 0xf5;
      uVar18 = 0x3fa;
      goto LAB_10080973e;
    }
    if (*(uint *)(lVar8 + 0x124) < uVar7) {
      param_1[0x13] = 0xf0;
      *(undefined4 *)(lVar8 + 0x124) = 0;
      goto LAB_100808f40;
    }
    uVar9 = 0;
    do {
      uVar3 = *(uint *)(lVar8 + 0x128);
      *(uint *)(lVar8 + 0x128) = uVar3 + 1;
      *(undefined1 *)(lVar11 + uVar9) = *(undefined1 *)(*(long *)(lVar8 + 0x130) + (ulong)uVar3);
      *(int *)(lVar8 + 0x124) = *(int *)(lVar8 + 0x124) + -1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
    *puVar17 = uVar7;
switchD_100809108_caseD_14:
    lVar10 = *(long *)(param_1 + 0x22);
    if (((param_1[0xe] == 0) && (0xb < *(uint *)(lVar10 + 0x374))) &&
       ((*(char *)(lVar10 + 0x368) == '\0' &&
        ((*(long *)(param_1 + 0x4c) != 0 && (*(long *)(*(long *)(param_1 + 0x4c) + 0xe0) != 0))))))
    {
      *(undefined4 *)(lVar10 + 0x374) = 0;
      if ((*(char *)(lVar10 + 0x369) != '\0') ||
         ((*(char *)(lVar10 + 0x36a) != '\0' || (*(char *)(lVar10 + 0x36b) != '\0')))) {
        FUN_100887ce0(0x14,0x102,0x69,"d1_pkt.c",0x42b);
        uVar14 = 0x32;
        goto LAB_100809748;
      }
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))
                  (0,*param_1,0x16,lVar10 + 0x368,4,param_1,*(undefined8 *)(param_1 + 0x28));
      }
      iVar6 = FUN_10080ee80(param_1);
      if (((iVar6 == 3) && ((**(byte **)(param_1 + 0x20) & 1) == 0)) &&
         (*(int *)(*(byte **)(param_1 + 0x20) + 0x1dc) == 0)) {
        *(short *)(*(long *)(param_1 + 0x22) + 0x234) =
             *(short *)(*(long *)(param_1 + 0x22) + 0x234) + 1;
        param_1[0xf] = 1;
        FUN_1007f9740(param_1);
        iVar6 = FUN_1007f94f0(param_1);
        if (iVar6 != 0) {
          uVar7 = (**(code **)(param_1 + 0xc))(param_1);
          sVar20 = (size_t)uVar7;
          if ((int)uVar7 < 0) goto LAB_100808e05;
          if (uVar7 == 0) {
            FUN_100887ce0(0x14,0x102,0xe5,"d1_pkt.c",0x444);
            goto LAB_100808dff;
          }
          if (((*(byte *)(param_1 + 0x6c) & 4) == 0) &&
             (*(int *)(*(long *)(param_1 + 0x20) + 0x104) == 0)) {
            param_1[10] = 3;
            uVar14 = FUN_10080e280(param_1);
LAB_1008098ae:
            FUN_10087d610(uVar14,0xf);
            FUN_10087d630(uVar14,9);
            goto LAB_100808dff;
          }
        }
      }
      goto LAB_100808f40;
    }
    if (1 < *(uint *)(lVar10 + 0x364)) {
      cVar1 = *(char *)(lVar10 + 0x362);
      bVar2 = *(byte *)(lVar10 + 0x363);
      *(undefined4 *)(lVar10 + 0x364) = 0;
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))
                  (0,*param_1,0x15,lVar10 + 0x362,2,param_1,*(undefined8 *)(param_1 + 0x28));
      }
      pcVar13 = *(code **)(param_1 + 0x54);
      if (pcVar13 == (code *)0x0) {
        pcVar13 = local_d0;
        if (*(code **)(*(long *)(param_1 + 0x5c) + 0x108) != (code *)0x0) {
          pcVar13 = *(code **)(*(long *)(param_1 + 0x5c) + 0x108);
        }
        local_d0 = (code *)0x0;
        if (pcVar13 != (code *)0x0) goto LAB_1008093d1;
      }
      else {
LAB_1008093d1:
        (*pcVar13)(param_1,0x4004,CONCAT11(cVar1,bVar2));
        local_d0 = pcVar13;
      }
      if (cVar1 == '\x02') {
        param_1[10] = 1;
        *(uint *)(*(long *)(param_1 + 0x20) + 0x1d0) = (uint)bVar2;
        FUN_100887ce0(0x14,0x102,bVar2 + 1000,"d1_pkt.c",0x4ac);
        sVar20 = 0;
        FUN_1008823b0(local_48,0x10,"%d",bVar2);
        FUN_1008890a0(2,"SSL alert number ",local_48);
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
        FUN_100814230(*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + 0x4c));
        lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_100808e05;
      }
      lVar19 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (cVar1 == '\x01') {
        *(uint *)(*(long *)(param_1 + 0x20) + 0x1cc) = (uint)bVar2;
        if (bVar2 == 0) {
          *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
          sVar20 = 0;
          goto LAB_100808e05;
        }
        goto LAB_100808f40;
      }
      FUN_100887ce0(0x14,0x102,0xf6,"d1_pkt.c",0x4b4);
      uVar14 = 0x2f;
      goto LAB_100809748;
    }
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      param_1[10] = 1;
      *(undefined4 *)(lVar8 + 0x124) = 0;
      sVar20 = 0;
      goto LAB_100808e05;
    }
    iVar6 = *(int *)(lVar8 + 0x120);
    if (iVar6 == 0x14) {
      FUN_10080c180(*(undefined8 *)(lVar8 + 0x130),local_50);
      iVar6 = *param_1;
      if (((*(int *)(lVar8 + 0x124) != (iVar6 == 0x100) + 1 + (uint)(iVar6 == 0x100)) ||
          (*(int *)(lVar8 + 0x128) != 0)) || (**(char **)(lVar8 + 0x130) != '\x01')) {
        FUN_100887ce0(0x14,0x102,0x67,"d1_pkt.c",0x4d3);
        goto LAB_100808dff;
      }
      *(undefined4 *)(lVar8 + 0x124) = 0;
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))
                  (0,iVar6,0x14,*(char **)(lVar8 + 0x130),1,param_1,*(undefined8 *)(param_1 + 0x28))
        ;
      }
      if (*(int *)(*(long *)(param_1 + 0x22) + 0x37c) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x22) + 0x37c) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1c8) = 1;
        iVar6 = FUN_1007fd700(param_1);
        sVar20 = 0xffffffff;
        if (iVar6 == 0) goto LAB_100808e05;
        lVar8 = *(long *)(param_1 + 0x20);
        lVar10 = *(long *)(param_1 + 0x22);
        *(short *)(lVar10 + 0x208) = *(short *)(lVar10 + 0x208) + 1;
        *(undefined8 *)(lVar10 + 0x218) = *(undefined8 *)(lVar10 + 0x228);
        *(undefined8 *)(lVar10 + 0x210) = *(undefined8 *)(lVar10 + 0x220);
        lVar10 = *(long *)(param_1 + 0x22);
        *(undefined8 *)(lVar10 + 0x228) = 0;
        *(undefined8 *)(lVar10 + 0x220) = 0;
        *(undefined8 *)(lVar8 + 0xc) = 0;
        if (*param_1 == 0x100) {
          *(short *)(*(long *)(param_1 + 0x22) + 0x234) =
               *(short *)(*(long *)(param_1 + 0x22) + 0x234) + 1;
        }
      }
      goto LAB_100808f40;
    }
    if ((0xb < *(uint *)(lVar10 + 0x374)) && (param_1[0xb] == 0)) {
      FUN_10080c0b0(*(undefined8 *)(lVar8 + 0x130),local_a8);
      if (*(ulong *)(lVar8 + 0x148) == (ulong)*(ushort *)(*(long *)(param_1 + 0x22) + 0x208)) {
        if (local_a8[0] == '\x14') {
          iVar6 = FUN_1008080a0(param_1);
          sVar20 = 0xffffffff;
          if (iVar6 < 0) goto LAB_100808e05;
          FUN_10080bc70(param_1);
          *(undefined4 *)(lVar8 + 0x124) = 0;
        }
        else {
          if (((param_1[0x12] & 0xfffU) == 3) && ((**(byte **)(param_1 + 0x20) & 1) == 0)) {
            iVar6 = 0x2000;
            if (param_1[0xe] == 0) {
              iVar6 = 0x1000;
            }
            param_1[0x12] = iVar6;
            param_1[0xa9] = 1;
            param_1[0xf] = 1;
          }
          uVar7 = (**(code **)(param_1 + 0xc))(param_1);
          sVar20 = (size_t)uVar7;
          if ((int)uVar7 < 0) goto LAB_100808e05;
          if (uVar7 == 0) {
            FUN_100887ce0(0x14,0x102,0xe5,"d1_pkt.c",0x52a);
            goto LAB_100808dff;
          }
          if (((*(byte *)(param_1 + 0x6c) & 4) == 0) &&
             (*(int *)(*(long *)(param_1 + 0x20) + 0x104) == 0)) {
            param_1[10] = 3;
            uVar14 = FUN_10080e280(param_1);
            FUN_10087d610(uVar14,0xf);
            FUN_10087d630(uVar14,9);
            goto LAB_100808dff;
          }
        }
      }
      else {
        *(undefined4 *)(lVar8 + 0x124) = 0;
      }
      goto LAB_100808f40;
    }
    if (iVar6 - 0x15U < 2) {
      uVar14 = 0x44;
      uVar18 = 0x556;
    }
    else {
      if (iVar6 == 0x17) {
        lVar8 = *(long *)(param_1 + 0x20);
        if (((*(int *)(lVar8 + 0x1e8) == 0) || (*(int *)(lVar8 + 0x1e0) == 0)) ||
           (((uVar12 = param_1[0x12], 0x10 < uVar12 - 0x1110 || ((uVar12 & 0x1000) == 0)) &&
            ((0x10 < uVar12 - 0x2110 || ((uVar12 & 0x2000) == 0)))))) {
          uVar14 = 0xf5;
          uVar18 = 0x56e;
          goto LAB_10080973e;
        }
        *(undefined4 *)(lVar8 + 0x1e8) = 2;
        goto LAB_100808dff;
      }
      if (*param_1 == 0x301) {
        *(undefined4 *)(lVar8 + 0x124) = 0;
        goto LAB_100808f40;
      }
      uVar14 = 0xf5;
      uVar18 = 0x54b;
    }
  }
LAB_10080973e:
  FUN_100887ce0(0x14,0x102,uVar14,"d1_pkt.c",uVar18);
  uVar14 = 10;
LAB_100809748:
  FUN_1007fd650(param_1,2,uVar14);
  goto LAB_100808dff;
}

