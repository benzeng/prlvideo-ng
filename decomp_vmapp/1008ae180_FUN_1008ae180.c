
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008ae180(char *param_1,int param_2,int *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *local_50;
  int local_38;
  int local_34;
  
  if (param_1 != (char *)0x0) {
    if (0 < param_2) {
      lVar4 = 0;
      do {
        if (param_1[lVar4] == ':') {
          iVar3 = (int)lVar4;
          local_50 = param_1 + lVar4 + 1;
          iVar7 = (param_2 + (int)param_1) - (int)local_50;
          goto LAB_1008ae1e4;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < param_2);
    }
    iVar7 = 0;
    local_50 = (char *)0x0;
    iVar3 = param_2;
LAB_1008ae1e4:
    iVar8 = iVar3;
    if (iVar3 == -1) {
      sVar5 = _strlen(param_1);
      iVar8 = (int)sVar5;
    }
    _DAT_1011c2980 = &PTR_s_BOOL_100be27f0;
    uVar6 = 0;
    do {
      ppuVar1 = _DAT_1011c2980;
      if ((iVar8 == *(int *)(_DAT_1011c2980 + 1)) &&
         (iVar2 = _strncmp(*_DAT_1011c2980,param_1,(long)iVar8), iVar2 == 0)) {
        uVar6 = *(uint *)((long)ppuVar1 + 0xc);
        if (uVar6 != 0xffffffff) {
          if ((uVar6 & 0x10000) == 0) {
            param_3[2] = uVar6;
            *(char **)(param_3 + 4) = local_50;
            if (local_50 != (char *)0x0) {
              return 0;
            }
            if (param_1[iVar3] == '\0') {
              return 0;
            }
            FUN_100887ce0(0xd,0xb1,0xbd,"asn1_gen.c",0x149);
            return 0xffffffff;
          }
          switch(uVar6) {
          case 0x10001:
            if (*param_3 != -1) {
              FUN_100887ce0(0xd,0xb1,0xb5,"asn1_gen.c",0x154);
              return 0xffffffff;
            }
            iVar3 = FUN_1008ae700(local_50,iVar7,param_3,param_3 + 1);
            if (iVar3 == 0) {
              return 0xffffffff;
            }
            break;
          case 0x10002:
            iVar3 = FUN_1008ae700(local_50,iVar7,&local_34,&local_38);
            if (iVar3 == 0) {
              return 0xffffffff;
            }
            if (*param_3 != -1) {
              FUN_100887ce0(0xd,0xb0,0xb3,"asn1_gen.c",0x213);
              return 0xffffffff;
            }
            lVar4 = (long)param_3[0x7e];
            if (lVar4 == 0x14) {
LAB_1008ae5da:
              FUN_100887ce0(0xd,0xb0,0xae,"asn1_gen.c",0x218);
              return 0xffffffff;
            }
            param_3[0x7e] = param_3[0x7e] + 1;
            param_3[lVar4 * 6 + 6] = local_34;
            param_3[lVar4 * 6 + 7] = local_38;
            param_3[lVar4 * 6 + 8] = 1;
            param_3[lVar4 * 6 + 9] = 0;
            break;
          case 0x10004:
            lVar4 = (long)param_3[0x7e];
            if (lVar4 == 0x14) goto LAB_1008ae5da;
            param_3[0x7e] = param_3[0x7e] + 1;
            if (*param_3 == -1) {
              param_3[lVar4 * 6 + 6] = 3;
              param_3[lVar4 * 6 + 7] = 0;
            }
            else {
              param_3[lVar4 * 6 + 6] = *param_3;
              param_3[lVar4 * 6 + 7] = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
            }
            (param_3 + lVar4 * 6 + 8)[0] = 0;
            (param_3 + lVar4 * 6 + 8)[1] = 1;
            break;
          case 0x10005:
            lVar4 = (long)param_3[0x7e];
            if (lVar4 == 0x14) goto LAB_1008ae5da;
            param_3[0x7e] = param_3[0x7e] + 1;
            if (*param_3 == -1) {
              param_3[lVar4 * 6 + 6] = 4;
              param_3[lVar4 * 6 + 7] = 0;
              (param_3 + lVar4 * 6 + 8)[0] = 0;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            else {
              param_3[lVar4 * 6 + 6] = *param_3;
              param_3[lVar4 * 6 + 7] = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              (param_3 + lVar4 * 6 + 8)[0] = 0;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            break;
          case 0x10006:
            lVar4 = (long)param_3[0x7e];
            if (lVar4 == 0x14) goto LAB_1008ae5da;
            param_3[0x7e] = param_3[0x7e] + 1;
            if (*param_3 == -1) {
              param_3[lVar4 * 6 + 6] = 0x10;
              param_3[lVar4 * 6 + 7] = 0;
              (param_3 + lVar4 * 6 + 8)[0] = 1;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            else {
              param_3[lVar4 * 6 + 6] = *param_3;
              param_3[lVar4 * 6 + 7] = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              (param_3 + lVar4 * 6 + 8)[0] = 1;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            break;
          case 0x10007:
            lVar4 = (long)param_3[0x7e];
            if (lVar4 == 0x14) goto LAB_1008ae5da;
            param_3[0x7e] = param_3[0x7e] + 1;
            if (*param_3 == -1) {
              param_3[lVar4 * 6 + 6] = 0x11;
              param_3[lVar4 * 6 + 7] = 0;
              (param_3 + lVar4 * 6 + 8)[0] = 1;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            else {
              param_3[lVar4 * 6 + 6] = *param_3;
              param_3[lVar4 * 6 + 7] = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              (param_3 + lVar4 * 6 + 8)[0] = 1;
              (param_3 + lVar4 * 6 + 8)[1] = 0;
            }
            break;
          case 0x10008:
            if (local_50 == (char *)0x0) {
              FUN_100887ce0(0xd,0xb1,0xa0,"asn1_gen.c",0x179);
              return 0xffffffff;
            }
            iVar3 = _strncmp(local_50,"ASCII",5);
            if (iVar3 == 0) {
              param_3[3] = 1;
            }
            else {
              iVar3 = _strncmp(local_50,"UTF8",4);
              if (iVar3 == 0) {
                param_3[3] = 2;
              }
              else {
                iVar3 = _strncmp(local_50,"HEX",3);
                if (iVar3 == 0) {
                  param_3[3] = 3;
                }
                else {
                  iVar3 = _strncmp(local_50,"BITLIST",7);
                  if (iVar3 != 0) {
                    FUN_100887ce0(0xd,0xb1,0xc3,"asn1_gen.c",0x185);
                    return 0xffffffff;
                  }
                  param_3[3] = 4;
                }
              }
            }
          }
          return 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      _DAT_1011c2980 = ppuVar1 + 2;
    } while (uVar6 < 0x31);
    FUN_100887ce0(0xd,0xb1,0xc2,"asn1_gen.c",0x13e);
    FUN_1008890a0(2,"tag=",param_1);
  }
  return 0xffffffff;
}

