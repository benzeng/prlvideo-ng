
long * FUN_100543fa0(long *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  undefined4 local_a0;
  undefined4 local_9c;
  string local_98;
  char local_97 [7];
  ulong local_90;
  char *local_88;
  string local_80;
  char local_7f [7];
  ulong local_78;
  char *local_70;
  string local_68;
  char local_67 [7];
  ulong local_60;
  char *local_58;
  string local_50 [8];
  ulong local_48;
  undefined8 local_38;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = (long)(param_1 + 1);
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    _strlen(param_2);
    std::string::__init((char *)local_50,(ulong)param_2);
    _strlen(param_3);
    std::string::__init((char *)&local_68,(ulong)param_3);
    puVar1 = PTR___DefaultRuneLocale_100ba20c0;
    uVar5 = local_60;
    if (((byte)local_68 & 1) == 0) {
      uVar5 = (ulong)((byte)local_68 >> 1);
    }
    if (uVar5 != 0) {
      uVar5 = local_60;
      pcVar7 = local_58;
      if (((byte)local_68 & 1) == 0) {
        uVar5 = (ulong)((byte)local_68 >> 1);
        pcVar7 = local_67;
      }
      pcVar10 = pcVar7 + uVar5;
      if (pcVar7 == pcVar10) {
LAB_10054409b:
        puVar1 = PTR___DefaultRuneLocale_100ba20c0;
        pcVar8 = pcVar7;
        pcVar4 = pcVar7;
        if (pcVar7 != pcVar10) {
joined_r0x0001005440a8:
          pcVar4 = pcVar4 + 1;
          pcVar8 = pcVar7;
          if (pcVar4 != pcVar10) {
            do {
              cVar6 = *pcVar4;
              if ((long)cVar6 < 0) {
                iVar2 = ___maskrune((int)cVar6,0x4000);
                if (iVar2 != 0) goto joined_r0x0001005440a8;
                cVar6 = *pcVar4;
              }
              else if ((puVar1[(long)cVar6 * 4 + 0x3d] & 0x40) != 0) goto joined_r0x0001005440a8;
              *pcVar7 = cVar6;
              pcVar7 = pcVar7 + 1;
              pcVar4 = pcVar4 + 1;
              pcVar8 = pcVar7;
              if (pcVar4 == pcVar10) break;
            } while( true );
          }
        }
      }
      else {
        do {
          cVar6 = *pcVar7;
          if ((long)cVar6 < 0) {
            iVar2 = ___maskrune((int)cVar6,0x4000);
            if (iVar2 != 0) goto LAB_10054409b;
          }
          else if ((puVar1[(long)cVar6 * 4 + 0x3d] & 0x40) != 0) goto LAB_10054409b;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar10;
        } while (pcVar10 != pcVar7);
      }
      pcVar7 = local_58;
      if (((byte)local_68 & 1) == 0) {
        local_60 = (ulong)((byte)local_68 >> 1);
        pcVar7 = local_67;
      }
      if (pcVar8 != pcVar7 + local_60) {
        *pcVar8 = '\0';
      }
      pcVar7 = local_58;
      if (((byte)local_68 & 1) == 0) {
        pcVar7 = local_67;
      }
      _strlen(pcVar7);
      std::string::__init((char *)&local_80,(ulong)pcVar7);
      FUN_100523010(&local_98,local_50,"=");
      uVar5 = local_78;
      pcVar7 = local_70;
      if (((byte)local_80 & 1) == 0) {
        uVar5 = (ulong)((byte)local_80 >> 1);
        pcVar7 = local_7f;
      }
      if (((byte)local_98 & 1) == 0) {
        local_88 = local_97;
        local_90 = (ulong)((byte)local_98 >> 1);
      }
      if (uVar5 < local_90) {
        lVar11 = -1;
      }
      else {
        lVar11 = 0;
        if (local_90 != 0) {
          if ((long)uVar5 < (long)local_90) {
            lVar11 = -1;
          }
          else {
            lVar11 = (1 - local_90) + uVar5;
            if (lVar11 == 0) {
              lVar11 = -1;
            }
            else {
              pcVar10 = pcVar7;
              do {
                uVar9 = 1;
                if (*pcVar10 == *local_88) {
                  do {
                    if (local_90 == uVar9) {
                      lVar11 = -1;
                      if (pcVar10 != pcVar7 + uVar5) {
                        lVar11 = (long)pcVar10 - (long)pcVar7;
                      }
                      goto LAB_100544241;
                    }
                    pcVar4 = local_88 + uVar9;
                    pcVar8 = pcVar10 + uVar9;
                    uVar9 = uVar9 + 1;
                  } while (*pcVar8 == *pcVar4);
                }
                pcVar10 = pcVar10 + 1;
              } while (pcVar10 != pcVar7 + lVar11);
              lVar11 = -1;
            }
          }
        }
      }
LAB_100544241:
      std::string::~string(&local_98);
      if (lVar11 != -1) {
        if (((byte)local_50[0] & 1) == 0) {
          local_48 = (ulong)((byte)local_50[0] >> 1);
        }
        uVar5 = lVar11 + 1 + local_48;
        uVar9 = local_78;
        pcVar7 = local_70;
        if (((byte)local_80 & 1) == 0) {
          uVar9 = (ulong)((byte)local_80 >> 1);
          pcVar7 = local_7f;
        }
        if (((uVar5 < uVar9) &&
            (pcVar10 = pcVar7 + uVar9,
            pcVar10 != pcVar7 + uVar5 && -1 < (long)pcVar10 - (long)(pcVar7 + uVar5))) &&
           (uVar9 != uVar5)) {
          local_48 = lVar11 + 1 + local_48;
          do {
            if (pcVar7[local_48] == ';') {
              if ((pcVar7 + local_48 != pcVar10) &&
                 (uVar9 = (long)(pcVar7 + local_48) - (long)pcVar7, uVar9 != 0xffffffffffffffff))
              goto LAB_1005442f5;
              break;
            }
            local_48 = local_48 + 1;
          } while (uVar9 != local_48);
        }
        uVar9 = local_78;
        if (((byte)local_80 & 1) == 0) {
          uVar9 = (ulong)((byte)local_80 >> 1);
        }
LAB_1005442f5:
        if ((uVar5 != 0xffffffffffffffff) && (uVar5 < uVar9)) {
          while( true ) {
            local_9c = 0;
            local_a0 = 0;
            pcVar7 = local_70;
            if (((byte)local_80 & 1) == 0) {
              pcVar7 = local_7f;
            }
            iVar2 = _sscanf(pcVar7 + uVar5,"%i:%i",&local_9c,&local_a0);
            if (iVar2 != 2) break;
            local_38 = CONCAT44(local_a0,local_9c);
            FUN_100544490(param_1,&local_38);
            uVar3 = local_78;
            pcVar7 = local_70;
            if (((byte)local_80 & 1) == 0) {
              uVar3 = (ulong)((byte)local_80 >> 1);
              pcVar7 = local_7f;
            }
            if ((uVar3 <= uVar5) ||
               (pcVar10 = pcVar7 + uVar3,
               pcVar10 == pcVar7 + uVar5 || (long)pcVar10 - (long)(pcVar7 + uVar5) < 0)) break;
            while( true ) {
              if (uVar3 == uVar5) goto LAB_1005443fa;
              if (pcVar7[uVar5] == ',') break;
              uVar5 = uVar5 + 1;
            }
            if (pcVar7 + uVar5 == pcVar10) break;
            lVar11 = (long)(pcVar7 + uVar5) - (long)pcVar7;
            uVar5 = lVar11 + 1;
            if (lVar11 == -1) {
              uVar5 = 0xffffffffffffffff;
            }
            if ((uVar5 == 0xffffffffffffffff) || (uVar9 <= uVar5)) break;
          }
        }
      }
LAB_1005443fa:
      std::string::~string(&local_80);
    }
    std::string::~string(&local_68);
    std::string::~string(local_50);
  }
  return param_1;
}

