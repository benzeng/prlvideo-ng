
void FUN_1001c3e30(long param_1,QString *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  QString *pQVar4;
  char cVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar9 + 0xc);
  iVar3 = *(int *)(lVar9 + 8);
  lVar6 = (long)iVar3;
  if (param_3 == 0x30000004) {
    if (iVar3 != iVar2) {
      puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar6 * 8);
      lVar9 = (long)iVar2 * 8 + lVar6 * -8;
      do {
        pQVar4 = (QString *)*puVar7;
        cVar5 = operator==(pQVar4,param_2);
        if ((cVar5 != '\0') && (cVar5 = operator==(pQVar4 + 1,param_2 + 1), cVar5 != '\0'))
        goto LAB_1001c3faa;
        puVar7 = puVar7 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    FUN_1001c44c0(plVar1,param_2);
  }
  else if (iVar3 != iVar2) {
    puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar6 * 8);
    lVar9 = (long)iVar2 * 8 + lVar6 * -8;
    do {
      pQVar4 = (QString *)*puVar7;
      cVar5 = operator==(pQVar4,param_2);
      if ((cVar5 != '\0') && (cVar5 = operator==(pQVar4 + 1,param_2 + 1), cVar5 != '\0')) {
        lVar9 = *plVar1;
        iVar2 = *(int *)(lVar9 + 0xc);
        iVar3 = *(int *)(lVar9 + 8);
        if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
          puVar7 = (undefined8 *)(lVar9 + 0x10 + (long)iVar3 * 8);
          lVar9 = (long)iVar2 * 8 + (long)iVar3 * -8;
          goto LAB_1001c3f50;
        }
        break;
      }
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
LAB_1001c3faa:
  FUN_1001c3fd0(param_1);
  return;
  while( true ) {
    puVar7 = puVar7 + 1;
    lVar9 = lVar9 + -8;
    if (lVar9 == 0) break;
LAB_1001c3f50:
    pQVar4 = (QString *)*puVar7;
    cVar5 = operator==(pQVar4,param_2);
    if ((cVar5 != '\0') && (cVar5 = operator==(pQVar4 + 1,param_2 + 1), cVar5 != '\0')) {
      uVar8 = (long)puVar7 - (*plVar1 + 0x10 + (ulong)*(uint *)(*plVar1 + 8) * 8) >> 3;
      if ((int)uVar8 != -1) {
        FUN_1001c4ab0(plVar1,uVar8 & 0xffffffff);
      }
      break;
    }
  }
  goto LAB_1001c3faa;
}

