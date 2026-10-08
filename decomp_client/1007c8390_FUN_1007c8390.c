
void FUN_1007c8390(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 in_RAX;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_38;
  
  lVar8 = *(long *)(param_1 + 0x20);
  lVar5 = *param_2;
  if (lVar8 != lVar5) {
    iVar1 = *(int *)(lVar8 + 0xc);
    iVar2 = *(int *)(lVar8 + 8);
    local_38 = in_RAX;
    if (iVar1 - iVar2 == *(int *)(lVar5 + 0xc) - *(int *)(lVar5 + 8)) {
      if (iVar1 != iVar2) {
        puVar7 = (undefined8 *)(lVar8 + 0x10 + (long)iVar2 * 8);
        puVar6 = (undefined8 *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8);
        lVar8 = (long)iVar1 * 8 + (long)iVar2 * -8;
        do {
          cVar4 = QHostAddress::operator==((QHostAddress *)*puVar7,(QHostAddress *)*puVar6);
          if (cVar4 == '\0') {
            lVar8 = *(long *)(param_1 + 0x20);
            lVar5 = *param_2;
            goto LAB_1007c8418;
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
LAB_1007c8418:
      if (lVar8 != lVar5) {
        FUN_10008d4c0(&local_38,param_2);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = local_38;
        local_38 = uVar3;
        FUN_10008c780(&local_38);
      }
      FUN_100864430(*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  return;
}

