
bool FUN_1000d76f0(long param_1,uint param_2,char param_3,long *param_4,ulong *param_5,
                  QString *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_31;
  
  QMutex::lock();
  if ((*(int *)(*param_4 + 4) != 0) &&
     (puVar7 = *(uint **)(param_1 + 0x58), (int)puVar7[2] < (int)puVar7[3])) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar11 = 0;
    do {
      if (1 < *puVar7) {
        FUN_1000e6e10(puVar1,puVar7[1]);
        puVar7 = (uint *)*puVar1;
      }
      lVar3 = *(long *)(puVar7 + ((int)puVar7[2] + lVar11) * 2 + 4);
      puVar2 = (undefined8 *)(lVar3 + 0x38);
      puVar7 = *(uint **)(lVar3 + 0x38);
      lVar10 = 0;
      if ((int)puVar7[2] < (int)puVar7[3]) {
        do {
          if (1 < *puVar7) {
            FUN_1000e7430(puVar2,puVar7[1]);
            puVar7 = (uint *)*puVar2;
          }
          uVar8 = puVar7[2];
          if (**(ulong **)(puVar7 + (lVar10 + (int)uVar8) * 2 + 4) == (ulong)param_2) {
            if (1 < *puVar7) {
              FUN_1000e7430(puVar2,puVar7[1]);
              puVar7 = (uint *)*puVar2;
              uVar8 = puVar7[2];
            }
            *(uint *)(*(long *)(puVar7 + ((int)uVar8 + lVar10) * 2 + 4) + 0x1c) =
                 *(uint *)(*(long *)(puVar7 + ((int)uVar8 + lVar10) * 2 + 4) + 0x1c) | 1;
            uVar4 = *(ulong *)(lVar3 + 0x30);
            *param_5 = uVar4;
            if ((uVar4 < 0x100000000) && ((int)uVar4 == 0)) {
              puVar9 = (ulong *)(param_1 + 0x210);
              if (param_3 != '\0') {
                puVar9 = (ulong *)(param_1 + 0x218);
              }
              *param_5 = *puVar9;
            }
            iVar6 = QString::compare(param_4,(QString *)(lVar3 + 8),0);
            bVar12 = true;
            if (iVar6 != 0) {
              QString::operator=(param_6,(QString *)(lVar3 + 8));
            }
            goto LAB_1000d78f3;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (long)(int)puVar7[3] - (long)(int)uVar8);
      }
      iVar6 = QString::compare(param_4,lVar3 + 8,0);
      puVar5 = PTR_shared_null_1021e1288;
      if (iVar6 == 0) {
        local_50 = PTR_shared_null_1021e1288;
        local_3e = 0;
        local_48 = 0;
        local_3c = 1;
        local_58 = (ulong)param_2;
        FUN_1000e4c90(puVar2,&local_58);
        uVar4 = *(ulong *)(lVar3 + 0x30);
        *param_5 = uVar4;
        if ((uVar4 < 0x100000000) && ((int)uVar4 == 0)) {
          puVar9 = (ulong *)(param_1 + 0x210);
          if (param_3 != '\0') {
            puVar9 = (ulong *)(param_1 + 0x218);
          }
          *param_5 = *puVar9;
        }
        bVar12 = true;
        if (*(int *)puVar5 == -1) goto LAB_1000d78f3;
        if (*(int *)puVar5 != 0) {
          LOCK();
          *(int *)puVar5 = *(int *)puVar5 + -1;
          local_31 = *(int *)puVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000d78f3;
        }
        QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
        goto LAB_1000d78f3;
      }
      lVar11 = lVar11 + 1;
      puVar7 = (uint *)*puVar1;
    } while (lVar11 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
  }
  puVar9 = (ulong *)(param_1 + 0x210);
  if (param_3 != '\0') {
    puVar9 = (ulong *)(param_1 + 0x218);
  }
  uVar4 = *puVar9;
  *param_5 = uVar4;
  iVar6 = (int)(uVar4 >> 0x20);
  if (iVar6 == 1) {
    bVar12 = (int)uVar4 == 1;
  }
  else if (iVar6 == 0) {
    bVar12 = (int)uVar4 == 0;
  }
  else {
    bVar12 = false;
  }
LAB_1000d78f3:
  if ((*(int *)((long)param_5 + 4) == 1) && ((int)*param_5 == 1)) {
    *param_5 = 0;
  }
  QMutex::unlock();
  return bVar12;
}

