
int FUN_10089ef70(code *param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  byte *pbVar8;
  byte bVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  char local_51;
  byte *local_50;
  int local_48 [2];
  int *local_40;
  char local_32;
  char local_31;
  
  local_51 = '\0';
  iVar5 = param_4[1];
  iVar1 = 0;
  if ((param_3 & 0x40) != 0) {
    pcVar6 = (char *)FUN_1008af570(iVar5);
    sVar7 = _strlen(pcVar6);
    iVar1 = (*param_1)(param_2,pcVar6,sVar7 & 0xffffffff);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = (*param_1)(param_2,":",1);
    if (iVar1 == 0) {
      return -1;
    }
    iVar1 = (int)sVar7 + 1;
  }
  if ((param_3 & 0x80) == 0) {
    uVar11 = 1;
    if ((param_3 & 0x20) == 0) {
      uVar2 = 0xffffffff;
      if (iVar5 - 1U < 0x1e) {
        uVar2 = (uint)(char)(&DAT_100b59cb0)[iVar5];
      }
      uVar11 = 1;
      if ((uVar2 != 0xffffffff || (param_3 & 0x100) != 0) && (uVar11 = uVar2, uVar2 == 0xffffffff))
      goto LAB_10089f063;
    }
    bVar9 = (byte)param_3 & 0xf;
    uVar2 = uVar11;
    if ((param_3 & 0x10) != 0) {
      uVar2 = 1;
      if (uVar11 != 0) {
        uVar2 = uVar11 | 8;
      }
    }
    iVar5 = FUN_10089f3c0(*(undefined8 *)(param_4 + 2),*param_4,uVar2,bVar9,&local_51,param_1,0);
    iVar3 = -1;
    if (-1 < iVar5) {
      iVar3 = iVar5 + 2;
      if (local_51 == '\0') {
        iVar3 = iVar5;
      }
      iVar3 = iVar3 + iVar1;
      if (param_2 != 0) {
        if ((local_51 != '\0') && (iVar5 = (*param_1)(param_2,"\"",1), iVar5 == 0)) {
          return -1;
        }
        iVar5 = FUN_10089f3c0(*(undefined8 *)(param_4 + 2),*param_4,uVar2,bVar9,0,param_1,param_2);
        if (iVar5 < 0) {
          return -1;
        }
        if ((local_51 != '\0') && (iVar5 = (*param_1)(param_2,"\"",1), iVar5 == 0)) {
          return -1;
        }
      }
    }
  }
  else {
LAB_10089f063:
    iVar3 = (*param_1)(param_2,"#",1);
    iVar5 = -1;
    if (iVar3 != 0) {
      if ((param_3 & 0x200) == 0) {
        iVar5 = *param_4;
        lVar12 = (long)iVar5;
        if ((param_2 != 0) && (iVar5 != 0)) {
          pbVar8 = *(byte **)(param_4 + 2);
          do {
            local_32 = "0123456789ABCDEF"[*pbVar8 >> 4];
            local_31 = "0123456789ABCDEF"[(ulong)*pbVar8 & 0xf];
            iVar4 = (*param_1)(param_2,&local_32,2);
            iVar3 = -1;
            if (iVar4 == 0) goto LAB_10089f112;
            pbVar8 = pbVar8 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        iVar3 = iVar5 * 2;
LAB_10089f112:
        iVar5 = -1;
        if (-1 < iVar3) {
          iVar5 = iVar3 + 1;
        }
      }
      else {
        local_48[0] = param_4[1];
        local_40 = param_4;
        iVar3 = FUN_1008a8960(local_48,0);
        pbVar8 = (byte *)FUN_10081ddd0(iVar3,"a_strex.c",0x13d);
        if (pbVar8 != (byte *)0x0) {
          local_50 = pbVar8;
          FUN_1008a8960(local_48,&local_50);
          if ((param_2 != 0) && (iVar3 != 0)) {
            lVar12 = (long)iVar3;
            pbVar10 = pbVar8;
            do {
              local_32 = "0123456789ABCDEF"[*pbVar10 >> 4];
              local_31 = "0123456789ABCDEF"[(ulong)*pbVar10 & 0xf];
              iVar5 = (*param_1)(param_2,&local_32,2);
              iVar4 = -1;
              if (iVar5 == 0) goto LAB_10089f1e7;
              pbVar10 = pbVar10 + 1;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          iVar4 = iVar3 * 2;
LAB_10089f1e7:
          FUN_10081e1a0(pbVar8);
          iVar5 = -1;
          if (-1 < iVar4) {
            iVar5 = iVar4 + 1;
          }
        }
      }
    }
    iVar3 = -1;
    if (-1 < iVar5) {
      iVar3 = iVar1 + iVar5;
    }
  }
  return iVar3;
}

