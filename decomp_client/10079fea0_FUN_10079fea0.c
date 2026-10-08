
void FUN_10079fea0(long param_1,int param_2,int param_3,int param_4,long param_5,undefined8 param_6,
                  undefined8 param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  QArrayData *pQVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  int local_60;
  QString local_58;
  undefined8 local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  piVar7 = operator_new(0x78);
  piVar7[2] = 3;
  *(undefined1 *)(piVar7 + 3) = 0;
  piVar7[4] = 3;
  *(undefined1 *)(piVar7 + 5) = 0;
  piVar7[6] = 3;
  *(undefined1 *)(piVar7 + 7) = 0;
  piVar7[8] = 3;
  *(undefined1 *)(piVar7 + 9) = 0;
  puVar4 = PTR_shared_null_1021e1288;
  auVar16._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar16._0_8_ = PTR_shared_null_1021e1288;
  auVar16._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(piVar7 + 0xc) = auVar16;
  *(undefined1 (*) [16])(piVar7 + 0x10) = auVar16;
  *(undefined **)(piVar7 + 0x14) = puVar4;
  *(undefined **)(piVar7 + 0x18) = puVar4;
  piVar7[0x1a] = 0xff;
  piVar7[0x1b] = 0xff;
  piVar7[10] = param_4;
  if (param_5 != 0) {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar8 = FUN_1007b56d0(uVar8);
    FUN_1007a02c0(&local_88,param_1,param_5,uVar8);
    QString::operator=((QString *)(piVar7 + 0xc),&local_88);
    QString::operator=((QString *)(piVar7 + 0xe),&local_80);
    QString::operator=((QString *)(piVar7 + 0x10),&local_78);
    QString::operator=((QString *)(piVar7 + 0x12),&local_70);
    QString::operator=((QString *)(piVar7 + 0x14),&local_68);
    piVar7[0x16] = local_60;
    QString::operator=((QString *)(piVar7 + 0x18),&local_58);
    *(undefined8 *)(piVar7 + 0x1c) = local_48;
    *(undefined8 *)(piVar7 + 0x1a) = local_50;
    FUN_1007a1cf0(&local_88);
  }
  *(undefined8 *)(piVar7 + 8) = param_10;
  *(undefined8 *)(piVar7 + 6) = param_9;
  *(undefined8 *)(piVar7 + 4) = param_8;
  *(undefined8 *)(piVar7 + 2) = param_7;
  *piVar7 = param_2;
  piVar7[1] = param_3;
  puVar10 = *(uint **)(param_1 + 0x10);
  puVar14 = (undefined8 *)(param_1 + 0x10);
  uVar1 = puVar10[1];
  if ((int)uVar1 <= param_2) {
    do {
      pQVar9 = (QArrayData *)QArrayData::allocate(8,8,1,0);
      local_40 = pQVar9;
      if (pQVar9 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      *(undefined4 *)(pQVar9 + 4) = 1;
      *(undefined8 *)(pQVar9 + *(long *)(pQVar9 + 0x10)) = 0;
      FUN_1007a1910(puVar14,&local_40);
      if (*(int *)pQVar9 == 0) {
LAB_1007a00b0:
        QArrayData::deallocate(pQVar9,8,8);
      }
      else if (*(int *)pQVar9 != -1) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        if (!(bool)local_31) goto LAB_1007a00b0;
      }
      puVar10 = (uint *)*puVar14;
      uVar1 = puVar10[1];
    } while ((int)uVar1 <= param_2);
  }
  lVar15 = (long)param_2;
  if (1 < *puVar10) {
    if ((puVar10[2] & 0x7fffffff) == 0) {
      puVar10 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar14 = puVar10;
    }
    else {
      FUN_1007a20d0(puVar14,uVar1,puVar10[2] & 0x7fffffff,0);
      puVar10 = (uint *)*puVar14;
    }
  }
  if (*(int *)(*(long *)((long)puVar10 + lVar15 * 8 + *(long *)(puVar10 + 4)) + 4) <= param_3) {
    if (1 < *puVar10) {
      if ((puVar10[2] & 0x7fffffff) == 0) {
        puVar10 = (uint *)QArrayData::allocate(8,8,0,2);
        *puVar14 = puVar10;
      }
      else {
        FUN_1007a20d0(puVar14,puVar10[1],puVar10[2] & 0x7fffffff,0);
        puVar10 = (uint *)*puVar14;
      }
    }
    uVar13 = param_3 + 1;
    lVar2 = *(long *)((long)puVar10 + lVar15 * 8 + *(long *)(puVar10 + 4));
    uVar1 = *(uint *)(lVar2 + 8);
    uVar5 = uVar1 & 0x7fffffff;
    lVar12 = 8;
    uVar6 = uVar13;
    if (((int)uVar13 <= (int)uVar5) && (lVar12 = 0, uVar6 = uVar5, -1 < (int)uVar1)) {
      bVar3 = (int)uVar13 < *(int *)(lVar2 + 4);
      if ((int)uVar13 < (int)(uVar5 >> 1) && bVar3) {
        uVar6 = uVar13;
      }
      lVar12 = (ulong)((int)uVar13 < (int)(uVar5 >> 1) && bVar3) << 3;
    }
    FUN_1007a1f40((long)puVar10 + lVar15 * 8 + *(long *)(puVar10 + 4),uVar13,uVar6,lVar12);
    puVar10 = (uint *)*puVar14;
  }
  if (1 < *puVar10) {
    if ((puVar10[2] & 0x7fffffff) == 0) {
      puVar10 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar14 = puVar10;
    }
    else {
      FUN_1007a20d0(puVar14,puVar10[1],puVar10[2] & 0x7fffffff,0);
      puVar10 = (uint *)*puVar14;
    }
  }
  puVar11 = *(uint **)((long)puVar10 + lVar15 * 8 + *(long *)(puVar10 + 4));
  if (1 < *puVar11) {
    puVar14 = (undefined8 *)((long)puVar10 + lVar15 * 8 + *(long *)(puVar10 + 4));
    if ((puVar11[2] & 0x7fffffff) == 0) {
      puVar11 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar14 = puVar11;
    }
    else {
      FUN_1007a1f40(puVar14,puVar11[1],puVar11[2] & 0x7fffffff,0);
      puVar11 = (uint *)*puVar14;
    }
  }
  *(int **)((long)puVar11 + (long)param_3 * 8 + *(long *)(puVar11 + 4)) = piVar7;
  return;
}

