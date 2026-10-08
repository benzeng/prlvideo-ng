
void FUN_1000cc5f0(long param_1,undefined4 param_2,long param_3,QString *param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  puVar4 = *(uint **)(param_1 + 0x58);
  if ((int)puVar4[2] < (int)puVar4[3]) {
    puVar5 = (undefined8 *)(param_1 + 0x58);
    lVar6 = 0;
    do {
      if (1 < *puVar4) {
        FUN_1000e6e10(puVar5,puVar4[1]);
        puVar4 = (uint *)*puVar5;
      }
      lVar1 = *(long *)(puVar4 + ((int)puVar4[2] + lVar6) * 2 + 4);
      cVar3 = FUN_1000b95b0(lVar1,param_2);
      if (cVar3 != '\0') {
        puVar4 = *(uint **)(lVar1 + 0x38);
        lVar6 = 0;
        if ((int)puVar4[2] < (int)puVar4[3]) {
          goto LAB_1000cc6b0;
        }
        break;
      }
      lVar6 = lVar6 + 1;
      puVar4 = (uint *)*puVar5;
    } while (lVar6 < (long)(int)puVar4[3] - (long)(int)puVar4[2]);
  }
  goto LAB_1000cc773;
  while (lVar6 = lVar6 + 1, lVar6 < (long)(int)puVar4[3] - (long)(int)puVar4[2]) {
LAB_1000cc6b0:
    if (1 < *puVar4) {
      FUN_1000e7430((undefined8 *)(lVar1 + 0x38),puVar4[1]);
      puVar4 = *(uint **)(lVar1 + 0x38);
    }
    plVar2 = *(long **)(puVar4 + (lVar6 + (int)puVar4[2]) * 2 + 4);
    if (*plVar2 == param_3) {
      QString::operator=((QString *)(plVar2 + 1),param_4);
      if ((*(int *)(lVar1 + 0x30) == 0) && (*(int *)(lVar1 + 0x34) == 0)) break;
      local_40 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_1000c8180(&local_40,(QString *)(plVar2 + 1),plVar2);
      FUN_1000c4970(lVar1 + 0x30,0x7a,local_40 + *(long *)(local_40 + 0x10),
                    *(undefined4 *)(local_40 + 4));
      if (*(int *)local_40 == -1) break;
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_40,1,8);
      break;
    }
  }
LAB_1000cc773:
  QMutex::unlock();
  return;
}

