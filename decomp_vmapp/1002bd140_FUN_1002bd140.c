
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1002bd140(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar4 = FUN_1002b7860();
  if (uVar4 < 2) {
    uVar8 = 0;
    uVar4 = _DAT_101116b4c + 1;
    bVar1 = false;
    bVar2 = true;
    if (uVar4 != 0) goto LAB_1002bd1a6;
  }
  else {
    if (uVar4 == 3) {
      uVar4 = 0x3d;
      uVar8 = 0x2f;
    }
    else {
      if (uVar4 != 2) {
        return 0xffffffff;
      }
      uVar4 = 0x2f;
      uVar8 = 0x20;
    }
    bVar2 = uVar8 < uVar4;
LAB_1002bd1a6:
    bVar1 = bVar2;
    piVar5 = &DAT_1011c4aa0 + (ulong)uVar8 * 0xc;
    uVar6 = uVar8;
    do {
      if (*piVar5 == 0) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 0xc;
    } while (uVar6 < uVar4);
  }
  QString::QString(&local_48,0x7c);
  QString::section(&local_50,param_2,&local_48,0,0,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002bd231;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002bd231:
  uVar6 = 0xffffffff;
  if (!bVar1) goto LAB_1002bd3f8;
  uVar9 = (ulong)uVar8;
  puVar7 = &DAT_1011c4ab8 + uVar9 * 6;
  uVar8 = 0xffffffff;
  uVar11 = 0;
  do {
    if (*(int *)(puVar7 + -3) - 1U < 4) {
      QString::QString(&local_40,0x7c);
      QString::section(&local_58,puVar7,&local_40,0,0,0);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bd2d8;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_1002bd2d8:
      cVar3 = operator==(&local_50,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002bd318;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1002bd318:
      uVar10 = (uint)uVar9;
      if (cVar3 != '\0') break;
      if ((ulong)puVar7[-2] <= uVar11 - 1) {
        uVar11 = puVar7[-2];
        uVar8 = (uint)uVar9;
      }
    }
    uVar9 = uVar9 + 1;
    puVar7 = puVar7 + 6;
    uVar10 = uVar8;
  } while ((uint)uVar9 < uVar4);
  uVar6 = 0xffffffff;
  if (uVar10 == 0xffffffff) goto LAB_1002bd3f8;
  if ((&DAT_1011c4aa0)[(ulong)uVar10 * 0xc] != 4) {
    FUN_1002bcd80();
  }
  if (0 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"Collect garbage %s",local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002bd3ed;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_1002bd3ed:
  FUN_1002b6210(uVar10);
  uVar6 = uVar10;
LAB_1002bd3f8:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return uVar6;
}

