
undefined1
FUN_1000d0260(long *param_1,long *param_2,undefined4 *param_3,long *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  QArrayData *pQVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  bool bVar12;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  switch(*param_3) {
  case 0x69:
    if (*(int *)(param_1[0x14] + 4) != 0) {
      return 0;
    }
    lVar3 = *param_4;
    iVar8 = *(int *)(lVar3 + 4);
    if (0x40 < iVar8) {
      lVar4 = *(long *)(lVar3 + 0x10);
      pcVar7 = (char *)(lVar4 + 0x40 + lVar3);
      if (*(int *)(lVar4 + 0x3c + lVar3) == -1) {
        _strlen(pcVar7);
      }
      QString::fromUtf8_helper((char *)&local_50,(int)pcVar7);
      FUN_1000d58a0(param_1,param_2,*(undefined4 *)(lVar3 + lVar4),&local_50);
      if (*(int *)local_50 == -1) {
        return 0;
      }
      local_48 = local_50;
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return 0;
        }
        local_31 = 0;
      }
LAB_1000d0861:
      uVar9 = 2;
      pQVar6 = local_48;
      goto LAB_1000d086b;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar7 = "Invalid PxAppStubCmdAutoplayRequest data size (%d, must be >=%ld";
    goto LAB_1000d06ac;
  case 0x6a:
    lVar3 = *param_4;
    if ((*(uint *)(lVar3 + 4) < 0x80) ||
       (uVar9 = *(ulong *)(lVar3 + *(long *)(lVar3 + 0x10)), (uVar9 & 1) == 0)) {
      *param_5 = 0xffffffff;
      cVar5 = FUN_1000d1030(param_1,param_2);
      if (cVar5 == '\0') {
        return 1;
      }
      *param_5 = 0;
      return 1;
    }
    if ((uVar9 & 2) != 0) {
      FUN_1000d0a10(param_1,param_2);
      return 0;
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",2,"Fake stub with psn={%d, %d} connected",(int)*param_2,
                    *(undefined4 *)((long)param_2 + 4));
    }
    param_1[0x42] = *param_2;
    pQVar6 = (QArrayData *)QString::fromAscii_helper("--fakestub",10);
    local_40 = pQVar6;
    FUN_1000d0ea0(param_1,&local_40,param_2);
    if (*(int *)pQVar6 == -1) {
      return 0;
    }
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return 0;
      }
    }
    uVar9 = 2;
    goto LAB_1000d086b;
  case 0x6b:
    FUN_1000d1560(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x6c:
    FUN_1000d1cb0(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x6d:
    FUN_1000d2cb0(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x6e:
    lVar3 = *param_4;
    iVar8 = 1;
    if (3 < *(int *)(lVar3 + 4)) {
      iVar8 = (int)*(char *)(lVar3 + *(long *)(lVar3 + 0x10));
    }
    FUN_1000d37a0(param_1,param_2,iVar8);
    uVar11 = 0;
    break;
  case 0x6f:
    lVar3 = *param_4;
    iVar8 = *(int *)(lVar3 + 4);
    if (0x40 < iVar8) {
      FUN_1000d40c0(param_1,param_2,lVar3 + *(long *)(lVar3 + 0x10));
      return 0;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar7 = "Invalid PxAppStubCmdActivateWindow data size (%d, must be >=%ld";
    goto LAB_1000d06ac;
  default:
    if (DAT_10230ffd0 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      FUN_100df99c0("SGAC","prl_client_app",1,"Unknown command %d occurred");
    }
    break;
  case 0x72:
    lVar3 = *param_4;
    iVar8 = *(int *)(lVar3 + 4);
    if (0x40 < iVar8) {
      pcVar7 = (char *)(*(long *)(lVar3 + 0x10) + 0x40 + lVar3);
      if (*(int *)(*(long *)(lVar3 + 0x10) + 0x3c + lVar3) == -1) {
        _strlen(pcVar7);
      }
      QString::fromUtf8_helper((char *)&local_48,(int)pcVar7);
      FUN_1000d48e0(param_1,param_2,&local_48);
      if (*(int *)local_48 == -1) {
        return 0;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      goto LAB_1000d0861;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar7 = "Invalid PxAppStubCmdOpenDocRequest data size (%d, must be >=%ld";
LAB_1000d06ac:
    uVar10 = 0x41;
LAB_1000d06ba:
    uVar11 = 0;
    FUN_100df99c0("SGAC","prl_client_app",1,pcVar7,iVar8,uVar10);
    break;
  case 0x73:
    FUN_1000d5520(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x7e:
    FUN_1000d22e0(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x7f:
    FUN_1000d3480(param_1,param_2);
    uVar11 = 0;
    break;
  case 0x82:
    lVar3 = *param_4;
    iVar8 = *(int *)(lVar3 + 4);
    if (0x7f < iVar8) {
      FUN_1000d6600(param_1,param_2,*(undefined4 *)(lVar3 + *(long *)(lVar3 + 0x10)));
      return 0;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar7 = "Invalid PxAppStubCmdLaunchpad data size (%d, must be >=%ld";
    uVar10 = 0x80;
    goto LAB_1000d06ba;
  case 0x8c:
    lVar3 = *param_4;
    if (*(int *)(lVar3 + 4) < 4) {
      bVar12 = false;
    }
    else {
      bVar12 = *(int *)(lVar3 + *(long *)(lVar3 + 0x10)) != 0;
    }
    FUN_1000d6c70(param_1,param_2,bVar12);
    uVar11 = 0;
    break;
  case 0x8d:
    local_58 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1000fca20(param_1 + 0x23,&local_58);
    FUN_1000c4970(param_2,0x8d,local_58 + *(long *)(local_58 + 0x10),*(int *)(local_58 + 4));
    if (*(int *)local_58 == -1) {
      return 0;
    }
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    uVar9 = 1;
    pQVar6 = local_58;
LAB_1000d086b:
    QArrayData::deallocate(pQVar6,uVar9,8);
    uVar11 = 0;
    break;
  case 0x8e:
    if (*(char *)((long)param_1 + 0x10c) == '\0') {
      *param_5 = 0xffffffff;
      uVar11 = 1;
    }
    else {
      FUN_1000e0210(param_1);
      uVar11 = 0;
    }
    break;
  case 0x8f:
    lVar3 = *param_4;
    if (*(int *)(lVar3 + 4) < 8) {
      uVar11 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + *(long *)(lVar3 + 0x10));
      uVar2 = *(undefined4 *)(lVar3 + 4 + *(long *)(lVar3 + 0x10));
      (**(code **)(*param_1 + 0xa0))(param_1);
      uVar10 = (**(code **)(*param_1 + 0x68))(param_1);
      FUN_1000e93c0(uVar10,uVar1,uVar2);
      uVar11 = 0;
    }
    break;
  case 0x91:
    lVar3 = *param_4;
    iVar8 = *(int *)(lVar3 + 4);
    if (0x1f < iVar8) {
      FUN_1000d6d60(param_1,param_2,*(undefined4 *)(lVar3 + *(long *)(lVar3 + 0x10)));
      return 0;
    }
    if (DAT_10230ffd0 < 1) {
      return 0;
    }
    pcVar7 = "Invalid PxAppStubCmdShortcutItem data size (%d, must be >=%ld";
    uVar10 = 0x20;
    goto LAB_1000d06ba;
  }
  return uVar11;
}

