
undefined1 FUN_100028960(long param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  QFile *this;
  long lVar6;
  uint *puVar7;
  undefined1 uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  QString local_40;
  uint local_38;
  undefined1 local_31;
  
  puVar5 = (undefined8 *)(param_1 + 0x30);
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  lVar3 = 0;
  local_38 = param_2;
  if (lVar6 != 0) {
    do {
      while (uVar9 = *(uint *)(lVar6 + 0x18), uVar9 < param_2) {
        plVar4 = (long *)(lVar6 + 0x10);
        lVar6 = *plVar4;
        if (*plVar4 == 0) {
          if (lVar3 == 0) goto LAB_1000289e7;
          uVar9 = *(uint *)(lVar3 + 0x18);
          goto LAB_1000289b8;
        }
      }
      plVar4 = (long *)(lVar6 + 8);
      lVar3 = lVar6;
      lVar6 = *plVar4;
    } while (*plVar4 != 0);
LAB_1000289b8:
    if ((uVar9 <= param_2) && (plVar4 = (long *)FUN_10002d740(puVar5,&local_38), *plVar4 != 0)) {
      puVar5 = (undefined8 *)FUN_10002d740(puVar5,&local_38);
      *param_3 = *puVar5;
      return 1;
    }
  }
LAB_1000289e7:
  FUN_100028b70(param_1,param_2);
  FUN_100027520(&local_40);
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    uVar8 = 0;
    goto LAB_100028adb;
  }
  this = operator_new(0x10);
  QFile::QFile(this,&local_40);
  cVar2 = (**(code **)(*(long *)this + 0x68))(this,1);
  if (cVar2 == '\0') {
    FUN_100028b70(param_1,param_2);
    uVar8 = 0;
    goto LAB_100028adb;
  }
  puVar10 = (uint *)*puVar5;
  if (1 < *puVar10) {
    FUN_10002dc50(puVar5);
    puVar10 = (uint *)*puVar5;
  }
  puVar1 = *(uint **)(puVar10 + 4);
  puVar11 = (uint *)0x0;
  if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
    puVar7 = puVar10 + 2;
LAB_100028abc:
    lVar6 = QMapDataBase::createNode
                      ((int)puVar10,0x28,(QMapNodeBase *)&DAT_00000008,SUB81(puVar7,0));
    *(uint *)(lVar6 + 0x18) = param_2;
    *(QFile **)(lVar6 + 0x20) = this;
  }
  else {
    do {
      while (puVar7 = puVar1, uVar9 = puVar7[6], uVar9 < param_2) {
        puVar1 = *(uint **)(puVar7 + 4);
        if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
          if (puVar11 == (uint *)0x0) goto LAB_100028abc;
          uVar9 = puVar11[6];
          goto LAB_100028aa5;
        }
      }
      puVar1 = *(uint **)(puVar7 + 2);
      puVar11 = puVar7;
    } while (*(uint **)(puVar7 + 2) != (uint *)0x0);
LAB_100028aa5:
    if (param_2 < uVar9) goto LAB_100028abc;
    *(QFile **)(puVar11 + 8) = this;
  }
  *param_3 = this;
  uVar8 = 1;
LAB_100028adb:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

