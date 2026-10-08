
undefined8
FUN_100a4aaf0(undefined8 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint *param_5,
             undefined8 param_6)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  undefined1 auVar12 [16];
  QArrayData *pQStack_80;
  QString local_68;
  QString local_60;
  QString local_58;
  QString QStack_50;
  uint local_48;
  uint local_44;
  undefined1 local_31;
  
  uVar8 = 0;
  uVar5 = 0;
  if (0xb < param_3) {
    uVar3 = param_2[2];
    if (uVar3 == 0) {
      *param_4 = *param_2;
      uVar3 = param_2[1];
      *param_5 = uVar3;
    }
    else {
      puVar9 = (uint *)((ulong)param_3 + (long)param_2);
      puVar11 = param_2 + 3;
      puVar6 = puVar11;
      do {
        if (puVar9 < puVar6 + 1) {
          return 0;
        }
        if (puVar9 < puVar6 + 2) {
          return 0;
        }
        if (puVar9 < puVar6 + 3) {
          return 0;
        }
        uVar7 = (ulong)puVar6[2];
        puVar1 = (uint *)(uVar7 + 0xc + (long)puVar6);
        if (puVar9 < puVar1) {
          return 0;
        }
        if (puVar9 < (uint *)((long)puVar6 + uVar7 + 0x10)) {
          return 0;
        }
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar1 + uVar7 + 0x10);
        if (puVar9 < puVar6) {
          return 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
      *param_4 = *param_2;
      uVar8 = param_2[1];
      *param_5 = uVar8;
      puVar4 = PTR_shared_null_1021e1288;
      if (uVar3 == 0) {
        return CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
      }
      uVar8 = 0;
      auVar12._8_4_ = (int)PTR_shared_null_1021e1288;
      auVar12._0_8_ = PTR_shared_null_1021e1288;
      auVar12._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      do {
        pQStack_80 = auVar12._8_8_;
        local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar4;
        QStack_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQStack_80;
        local_48 = *puVar11;
        local_44 = puVar11[1];
        uVar7 = (ulong)puVar11[2];
        if (uVar7 == 0xffffffff) {
          _strlen((char *)(puVar11 + 3));
        }
        QString::fromUtf8_helper((char *)&local_60,(int)(puVar11 + 3));
        QString::operator=(&local_58,&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a4ac4b;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_100a4ac4b:
        uVar10 = (ulong)*(uint *)(uVar7 + 0xc + (long)puVar11);
        pcVar2 = (char *)((long)puVar11 + uVar7 + 0x10);
        if (uVar10 == 0xffffffff) {
          _strlen(pcVar2);
        }
        QString::fromUtf8_helper((char *)&local_68,(int)pcVar2);
        QString::operator=(&QStack_50,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a4acb6;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100a4acb6:
        FUN_100094c90(param_6,&local_58);
        if (*(int *)QStack_50.field0_0x0 != -1) {
          if (*(int *)QStack_50.field0_0x0 != 0) {
            LOCK();
            *(int *)QStack_50.field0_0x0 = *(int *)QStack_50.field0_0x0 + -1;
            local_31 = *(int *)QStack_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a4acf6;
          }
          QArrayData::deallocate((QArrayData *)QStack_50.field0_0x0,2,8);
        }
LAB_100a4acf6:
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a4ad2d;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100a4ad2d:
        puVar11 = (uint *)((long)puVar11 + uVar10 + uVar7 + 0x10);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
  return uVar5;
}

