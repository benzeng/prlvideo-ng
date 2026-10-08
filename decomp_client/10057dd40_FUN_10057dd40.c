
void FUN_10057dd40(long param_1,QString *param_2)

{
  long *plVar1;
  QString *pQVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  undefined *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  uint local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) != 0) {
    FUN_10055a620(&local_58);
    local_50 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 8) * 8);
    local_48 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 0xc) * 8);
    local_40 = 1;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      plVar1 = (long *)(param_1 + 0x30);
      do {
        if (local_40 == 0) {
LAB_10057ddf0:
          local_50 = local_50 + 1;
          local_40 = 1;
        }
        else {
          pQVar2 = (QString *)*local_50;
          cVar4 = operator==(pQVar2,param_2);
          if (cVar4 == '\0') goto LAB_10057ddf0;
          cVar4 = operator==(pQVar2,pQVar2 + 1);
          if (cVar4 != '\0') goto LAB_10057ddf0;
          lVar5 = *plVar1;
          uVar8 = (ulong)*(uint *)(lVar5 + 8);
          lVar9 = 0;
          if ((int)*(uint *)(lVar5 + 8) < *(int *)(lVar5 + 0xc)) {
            do {
              cVar4 = operator==((QString *)(*(long *)(lVar5 + 0x10 + ((int)uVar8 + lVar9) * 8) + 8)
                                 ,param_2);
              if (cVar4 != '\0') {
                puVar6 = (uint *)*plVar1;
                if (1 < *puVar6) {
                  FUN_1001c4bd0(plVar1,puVar6[1]);
                  puVar6 = (uint *)*plVar1;
                }
                QString::operator=((QString *)
                                   (*(long *)(puVar6 + ((int)puVar6[2] + lVar9) * 2 + 4) + 8),
                                   pQVar2 + 1);
              }
              lVar9 = lVar9 + 1;
              lVar5 = *plVar1;
              uVar8 = (ulong)*(int *)(lVar5 + 8);
            } while (lVar9 < (long)((long)*(int *)(lVar5 + 0xc) - uVar8));
          }
          FUN_100580580(param_1 + 0x28,pQVar2);
          local_50 = local_50 + 1;
          uVar7 = local_40 ^ 1;
          bVar10 = local_40 == 1;
          local_40 = uVar7;
          if (bVar10) break;
        }
      } while (local_50 != local_48);
    }
    FUN_1000fe670(&local_58);
    puVar3 = PTR_shared_null_1021e1288;
    local_60 = PTR_shared_null_1021e1288;
    FUN_10057c480(param_1,&local_60);
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        local_31 = *(int *)puVar3 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
  return;
}

