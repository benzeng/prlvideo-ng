
void FUN_10070ff50(long param_1,long *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar7 + 0x20);
  lVar4 = *param_2;
  if (lVar3 != lVar4) {
    iVar1 = *(int *)(lVar3 + 0xc);
    iVar2 = *(int *)(lVar3 + 8);
    if (iVar1 - iVar2 == *(int *)(lVar4 + 0xc) - *(int *)(lVar4 + 8)) {
      if (iVar1 != iVar2) {
        puVar6 = (undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8);
        puVar8 = (undefined8 *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8);
        lVar7 = (long)iVar1 * 8 + (long)iVar2 * -8;
        do {
          cVar5 = FUN_10071bf20(*puVar6,*puVar8);
          if (cVar5 == '\0') {
            lVar7 = *(long *)(param_1 + 0x10);
            goto LAB_10070ffe4;
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
LAB_10070ffe4:
      FUN_100714120(lVar7 + 0x20,param_2);
      FUN_100852eb0(param_1);
      if (param_3 != '\0') {
        FUN_10070de00(*(undefined8 *)(param_1 + 0x10));
        return;
      }
    }
  }
  return;
}

