
long * FUN_100ca2080(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  
  iVar3 = FUN_100c60800(param_3);
  if (iVar3 < 1) {
    cVar2 = '\0';
    cVar12 = '\0';
  }
  else {
    cVar2 = '\0';
    cVar12 = '\0';
    iVar3 = 0;
    do {
      lVar5 = FUN_100c60820(param_3,iVar3);
      pcVar1 = *(char **)(lVar5 + 8);
      iVar4 = _strcmp(pcVar1,"keyid");
      if (iVar4 == 0) {
        if (*(char **)(lVar5 + 0x10) == (char *)0x0) {
          cVar2 = '\x01';
        }
        else {
          iVar4 = _strcmp(*(char **)(lVar5 + 0x10),"always");
          cVar2 = (iVar4 == 0) + '\x01';
        }
      }
      else {
        iVar4 = _strcmp(pcVar1,"issuer");
        if (iVar4 != 0) {
          FUN_100c62ee0(0x22,0x77,0x78,"v3_akey.c",0x8f);
          FUN_100c642a0(2,"name=",*(undefined8 *)(lVar5 + 8));
          return (long *)0x0;
        }
        cVar12 = '\x01';
        if (*(char **)(lVar5 + 0x10) != (char *)0x0) {
          iVar4 = _strcmp(*(char **)(lVar5 + 0x10),"always");
          cVar12 = (iVar4 == 0) + '\x01';
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = FUN_100c60800(param_3);
    } while (iVar3 < iVar4);
  }
  if (param_2 == (int *)0x0) {
LAB_100ca232a:
    FUN_100c62ee0(0x22,0x77,0x79,"v3_akey.c",0x99);
    return (long *)0x0;
  }
  lVar5 = *(long *)(param_2 + 2);
  if (lVar5 == 0) {
    if (*param_2 == 1) {
      plVar9 = (long *)FUN_100ca6e90();
      return plVar9;
    }
    goto LAB_100ca232a;
  }
  lVar7 = 0;
  if (cVar2 != '\0') {
    iVar3 = FUN_100c97c70(lVar5,0x52,0xffffffff);
    lVar7 = 0;
    if (-1 < iVar3) {
      lVar6 = FUN_100c97cd0(lVar5,iVar3);
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = FUN_100c9e420(lVar6);
      }
    }
    if ((cVar2 == '\x02') && (lVar7 == 0)) {
      FUN_100c62ee0(0x22,0x77,0x7b,"v3_akey.c",0xa5);
      return (long *)0x0;
    }
  }
  lVar6 = 0;
  if ((cVar12 == '\x02') || (lVar13 = 0, cVar12 != '\0' && lVar7 == 0)) {
    uVar8 = FUN_100c92460(lVar5);
    lVar13 = FUN_100c7c750(uVar8);
    uVar8 = FUN_100c926a0(lVar5);
    lVar6 = FUN_100c8b1b0(uVar8);
    if ((lVar13 != 0) && (lVar6 != 0)) goto LAB_100ca22a9;
    uVar8 = 0x7a;
    uVar11 = 0xaf;
  }
  else {
LAB_100ca22a9:
    plVar9 = (long *)FUN_100ca6e90();
    if (plVar9 == (long *)0x0) goto LAB_100ca238e;
    lVar5 = 0;
    if (lVar13 == 0) {
LAB_100ca2302:
      plVar9[1] = lVar5;
      plVar9[2] = lVar6;
      *plVar9 = lVar7;
      return plVar9;
    }
    lVar5 = FUN_100c60010();
    if (((lVar5 != 0) && (puVar10 = (undefined4 *)FUN_100ca0940(), puVar10 != (undefined4 *)0x0)) &&
       (iVar3 = FUN_100c604e0(lVar5,puVar10), iVar3 != 0)) {
      *puVar10 = 4;
      *(long *)(puVar10 + 2) = lVar13;
      goto LAB_100ca2302;
    }
    uVar8 = 0x41;
    uVar11 = 0xbb;
  }
  FUN_100c62ee0(0x22,0x77,uVar8,"v3_akey.c",uVar11);
LAB_100ca238e:
  FUN_100c7c730(lVar13);
  FUN_100c8b2f0(lVar6);
  FUN_100c8b2f0(lVar7);
  return (long *)0x0;
}

