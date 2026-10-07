
ulong FUN_1007f7d90(int *param_1,int param_2,long param_3,char *param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  
  iVar4 = 0;
  if (param_2 < 0x37) {
    switch(param_2) {
    case 1:
      lVar9 = *(long *)(param_1 + 0x40);
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x30) == 0)) &&
         ((*(long *)(lVar9 + 0x68) == 0 || (iVar3 = FUN_100891d80(), 0x40 < iVar3)))) {
        iVar4 = 1;
      }
      break;
    case 2:
    case 3:
    case 5:
    case 6:
      plVar1 = (long *)(param_1 + 0x40);
      iVar3 = FUN_100812370(plVar1);
      if (iVar3 == 0) {
        uVar10 = 0x41;
        uVar11 = 0xc50;
        goto LAB_1007f837e;
      }
      switch(param_2) {
      case 2:
        if (param_4 == (char *)0x0) {
          uVar10 = 0x43;
          uVar11 = 0xc75;
        }
        else {
          lVar9 = FUN_10086ee20(param_4);
          if (lVar9 != 0) {
            lVar7 = *plVar1;
            if (*(long *)(lVar7 + 0x30) != 0) {
              FUN_10086c430();
              lVar7 = *plVar1;
            }
            *(long *)(lVar7 + 0x30) = lVar9;
            iVar4 = 1;
            goto switchD_1007f7dcf_caseD_9;
          }
          uVar10 = 4;
          uVar11 = 0xc79;
        }
        break;
      case 3:
        if (param_4 == (char *)0x0) {
          uVar10 = 0x43;
          uVar11 = 0xc8e;
        }
        else {
          lVar9 = FUN_100876120(param_4);
          if (lVar9 != 0) {
            lVar7 = *plVar1;
            if (*(long *)(lVar7 + 0x40) != 0) {
              FUN_100876b00();
              lVar7 = *plVar1;
            }
            *(long *)(lVar7 + 0x40) = lVar9;
            iVar4 = 1;
            goto switchD_1007f7dcf_caseD_9;
          }
          uVar10 = 5;
          uVar11 = 0xc92;
        }
        break;
      case 4:
        goto switchD_1007f7dcf_caseD_4;
      case 5:
        uVar10 = 0x42;
        uVar11 = 0xc84;
        break;
      case 6:
        uVar10 = 0x42;
        uVar11 = 0xc9d;
        break;
      default:
        goto switchD_1007f7dcf_caseD_9;
      }
      goto LAB_1007f837e;
    case 4:
switchD_1007f7dcf_caseD_4:
      if (param_4 == (char *)0x0) {
        uVar10 = 0x43;
        uVar11 = 0xca8;
      }
      else {
        iVar4 = FUN_100864270(param_4);
        if (iVar4 == 0) {
          uVar10 = 0x2b;
          uVar11 = 0xcac;
        }
        else {
          if (((*(byte *)((long)param_1 + 0x1aa) & 8) != 0) ||
             (iVar4 = FUN_1008642a0(param_4), iVar4 != 0)) {
            lVar9 = *(long *)(param_1 + 0x40);
            if (*(long *)(lVar9 + 0x50) != 0) {
              FUN_100863f80();
              lVar9 = *(long *)(param_1 + 0x40);
            }
            *(char **)(lVar9 + 0x50) = param_4;
            iVar4 = 1;
            break;
          }
          FUN_100863f80(param_4);
          uVar10 = 0x2b;
          uVar11 = 0xcb3;
        }
      }
