
ulong FUN_10071c930(long ******param_1,char *param_2,uint param_3,long param_4)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  char cVar13;
  char *pcVar14;
  bool bVar15;
  char *local_90;
  long *****local_80;
  long *****local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  long local_38;
  
  sVar7 = (size_t)param_3;
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_6c = 0;
  local_80 = (long *****)&local_80;
  local_78 = (long *****)&local_80;
  local_38 = lVar10;
  if ((int)param_3 < 1) {
    sVar7 = _strlen(param_2);
  }
  if (param_1 == (long ******)0x0) {
    param_1 = &local_80;
  }
  iVar6 = (int)sVar7;
  if (iVar6 < 0x45) {
    puVar8 = (undefined8 *)FUN_100723d00(param_2,(long)iVar6);
    puVar3 = PTR___DefaultRuneLocale_100ba20c0;
    if ((puVar8 == (undefined8 *)0x0) || ((long)(param_2 + ((long)iVar6 - (long)puVar8)) < 0x22)) {
      uVar9 = FUN_10071e690(0xfffffff4,0);
      goto LAB_10071cd86;
    }
    local_48 = *(undefined2 *)(puVar8 + 4);
    local_50 = puVar8[3];
    local_58 = puVar8[2];
    local_60 = puVar8[1];
    local_68 = *puVar8;
    local_46 = 0;
    lVar12 = 0;
    do {
      cVar13 = *(char *)((long)&local_68 + lVar12);
      if ((long)cVar13 < 0) {
        uVar4 = ___maskrune((int)cVar13,0x1000);
        cVar13 = *(char *)((long)&local_68 + lVar12);
      }
      else {
        uVar4 = *(uint *)(puVar3 + (long)cVar13 * 4 + 0x3c) & 0x1000;
      }
      uVar5 = (uint)cVar13;
      if (uVar4 != 0) {
        uVar5 = ___toupper(uVar5);
      }
      uVar4 = 0x30;
      if ((uVar5 & 0xff) != 0x4f) {
        uVar4 = uVar5 & 0xff;
      }
      *(char *)((long)&local_68 + lVar12) = (char)uVar4;
      if ((uVar4 == 0x49) || (uVar4 == 0x4c)) {
        *(undefined1 *)((long)&local_68 + lVar12) = 0x31;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x22);
    local_90 = (char *)&local_68;
    sVar7 = 0x22;
    uVar9 = FUN_10071a230(param_1,local_90,0x22,0,0,&local_6c);
    if ((int)uVar9 != 0) goto LAB_10071cd86;
    bVar15 = local_6c == 0;
  }
  else {
    uVar9 = FUN_100719110(param_1,param_2,sVar7 & 0xffffffff);
    bVar15 = true;
    local_90 = param_2;
    if ((int)uVar9 != 0) goto LAB_10071cd86;
  }
  uVar4 = FUN_100742250(DAT_10116db38);
  if (uVar4 == 0) {
    for (pppppplVar2 = (long ******)*param_1;
        (pppppplVar2 != param_1 && ((*(byte *)((long)pppppplVar2 + 0x1d4) & 0x10) == 0));
        pppppplVar2 = (long ******)*pppppplVar2) {
      pppppplVar1 = pppppplVar2 + 4;
      uVar5 = FUN_100722880(pppppplVar1);
      if (6 < uVar5 - 1) {
        uVar4 = FUN_10071e690(1,"wrong license class %s",pppppplVar1);
        goto LAB_10071cd46;
      }
      uVar4 = FUN_100719f00(pppppplVar2);
      if (uVar4 != 0) {
        FUN_10071e690(uVar4,"Licenses with version %d.%d is not supported",
                      *(undefined4 *)((long)pppppplVar2 + 0xcc),*(undefined4 *)(pppppplVar2 + 0x19))
        ;
        goto LAB_10071cd46;
      }
      uVar4 = FUN_1007199e0(pppppplVar2,bVar15);
      if (uVar4 != 0) goto LAB_10071cd46;
      lVar10 = FUN_100715020(uVar5);
      if (*(int *)(pppppplVar2 + 0x3b) < 5) {
        if (*(int *)(lVar10 + 0x54) < 5) {
          pcVar11 = (char *)FUN_100722f30(3);
          iVar6 = _strncmp((char *)(pppppplVar2 + 0x3d),pcVar11,0x7e);
          if (iVar6 != 0) goto LAB_10071cbd0;
        }
        if (*(char *)(pppppplVar2 + 0x3d) == '\0') {
          pcVar11 = " ";
        }
        else {
          pcVar11 = "- ";
        }
        pcVar14 = (char *)pppppplVar2[0x3c];
LAB_10071cd34:
        uVar4 = FUN_10071e690(1,"license %s %s is %s %s%s",pppppplVar1,(long)pppppplVar2 + 0x184,
                              pcVar14,pcVar11,pppppplVar2 + 0x3d);
        goto LAB_10071cd46;
      }
LAB_10071cbd0:
      if ((uVar5 & 0xfffffffb) == 1) {
        uVar4 = FUN_10071ce50(pppppplVar2,lVar10,local_90,sVar7 & 0xffffffff);
        if ((param_4 == 0) || (uVar4 != 0)) goto LAB_10071cc5b;
        lVar10 = FUN_100719990(pppppplVar2 + 0x52,"update_password");
        if (lVar10 != 0) {
          uVar4 = FUN_1007146b0(param_4,pppppplVar2 + 0x4d,*(undefined8 *)(lVar10 + 0x18));
          goto LAB_10071cc5b;
        }
      }
      else {
        if ((uVar5 == 3) && (local_6c == 1)) {
          if (*(char *)(pppppplVar2 + 0x3d) == '\0') {
            pcVar11 = " ";
          }
          else {
            pcVar11 = "- ";
          }
          pcVar14 = "for Desktop/Workstation/old versions of Server";
          goto LAB_10071cd34;
        }
        uVar4 = FUN_10071ce50(pppppplVar2,lVar10,local_90,sVar7 & 0xffffffff);
LAB_10071cc5b:
        if (uVar4 != 0) goto LAB_10071cd46;
      }
    }
    uVar4 = 0;
LAB_10071cd46:
    FUN_100742310(DAT_10116db38);
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (&local_80 == param_1) {
    param_1 = &local_80;
  }
  else {
    uVar9 = 0;
    if (uVar4 == 0) goto LAB_10071cd86;
  }
  FUN_100719320(param_1);
  uVar9 = (ulong)uVar4;
LAB_10071cd86:
  if (lVar10 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

