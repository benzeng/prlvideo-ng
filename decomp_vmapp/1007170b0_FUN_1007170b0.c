
ulong FUN_1007170b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  int iVar11;
  undefined8 ******ppppppuVar12;
  size_t sVar13;
  undefined8 *****local_40;
  undefined8 *****local_38;
  
  if (param_1[1] == 5) {
    ppppppuVar12 = *(undefined8 *******)(*(long *)(param_1 + 0x12) + 0x38);
    if (ppppppuVar12 == (undefined8 ******)0x0) {
      ppppppuVar12 = &local_40;
    }
    local_40 = &local_40;
    local_38 = &local_40;
    uVar2 = FUN_10071c930(ppppppuVar12,*(undefined8 *)(param_1 + 10),param_1[0xc],
                          *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x30));
    uVar10 = (ulong)uVar2;
    if (uVar2 != 0) {
      pcVar4 = (char *)FUN_10071e790();
      pcVar4 = _strdup(pcVar4);
      if (pcVar4 == (char *)0x0) {
        return uVar10;
      }
      FUN_10071e690(uVar10,"Can\'t install %s",pcVar4);
      _free(pcVar4);
      return uVar10;
    }
    if (ppppppuVar12 == &local_40) {
      FUN_100719320(&local_40);
    }
    param_1[1] = 6;
    return 0;
  }
  if (param_1[1] == -1) {
LAB_1007172fd:
    uVar10 = FUN_10071e690(0xfffffff6,0);
    return uVar10;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x12) + 0x20);
  iVar3 = *(int *)(lVar6 + 0x10);
  uVar2 = FUN_100724010(lVar6);
  if (uVar2 != 0) {
    if (uVar2 == 0xfffffff6) {
      pcVar4 = (char *)FUN_10071e790();
      pcVar4 = _strdup(pcVar4);
      *(char **)(param_1 + 4) = pcVar4;
      param_1[2] = -10;
    }
    FUN_100723f60(lVar6);
    *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20) = 0;
    return (ulong)uVar2;
  }
  iVar1 = *(int *)(lVar6 + 0x10);
  if (iVar1 != 6) {
    uVar10 = 0;
    if (iVar3 == iVar1) {
      return 0;
    }
    iVar3 = param_1[1];
    if (iVar1 - 3U < 3) {
      param_1[1] = 4;
      iVar11 = 4;
    }
    else if (iVar1 == 2) {
      param_1[1] = 3;
      iVar11 = 3;
    }
    else {
      iVar11 = iVar3;
      if (iVar1 == 1) {
        param_1[1] = 2;
        iVar11 = 2;
      }
    }
    if (iVar3 == iVar11) {
      return 0;
    }
    goto LAB_10071744a;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x12) + 0x20);
  if ((*(byte *)(lVar6 + 0x14) & 4) != 0) {
    param_1[2] = -10;
    lVar6 = FUN_100724d40(*(undefined8 *)(lVar7 + 0x20),"faultString");
    if (lVar6 != 0) {
      sVar13 = *(long *)(lVar6 + 8) + 0x17;
      pvVar9 = _malloc(sVar13);
      *(void **)(param_1 + 4) = pvVar9;
      if (pvVar9 != (void *)0x0) {
        ___snprintf_chk(pvVar9,sVar13,0,0xffffffffffffffff,"Error on KA server: %s",
                        *(undefined8 *)(lVar6 + 0x20));
      }
    }
    param_1[1] = -1;
    goto LAB_1007172fd;
  }
  uVar5 = FUN_100724f10(*(undefined8 *)(lVar7 + 0x20),0);
  lVar6 = FUN_100724d40(uVar5,"resultCode");
  if (lVar6 == 0) {
LAB_10071741b:
    param_1[1] = -1;
    param_1[2] = -3;
    pcVar4 = "Bad server response";
LAB_100717430:
    pcVar4 = _strdup(pcVar4);
    *(char **)(param_1 + 4) = pcVar4;
LAB_100717439:
    uVar5 = 0xfffffff6;
  }
  else {
    lVar7 = FUN_100724d40(uVar5,"resultDesc");
    lVar8 = FUN_100724d40(uVar5,"detailResultCode");
    if (*(int *)(lVar6 + 0x20) != 0) {
      param_1[2] = *(int *)(lVar6 + 0x20);
      if (lVar7 != 0) {
        pcVar4 = _strdup(*(char **)(lVar7 + 0x20));
        *(char **)(param_1 + 4) = pcVar4;
      }
      if (lVar8 != 0) {
        param_1[3] = *(int *)(lVar8 + 0x20);
      }
      param_1[1] = -1;
      goto LAB_100717439;
    }
    if ((*param_1 == 6) || (*param_1 - 4U < 2)) goto LAB_10071740e;
    lVar6 = FUN_100724d40(uVar5,"key");
    if (lVar6 == 0) {
      if (*param_1 != 1) goto LAB_10071741b;
      param_1[1] = -1;
      param_1[2] = 0;
      pcVar4 = "License does not required update";
      goto LAB_100717430;
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar6 + 8);
    if (*param_1 == 1) {
      param_1[1] = 5;
      uVar10 = 0;
      goto LAB_10071744a;
    }
    lVar6 = FUN_100724d40(uVar5,"activationCode");
    if (lVar6 == 0) {
      iVar3 = FUN_100714a30();
      if (iVar3 != 8) goto LAB_10071741b;
LAB_10071740e:
      param_1[1] = 6;
      uVar10 = 0;
      goto LAB_10071744a;
    }
    pcVar4 = *(char **)(lVar6 + 0x20);
    iVar3 = _strncmp(*(char **)(param_1 + 6),pcVar4,0x22);
    if (iVar3 == 0) goto LAB_10071740e;
    pcVar4 = _strdup(pcVar4);
    if (pcVar4 != (char *)0x0) {
      _free(*(void **)(param_1 + 6));
      *(char **)(param_1 + 6) = pcVar4;
      goto LAB_10071740e;
    }
    uVar5 = 0xfffffffe;
  }
  uVar2 = FUN_10071e690(uVar5,0);
  uVar10 = (ulong)uVar2;
LAB_10071744a:
  if (*(code **)(*(long *)(param_1 + 0x12) + 0x10) != (code *)0x0) {
    (**(code **)(*(long *)(param_1 + 0x12) + 0x10))(param_1);
  }
  return uVar10;
}

