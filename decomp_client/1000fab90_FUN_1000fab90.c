
void FUN_1000fab90(long param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint local_1c;
  
  QObject::sender();
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1500);
  if ((lVar4 != 0) && (uVar3 = FUN_1006947d0(lVar4), uVar3 != 0)) {
    local_1c = uVar3;
    if (*(uint *)(DAT_102312080 + 4) != 0) {
      uVar8 = *(uint *)((long)DAT_102312080 + 0x24) ^ uVar3;
      for (puVar5 = *(undefined8 **)
                     (DAT_102312080[1] + ((ulong)uVar8 % (ulong)*(uint *)(DAT_102312080 + 4)) * 8);
          puVar5 != DAT_102312080; puVar5 = (undefined8 *)*puVar5) {
        if ((*(uint *)(puVar5 + 1) == uVar8) && (uVar3 == *(uint *)((long)puVar5 + 0xc))) {
          if (puVar5 != DAT_102312080) {
            piVar6 = (int *)FUN_1000fdff0(&DAT_102312080,&local_1c);
            goto LAB_1000fac75;
          }
          break;
        }
      }
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        while (iVar2 = *(int *)(lVar4 + 0x18), (int)uVar3 <= iVar2) {
          plVar1 = (long *)(lVar4 + 8);
          lVar7 = lVar4;
          lVar4 = *plVar1;
          if (*plVar1 == 0) goto LAB_1000fac68;
        }
        plVar1 = (long *)(lVar4 + 0x10);
        lVar4 = *plVar1;
      } while (*plVar1 != 0);
      if (lVar7 != 0) {
        iVar2 = *(int *)(lVar7 + 0x18);
LAB_1000fac68:
        if (iVar2 <= (int)uVar3) {
          piVar6 = (int *)FUN_1000fded0(param_1 + 0x38,&local_1c);
LAB_1000fac75:
          if (*piVar6 != 0) {
            FUN_1007f8d50(param_1,uVar3);
            return;
          }
        }
      }
    }
  }
  return;
}

