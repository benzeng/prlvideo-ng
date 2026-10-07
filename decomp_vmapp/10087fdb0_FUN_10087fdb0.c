
ulong FUN_10087fdb0(long param_1,undefined4 *param_2)

{
  sockaddr *psVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_3c;
  int local_34;
  
  pcVar3 = *(code **)(param_2 + 0xe);
  psVar1 = (sockaddr *)(param_2 + 9);
  uVar6 = 0xffffffff;
  local_3c = 1;
  do {
    uVar4 = local_3c;
    switch(*param_2) {
    case 1:
      pbVar7 = *(byte **)(param_2 + 2);
      if (pbVar7 == (byte *)0x0) {
        FUN_100887ce0(0x20,0x73,0x70,"bss_conn.c",0x8b);
        uVar4 = uVar6;
        goto switchD_10087fe18_caseD_6;
      }
      while( true ) {
        bVar2 = *pbVar7;
        if (((ulong)bVar2 < 0x3b) && ((0x400800000000001U >> ((ulong)bVar2 & 0x3f) & 1) != 0))
        break;
        pbVar7 = pbVar7 + 1;
      }
      local_34 = (int)(char)bVar2;
      if ((bVar2 == 0x2f) || (bVar2 == 0x3a)) {
        *pbVar7 = 0;
        pbVar8 = pbVar7;
        pbVar12 = pbVar7 + 1;
        if (local_34 != 0x3a) goto LAB_10087fe7c;
        while (*pbVar12 != 0) {
          if (*pbVar12 == 0x2f) {
            *pbVar12 = 0;
            break;
          }
          pbVar13 = pbVar8 + 2;
          pbVar8 = pbVar12;
          pbVar12 = pbVar13;
        }
        if (*(long *)(param_2 + 4) != 0) {
          FUN_10081e1a0();
        }
        lVar9 = FUN_10087d050(pbVar7 + 1);
        *(long *)(param_2 + 4) = lVar9;
      }
      else {
LAB_10087fe7c:
        lVar9 = *(long *)(param_2 + 4);
      }
      if (lVar9 == 0) {
        FUN_100887ce0(0x20,0x73,0x72,"bss_conn.c",0xa4);
        FUN_1008890a0(2,"host=",*(undefined8 *)(param_2 + 2));
        uVar4 = uVar6;
switchD_10087fe18_caseD_6:
        local_3c = uVar4;
        if (pcVar3 != (code *)0x0) {
          uVar10 = (*pcVar3)(param_1,*param_2,local_3c);
          return uVar10;
        }
        return (ulong)local_3c;
      }
      *param_2 = 2;
      break;
    case 2:
      iVar5 = FUN_100882ee0(*(undefined8 *)(param_2 + 2),param_2 + 7);
      uVar4 = uVar6;
      if (iVar5 < 1) goto switchD_10087fe18_caseD_6;
      *param_2 = 3;
      break;
    case 3:
      uVar4 = uVar6;
      if ((*(long *)(param_2 + 4) == 0) ||
         (iVar5 = FUN_100883120(*(long *)(param_2 + 4),param_2 + 8), iVar5 < 1))
      goto switchD_10087fe18_caseD_6;
      *param_2 = 4;
      break;
    case 4:
      *(undefined8 *)(param_2 + 0xb) = 0;
      psVar1->sa_len = '\0';
      psVar1->sa_family = '\0';
      psVar1->sa_data[0] = '\0';
      psVar1->sa_data[1] = '\0';
      psVar1->sa_data[2] = '\0';
      psVar1->sa_data[3] = '\0';
      psVar1->sa_data[4] = '\0';
      psVar1->sa_data[5] = '\0';
      *(undefined1 *)((long)param_2 + 0x25) = 2;
      *(ushort *)((long)param_2 + 0x26) =
           *(ushort *)(param_2 + 8) << 8 | *(ushort *)(param_2 + 8) >> 8;
      param_2[10] = param_2[7];
      *param_2 = 4;
      uVar6 = _socket(2,1,6);
      if (uVar6 == 0xffffffff) {
        piVar11 = ___error();
        FUN_100887ce0(2,4,*piVar11,"bss_conn.c",200);
        FUN_1008890a0(4,"host=",*(undefined8 *)(param_2 + 2),":",*(undefined8 *)(param_2 + 4));
        FUN_100887ce0(0x20,0x73,0x76,"bss_conn.c",0xcb);
        local_3c = 0xffffffff;
        uVar4 = local_3c;
        goto switchD_10087fe18_caseD_6;
      }
      *(uint *)(param_1 + 0x28) = uVar6;
      *param_2 = 8;
      break;
    case 5:
      FUN_10087d610(param_1,0xf);
      uVar6 = _connect(*(int *)(param_1 + 0x28),psVar1,0x10);
      *(undefined4 *)(param_1 + 0x24) = 0;
      if ((int)uVar6 < 0) {
        iVar5 = FUN_10087f2c0(uVar6);
        uVar4 = uVar6;
        if (iVar5 == 0) {
          piVar11 = ___error();
          FUN_100887ce0(2,2,*piVar11,"bss_conn.c",0xf6);
          FUN_1008890a0(4,"host=",*(undefined8 *)(param_2 + 2),":",*(undefined8 *)(param_2 + 4));
          FUN_100887ce0(0x20,0x73,0x67,"bss_conn.c",0xf9);
        }
        else {
          FUN_10087d630(param_1,0xc);
          *param_2 = 7;
          *(undefined4 *)(param_1 + 0x24) = 2;
        }
        goto switchD_10087fe18_caseD_6;
      }
      *param_2 = 6;
      break;
    default:
      goto switchD_10087fe18_caseD_6;
    case 7:
      local_34 = FUN_100883330(*(undefined4 *)(param_1 + 0x28));
      if (local_34 != 0) {
        FUN_10087d610(param_1,0xf);
        FUN_100887ce0(2,2,local_34,"bss_conn.c",0x104);
        local_3c = 0;
        FUN_1008890a0(4,"host=",*(undefined8 *)(param_2 + 2),":",*(undefined8 *)(param_2 + 4));
        FUN_100887ce0(0x20,0x73,0x6e,"bss_conn.c",0x107);
        uVar4 = local_3c;
        goto switchD_10087fe18_caseD_6;
      }
      *param_2 = 6;
      break;
    case 8:
      if ((param_2[6] != 0) &&
         (iVar5 = FUN_100883e20(*(undefined4 *)(param_1 + 0x28),1), iVar5 == 0)) {
        FUN_100887ce0(0x20,0x73,0x68,"bss_conn.c",0xd5);
        FUN_1008890a0(4,"host=",*(undefined8 *)(param_2 + 2),":",*(undefined8 *)(param_2 + 4));
        uVar4 = uVar6;
        goto switchD_10087fe18_caseD_6;
      }
      *param_2 = 5;
      local_34 = 1;
      local_34 = _setsockopt(*(int *)(param_1 + 0x28),0xffff,8,&local_34,4);
      if (local_34 < 0) {
        piVar11 = ___error();
        FUN_100887ce0(2,4,*piVar11,"bss_conn.c",0xe2);
        FUN_1008890a0(4,"host=",*(undefined8 *)(param_2 + 2),":",*(undefined8 *)(param_2 + 4));
        FUN_100887ce0(0x20,0x73,0x6d,"bss_conn.c",0xe5);
        uVar4 = uVar6;
        goto switchD_10087fe18_caseD_6;
      }
    }
    if ((pcVar3 != (code *)0x0) && (uVar6 = (*pcVar3)(param_1,*param_2), uVar6 == 0)) {
      return 0;
    }
  } while( true );
}

