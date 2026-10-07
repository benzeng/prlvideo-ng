
undefined8 FUN_100106810(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  QArrayData *local_38;
  int *local_30;
  undefined1 local_21;
  
  lVar4 = DAT_1011c3698 + 0x10840;
  local_38 = (QArrayData *)QString::fromAscii_helper("parallels.GuestOSInfo.guest.cross",0x21);
  FUN_100473b30(&local_30,lVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100106886;
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100106886:
  if (local_30[0x16] == 0) {
    uVar8 = 8;
    if (local_30 == (int *)0x0) {
      return 8;
    }
    goto switchD_1001069e0_default;
  }
  lVar4 = *(long *)(local_30 + 0x12);
  uVar8 = 6;
  if ((ulong)(long)*(int *)(lVar4 + 4) < 0x25) goto switchD_1001069e0_default;
  lVar3 = *(long *)(lVar4 + 0x10);
  uVar6 = (long)*(int *)(lVar4 + 4) - 0x24;
  uVar5 = *(uint *)(lVar3 + 0x20 + lVar4);
  if ((uVar6 < 0x10c) || (uVar6 < uVar5)) goto switchD_1001069e0_default;
  if (*(int *)(lVar3 + 4 + lVar4) != 8) {
    uVar8 = 5;
    goto switchD_1001069e0_default;
  }
  uVar2 = *(uint *)(lVar3 + 0x24 + lVar4);
  if (0xff < uVar2) {
    uVar8 = 5;
    goto switchD_1001069e0_default;
  }
  uVar7 = *(uint *)(lVar3 + 0x28 + lVar4);
  if (0xff < uVar7) {
    uVar8 = 5;
    goto switchD_1001069e0_default;
  }
  uVar7 = uVar7 | uVar2 << 8;
  if ((uVar6 < 0x118 || uVar5 == 0) && (0x501 < (int)uVar7)) goto switchD_1001069e0_default;
  cVar1 = *(char *)(lVar3 + 0x136 + lVar4);
  if ((int)uVar7 < 0xa00) {
    if (0x5ff < (int)uVar7) {
      uVar8 = 5;
      switch(uVar7) {
      case 0x600:
        uVar5 = (cVar1 != '\x01') + 0x809;
        break;
      case 0x601:
        uVar5 = cVar1 == '\x01' | 0x80a;
        break;
      case 0x602:
        uVar5 = cVar1 != '\x01' | 0x80c;
        break;
      case 0x603:
        uVar5 = (cVar1 == '\x01') + 0x80d;
        break;
      default:
        goto switchD_1001069e0_default;
      }
      goto LAB_1001069b9;
    }
    if (uVar7 == 0x500) {
      param_1[1] = 0x806;
    }
    else {
      if (uVar7 != 0x501) {
        uVar8 = 5;
        if (uVar7 != 0x502) goto switchD_1001069e0_default;
        uVar5 = (cVar1 != '\x01') + 0x807;
        goto LAB_1001069b9;
      }
      param_1[1] = 0x807;
    }
  }
  else {
    uVar8 = 5;
    if (uVar7 != 0xa00) goto switchD_1001069e0_default;
    uVar5 = (cVar1 != '\x01') + 0x80f;
LAB_1001069b9:
    param_1[1] = uVar5;
  }
  *param_1 = *(undefined4 *)(lVar4 + 4 + lVar3);
  uVar8 = 0;
switchD_1001069e0_default:
  LOCK();
  *local_30 = *local_30 + -1;
  local_21 = *local_30 != 0;
  UNLOCK();
  if ((!(bool)local_21) && (local_30 != (int *)0x0)) {
    FUN_100031ed0(local_30);
    operator_delete(local_30);
  }
  return uVar8;
}

