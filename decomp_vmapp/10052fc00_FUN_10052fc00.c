
undefined8
FUN_10052fc00(undefined8 param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined4 *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  QArrayData *local_40;
  undefined1 local_32;
  
  puVar3 = (uint *)(ulong)param_3;
  uVar5 = 0;
  if (0xb < param_3) {
    uVar1 = param_2[2];
    if (uVar1 == 0) {
      *param_5 = *param_2;
      puVar3 = (uint *)(ulong)(uint)param_2[1];
      *param_6 = param_2[1];
      uVar5 = 1;
    }
    else {
      puVar3 = (uint *)((long)puVar3 + (long)param_2);
      puVar6 = param_2 + 3;
      puVar4 = puVar6;
      do {
        if (puVar3 < puVar4 + 1) {
          uVar5 = 0;
          goto LAB_10052fd12;
        }
        puVar4 = (uint *)((ulong)*puVar4 + 4 + (long)puVar4);
        if (puVar3 < puVar4) {
          uVar5 = 0;
          goto LAB_10052fd12;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      *param_5 = *param_2;
      puVar3 = (uint *)(ulong)(uint)param_2[1];
      *param_6 = param_2[1];
      uVar5 = 1;
      if (uVar1 != 0) {
        uVar7 = 0;
        do {
          uVar2 = *puVar6;
          if ((ulong)uVar2 == 0xffffffff) {
            _strlen((char *)(puVar6 + 1));
          }
          QString::fromUtf8_helper((char *)&local_40,(int)(puVar6 + 1));
          FUN_10000c490(param_4,&local_40);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_32 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_10052fce7;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_10052fce7:
          puVar6 = (uint *)((ulong)uVar2 + 4 + (long)puVar6);
          uVar7 = uVar7 + 1;
          puVar3 = (uint *)(ulong)uVar1;
        } while (uVar7 < uVar1);
      }
    }
  }
LAB_10052fd12:
  return CONCAT71((int7)((ulong)puVar3 >> 8),(char)uVar5);
}