LAB_1007f837e:
      FUN_100887ce0(0x14,0xd5,uVar10,"s3_lib.c",uVar11);
      return 0;
    case 7:
      uVar10 = 0x42;
      uVar11 = 0xcbf;
      goto LAB_1007f837e;
    case 8:
      iVar4 = param_1[0x2a];
      break;
    case 10:
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x1e4);
      break;
    case 0xb:
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x1e4);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1e4) = 0;
      break;
    case 0xc:
      iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x1e0);
      break;
    case 0xd:
      iVar4 = **(int **)(param_1 + 0x20);
    }
    goto switchD_1007f7dcf_caseD_9;
  }
  if (0x54 < param_2) {
    if (param_2 < 0x57) {
      if (param_2 == 0x55) {
        iVar4 = FUN_1008115d0(param_1);
        if ((iVar4 == 0xfeff) || (iVar4 = FUN_1008115d0(param_1), iVar4 == 0x100)) {
          iVar4 = FUN_10080c360(param_1);
        }
        else {
          iVar4 = FUN_100804e70(param_1);
        }
      }
      else if (param_2 == 0x56) {
        iVar4 = param_1[0xa7];
      }
    }
    else if (param_2 == 0x57) {
      uVar5 = param_1[0xa6] | 4;
      if (param_3 == 0) {
        uVar5 = param_1[0xa6] & 0xfffffffb;
      }
      param_1[0xa6] = uVar5;
      iVar4 = 1;
    }
    else if (param_2 == 0x77) {
      iVar4 = *(int *)**(undefined8 **)(param_1 + 0x5c);
      if (*param_1 == iVar4) {
        return 1;
      }
      piVar6 = (int *)FUN_1007ffd80();
      if (iVar4 != *piVar6) {
        return 0;
      }
      uVar2 = *(ulong *)(param_1 + 0x6a);
      if ((uVar2 & 0x8000000) == 0) {
        bVar12 = *param_1 == 0x303;
      }
      else if ((uVar2 & 0x10000000) == 0) {
        bVar12 = *param_1 == 0x302;
      }
      else if ((uVar2 & 0x4000000) == 0) {
        bVar12 = *param_1 == 0x301;
      }
      else if ((uVar2 & 0x2000000) == 0) {
        bVar12 = *param_1 == 0x300;
      }
      else {
        if ((uVar2 & 0x1000000) != 0) {
          return 0;
        }
        bVar12 = *param_1 == 2;
      }
      return (ulong)bVar12;
    }
    goto switchD_1007f7dcf_caseD_9;
  }
  switch(param_2) {
  case 0x37:
    if (param_3 == 0) {
      if (*(long *)(param_1 + 0x78) != 0) {
        FUN_10081e1a0();
      }
      param_1[0x78] = 0;
      param_1[0x79] = 0;
      iVar4 = 1;
      if (param_4 == (char *)0x0) break;
      sVar8 = _strlen(param_4);
      if (sVar8 - 1 < 0xff) {
        lVar9 = FUN_10087d050(param_4);
        *(long *)(param_1 + 0x78) = lVar9;
        if (lVar9 != 0) break;
        uVar10 = 0x44;
        uVar11 = 0xcd6;
      }
      else {
        uVar10 = 0x13f;
        uVar11 = 0xcd2;
      }
    }
    else {
      uVar10 = 0x140;
      uVar11 = 0xcda;
    }
    goto LAB_1007f837e;
  case 0x39:
    *(char **)(param_1 + 0x76) = param_4;
    iVar4 = 1;
    break;
  case 0x41:
    param_1[0x7b] = (int)param_3;
    iVar4 = 1;
    break;
  case 0x42:
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    goto LAB_1007f80ed;
  case 0x43:
    *(char **)(param_1 + 0x80) = param_4;
    iVar4 = 1;
    break;
  case 0x44:
    uVar10 = *(undefined8 *)(param_1 + 0x7e);
LAB_1007f80ed:
    *(undefined8 *)param_4 = uVar10;
    iVar4 = 1;
    break;
  case 0x45:
    *(char **)(param_1 + 0x7e) = param_4;
    iVar4 = 1;
    break;
  case 0x46:
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x82);
    return (long)param_1[0x84];
  case 0x47:
    if (*(long *)(param_1 + 0x82) != 0) {
      FUN_10081e1a0();
    }
    *(char **)(param_1 + 0x82) = param_4;
    param_1[0x84] = (int)param_3;
    iVar4 = 1;
  }
switchD_1007f7dcf_caseD_9:
  return (long)iVar4;
}

